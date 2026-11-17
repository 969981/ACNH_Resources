
/* WARNING: Removing unreachable block (ram,0x02b39b50) */
/* WARNING: Removing unreachable block (ram,0x02b39b60) */
/* WARNING: Removing unreachable block (ram,0x02b39b6c) */

void FUN_02b39b20(undefined8 param_1)

{
  long *plVar1;
  int *piVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulong uVar11;
  undefined **local_80;
  undefined8 uStack_78;
  int *local_70;
  int local_5c;
  uint local_58 [10];
  
  puVar3 = PTR_DAT_04bb27a8;
  local_58[0] = 0;
  if ((*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) &&
     ((*(byte *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 8) & 1) == 0)) {
    if (DAT_05aed670 == 0) {
      puVar9 = &DAT_055c04a0;
    }
    else {
      puVar9 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar9 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar5 = FUN_006bd550(*puVar9,0);
        puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar5 != 0x758f7eaf) {
          puVar9 = &DAT_055c04a0;
        }
      }
    }
    iVar5 = *(int *)(puVar9 + 7);
    uVar11 = 0;
    do {
      uVar10 = (uint)uVar11;
      piVar2 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar11 * 4);
      if (0x38 < uVar10) {
        piVar2 = (int *)(PTR_DAT_04bbbf90 + 8);
      }
      if (*piVar2 == iVar5) goto LAB_02b39c3c;
      uVar7 = 0x39;
      if ((int)uVar10 < 0x39) {
        uVar7 = uVar10 + 1;
      }
      uVar11 = (ulong)uVar7;
    } while (uVar7 != 0x39);
    uVar10 = 0;
LAB_02b39c3c:
    local_5c = iVar5;
    FUN_02b3d3a0(param_1,iVar5);
    FUN_02b3c5f8(param_1,iVar5);
    FUN_02b3c7fc(param_1,iVar5);
    if (uVar10 == 0) {
      plVar6 = (long *)(*(long *)puVar3 + 0x1f8);
    }
    else {
      plVar1 = (long *)(*(long *)puVar3 + 0x30);
      plVar6 = plVar1 + uVar10;
      if (0x38 < uVar10) {
        plVar6 = plVar1;
      }
    }
    puVar9 = &DAT_05636dd8;
    if (*plVar6 != 0) {
      puVar9 = (undefined8 *)(*plVar6 + 0x148);
    }
    if (puVar9[1] != 0) {
      local_80 = &PTR_FUN_04aa2b50;
      local_70 = &local_5c;
      if (puVar9[1] != 0) {
        uStack_78 = param_1;
        local_58[0] = uVar10;
        plVar6 = (long *)(*(code *)**(undefined8 **)(puVar9[1] + 0x10))();
        iVar5 = (**(code **)(*plVar6 + 0x18))();
        if (0 < iVar5) {
          iVar8 = 0;
          do {
            FUN_01360490(local_58,puVar9[1],iVar8);
            uVar11 = (*(code *)*local_80)(&local_80,local_58,iVar8);
            if ((uVar11 & 1) == 0) {
              return;
            }
            bVar4 = iVar5 + -1 != iVar8;
            iVar8 = iVar8 + 1;
          } while (bVar4);
        }
      }
    }
  }
  return;
}

