
/* WARNING: Removing unreachable block (ram,0x026097b8) */
/* WARNING: Removing unreachable block (ram,0x02609770) */
/* WARNING: Removing unreachable block (ram,0x02609734) */
/* WARNING: Removing unreachable block (ram,0x026096d4) */
/* WARNING: Removing unreachable block (ram,0x0260968c) */
/* WARNING: Removing unreachable block (ram,0x02609650) */
/* WARNING: Removing unreachable block (ram,0x026095ec) */
/* WARNING: Removing unreachable block (ram,0x026095a4) */
/* WARNING: Removing unreachable block (ram,0x02609568) */
/* WARNING: Removing unreachable block (ram,0x02609504) */
/* WARNING: Removing unreachable block (ram,0x026094bc) */
/* WARNING: Removing unreachable block (ram,0x02609454) */
/* WARNING: Removing unreachable block (ram,0x02609464) */
/* WARNING: Removing unreachable block (ram,0x026094f4) */
/* WARNING: Removing unreachable block (ram,0x02609530) */
/* WARNING: Removing unreachable block (ram,0x02609578) */
/* WARNING: Removing unreachable block (ram,0x026095dc) */
/* WARNING: Removing unreachable block (ram,0x02609618) */
/* WARNING: Removing unreachable block (ram,0x02609660) */
/* WARNING: Removing unreachable block (ram,0x026096c4) */
/* WARNING: Removing unreachable block (ram,0x026096fc) */
/* WARNING: Removing unreachable block (ram,0x02609744) */
/* WARNING: Removing unreachable block (ram,0x026097a8) */
/* WARNING: Removing unreachable block (ram,0x026097e4) */

void FUN_02609230(long param_1,int param_2)

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
  undefined4 local_58;
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
  local_44 = 0;
  if (*(int *)(puVar9 + 7) == -0x7975b8e8) {
    local_44 = 0;
  }
  else if (*(int *)(puVar9 + 7) == -0x3e092032) {
    local_44 = 1;
  }
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
  FUN_03777470(param_1 + 0x48,param_2);
  FUN_03777630(param_1 + 0x68,param_2);
  return;
}

