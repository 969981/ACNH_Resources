
bool FUN_018017d0(long param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  
  (**(code **)(*(long *)(param_1 + 0x11f0) + 0x18))(param_1 + 0x11f0);
  lVar7 = 0;
  do {
    if (*(char *)(*(long *)(param_1 + 0x11f8) + lVar7) == '\0') goto LAB_0180184c;
    lVar2 = *(long *)(param_1 + 0x11f8) + lVar7;
    if (*(char *)(lVar2 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_0180184c;
    }
    if (*(char *)(lVar2 + 2) == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_0180184c;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_0180184c:
  (**(code **)(DAT_0528d020 + 0x18))(&DAT_0528d020);
  lVar2 = 0;
  do {
    iVar5 = (int)lVar7;
    if (DAT_0528d028[lVar2] == '\0') {
LAB_018018a4:
      iVar1 = (int)lVar2;
      if (iVar5 < iVar1) goto LAB_018018ac;
LAB_018018c0:
      if ((int)lVar2 < 1) goto LAB_01801940;
      uVar8 = 0;
      iVar6 = -1;
      goto LAB_018018d8;
    }
    if (DAT_0528d028[lVar2 + 1] == '\0') {
      lVar2 = lVar2 + 1;
      goto LAB_018018a4;
    }
    if (DAT_0528d028[lVar2 + 2] == '\0') {
      lVar2 = lVar2 + 2;
      iVar1 = (int)lVar2;
      if (iVar1 <= iVar5) goto LAB_018018c0;
      goto LAB_018018ac;
    }
    lVar2 = lVar2 + 3;
  } while (lVar2 != 0x80001);
  if (iVar5 < 0) {
LAB_018018ac:
    iVar6 = -1;
  }
  else {
LAB_01801940:
    (**(code **)(DAT_0528d020 + 0x18))(&DAT_0528d020);
    iVar6 = 0;
  }
  goto LAB_0180195c;
  while( true ) {
    pcVar3 = DAT_0528d028;
    lVar4 = lVar2;
    while( true ) {
      lVar4 = lVar4 + -1;
      if (*(char *)(lVar7 + uVar8) != *pcVar3) break;
      if ((*(char *)(lVar7 + uVar8) == '\0') || (lVar7 = lVar7 + 1, pcVar3 = pcVar3 + 1, lVar4 == 0)
         ) goto LAB_01801958;
    }
    uVar8 = uVar8 + 1;
    if (uVar8 == (iVar5 - iVar1) + 1) break;
LAB_018018d8:
    lVar7 = *(long *)(param_1 + 0x11f8);
    (**(code **)(DAT_0528d020 + 0x18))(&DAT_0528d020);
    if ((char *)(lVar7 + uVar8) == DAT_0528d028) {
LAB_01801958:
      iVar6 = (int)uVar8;
      break;
    }
  }
LAB_0180195c:
  return iVar6 != -1;
}

