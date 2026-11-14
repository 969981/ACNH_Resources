
bool FUN_01805970(long param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  
  (**(code **)(*(long *)(param_1 + 0x278) + 0x18))(param_1 + 0x278);
  lVar7 = 0;
  do {
    if (*(char *)(*(long *)(param_1 + 0x280) + lVar7) == '\0') goto LAB_018059ec;
    lVar2 = *(long *)(param_1 + 0x280) + lVar7;
    if (*(char *)(lVar2 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_018059ec;
    }
    if (*(char *)(lVar2 + 2) == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_018059ec;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_018059ec:
  (**(code **)(DAT_0528d020 + 0x18))(&DAT_0528d020);
  lVar2 = 0;
  do {
    iVar5 = (int)lVar7;
    if (DAT_0528d028[lVar2] == '\0') {
LAB_01805a44:
      iVar1 = (int)lVar2;
      if (iVar5 < iVar1) goto LAB_01805a4c;
LAB_01805a60:
      if ((int)lVar2 < 1) goto LAB_01805ae0;
      uVar8 = 0;
      iVar6 = -1;
      goto LAB_01805a78;
    }
    if (DAT_0528d028[lVar2 + 1] == '\0') {
      lVar2 = lVar2 + 1;
      goto LAB_01805a44;
    }
    if (DAT_0528d028[lVar2 + 2] == '\0') {
      lVar2 = lVar2 + 2;
      iVar1 = (int)lVar2;
      if (iVar1 <= iVar5) goto LAB_01805a60;
      goto LAB_01805a4c;
    }
    lVar2 = lVar2 + 3;
  } while (lVar2 != 0x80001);
  if (iVar5 < 0) {
LAB_01805a4c:
    iVar6 = -1;
  }
  else {
LAB_01805ae0:
    (**(code **)(DAT_0528d020 + 0x18))(&DAT_0528d020);
    iVar6 = 0;
  }
  goto LAB_01805afc;
  while( true ) {
    pcVar3 = DAT_0528d028;
    lVar4 = lVar2;
    while( true ) {
      lVar4 = lVar4 + -1;
      if (*(char *)(lVar7 + uVar8) != *pcVar3) break;
      if ((*(char *)(lVar7 + uVar8) == '\0') || (lVar7 = lVar7 + 1, pcVar3 = pcVar3 + 1, lVar4 == 0)
         ) goto LAB_01805af8;
    }
    uVar8 = uVar8 + 1;
    if (uVar8 == (iVar5 - iVar1) + 1) break;
LAB_01805a78:
    lVar7 = *(long *)(param_1 + 0x280);
    (**(code **)(DAT_0528d020 + 0x18))(&DAT_0528d020);
    if ((char *)(lVar7 + uVar8) == DAT_0528d028) {
LAB_01805af8:
      iVar6 = (int)uVar8;
      break;
    }
  }
LAB_01805afc:
  return iVar6 != -1;
}

