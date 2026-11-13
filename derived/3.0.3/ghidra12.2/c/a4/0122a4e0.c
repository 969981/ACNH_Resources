
bool FUN_0122a4e0(short param_1)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  undefined8 *puVar4;
  short sVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 *puVar10;
  
  puVar4 = DAT_055c1b60 + -8;
  bVar3 = DAT_055c1b60 == &DAT_055c1b58;
  puVar7 = puVar4;
  if ((param_1 != 0) && (puVar4 != &DAT_055c1b18)) {
    puVar7 = DAT_055c1b60;
    sVar5 = param_1;
    do {
      puVar7 = (undefined8 *)puVar7[1];
      sVar5 = sVar5 + -1;
      bVar3 = puVar7 == &DAT_055c1b58;
    } while (!bVar3 && sVar5 != 0);
    puVar7 = puVar7 + -8;
  }
  puVar10 = &DAT_055c04a0;
  if (!bVar3) {
    puVar10 = puVar7;
  }
  uVar8 = 0;
  while( true ) {
    piVar1 = &DAT_0516b108 + uVar8;
    uVar6 = (uint)uVar8;
    if (0x38 < uVar6) {
      piVar1 = &DAT_0516b108;
    }
    if (*piVar1 == *(int *)(puVar10 + 7)) break;
    uVar9 = 0x39;
    if ((int)uVar6 < 0x39) {
      uVar9 = uVar6 + 1;
    }
    uVar8 = (ulong)uVar9;
    if (uVar9 == 0x39) {
      return true;
    }
  }
  if (uVar6 == 0) {
    return true;
  }
  uVar8 = (ulong)(short)DAT_04c487d4;
  if (uVar8 != 0xffffffffffffffff) {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)(short)DAT_04c487d4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x11 & 1) != 0) {
      return true;
    }
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar8 & 0xffffffff) * 8);
    if (0xff < DAT_04c487d4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x15 & 1) != 0) {
      return true;
    }
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar8 & 0xffffffff) * 8);
    if (0xff < DAT_04c487d4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x1a & 1) != 0) {
      return true;
    }
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar8 & 0xffffffff) * 8);
    if (0xff < DAT_04c487d4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x19 & 1) != 0) {
      return true;
    }
  }
  if (puVar4 != &DAT_055c1b18) {
    sVar5 = 0;
    puVar7 = DAT_055c1b60;
    puVar10 = puVar4;
    do {
      if (*(int *)(puVar10 + 7) == 0x565b4aba) goto LAB_0122a6e8;
      puVar7 = (undefined8 *)puVar7[1];
      sVar5 = sVar5 + 1;
      puVar10 = puVar7 + -8;
    } while (puVar7 != &DAT_055c1b58);
    sVar5 = -1;
LAB_0122a6e8:
    if (sVar5 == param_1) {
      return true;
    }
    sVar5 = 0;
    puVar7 = DAT_055c1b60;
    puVar10 = puVar4;
    do {
      if (*(int *)(puVar10 + 7) == -0x10e0fba8) goto LAB_0122a734;
      puVar7 = (undefined8 *)puVar7[1];
      sVar5 = sVar5 + 1;
      puVar10 = puVar7 + -8;
    } while (puVar7 != &DAT_055c1b58);
    sVar5 = -1;
LAB_0122a734:
    if (sVar5 == param_1) {
      return true;
    }
    if (puVar4 != &DAT_055c1b18) {
      sVar5 = 0;
      puVar7 = DAT_055c1b60;
      puVar10 = puVar4;
      do {
        if (*(int *)(puVar10 + 7) == -0x7975b8e8) goto LAB_0122a784;
        puVar7 = (undefined8 *)puVar7[1];
        sVar5 = sVar5 + 1;
        puVar10 = puVar7 + -8;
      } while (puVar7 != &DAT_055c1b58);
      sVar5 = -1;
LAB_0122a784:
      if (sVar5 == param_1) {
        return true;
      }
      sVar5 = 0;
      puVar7 = DAT_055c1b60;
      do {
        if (*(int *)(puVar4 + 7) == -0x3e092032) goto LAB_0122a7d0;
        puVar7 = (undefined8 *)puVar7[1];
        sVar5 = sVar5 + 1;
        puVar4 = puVar7 + -8;
      } while (puVar7 != &DAT_055c1b58);
      sVar5 = -1;
      goto LAB_0122a7d0;
    }
  }
  sVar5 = -1;
  if (param_1 == -1) {
    return true;
  }
LAB_0122a7d0:
  return sVar5 == param_1;
}

