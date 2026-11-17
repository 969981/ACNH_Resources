
undefined8 FUN_02b3d6a0(long param_1,undefined8 param_2,uint param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  lVar7 = *(long *)(param_1 + 8);
  iVar4 = FUN_02a8ed80(param_2);
  if (iVar4 == 6) {
    uVar9 = 0;
    do {
      uVar8 = (uint)uVar9;
      piVar1 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar9 * 4);
      if (0x38 < uVar8) {
        piVar1 = (int *)(PTR_DAT_04bbbf90 + 8);
      }
      if (*piVar1 == **(int **)(param_1 + 0x10)) goto LAB_02b3d71c;
      uVar6 = 0x39;
      if ((int)uVar8 < 0x39) {
        uVar6 = uVar8 + 1;
      }
      uVar9 = (ulong)uVar6;
    } while (uVar6 != 0x39);
    uVar8 = 0;
LAB_02b3d71c:
    if (uVar8 == 0) {
      plVar5 = (long *)(DAT_0519d040 + 0x1f8);
    }
    else {
      plVar5 = (long *)(DAT_0519d040 + 0x30) + uVar8;
      if (0x38 < uVar8) {
        plVar5 = (long *)(DAT_0519d040 + 0x30);
      }
    }
    puVar2 = &DAT_05636dd8;
    if (*plVar5 != 0) {
      puVar2 = (undefined8 *)(*plVar5 + 0x148);
    }
    if (puVar2[1] != 0) {
      FUN_01360b90(puVar2[1],param_3);
    }
    if ((uVar8 == 0x32) || (uVar8 == 1)) {
      lVar7 = lVar7 + 0x10;
    }
    else {
      lVar7 = lVar7 + 0x6dc8;
    }
    if (param_3 != 0xffffffff) {
      lVar3 = lVar7 + 8 + (ulong)param_3 * 0x208;
      if (0x35 < param_3) {
        lVar3 = lVar7 + 8;
      }
      lVar7 = *(long *)(lVar3 + 8);
      if (lVar7 != 0) {
        if (*(char *)(lVar7 + 0xa0) != '\0') {
          FUN_009392c8();
          lVar7 = *(long *)(lVar3 + 8);
          if (lVar7 == 0) {
            return 1;
          }
        }
        if (*(char *)(lVar7 + 0xa0) != '\0') {
          FUN_009392c8();
        }
        *(undefined8 *)(lVar3 + 8) = 0;
      }
    }
  }
  return 1;
}

