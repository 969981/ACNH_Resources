
void FUN_0368079c(long param_1)

{
  ulong uVar1;
  Sha1Impl aSStack_90 [104];
  undefined4 local_28;
  
  local_28 = 0;
  nn::crypto::detail::Sha1Impl::Initialize();
  if (*(long *)(param_1 + 0x1e8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(ulong *)(*(long *)(param_1 + 0x1e8) + 8);
  }
  nn::crypto::detail::Sha1Impl::Update(aSStack_90,uVar1);
  nn::crypto::detail::Sha1Impl::GetHash(aSStack_90,param_1 + 0x200);
  nn::crypto::detail::Sha1Impl::~Sha1Impl(aSStack_90);
  return;
}

