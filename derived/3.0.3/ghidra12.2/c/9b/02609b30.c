
/* WARNING: Removing unreachable block (ram,0x0260a1cc) */
/* WARNING: Removing unreachable block (ram,0x0260a184) */
/* WARNING: Removing unreachable block (ram,0x0260a148) */
/* WARNING: Removing unreachable block (ram,0x0260a0e8) */
/* WARNING: Removing unreachable block (ram,0x0260a0a0) */
/* WARNING: Removing unreachable block (ram,0x0260a064) */
/* WARNING: Removing unreachable block (ram,0x0260a000) */
/* WARNING: Removing unreachable block (ram,0x02609fb8) */
/* WARNING: Removing unreachable block (ram,0x02609f7c) */
/* WARNING: Removing unreachable block (ram,0x02609f18) */
/* WARNING: Removing unreachable block (ram,0x02609ed0) */
/* WARNING: Removing unreachable block (ram,0x02609e24) */
/* WARNING: Removing unreachable block (ram,0x02609e34) */
/* WARNING: Removing unreachable block (ram,0x02609f08) */
/* WARNING: Removing unreachable block (ram,0x02609f44) */
/* WARNING: Removing unreachable block (ram,0x02609f8c) */
/* WARNING: Removing unreachable block (ram,0x02609ff0) */
/* WARNING: Removing unreachable block (ram,0x0260a02c) */
/* WARNING: Removing unreachable block (ram,0x0260a074) */
/* WARNING: Removing unreachable block (ram,0x0260a0d8) */
/* WARNING: Removing unreachable block (ram,0x0260a110) */
/* WARNING: Removing unreachable block (ram,0x0260a158) */
/* WARNING: Removing unreachable block (ram,0x0260a1bc) */
/* WARNING: Removing unreachable block (ram,0x0260a1f8) */

void FUN_02609b30(long param_1,int param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *local_60;
  int local_58;
  undefined4 local_54;
  byte local_50;
  int local_44;
  
  if (0 < *(int *)(param_1 + 8)) {
    lVar7 = 0;
    puVar9 = *(undefined8 **)(param_1 + 0x18);
    do {
      puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x10) + lVar7 * 8);
      lVar7 = lVar7 + 1;
      *puVar8 = puVar9;
      *(undefined8 **)(param_1 + 0x18) = puVar8;
      puVar9 = puVar8;
    } while (lVar7 < *(int *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  puVar3 = PTR_DAT_04bb2720;
  lVar7 = *(long *)PTR_DAT_04bb2720;
  if (lVar7 == 0) {
    puVar9 = &DAT_055c04a0;
  }
  else {
    puVar9 = &DAT_055c04a0;
    if (*(long *)(lVar7 + 0x330) != 0) {
      puVar9 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar7 + 0x338));
      iVar4 = FUN_006bd550(*puVar9,0);
      puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar9 = &DAT_055c04a0;
      }
    }
  }
  puVar2 = PTR_DAT_04bb2640;
  iVar4 = *(int *)(puVar9 + 7);
  local_44 = 0;
  if (DAT_05ac0a90 == iVar4) {
    lVar7 = 0;
  }
  else if (DAT_05ac0aa0 == iVar4) {
    lVar7 = 1;
  }
  else if (DAT_05ac0ab0 == iVar4) {
    lVar7 = 2;
  }
  else if (DAT_05ac0ac0 == iVar4) {
    lVar7 = 3;
  }
  else if (DAT_05ac0ad0 == iVar4) {
    lVar7 = 4;
  }
  else if (DAT_05ac0ae0 == iVar4) {
    lVar7 = 5;
  }
  else if (DAT_05ac0af0 == iVar4) {
    lVar7 = 6;
  }
  else if (DAT_05ac0b00 == iVar4) {
    lVar7 = 7;
  }
  else if (DAT_05ac0b10 == iVar4) {
    lVar7 = 8;
  }
  else {
    if (DAT_05ac0b20 != iVar4) goto LAB_02609d14;
    lVar7 = 9;
  }
  local_44 = (&DAT_05ac0a98)[lVar7 * 4];
