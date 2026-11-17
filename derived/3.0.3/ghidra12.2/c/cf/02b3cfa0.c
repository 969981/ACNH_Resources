
void FUN_02b3cfa0(long param_1,uint param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar8 = 0;
  do {
    uVar7 = (uint)uVar8;
    piVar1 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar8 * 4);
    if (0x38 < uVar7) {
      piVar1 = (int *)(PTR_DAT_04bbbf90 + 8);
    }
    if (*piVar1 == param_3) goto LAB_02b3cffc;
    uVar6 = 0x39;
    if ((int)uVar7 < 0x39) {
      uVar6 = uVar7 + 1;
    }
    uVar8 = (ulong)uVar6;
  } while (uVar6 != 0x39);
  uVar7 = 0;
LAB_02b3cffc:
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
    FUN_01360b90(puVar2[1],(ulong)param_2);
  }
  if ((uVar7 == 0x32) || (uVar7 == 1)) {
    param_1 = param_1 + 0x10;
  }
  else {
    param_1 = param_1 + 0x6dc8;
  }
  if (param_2 != 0xffffffff) {
    lVar3 = param_1 + 8 + (ulong)param_2 * 0x208;
    if (0x35 < param_2) {
      lVar3 = param_1 + 8;
    }
    lVar4 = *(long *)(lVar3 + 8);
    if (lVar4 != 0) {
      if (*(char *)(lVar4 + 0xa0) != '\0') {
        FUN_009392c8();
        lVar4 = *(long *)(lVar3 + 8);
        if (lVar4 == 0) {
          return;
        }
      }
      if (*(char *)(lVar4 + 0xa0) != '\0') {
        FUN_009392c8();
      }
      *(undefined8 *)(lVar3 + 8) = 0;
    }
  }
  return;
}

