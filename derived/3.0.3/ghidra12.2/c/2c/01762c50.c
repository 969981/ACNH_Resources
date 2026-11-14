
void FUN_01762c50(undefined8 *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  
  (**(code **)(*(long *)(param_2 + 0x188) + 0x18))(param_2 + 0x188);
  lVar8 = 0;
  do {
    if (*(char *)(*(long *)(param_2 + 400) + lVar8) == '\0') goto LAB_01762ccc;
    lVar3 = *(long *)(param_2 + 400) + lVar8;
    if (*(char *)(lVar3 + 1) == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_01762ccc;
    }
    if (*(char *)(lVar3 + 2) == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_01762ccc;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  lVar8 = 0;
LAB_01762ccc:
  (**(code **)(DAT_05289f48 + 0x18))(&DAT_05289f48);
  lVar3 = 0;
  do {
    iVar7 = (int)lVar8;
    if (*(char *)(DAT_05289f50 + lVar3) == '\0') {
LAB_01762d24:
      iVar2 = (int)lVar3;
      if (iVar7 < iVar2) goto LAB_01762dd8;
LAB_01762d3c:
      if ((int)lVar3 < 1) goto LAB_01762db4;
      uVar9 = 0;
      goto LAB_01762d50;
    }
    if (*(char *)(DAT_05289f50 + lVar3 + 1) == '\0') {
      lVar3 = lVar3 + 1;
      goto LAB_01762d24;
    }
    if (*(char *)(DAT_05289f50 + lVar3 + 2) == '\0') {
      lVar3 = lVar3 + 2;
      iVar2 = (int)lVar3;
      if (iVar2 <= iVar7) goto LAB_01762d3c;
      goto LAB_01762dd8;
    }
    lVar3 = lVar3 + 3;
  } while (lVar3 != 0x80001);
  if (-1 < iVar7) {
LAB_01762db4:
    (**(code **)(DAT_05289f48 + 0x18))(&DAT_05289f48);
    lVar4 = DAT_05289f50;
LAB_01762df0:
    *param_1 = &PTR_LAB_048f9770;
    param_1[1] = lVar4;
    return;
  }
  goto LAB_01762dd8;
  while( true ) {
    lVar5 = 0;
    while (*(char *)(lVar8 + lVar5) == *(char *)(DAT_05289f50 + lVar5)) {
      lVar4 = DAT_05289f50;
      if ((*(char *)(lVar8 + lVar5) == '\0') ||
         (bVar1 = lVar3 + -1 == lVar5, lVar5 = lVar5 + 1, bVar1)) goto LAB_01762dd0;
    }
    uVar9 = uVar9 + 1;
    if (uVar9 == (iVar7 - iVar2) + 1) break;
LAB_01762d50:
    lVar8 = *(long *)(param_2 + 400) + uVar9;
    (**(code **)(DAT_05289f48 + 0x18))(&DAT_05289f48);
    if (lVar8 == DAT_05289f50) {
      lVar4 = lVar8;
LAB_01762dd0:
      if ((int)uVar9 != -1) goto LAB_01762df0;
      break;
    }
  }
LAB_01762dd8:
  uVar6 = *(undefined8 *)(param_2 + 400);
  *param_1 = &PTR_LAB_048f9770;
  param_1[1] = uVar6;
  return;
}

