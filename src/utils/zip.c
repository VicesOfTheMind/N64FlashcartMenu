#include <miniz.h>
#include <miniz_zip.h>

#include "zip.h"
#include "utils.h"


int64_t archive_file_get_size(mz_zip_archive *zip, mz_uint32 file_index) {
    mz_zip_archive_file_stat st;
    if (!mz_zip_reader_file_stat(zip, file_index, &st)) {
        return -1;
    }
    return (int64_t) st.m_uncomp_size;
}
