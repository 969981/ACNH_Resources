
undefined8
FUN_001934d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            void *param_5)

{
  Md5Impl aMStack_b8 [96];
  undefined1 auStack_58 [24];
  
  FUN_00194e28(aMStack_b8);
  FUN_00193330(param_1,param_2,param_3,param_4,aMStack_b8);
  memcpy(param_5,auStack_58,0x10);
  *(undefined8 *)((long)param_5 + 0x10) = 0x10;
  nn::crypto::detail::Md5Impl::~Md5Impl(aMStack_b8);
  return 1;
}

