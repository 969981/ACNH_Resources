
undefined1 * FUN_004ade00(long param_1,undefined1 *param_2,uint param_3,ulong param_4)

{
  undefined1 *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 *local_50;
  undefined8 local_48;
  
  local_48 = -0x8000000000000000;
  local_50 = (undefined1 *)0x0;
  if (param_3 == 0xffffffff) {
    param_4 = param_4 & 0xffffffff;
    goto LAB_004adf20;
  }
  if ((int)param_3 < 1) {
    local_48._4_4_ = 0x80000000;
    if (param_3 == 0) goto LAB_004adee4;
  }
  else {
    local_50 = (undefined1 *)FUN_00426720(PTR_DAT_048607c0,param_3,1,0,0,(long)&local_48 + 4);
    uVar3 = param_3 & 3;
    puVar6 = local_50;
    if (2 < param_3 - 1) {
      iVar4 = uVar3 - param_3;
      puVar5 = local_50;
      do {
        *puVar5 = *param_2;
        puVar5[1] = param_2[1];
        puVar5[2] = param_2[2];
        puVar1 = param_2 + 3;
        puVar6 = puVar5 + 4;
        param_2 = param_2 + 4;
        puVar5[3] = *puVar1;
        iVar4 = iVar4 + 4;
        puVar5 = puVar6;
      } while (iVar4 != 0);
    }
    if (uVar3 != 0) {
      iVar4 = -uVar3;
      do {
        iVar4 = iVar4 + 1;
        *puVar6 = *param_2;
        puVar6 = puVar6 + 1;
        param_2 = param_2 + 1;
      } while (iVar4 != 0);
    }
    if ((local_48._4_4_ & 0x3fffffff) == param_3) {
LAB_004adee4:
      local_48._0_4_ = param_3;
      FUN_00426990(PTR_DAT_048607c0,&local_50,1);
      param_3 = (uint)local_48;
    }
  }
  local_50[(int)param_3] = 0;
  param_4 = 1;
  local_48 = CONCAT44(local_48._4_4_,param_3 + 1);
  param_2 = local_50;
LAB_004adf20:
  nn::os::LockMutex((MutexType *)(param_1 + 0x18));
  lVar2 = param_1 + 0x38;
  uVar7 = FUN_00471420(lVar2,param_2);
  iVar4 = FUN_00471230(lVar2,uVar7);
  if (iVar4 == 0) {
    if ((param_4 & 1) != 0) {
      param_2 = (undefined1 *)FUN_0043a3e0(param_2);
    }
    FUN_00471240(lVar2,param_2,param_4 & 1);
  }
  else {
    param_2 = (undefined1 *)FUN_004711a0(lVar2,uVar7);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x18));
  lVar2 = local_48;
  uVar3 = local_48._4_4_;
  local_48 = (ulong)local_48._4_4_ << 0x20;
  if ((-1 < lVar2) && (local_50 != (undefined1 *)0x0)) {
    FUN_00421f90(PTR_DAT_048607c0,local_50,1,uVar3 & 0x3fffffff);
  }
  return param_2;
}

