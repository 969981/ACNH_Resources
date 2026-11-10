
void FUN_00194e28(long param_1)

{
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  nn::crypto::detail::Md5Impl::Initialize();
  return;
}

