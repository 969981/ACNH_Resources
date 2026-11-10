
void FUN_00193330(long param_1,ulong *param_2,long *param_3,long param_4,void *param_5)

{
  char cVar1;
  Md5Impl aMStack_a8 [96];
  undefined1 auStack_48 [16];
  char local_38;
  
  FUN_00194e28(aMStack_a8);
  if (local_38 == '\0') {
    nn::crypto::detail::Md5Impl::Update(aMStack_a8,param_1 + 0x50);
  }
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (((*param_2 != 0) && (*param_3 != 0)) && (local_38 == '\0')) {
      nn::crypto::detail::Md5Impl::Update(aMStack_a8,*param_2);
    }
    param_3 = param_3 + 1;
    param_2 = param_2 + 1;
  }
  if (local_38 == '\0') {
    nn::crypto::detail::Md5Impl::GetHash(aMStack_a8,(ulong)auStack_48);
    local_38 = '\x01';
    cVar1 = *(char *)((long)param_5 + 0x70);
  }
  else {
    cVar1 = *(char *)((long)param_5 + 0x70);
  }
  if (((cVar1 == '\0') &&
      (nn::crypto::detail::Md5Impl::Update(param_5,param_1 + 0x91),
      *(char *)((long)param_5 + 0x70) == '\0')) &&
     (nn::crypto::detail::Md5Impl::Update(param_5,(ulong)auStack_48),
     *(char *)((long)param_5 + 0x70) == '\0')) {
    nn::crypto::detail::Md5Impl::GetHash(param_5,(long)param_5 + 0x60);
    *(undefined1 *)((long)param_5 + 0x70) = 1;
  }
  nn::crypto::detail::Md5Impl::~Md5Impl(aMStack_a8);
  return;
}

