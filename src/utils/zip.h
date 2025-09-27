#ifndef UTILS_ZIP_H__
#define UTILS_ZIP_H__

#include <miniz.h>
#include <miniz_zip.h>

/**
 * @file zip.h
 * @brief Zip archive utility functions.
 * @ingroup utils
 */

/**
 * @brief Gets the size of the file at the given index.
 *
 * This function returns the uncompressed size of the file at the specified index.
 *
 * @param zip Pointer to the archive.
 * @param index The index to the file.
 * @return The size of the file in bytes, or -1 if the file does not exist.
 */
int64_t archive_file_get_size(mz_zip_archive *zip, mz_uint32 file_index);

#endif // UTILS_FS_H__
