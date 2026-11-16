
/* WARNING: Removing unreachable block (ram,0x029d8e4c) */

void FUN_029d8db0(long param_1,undefined8 *param_2)

{
  MutexType *pMVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined1 local_ab;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  char *pcStack_70;
  undefined1 local_68;
  undefined4 local_64;
  undefined *local_60;
  undefined8 local_58;
  
  puVar8 = PTR_DAT_04bb26a8;
  uVar14 = *param_2;
  bVar5 = *(byte *)(param_2 + 1);
  bVar6 = *(byte *)((long)param_2 + 9);
  bVar7 = *(byte *)((long)param_2 + 0xc);
  lVar13 = *(long *)PTR_DAT_04bb26a8;
  pMVar1 = (MutexType *)(lVar13 + 0x89660);
  nn::os::LockMutex(pMVar1);
  iVar4 = *(int *)(lVar13 + 0x89630);
  nn::os::UnlockMutex(pMVar1);
  local_b0 = CONCAT31(local_b0._1_3_,bVar5 & bVar6) & 0xffffff01;
  local_b0._0_3_ = CONCAT21(*(undefined2 *)((long)param_2 + 10),(undefined1)local_b0);
  local_b8 = (undefined **)uVar14;
  FUN_029e1980(param_1 + 0x10,&local_b8);
  if (*(char *)(param_1 + 0x1a) == '\0') {
    if (*(char *)(param_1 + 0xa3d) == '\0') goto LAB_029d8f2c;
  }
  else {
    *(undefined1 *)(param_1 + 0xa3d) = 1;
  }
  if ((bVar7 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xa3d) = 0;
    lVar13 = DAT_05b05848;
    lVar12 = *(long *)PTR_DAT_04bb28b0;
    FUN_03f422d0(*(undefined8 *)(*(long *)(DAT_05b05848 + 0x140) + 0x180),5);
    FUN_03f422d0(*(undefined8 *)(*(long *)(lVar13 + 0x140) + 0x180),4);
    FUN_03f422d0(*(undefined8 *)(*(long *)(lVar13 + 0x140) + 0x180),3);
    local_b0 = CONCAT13(local_b0._3_1_,0x90000);
    local_b0 = CONCAT22(local_b0._2_2_,1);
    local_a8 = *(undefined8 *)(lVar13 + 0x148);
    local_78 = PTR_DAT_04bb2020 + 0x10;
    local_88 = 0;
    uStack_80 = 0;
    uStack_a0 = 0;
    local_68 = 0;
    local_c0 = 0;
    local_b8 = &PTR_LAB_04ba8bc8;
    local_98 = lVar13 + 0x3c0;
    uStack_90 = 0;
    pcStack_70 = "ClearAllCaches";
    local_64 = 0xffffffff;
    local_58 = *(undefined8 *)(*(long *)(lVar12 + 0x468) + 0x28);
    puStack_c8 = &local_b8;
    local_d0 = 0;
    local_60 = local_78;
    FUN_03f45184(*(undefined8 *)(lVar13 + 0x1a8),&local_d0);
  }
LAB_029d8f2c:
  bVar9 = *(int *)(param_1 + 0x1c) != -1;
  bVar10 = *(long *)(param_1 + 0x28) != 0;
  local_b8 = (undefined **)*param_2;
  uVar11 = 3;
  if (DAT_05467d70 != 0 || DAT_05467d28 == '\0') {
    uVar11 = 1;
  }
  local_b0 = 0;
  if ((((bVar9 && bVar10) && (local_b0 = uVar11, DAT_05467d70 != 0 || DAT_05467d28 == '\0')) &&
      (DAT_05467d70 != 10)) && (DAT_05467d28 != '\0')) {
    if (*(int *)(param_1 + 0xa38) == 1) {
      local_b0 = (uint)(iVar4 == 3 || iVar4 == 0);
    }
    else if (iVar4 == 1) {
      local_b0 = 0;
      *(undefined1 *)(param_1 + 0xa3c) = 0;
    }
    else if (iVar4 == 2) {
      *(undefined1 *)(param_1 + 0xa3c) = 1;
      local_b0 = 2;
    }
    else {
      local_b0 = (uint)(*(char *)(param_1 + 0xa3c) != '\0') << 1;
    }
  }
  *(uint *)(param_1 + 0xa38) = local_b0;
  iVar4 = *(char *)(param_1 + 0x118) + 1;
  uVar11 = iVar4 * 0x5556;
  uVar11 = iVar4 + ((uVar11 >> 0x10) - ((int)uVar11 >> 0x1f)) * -3;
  lVar13 = param_1 + 0x50 + (ulong)(uint)(int)(char)uVar11 * 0x40;
  if (2 < (uVar11 & 0xff)) {
    lVar13 = param_1 + 0x50;
  }
  local_ac = *(char *)(lVar13 + 0x3c) == '\x02';
  FUN_029da234(param_1 + 0x8b0,&local_b8);
  iVar4 = *(int *)(param_1 + 0xa00);
  iVar2 = *(int *)(param_1 + 0x9f0);
  iVar3 = *(int *)(param_1 + 0x9f4);
  local_b8 = *(undefined ***)(param_1 + 0x9f0);
  local_b0 = CONCAT31(local_b0._1_3_,1);
  FUN_029d6950(param_1 + 0x30,&local_b8);
  lVar13 = *(long *)puVar8;
  uVar11 = *(uint *)(lVar13 + 0x8974c);
  if (uVar11 != 0xffffffff) {
    if (*(uint *)(lVar13 + 0x89750) <= uVar11) {
      uVar11 = 0;
    }
    if ((*(long *)(lVar13 + 0x89758) != 0) &&
       ((iVar2 != *(int *)(param_1 + 0xa30) || (iVar3 != *(int *)(param_1 + 0xa34))))) {
      lVar12 = *(long *)(lVar13 + 0x89758) + (long)(int)uVar11 * 0x20;
      *(int *)(lVar12 + 0x14) = iVar2;
      *(int *)(lVar12 + 0x18) = iVar3;
      *(undefined1 *)(lVar12 + 0x10) = 1;
    }
  }
  if (*(long *)(*(long *)(lVar13 + 0xb4510) + 0x50) == 0) {
    uVar15 = 0;
    uVar16 = 0;
    local_b0 = 0;
  }
  else {
    uVar15 = *(undefined4 *)(lVar13 + 0xb44d4);
    uVar16 = *(undefined4 *)(lVar13 + 0xb44d8);
    local_b0 = *(undefined4 *)(lVar13 + 0xb44dc);
  }
  local_b8 = (undefined **)CONCAT44(uVar16,uVar15);
  local_ac = iVar4 == 2;
  local_ab = iVar4 == 4;
  FUN_029d85e0(param_1 + 0x120,&local_b8);
  if (bVar9 && bVar10) {
    *(int *)(param_1 + 0xa30) = iVar2;
    *(int *)(param_1 + 0xa34) = iVar3;
  }
  return;
}

