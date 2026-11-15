
/* WARNING: Removing unreachable block (ram,0x022ead14) */
/* WARNING: Removing unreachable block (ram,0x022ead04) */
/* WARNING: Removing unreachable block (ram,0x022ead34) */
/* WARNING: Removing unreachable block (ram,0x022ead44) */

void FUN_022eab44(long param_1,float *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  undefined **local_1500;
  undefined8 uStack_14f8;
  undefined8 local_14f0;
  undefined8 uStack_14e8;
  undefined4 local_14e0;
  undefined *local_14d8;
  undefined8 uStack_14d0;
  undefined *local_14c8;
  undefined8 uStack_14c0;
  undefined8 local_14b8;
  undefined8 uStack_14b0;
  undefined *local_14a8;
  undefined *puStack_14a0;
  undefined8 local_1498;
  undefined *puStack_1490;
  undefined *local_1488;
  undefined8 uStack_1480;
  undefined *local_1478;
  undefined8 uStack_1470;
  undefined1 auStack_1468 [4984];
  undefined **local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  float local_dc;
  undefined8 local_d8;
  float local_d0;
  float local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined *local_b0;
  int local_a8;
  int local_a4;
  uint uStack_a0;
  undefined1 uStack_9c;
  undefined8 local_94;
  float local_8c;
  float fStack_88;
  float local_84;
  float fStack_80;
  float local_7c;
  float fStack_78;
  float local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54;
  
  local_58 = 0;
  piVar4 = (int *)(param_1 + 0x20);
  piVar4[0] = 0;
  piVar4[1] = 0;
  *(undefined8 *)(param_1 + 0x25) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x30) = 7;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3d) = 0;
  local_8c = param_2[5];
  local_84 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = *param_2;
  local_70 = 0x40000000;
  local_54 = 1;
  local_94 = *(undefined8 *)(param_2 + 3);
  local_6c = 0;
  local_68 = 0;
  local_60 = 0;
  fStack_88 = fVar7;
  fStack_80 = fVar6;
  local_7c = fVar7;
  fStack_78 = local_84;
  local_74 = fVar6;
  uVar1 = FUN_016f36e0(&local_94);
  if (uVar1 == 0) {
    bVar5 = false;
    goto switchD_022eac90_caseD_e;
  }
  if (((int)((float)(int)fVar7 / 10.0) - (uint)(fVar7 < 0.0) !=
       (int)((float)(int)(float)local_68 / 10.0) - (uint)((float)local_68 < 0.0)) ||
     ((int)((float)(int)fVar6 / 10.0) - (uint)(fVar6 < 0.0) !=
      (int)((float)(int)(float)local_60 / 10.0) - (uint)((float)local_60 < 0.0))) {
    if ((0xe < uVar1) || ((1 << (ulong)(uVar1 & 0x1f) & 0x4404U) == 0)) {
switchD_022eac90_caseD_3:
      *(float *)(param_1 + 0x40) = (float)local_60;
      *(undefined4 *)(param_1 + 0x10) = 3;
      *(undefined1 *)(param_1 + 0x34) = 1;
      *(float *)(param_1 + 0x38) = (float)local_68;
      *(undefined4 *)(param_1 + 0x3c) = local_68._4_4_;
      goto LAB_022eaec4;
    }
switchD_022eac90_caseD_2:
    *(undefined4 *)(param_1 + 0x10) = 2;
    goto LAB_022eaec4;
  }
  bVar5 = false;
  switch(uVar1) {
  case 2:
  case 10:
    goto switchD_022eac90_caseD_2;
  default:
    goto switchD_022eac90_caseD_3;
  case 9:
  case 0xb:
    bVar5 = true;
    break;
  case 0xe:
    break;
  }
switchD_022eac90_caseD_e:
  local_f0 = &local_b0;
  local_dc = param_2[2];
  local_e8 = 0;
  local_b0 = PTR_DAT_04bbc248 + 0x10;
  local_a8 = 0;
  local_e4 = *(undefined8 *)param_2;
  local_d0 = param_2[5];
  local_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  local_d8 = *(undefined8 *)(param_2 + 3);
  local_cc = param_2[6];
  local_b8 = 0;
  lVar3 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (lVar3 == 0) {
    local_c8 = 0;
  }
  else {
    local_c8 = *(undefined8 *)(lVar3 + 0xa8);
  }
  lVar3 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (lVar3 == 0) {
    local_c0 = 0;
  }
  else {
    local_c0 = *(undefined8 *)(lVar3 + 0xb0);
  }
  local_14f0 = 0;
  uStack_14e8 = 0;
  local_1500 = (undefined **)(PTR_DAT_04bbc238 + 0x10);
  local_14e0 = 0;
  local_14d8 = PTR_DAT_04bb2018 + 0x10;
  uStack_14f8 = 0;
  uStack_14d0 = 0;
  uStack_14c0 = 0;
  local_14a8 = PTR_DAT_04bbc2a0 + 0x10;
  local_14b8 = 0;
  uStack_14b0 = 0;
  uStack_1480 = 0;
  puStack_1490 = PTR_DAT_04bbc5d8 + 0x10;
  uStack_1470 = 0;
  local_1498 = 0;
  local_14c8 = local_14d8;
  puStack_14a0 = local_14d8;
  local_1488 = local_14d8;
  local_1478 = local_14d8;
  FUN_01300510(auStack_1468);
  FUN_012f2ed0(&local_1500,&local_f0);
  local_1500 = (undefined **)CONCAT44(local_1500._4_4_,local_a8);
  if (local_a8 == 2) {
LAB_022eadf0:
    local_1500 = &PTR_LAB_04a7ee58;
    uVar2 = FUN_022ebfb4(param_2,&local_b0,&local_1500);
    if ((uVar2 & 1) == 0) {
      local_1500 = (undefined **)CONCAT44(local_1500._4_4_,1);
      uStack_a0 = uStack_a0 | 2;
      local_a4 = 2;
    }
  }
  else {
    local_f0 = (undefined **)CONCAT44(local_f0._4_4_,local_a8);
    if (local_a8 == 9) goto LAB_022eadf0;
  }
  if (uStack_a0 == 0) {
    local_1500 = (undefined **)CONCAT44(local_1500._4_4_,local_a8);
    if (local_a8 == 0) goto LAB_022eae44;
  }
  else {
LAB_022eae44:
    if (local_a4 != 1) {
      bVar5 = true;
    }
    if (!bVar5) {
      local_a4 = 2;
    }
  }
  FUN_022ee0a4(param_1 + 8,&local_b0);
LAB_022eaec4:
  *(float *)(param_1 + 0x48) = *param_2;
  *(float *)(param_1 + 0x4c) = param_2[1];
  *(float *)(param_1 + 0x50) = param_2[2];
  if (*(char *)(param_1 + 0x44) == '\0') {
    if (*(int *)(param_1 + 0x28) != 0) {
      return;
    }
    local_1500 = (undefined **)CONCAT44(local_1500._4_4_,*piVar4);
    if (*piVar4 == 0) {
      return;
    }
  }
  else if (1 < *(uint *)(param_1 + 0x10)) {
    return;
  }
  FUN_022eaf58(param_1,param_2);
  return;
}

