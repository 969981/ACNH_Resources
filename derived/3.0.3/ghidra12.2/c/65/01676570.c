
void FUN_01676570(undefined4 *param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *local_70;
  int local_68;
  int local_64;
  
  iVar2 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0);
  local_70 = &DAT_048f9750;
  local_68 = iVar2 + 2;
  iVar3 = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0);
  iVar1 = iVar3 + 2;
  local_64 = iVar1;
  uVar4 = FUN_01694190(&local_70,0);
  local_64 = iVar3;
  uVar5 = FUN_01694190(&local_70,0);
  local_64 = iVar3 + -2;
  uVar6 = FUN_01694190(&local_70,0);
  local_68 = iVar2;
  uVar7 = FUN_01694190(&local_70,0);
  local_68 = iVar2 + -2;
  uVar8 = FUN_01694190(&local_70,0);
  local_64 = iVar3;
  uVar9 = FUN_01694190(&local_70,0);
  local_64 = iVar1;
  uVar10 = FUN_01694190(&local_70,0);
  uVar11 = 0x80000000;
  if (((uVar6 & uVar7 & uVar8 & 1) != 0) || ((uVar5 & uVar7 & uVar9 & 1) != 0)) goto LAB_01676850;
  if ((uVar5 & uVar4 & uVar6 & 1) == 0) {
    if ((uVar8 & uVar9 & uVar10 & 1) != 0) {
LAB_016766bc:
      uVar11 = 0xc0000000;
      goto LAB_01676850;
    }
    if ((uVar4 & 1) != 0) {
LAB_016766c8:
      uVar11 = 0x40000000;
      if ((uVar5 & 1) == 0) {
        uVar11 = 0x20000000;
      }
      goto LAB_01676850;
    }
    if ((uVar5 & 1) != 0) {
LAB_016766e0:
      uVar11 = 0x60000000;
      if ((uVar6 & uVar7 & 1) == 0) {
        uVar11 = 0x40000000;
      }
      goto LAB_01676850;
    }
    if ((uVar6 & 1) != 0) {
LAB_016766fc:
      uVar11 = 0x80000000;
      if ((uVar7 & 1) == 0) {
        uVar11 = 0x60000000;
      }
      goto LAB_01676850;
    }
    if ((uVar7 & 1) != 0) {
LAB_01676714:
      uVar11 = 0xa0000000;
      if ((uVar8 & uVar9 & 1) == 0) {
        uVar11 = 0x80000000;
      }
      goto LAB_01676850;
    }
    if ((uVar8 & 1) == 0) {
      uVar11 = 0xc0000000;
      if ((uVar9 & 1) == 0) {
        uVar11 = 0xe0000000;
      }
      if (((uVar9 | uVar10) & 1) != 0) goto LAB_01676850;
      local_68 = iVar2;
      local_64 = iVar3 + 4;
      uVar4 = FUN_01694190(&local_70,1);
      local_64 = iVar1;
      uVar5 = FUN_01694190(&local_70,1);
      local_64 = iVar3;
      uVar6 = FUN_01694190(&local_70,1);
      local_68 = iVar2 + -2;
      uVar7 = FUN_01694190(&local_70,1);
      local_68 = iVar2 + -4;
      uVar8 = FUN_01694190(&local_70,1);
      local_64 = iVar1;
      uVar9 = FUN_01694190(&local_70,1);
      local_64 = iVar3 + 4;
      uVar10 = FUN_01694190(&local_70,1);
      uVar11 = 0x80000000;
      if (((uVar6 & uVar7 & uVar8 & 1) != 0) || ((uVar5 & uVar7 & uVar9 & 1) != 0))
      goto LAB_01676850;
      if ((uVar5 & uVar4 & uVar6 & 1) != 0) goto LAB_016766a8;
      if ((uVar8 & uVar9 & uVar10 & 1) != 0) goto LAB_016766bc;
      if ((uVar4 & 1) != 0) goto LAB_016766c8;
      if ((uVar5 & 1) != 0) goto LAB_016766e0;
      if ((uVar6 & 1) != 0) goto LAB_016766fc;
      if ((uVar7 & 1) != 0) goto LAB_01676714;
      if ((uVar8 & 1) != 0) goto LAB_01676730;
      uVar12 = 0xe0000000;
      if ((uVar10 & 1) == 0) {
        uVar12 = 0x80000000;
      }
    }
    else {
LAB_01676730:
      uVar12 = 0xa0000000;
    }
    uVar11 = 0xc0000000;
    if ((uVar9 & 1) == 0) {
      uVar11 = uVar12;
    }
  }
  else {
LAB_016766a8:
    uVar11 = 0x40000000;
  }
LAB_01676850:
  *param_1 = uVar11;
  return;
}

