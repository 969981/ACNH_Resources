
void FUN_02b3d3a0(long param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  long *plVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  uint uVar13;
  
  if (param_2 == -0x24a26848) {
    if (*(char *)(param_1 + 0xdd70) == '\0') goto LAB_02b3d420;
    lVar8 = 0xdcd0;
  }
  else {
    if ((param_2 != 0x6622bd46) || (*(char *)(param_1 + 0xdc20) == '\0')) goto LAB_02b3d420;
    FUN_009392c8(param_1 + 0xdb80);
    lVar8 = 0xdc28;
  }
  FUN_009392c8(param_1 + lVar8);
LAB_02b3d420:
  puVar7 = PTR_DAT_04bbbf90;
  puVar6 = PTR_DAT_04bb27a8;
  uVar9 = 0;
  piVar1 = (int *)(PTR_DAT_04bbbf90 + 8);
  do {
    uVar11 = 0;
    do {
      uVar10 = (uint)uVar11;
      piVar2 = piVar1 + uVar11;
      if (0x38 < uVar10) {
        piVar2 = piVar1;
      }
      if (*piVar2 == param_2) goto LAB_02b3d4e4;
      piVar2 = (int *)(puVar7 + 8);
      uVar13 = 0x39;
      if ((int)uVar10 < 0x39) {
        uVar13 = uVar10 + 1;
      }
      piVar4 = piVar2 + uVar13;
      if (0x38 < uVar13) {
        piVar4 = piVar2;
      }
      uVar10 = uVar13;
      if (*piVar4 == param_2) goto LAB_02b3d4e4;
      uVar10 = 0x39;
      if ((int)uVar13 < 0x39) {
        uVar10 = uVar13 + 1;
      }
      piVar4 = piVar2 + uVar10;
      if (0x38 < uVar10) {
        piVar4 = piVar2;
      }
      if (*piVar4 == param_2) goto LAB_02b3d4e4;
      uVar13 = 0x39;
      if ((int)uVar10 < 0x39) {
        uVar13 = uVar10 + 1;
      }
      uVar11 = (ulong)uVar13;
    } while (uVar13 != 0x39);
    uVar10 = 0;
LAB_02b3d4e4:
    if (uVar10 == 0) {
      plVar12 = (long *)(*(long *)puVar6 + 0x1f8);
    }
    else {
      plVar3 = (long *)(*(long *)puVar6 + 0x30);
      plVar12 = plVar3 + uVar10;
      if (0x38 < uVar10) {
        plVar12 = plVar3;
      }
    }
    puVar5 = &DAT_05636dd8;
    if (*plVar12 != 0) {
      puVar5 = (undefined8 *)(*plVar12 + 0x148);
    }
    if (puVar5[1] != 0) {
      FUN_01360b90(puVar5[1],uVar9 & 0xffffffff);
    }
    lVar8 = param_1 + 0x10;
    if ((uVar10 != 1) && (uVar10 != 0x32)) {
      lVar8 = param_1 + 0x6dc8;
    }
    plVar12 = (long *)(lVar8 + uVar9 * 0x208 + 0x10);
    lVar8 = *plVar12;
    if (lVar8 != 0) {
      if (*(char *)(lVar8 + 0xa0) != '\0') {
        FUN_009392c8();
        lVar8 = *plVar12;
        if (lVar8 == 0) goto LAB_02b3d464;
      }
      if (*(char *)(lVar8 + 0xa0) != '\0') {
        FUN_009392c8();
      }
      *plVar12 = 0;
    }
LAB_02b3d464:
    uVar9 = uVar9 + 1;
    if (uVar9 == 0x36) {
      return;
    }
  } while( true );
}

