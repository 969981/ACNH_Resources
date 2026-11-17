
/* WARNING: Removing unreachable block (ram,0x030d1dc8) */
/* WARNING: Removing unreachable block (ram,0x030d1dd0) */

void FUN_030d1d80(long param_1)

{
  undefined **ppuVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  undefined *local_c0;
  undefined1 local_b8;
  int local_b4;
  undefined *local_b0;
  int local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined *local_98;
  undefined4 local_90;
  undefined **local_88;
  undefined **ppuStack_80;
  undefined1 *local_78;
  int local_68 [10];
  
  local_78 = (undefined1 *)&local_c0;
  local_68[0] = 0x32;
  puVar7 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1c0) != 0) {
    puVar7 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1c0) + 0x148);
  }
  if (puVar7[1] != 0) {
    local_90 = 0x26;
    local_98 = PTR_DAT_04bc43f8 + 0x10;
    local_c0 = PTR_DAT_04bc4608 + 0x10;
    local_b0 = PTR_DAT_04bb2010 + 0x10;
    local_b8 = PTR_DAT_04bbc570[8];
    local_b4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
    local_a0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
    local_a8 = *(int *)(PTR_DAT_04bbc570 + 0x18);
    iStack_a4 = *(int *)(PTR_DAT_04bbc570 + 0x1c);
    local_9c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
    ppuStack_80 = &local_98;
    local_88 = &PTR_FUN_04a9b150;
    ppuVar1 = &local_c0;
    if (puVar7[1] != 0) {
      plVar4 = (long *)(*(code *)**(undefined8 **)(puVar7[1] + 0x10))();
      iVar3 = (**(code **)(*plVar4 + 0x18))();
      ppuVar1 = (undefined **)local_78;
      if (0 < iVar3) {
        iVar10 = 0;
        do {
          FUN_01360490(local_68,puVar7[1],iVar10);
          uVar5 = (*(code *)*local_88)(&local_88,local_68);
          ppuVar1 = (undefined **)local_78;
          if ((uVar5 & 1) != 0) break;
          bVar2 = iVar3 + -1 != iVar10;
          iVar10 = iVar10 + 1;
        } while (bVar2);
      }
    }
    local_78 = (undefined1 *)ppuVar1;
    if ((local_b4 != 0) && (lVar11 = *(long *)(param_1 + 600), lVar11 != 0)) {
      fVar13 = (float)local_a8;
      fVar14 = (float)iStack_a4;
      local_68[0] = local_b4;
      lVar6 = FUN_02642ea0();
      if (lVar6 == 0) {
        uVar12 = 8;
      }
      else if ((*(long **)(lVar6 + 0x28) == (long *)0x0) ||
              (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x28), puVar7 == (undefined8 *)0x0)) {
        uVar12 = *(uint *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8));
        if (8 < uVar12) {
          uVar12 = 0;
        }
      }
      else {
        uVar5 = (**(code **)*puVar7)();
        uVar12 = *(uint *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8));
        if (8 < uVar12) {
          uVar12 = 0;
        }
        if ((((uVar5 & 1) != 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
           (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar7 != (undefined8 *)0x0)) {
          (**(code **)*puVar7)();
        }
      }
      uVar9 = **(undefined8 **)(lVar11 + 0x230);
      uVar8 = (*(undefined8 **)(lVar11 + 0x230))[(ulong)(2 < *(uint *)(lVar11 + 0x228)) * 2];
      *(float *)(param_1 + 0x44c) = fVar13 * 5.0 + 2.5;
      *(undefined4 *)(param_1 + 0x450) = 0;
      *(float *)(param_1 + 0x454) = fVar14 * 5.0 + 2.5;
      *(uint *)(param_1 + 0x498) = uVar12;
      *(long *)(param_1 + 0x458) = lVar11;
      *(undefined8 *)(param_1 + 0x468) = uVar9;
      *(undefined8 *)(param_1 + 0x460) = uVar8;
      *(undefined1 *)(param_1 + 0x448) = 1;
    }
  }
  return;
}

