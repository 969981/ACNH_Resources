
void FUN_03ffbe40(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint local_b4;
  uint uStack_b0;
  uint local_ac;
  uint uStack_a8;
  uint local_a4;
  Sha1Impl aSStack_a0 [104];
  undefined4 local_38;
  
  param_1[2] = DAT_05b059a0;
  *param_1 = 0;
  param_1[1] = 0x1e;
  param_1[3] = 0;
  iVar7 = FUN_036152e8(param_1,0x28,0x20);
  if (iVar7 != 0) {
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
  }
  local_38 = 0;
  puVar1 = param_1 + 3;
  if ((param_1[1] & 1) != 0) {
    puVar1 = (undefined8 *)param_1[3];
  }
  nn::crypto::detail::Sha1Impl::Initialize();
  nn::crypto::detail::Sha1Impl::Update(aSStack_a0,param_2);
  nn::crypto::detail::Sha1Impl::GetHash(aSStack_a0,(ulong)&local_b4);
  uVar2 = (local_b4 & 0xff00ff00) >> 8 | (local_b4 & 0xff00ff) << 8;
  uVar3 = (uStack_b0 & 0xff00ff00) >> 8 | (uStack_b0 & 0xff00ff) << 8;
  uVar4 = (local_ac & 0xff00ff00) >> 8 | (local_ac & 0xff00ff) << 8;
  uVar5 = (uStack_a8 & 0xff00ff00) >> 8 | (uStack_a8 & 0xff00ff) << 8;
  uVar6 = (local_a4 & 0xff00ff00) >> 8 | (local_a4 & 0xff00ff) << 8;
  FUN_04002a40(puVar1,0x29,"%08x%08x%08x%08x%08x",uVar2 >> 0x10 | uVar2 << 0x10,
               uVar3 >> 0x10 | uVar3 << 0x10,uVar4 >> 0x10 | uVar4 << 0x10,
               uVar5 >> 0x10 | uVar5 << 0x10,uVar6 >> 0x10 | uVar6 << 0x10);
  nn::crypto::detail::Sha1Impl::~Sha1Impl(aSStack_a0);
  return;
}

