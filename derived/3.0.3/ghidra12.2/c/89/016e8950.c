
undefined8 FUN_016e8950(undefined8 param_1,short *param_2)

{
  int *piVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  short sVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  short sVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  sVar2 = *param_2;
  lVar7 = *(long *)PTR_DAT_04bb2720;
  if (lVar7 == 0) {
    puVar15 = &DAT_055c04a0;
  }
  else {
    puVar15 = &DAT_055c04a0;
    if (*(long *)(lVar7 + 0x330) != 0) {
      puVar15 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar7 + 0x338));
      iVar4 = FUN_006bd550(*puVar15,0);
      puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar15 = &DAT_055c04a0;
      }
    }
  }
  bVar3 = DAT_055c1b60 == &DAT_055c1b58;
  puVar11 = DAT_055c1b60 + -8;
  if (!bVar3) {
    sVar6 = 0;
    puVar13 = DAT_055c1b60;
    puVar14 = puVar11;
    do {
      if (*(int *)(puVar14 + 7) == *(int *)(puVar15 + 7)) {
        if (sVar6 != -1) goto LAB_016e8a44;
        break;
      }
      puVar13 = (undefined8 *)puVar13[1];
      sVar6 = sVar6 + 1;
      puVar14 = puVar13 + -8;
    } while (puVar13 != &DAT_055c1b58);
  }
  sVar6 = 0;
LAB_016e8a44:
  if ((sVar2 != sVar6) || ((char)param_2[1] != '\0')) {
    if (puVar11 != &DAT_055c1b18) {
      sVar12 = *param_2;
      puVar15 = DAT_055c1b60;
      if (sVar12 != 0) {
        do {
          puVar15 = (undefined8 *)puVar15[1];
          sVar12 = sVar12 + -1;
          bVar3 = puVar15 == &DAT_055c1b58;
        } while (!bVar3 && sVar12 != 0);
        puVar11 = puVar15 + -8;
      }
    }
    puVar15 = &DAT_055c04a0;
    if (!bVar3) {
      puVar15 = puVar11;
    }
    uVar9 = 0;
    do {
      piVar1 = &DAT_0516b108 + uVar9;
      uVar8 = (uint)uVar9;
      if (0x38 < uVar8) {
        piVar1 = &DAT_0516b108;
      }
      if (*piVar1 == *(int *)(puVar15 + 7)) goto LAB_016e8aec;
      uVar10 = 0x39;
      if ((int)uVar8 < 0x39) {
        uVar10 = uVar8 + 1;
      }
      uVar9 = (ulong)uVar10;
    } while (uVar10 != 0x39);
    uVar8 = 0;
LAB_016e8aec:
    if (uVar8 != 0) {
      uVar5 = FUN_0097bc40(uVar8,param_1);
      return uVar5;
    }
    if (sVar2 != sVar6) {
      return 0;
    }
  }
  uVar5 = FUN_0097b830(param_1);
  return uVar5;
}

