
/* WARNING: Removing unreachable block (ram,0x021d9c64) */
/* WARNING: Removing unreachable block (ram,0x021d9bd8) */
/* WARNING: Removing unreachable block (ram,0x021d9be8) */
/* WARNING: Removing unreachable block (ram,0x021d9bf4) */
/* WARNING: Removing unreachable block (ram,0x021d9d58) */

uint FUN_021d9b20(long param_1,ulong param_2)

{
  int *piVar1;
  ushort uVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined *local_c0;
  int local_b8;
  undefined *local_b0;
  undefined1 local_a8;
  int local_a4;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined **local_88;
  undefined1 *puStack_80;
  undefined **local_78;
  ulong local_68 [5];
  long local_28;
  
  puVar3 = PTR_DAT_04bb6260;
  uVar7 = *(int *)(param_1 + 0x754) - 1;
  if ((uVar7 < 5) && ((0x1dU >> (ulong)(uVar7 & 0x1f) & 1) != 0)) {
    return 0;
  }
  uVar2 = *(ushort *)(param_1 + 0x284);
  if (999 < uVar2) {
    return 0;
  }
  if ((*(int *)PTR_DAT_04bb6260 < (int)(short)uVar2) ||
     (*(int *)(PTR_DAT_04bb6258 + ((long)(short)uVar2 & 0xffffffffU) * 0x10) == 0)) {
    lVar12 = -1;
  }
  else {
    lVar12 = *(long *)(PTR_DAT_04bb6258 + (long)(short)uVar2 * 0x10 + 8);
  }
  local_c0 = PTR_DAT_04bc43f8 + 0x10;
  local_28 = lVar12;
  if ((param_2 & 1) == 0) {
    local_b8 = 0;
    local_b0 = (undefined *)((ulong)local_b0 & 0xffffffff00000000);
    uVar9 = FUN_02b67a30(&local_b0,*(undefined4 *)(param_1 + 0x508));
    if ((uVar9 & 1) != 0) {
      if (9 < (uint)local_b0) {
        local_b0._0_4_ = 0;
      }
      local_b8 = (&DAT_05636e30)[(int)(uint)local_b0];
    }
    local_68[0] = CONCAT44(local_68[0]._4_4_,1);
    lVar13 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38);
    if ((lVar13 != 0) && (*(long *)(lVar13 + 0x150) != 0)) {
      local_b0 = PTR_DAT_04bc4608 + 0x10;
      local_a8 = PTR_DAT_04bbc570[8];
      local_a4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
      uStack_98 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
      local_a0 = PTR_DAT_04bb2010 + 0x10;
      local_90 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
      local_8c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
      if (local_b8 != 0) {
        local_88 = &PTR_FUN_04a9b150;
        local_78 = &local_b0;
        puStack_80 = (undefined1 *)&local_c0;
        plVar8 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x150) + 0x10))();
        iVar6 = (**(code **)(*plVar8 + 0x18))();
        if (0 < iVar6) {
          iVar11 = 0;
          do {
            FUN_01360490(local_68,*(undefined8 *)(lVar13 + 0x150),iVar11);
            uVar9 = (*(code *)*local_88)(&local_88,local_68);
            if ((uVar9 & 1) != 0) break;
            bVar4 = iVar6 + -1 != iVar11;
            iVar11 = iVar11 + 1;
          } while (bVar4);
        }
      }
      goto LAB_021d9e84;
    }
  }
  else {
    local_b8 = 0x1f;
    local_68[0] = local_68[0] & 0xffffffff00000000;
    lVar13 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
    if ((lVar13 != 0) && (*(long *)(lVar13 + 0x150) != 0)) {
      local_b0 = PTR_DAT_04bc4608 + 0x10;
      local_a8 = PTR_DAT_04bbc570[8];
      local_a4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
      uStack_98 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
      local_a0 = PTR_DAT_04bb2010 + 0x10;
      local_90 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
      local_8c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
      local_88 = &PTR_FUN_04a9b150;
      local_78 = &local_b0;
      puStack_80 = (undefined1 *)&local_c0;
      plVar8 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x150) + 0x10))();
      iVar6 = (**(code **)(*plVar8 + 0x18))();
      if (0 < iVar6) {
        iVar11 = 0;
        do {
          FUN_01360490(local_68,*(undefined8 *)(lVar13 + 0x150),iVar11);
          uVar9 = (*(code *)*local_88)(&local_88,local_68);
          if ((uVar9 & 1) != 0) break;
          bVar4 = iVar6 + -1 != iVar11;
          iVar11 = iVar11 + 1;
        } while (bVar4);
      }
      goto LAB_021d9e84;
    }
  }
  local_b0 = PTR_DAT_04bc4608 + 0x10;
  local_a8 = PTR_DAT_04bbc570[8];
  local_a4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
  uStack_98 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
  local_a0 = PTR_DAT_04bb2010 + 0x10;
  local_90 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
  local_8c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
LAB_021d9e84:
  if (local_a4 != 0) {
    bVar5 = FUN_02b684a0(local_68);
    uVar9 = local_68[0] & 0xffff;
    local_68[0] = uVar9 | 0x760000000000000;
    if ((bVar5 & uVar9 != 0) == 0) {
      local_68[0] = 0xffffffffffffffff;
    }
    if (-1 < (int)*(uint *)puVar3) {
      uVar9 = 0;
      piVar10 = (int *)PTR_DAT_04bb6258;
      do {
        piVar1 = piVar10;
        if (999 < uVar9) {
          piVar1 = (int *)PTR_DAT_04bb6258;
        }
        if ((*piVar1 != 0) && (*(long *)(piVar1 + 2) == lVar12)) {
          if ((uint)uVar9 != 0xffffffff) {
            if (999 < (uint)uVar9) {
              piVar10 = (int *)PTR_DAT_04bb6258;
            }
            if (*piVar10 != 0) {
              uVar7 = FUN_00a7c6ec(&local_28,local_68);
              goto LAB_021d9f2c;
            }
          }
          break;
        }
        uVar9 = uVar9 + 1;
        piVar10 = piVar10 + 4;
      } while ((ulong)*(uint *)puVar3 + 1 != uVar9);
    }
  }
  uVar7 = 0;
LAB_021d9f2c:
  return uVar7 & 1;
}

