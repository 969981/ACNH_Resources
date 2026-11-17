
undefined8 FUN_02b3d890(long param_1,long param_2,uint param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  
  if (((*(byte *)(param_2 + 8) & 1) == 0) &&
     (lVar4 = *(long *)(param_1 + 8), *(int *)(param_2 + 0xc) == **(int **)(param_1 + 0x10))) {
    uVar8 = 0;
    do {
      uVar7 = (uint)uVar8;
      piVar1 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar8 * 4);
      if (0x38 < uVar7) {
        piVar1 = (int *)(PTR_DAT_04bbbf90 + 8);
      }
      if (*piVar1 == **(int **)(param_1 + 0x18)) goto LAB_02b3d910;
      uVar6 = 0x39;
      if ((int)uVar7 < 0x39) {
        uVar6 = uVar7 + 1;
      }
      uVar8 = (ulong)uVar6;
    } while (uVar6 != 0x39);
    uVar7 = 0;
LAB_02b3d910:
    if (uVar7 == 0) {
      plVar5 = (long *)(DAT_0519d040 + 0x1f8);
    }
    else {
      plVar5 = (long *)(DAT_0519d040 + 0x30) + uVar7;
      if (0x38 < uVar7) {
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
    if ((uVar7 == 0x32) || (uVar7 == 1)) {
      lVar4 = lVar4 + 0x10;
    }
    else {
      lVar4 = lVar4 + 0x6dc8;
    }
    if (param_3 != 0xffffffff) {
      lVar3 = lVar4 + 8 + (ulong)param_3 * 0x208;
      if (0x35 < param_3) {
        lVar3 = lVar4 + 8;
      }
      lVar4 = *(long *)(lVar3 + 8);
      if (lVar4 != 0) {
        if (*(char *)(lVar4 + 0xa0) != '\0') {
          FUN_009392c8();
          lVar4 = *(long *)(lVar3 + 8);
          if (lVar4 == 0) {
            return 1;
          }
        }
        if (*(char *)(lVar4 + 0xa0) != '\0') {
          FUN_009392c8();
        }
        *(undefined8 *)(lVar3 + 8) = 0;
      }
    }
  }
  return 1;
}

