
int FUN_008c8970(long *param_1,long param_2)

{
  undefined *__src;
  long *plVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  undefined *__dest;
  ulong uVar11;
  char *pcVar12;
  undefined *local_60;
  long local_58;
  
  plVar1 = (long *)*param_1;
  iVar10 = (int)param_1[1];
  uVar11 = param_1[1] & 0xffffffff;
  local_58 = param_1[3];
  local_60 = PTR_DAT_04bb2020 + 0x10;
  (**(code **)(*plVar1 + 0x18))(plVar1);
  lVar6 = plVar1[1];
  lVar8 = 0;
  do {
    if (*(char *)(lVar6 + lVar8) == '\0') {
LAB_008c8a18:
      iVar7 = (int)lVar8;
      goto joined_r0x008c8a18;
    }
    if (*(char *)(lVar6 + lVar8 + 1) == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_008c8a18;
    }
    if (*(char *)(lVar6 + lVar8 + 2) == '\0') {
      iVar7 = (int)lVar8 + 2;
      if (iVar10 < 0) goto LAB_008c8ae8;
      goto LAB_008c8a1c;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  iVar7 = 0;
joined_r0x008c8a18:
  if (-1 < iVar10) {
LAB_008c8a1c:
    if (iVar10 <= iVar7) {
      pcVar12 = (char *)(lVar6 + uVar11);
      if (*pcVar12 != '\0') {
        do {
          (**(code **)(local_60 + 0x18))(&local_60);
          uVar9 = 0;
          bVar5 = true;
          cVar3 = *pcVar12;
          do {
            if (*(char *)(local_58 + uVar9) == '\0') break;
            if (*(char *)(local_58 + uVar9) == cVar3) {
              if (bVar5) goto LAB_008c8adc;
              break;
            }
            cVar4 = *(char *)(local_58 + uVar9 + 1);
            if (cVar4 == '\0') break;
            if (cVar4 == cVar3) goto LAB_008c8adc;
            cVar4 = *(char *)(local_58 + uVar9 + 2);
            if (cVar4 == '\0') break;
            if (cVar4 == cVar3) goto LAB_008c8adc;
            bVar5 = uVar9 < 0x7fffe;
            uVar9 = uVar9 + 3;
          } while (uVar9 != 0x80001);
          uVar11 = uVar11 + 1;
          pcVar12 = (char *)(plVar1[1] + uVar11);
        } while (*pcVar12 != '\0');
LAB_008c8adc:
        iVar10 = (int)uVar11;
      }
      iVar10 = iVar10 + 1;
    }
  }
LAB_008c8ae8:
  uVar2 = *(uint *)(param_1 + 1);
  param_1 = (long *)*param_1;
  uVar11 = (ulong)(iVar10 + ~uVar2);
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar6 = param_1[1];
  lVar8 = 0;
  do {
    if (*(char *)(lVar6 + lVar8) == '\0') goto LAB_008c8b4c;
    if (*(char *)(lVar6 + lVar8 + 1) == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_008c8b4c;
    }
    if (*(char *)(lVar6 + lVar8 + 2) == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_008c8b4c;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  lVar8 = 0;
LAB_008c8b4c:
  __dest = *(undefined **)(param_2 + 8);
  __src = PTR_DAT_04c4b988;
  if ((int)uVar2 <= (int)lVar8 && -1 < (int)uVar2) {
    __src = (undefined *)(lVar6 + (ulong)uVar2);
  }
  if (__dest == __src) {
    iVar10 = 0;
  }
  else {
    if ((int)(iVar10 + ~uVar2) < 0) {
      uVar11 = 0;
      do {
        if (__src[uVar11] == '\0') goto LAB_008c8b78;
        if (__src[uVar11 + 1] == '\0') {
          uVar11 = uVar11 + 1;
          goto LAB_008c8b78;
        }
        if (__src[uVar11 + 2] == '\0') {
          uVar11 = uVar11 + 2;
          goto LAB_008c8b78;
        }
        uVar11 = uVar11 + 3;
      } while (uVar11 != 0x80001);
      uVar11 = 0;
    }
LAB_008c8b78:
    iVar10 = (int)uVar11;
    if (*(int *)(param_2 + 0x10) <= (int)uVar11) {
      iVar10 = *(int *)(param_2 + 0x10) + -1;
    }
    memcpy(__dest,__src,(long)iVar10);
    __dest[iVar10] = 0;
  }
  return iVar10;
}