LAB_02609d14:
  if (((*(long *)PTR_DAT_04bb5ce0 != 0) && (lVar7 = *(long *)puVar3, lVar7 != 0)) &&
     (*(long *)(lVar7 + 0x330) != 0)) {
    puVar9 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar7 + 0x338));
    iVar4 = FUN_006bd550(*puVar9,0);
    if (((iVar4 == 0x758f7eaf) && (lVar7 = *(long *)puVar3, lVar7 != 0)) &&
       ((*(long *)(lVar7 + 0x330) != 0 &&
        ((*(int *)(*(long *)(lVar7 + 0x330) + 0x244) != 0 && (local_44 == param_2)))))) {
      local_58 = 0;
      local_60 = PTR_DAT_04bbfe68 + 0x10;
      puVar9 = (undefined8 *)
               (**(code **)(**(long **)puVar2 + 0x18))
                         (*(long **)puVar2,*(undefined4 *)(lVar7 + 0x338));
      iVar4 = FUN_006bd550(*puVar9,0);
      puVar1 = (undefined4 *)(PTR_DAT_04bc3a80 + 0x38);
      if (iVar4 != 0x758f7eaf) {
        puVar1 = &DAT_055c04d8;
      }
      local_54 = *puVar1;
      local_50 = FUN_017baf44();
      local_50 = local_50 & 1;
      *(undefined4 *)(param_1 + 0x90) = 0;
      lVar7 = param_1 + 0x28;
      uVar5 = FUN_01a4fa00(&local_60);
      puVar3 = PTR_DAT_04bb27a8;
      if ((*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) &&
         (lVar6 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xd0), lVar6 != 0)) {
        FUN_012e6150(lVar6,lVar7,uVar5);
      }
      *(undefined4 *)(param_1 + 0x90) = 1;
      uVar5 = FUN_01a4fa00(&local_60);
      if ((*(long *)(*(long *)puVar3 + 0x1f8) != 0) &&
         (lVar6 = *(long *)(*(long *)(*(long *)puVar3 + 0x1f8) + 0xe0), lVar6 != 0)) {
        FUN_012e6150(lVar6,lVar7,uVar5);
      }
      *(undefined4 *)(param_1 + 0x90) = 2;
      uVar5 = FUN_01a4fa00(&local_60);
      if ((*(long *)(*(long *)puVar3 + 0x1f8) != 0) &&
         (lVar6 = *(long *)(*(long *)(*(long *)puVar3 + 0x1f8) + 0xf0), lVar6 != 0)) {
        FUN_012e6150(lVar6,lVar7,uVar5);
      }
      *(undefined4 *)(param_1 + 0x90) = 3;
      uVar5 = FUN_01a4fa00(&local_60);
      if ((*(long *)(*(long *)puVar3 + 0x1f8) != 0) &&
         (lVar6 = *(long *)(*(long *)(*(long *)puVar3 + 0x1f8) + 0x100), lVar6 != 0)) {
        FUN_012e6150(lVar6,lVar7,uVar5);
      }
      *(undefined4 *)(param_1 + 0x90) = 4;
      uVar5 = FUN_01a4fa00(&local_60);
      if ((*(long *)(*(long *)puVar3 + 0x1f8) != 0) &&
         (lVar6 = *(long *)(*(long *)(*(long *)puVar3 + 0x1f8) + 0x110), lVar6 != 0)) {
        FUN_012e6150(lVar6,lVar7,uVar5);
      }
      *(undefined4 *)(param_1 + 0x90) = 5;
      uVar5 = FUN_01a4fa00(&local_60);
      if ((*(long *)(*(long *)puVar3 + 0x1f8) != 0) &&
         (lVar6 = *(long *)(*(long *)(*(long *)puVar3 + 0x1f8) + 0x120), lVar6 != 0)) {
        FUN_012e6150(lVar6,lVar7,uVar5);
      }
      *(undefined4 *)(param_1 + 0x90) = 6;
      uVar5 = FUN_01a4fa00(&local_60);
      if ((*(long *)(*(long *)puVar3 + 0x1f8) != 0) &&
         (lVar6 = *(long *)(*(long *)(*(long *)puVar3 + 0x1f8) + 0x130), lVar6 != 0)) {
        FUN_012e6150(lVar6,lVar7,uVar5);
      }
      *(undefined4 *)(param_1 + 0x90) = 7;
      uVar5 = FUN_01a4fa00(&local_60);
      if ((*(long *)(*(long *)puVar3 + 0x1f8) == 0) ||
         (lVar6 = *(long *)(*(long *)(*(long *)puVar3 + 0x1f8) + 0x140), lVar6 == 0)) {
        return;
      }
      FUN_012e6150(lVar6,lVar7,uVar5);
      return;
    }
  }
  iVar4 = *(int *)(*(long *)PTR_DAT_04bb27f8 + 0xc);
  if ((iVar4 != 5) && (iVar4 != 6)) {
    local_60 = PTR_DAT_04bbc538 + 0x10;
    local_58 = iVar4;
    FUN_0375fd70(param_1 + 0x48,&local_60);
  }
  FUN_03777800(param_1 + 0x68,param_2);
  return;
}

