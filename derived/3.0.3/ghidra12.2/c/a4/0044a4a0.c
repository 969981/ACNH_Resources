
void FUN_0044a4a0(long param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 local_48;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x30));
  uVar4 = *(uint *)(param_1 + 0x28);
  if (uVar4 == (*(uint *)(param_1 + 0x2c) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,param_1 + 0x20,8);
    uVar4 = *(uint *)(param_1 + 0x28);
  }
  *(ulong **)(*(long *)(param_1 + 0x20) + (long)(int)uVar4 * 8) = param_2;
  *(uint *)(param_1 + 0x28) = uVar4 + 1;
  if (param_2 == (ulong *)0x0) {
    FUN_0044a730(param_1);
  }
  else {
    puVar5 = param_2;
    do {
      FUN_0044a640(puVar5[1]);
      puVar5 = (ulong *)(*puVar5 & 0xfffffffffffffffc);
    } while (puVar5 != (ulong *)0x0);
    FUN_0044a730(param_1);
    if (param_2 != (ulong *)0x0) {
      puVar5 = param_2;
      do {
        uVar6 = puVar5[1];
        FUN_0044f230(uVar6,0);
        FUN_0044f670(uVar6);
        puVar5 = (ulong *)(*puVar5 & 0xfffffffffffffffc);
      } while (puVar5 != (ulong *)0x0);
    }
  }
  puVar3 = PTR_DAT_048607b8;
  local_50 = 0;
  local_48 = -0x8000000000000000;
  uVar4 = 0;
  local_80 = local_50;
  lVar2 = local_48;
  while (local_50 = local_80, local_48 = lVar2, param_2 != (ulong *)0x0) {
    uVar6 = *param_2;
    if (((uint)uVar6 >> 1 & 1) == 0) {
      local_48._4_4_ = (uint)((ulong)lVar2 >> 0x20);
      uVar6 = param_2[1];
      uVar1 = local_48._4_4_ & 0x3fffffff;
      if (uVar4 == uVar1) {
        FUN_00426990(puVar3,&local_50,8);
        uVar4 = (uint)local_48;
      }
      *(ulong *)(local_50 + (long)(int)uVar4 * 8) = uVar6;
      uVar4 = uVar4 + 1;
      local_48 = CONCAT44(local_48._4_4_,uVar4);
      uVar6 = *param_2;
    }
    local_80 = local_50;
    lVar2 = local_48;
    param_2 = (ulong *)(uVar6 & 0xfffffffffffffffc);
  }
  lStack_78 = local_80 + (long)(int)uVar4 * 8;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_004490c0(param_1,&local_80);
  lVar2 = local_48;
  uVar4 = local_48._4_4_;
  local_48 = (ulong)local_48._4_4_ << 0x20;
  if ((-1 < lVar2) && (local_50 != 0)) {
    FUN_00421f90(puVar3,local_50,8,uVar4 & 0x3fffffff);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x30));
  return;
}

