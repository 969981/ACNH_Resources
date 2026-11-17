
void FUN_02b3cb40(long param_1,long param_2,int param_3)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined *local_d0;
  undefined1 local_c8;
  int local_c4;
  undefined *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined **local_a8;
  long lStack_a0;
  undefined1 *local_98;
  uint local_88 [10];
  
  puVar6 = PTR_DAT_04bbbf90;
  puVar5 = PTR_DAT_04bb27a8;
  uVar11 = 0;
  do {
    local_88[0] = (uint)uVar11;
    piVar2 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar11 * 4);
    if (0x38 < local_88[0]) {
      piVar2 = (int *)(PTR_DAT_04bbbf90 + 8);
    }
    if (*piVar2 == param_3) goto LAB_02b3cbac;
    uVar13 = 0x39;
    if ((int)local_88[0] < 0x39) {
      uVar13 = local_88[0] + 1;
    }
    uVar11 = (ulong)uVar13;
  } while (uVar13 != 0x39);
  local_88[0] = 0;
LAB_02b3cbac:
  if (local_88[0] == 0) {
    plVar9 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  }
  else {
    plVar1 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
    plVar9 = plVar1 + local_88[0];
    if (0x38 < local_88[0]) {
      plVar9 = plVar1;
    }
  }
  puVar3 = &DAT_05636dd8;
  if (*plVar9 != 0) {
    puVar3 = (undefined8 *)(*plVar9 + 0x148);
  }
  if (puVar3[1] != 0) {
    local_d0 = PTR_DAT_04bc4608 + 0x10;
    local_c8 = PTR_DAT_04bbc570[8];
    local_c4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
    local_b8 = *(ulong *)(PTR_DAT_04bbc570 + 0x18);
    local_c0 = PTR_DAT_04bb2010 + 0x10;
    local_b0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
    local_ac = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
    if (*(int *)(param_2 + 8) != 0) {
      local_a8 = &PTR_FUN_04a9b150;
      lStack_a0 = param_2;
      local_98 = (undefined1 *)&local_d0;
      if (puVar3[1] != 0) {
        local_98 = (undefined1 *)&local_d0;
        plVar9 = (long *)(*(code *)**(undefined8 **)(puVar3[1] + 0x10))();
        iVar8 = (**(code **)(*plVar9 + 0x18))();
        if (0 < iVar8) {
          iVar12 = 0;
          do {
            FUN_01360490(local_88,puVar3[1],iVar12);
            uVar11 = (*(code *)*local_a8)(&local_a8,local_88);
            if ((uVar11 & 1) != 0) break;
            bVar7 = iVar8 + -1 != iVar12;
            iVar12 = iVar12 + 1;
          } while (bVar7);
        }
      }
    }
    if (local_c4 != 0) {
      if (puVar3[1] == 0) {
        uVar13 = 0xffffffff;
      }
      else {
        uVar13 = 0xffffffff;
        if ((uint)local_b8 < 0x120) {
          if (local_b8._4_4_ < 0x100) {
            uVar13 = *(uint *)(puVar3[1] + (local_b8 & 0xffffffff) * 0x400 +
                               (ulong)local_b8._4_4_ * 4 + 0x30);
          }
        }
      }
      uVar11 = 0;
      do {
        uVar15 = (uint)uVar11;
        piVar2 = (int *)((long)(puVar6 + 8) + uVar11 * 4);
        if (0x38 < uVar15) {
          piVar2 = (int *)(puVar6 + 8);
        }
        if (*piVar2 == param_3) goto LAB_02b3cd3c;
        uVar14 = 0x39;
        if ((int)uVar15 < 0x39) {
          uVar14 = uVar15 + 1;
        }
        uVar11 = (ulong)uVar14;
      } while (uVar14 != 0x39);
      uVar15 = 0;
LAB_02b3cd3c:
      if (uVar15 == 0) {
        plVar9 = (long *)(*(long *)puVar5 + 0x1f8);
      }
      else {
        plVar1 = (long *)(*(long *)puVar5 + 0x30);
        plVar9 = plVar1 + uVar15;
        if (0x38 < uVar15) {
          plVar9 = plVar1;
        }
      }
      puVar3 = &DAT_05636dd8;
      if (*plVar9 != 0) {
        puVar3 = (undefined8 *)(*plVar9 + 0x148);
      }
      local_88[0] = uVar15;
      if (puVar3[1] != 0) {
        FUN_01360b90(puVar3[1],uVar13);
      }
      if ((uVar15 == 0x32) || (uVar15 == 1)) {
        param_1 = param_1 + 0x10;
      }
      else {
        param_1 = param_1 + 0x6dc8;
      }
      if (uVar13 != 0xffffffff) {
        lVar4 = param_1 + 8 + (ulong)uVar13 * 0x208;
        if (0x35 < uVar13) {
          lVar4 = param_1 + 8;
        }
        lVar10 = *(long *)(lVar4 + 8);
        if (lVar10 != 0) {
          if (*(char *)(lVar10 + 0xa0) != '\0') {
            FUN_009392c8();
            lVar10 = *(long *)(lVar4 + 8);
            if (lVar10 == 0) {
              return;
            }
          }
          if (*(char *)(lVar10 + 0xa0) != '\0') {
            FUN_009392c8();
          }
          *(undefined8 *)(lVar4 + 8) = 0;
        }
      }
    }
  }
  return;
}

