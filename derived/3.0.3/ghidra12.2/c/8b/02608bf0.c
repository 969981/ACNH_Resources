
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02608bf0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *local_b0;
  int local_a8;
  int local_a4;
  undefined *local_a0;
  undefined *puStack_98;
  int local_90;
  int iStack_8c;
  undefined *local_88;
  int local_80;
  int iStack_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  
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
  puVar2 = PTR_DAT_04bb2720;
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
      iVar5 = FUN_006bd550(*puVar9,0);
      puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar9 = &DAT_055c04a0;
      }
    }
  }
  if (*(int *)(puVar9 + 7) != -0x17df00c3) {
    FUN_037772c0(param_1 + 0x48);
    return;
  }
  local_70 = 0;
  local_78 = PTR_DAT_04bbfe68 + 0x10;
  lVar7 = *(long *)puVar2;
  if (lVar7 == 0) {
    puVar9 = &DAT_055c04a0;
  }
  else {
    puVar9 = &DAT_055c04a0;
    if (*(long *)(lVar7 + 0x330) != 0) {
      puVar9 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar7 + 0x338));
      iVar5 = FUN_006bd550(*puVar9,0);
      puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar9 = &DAT_055c04a0;
      }
    }
  }
  local_6c = *(undefined4 *)(puVar9 + 7);
  local_68 = FUN_017baf44();
  puVar4 = PTR_DAT_04bbc1a0;
  puVar3 = PTR_DAT_04bb59d8;
  puVar2 = PTR_DAT_04bb2010;
  local_68 = local_68 & 1;
  lVar7 = *(long *)PTR_DAT_04bb59d8;
  if (lVar7 != 0) {
    iVar1 = *(int *)(lVar7 + 0x28);
    local_a4 = *(int *)(lVar7 + 0x2c);
    local_80 = *(int *)(lVar7 + 0x38);
    iStack_7c = *(int *)(lVar7 + 0x3c);
    local_a0 = PTR_DAT_04bbc1a0 + 0x10;
    local_b0 = PTR_DAT_04bb2010 + 0x10;
    iVar5 = iStack_7c + 1;
    local_a8 = iVar1;
    puStack_98 = local_b0;
    local_90 = iVar1;
    iStack_8c = local_a4;
    local_88 = local_b0;
    if (iVar5 != local_a4) {
      do {
        uVar6 = FUN_01a5190c(&local_78,0,&local_b0,0);
        FUN_0260a240(param_1,uVar6);
        if (local_a8 < local_80) {
          local_a8 = local_a8 + 1;
        }
        else {
          local_a4 = local_a4 + 1;
          local_a8 = local_90;
        }
      } while (iVar1 != local_a8 || iVar5 != local_a4);
      lVar7 = *(long *)puVar3;
      if (lVar7 == 0) {
        return;
      }
    }
    local_a0 = puVar4 + 0x10;
    local_b0 = puVar2 + 0x10;
    iVar1 = *(int *)(lVar7 + 0x28);
    local_a4 = *(int *)(lVar7 + 0x2c);
    local_80 = *(int *)(lVar7 + 0x38);
    iStack_7c = *(int *)(lVar7 + 0x3c);
    iVar5 = iStack_7c + 1;
    local_a8 = iVar1;
    puStack_98 = local_b0;
    local_90 = iVar1;
    iStack_8c = local_a4;
    local_88 = local_b0;
    if (iVar5 != local_a4) {
      do {
        uVar6 = FUN_01a5190c(&local_78,1,&local_b0,0);
        FUN_0260a240(param_1,uVar6);
        if (local_a8 < local_80) {
          local_a8 = local_a8 + 1;
        }
        else {
          local_a4 = local_a4 + 1;
          local_a8 = local_90;
        }
      } while (iVar1 != local_a8 || iVar5 != local_a4);
    }
  }
  return;
}

