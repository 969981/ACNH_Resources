
undefined1  [16]
FUN_016e80f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,short *param_4)

{
  int *piVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  short sVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 *puVar10;
  short sVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 extraout_d0;
  undefined1 auVar15 [16];
  
  sVar2 = *param_4;
  lVar6 = *(long *)PTR_DAT_04bb2720;
  if (lVar6 == 0) {
    puVar14 = &DAT_055c04a0;
  }
  else {
    puVar14 = &DAT_055c04a0;
    if (*(long *)(lVar6 + 0x330) != 0) {
      puVar14 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar6 + 0x338));
      iVar4 = FUN_006bd550(*puVar14,0);
      puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar14 = &DAT_055c04a0;
      }
      param_1 = extraout_d0;
    }
  }
  bVar3 = DAT_055c1b60 == &DAT_055c1b58;
  puVar10 = DAT_055c1b60 + -8;
  if (!bVar3) {
    sVar5 = 0;
    puVar12 = DAT_055c1b60;
    puVar13 = puVar10;
    do {
      if (*(int *)(puVar13 + 7) == *(int *)(puVar14 + 7)) {
        if (sVar5 != -1) goto LAB_016e81e8;
        break;
      }
      puVar12 = (undefined8 *)puVar12[1];
      sVar5 = sVar5 + 1;
      puVar13 = puVar12 + -8;
    } while (puVar12 != &DAT_055c1b58);
  }
  sVar5 = 0;
LAB_016e81e8:
  if ((sVar2 == sVar5) && ((char)param_4[1] == '\0')) {
LAB_016e81f8:
    auVar15 = FUN_0093a950(param_1,*(long *)PTR_DAT_04bb27c8 + 0x28,param_2,param_3);
    return auVar15;
  }
  if ((puVar10 != &DAT_055c1b18) && (sVar11 = *param_4, puVar14 = DAT_055c1b60, sVar11 != 0)) {
    do {
      puVar14 = (undefined8 *)puVar14[1];
      sVar11 = sVar11 + -1;
      bVar3 = puVar14 == &DAT_055c1b58;
    } while (!bVar3 && sVar11 != 0);
    puVar10 = puVar14 + -8;
  }
  puVar14 = &DAT_055c04a0;
  if (!bVar3) {
    puVar14 = puVar10;
  }
  uVar8 = 0;
  do {
    piVar1 = &DAT_0516b108 + uVar8;
    uVar7 = (uint)uVar8;
    if (0x38 < uVar7) {
      piVar1 = &DAT_0516b108;
    }
    if (*piVar1 == *(int *)(puVar14 + 7)) goto LAB_016e82ac;
    uVar9 = 0x39;
    if ((int)uVar7 < 0x39) {
      uVar9 = uVar7 + 1;
    }
    uVar8 = (ulong)uVar9;
  } while (uVar9 != 0x39);
  uVar7 = 0;
LAB_016e82ac:
  if (uVar7 == 0) {
    param_1 = 0;
    auVar15 = ZEXT816(0);
    if (sVar2 == sVar5) goto LAB_016e81f8;
  }
  else if ((uVar7 == 0x32) || (uVar7 == 1)) {
    if ((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0x90) == 0)) {
      auVar15 = ZEXT816(0xc3fa0000);
    }
    else {
      auVar15 = FUN_0094ba6c(DAT_04cfae30 + 0x28,param_2,param_3);
    }
  }
  else {
    auVar15 = FUN_016e87e0(param_2,param_3,param_4);
  }
  return auVar15;
}

