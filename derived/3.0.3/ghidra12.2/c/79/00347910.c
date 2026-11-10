
void free(void *__ptr)

{
  if (__ptr == (void *)0x0) {
    return;
  }
  nn::mem::StandardAllocator::Free(&DAT_04c61c58);
  return;
}

