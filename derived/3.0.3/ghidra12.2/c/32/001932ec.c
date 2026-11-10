
void FUN_001932ec(void *param_1,ulong param_2)

{
  if (*(char *)((long)param_1 + 0x70) == '\0') {
    nn::crypto::detail::Md5Impl::Update(param_1,param_2);
    return;
  }
  return;
}

