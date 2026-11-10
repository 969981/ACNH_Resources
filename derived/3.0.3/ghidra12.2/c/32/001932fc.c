
void FUN_001932fc(void *param_1)

{
  if (*(char *)((long)param_1 + 0x70) == '\0') {
    nn::crypto::detail::Md5Impl::GetHash(param_1,(long)param_1 + 0x60);
    *(undefined1 *)((long)param_1 + 0x70) = 1;
    return;
  }
  return;
}

