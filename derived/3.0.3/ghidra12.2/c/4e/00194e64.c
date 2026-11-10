
undefined8 FUN_00194e64(undefined8 param_1,long param_2,undefined8 param_3)

{
  Md5Impl aMStack_98 [96];
  undefined1 auStack_38 [16];
  char local_28;
  
  FUN_00194e28(aMStack_98);
  if (local_28 == '\0') {
    nn::crypto::detail::Md5Impl::Update
              (aMStack_98,*(long *)(param_2 + 0x10) + *(long *)(param_2 + 0x28));
    if (local_28 == '\0') {
      nn::crypto::detail::Md5Impl::GetHash(aMStack_98,(ulong)auStack_38);
      local_28 = '\x01';
    }
  }
  FUN_00193030(param_3,auStack_38,0x10,0xffffffffffffffff);
  nn::crypto::detail::Md5Impl::~Md5Impl(aMStack_98);
  return 1;
}

