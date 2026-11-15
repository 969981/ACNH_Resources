
undefined8 FUN_0218bba0(long param_1,long param_2,long *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  void *pvVar9;
  void *pvVar10;
  long lVar11;
  long lVar12;
  
  pcVar4 = *(char **)(param_2 + 8);
  cVar8 = 'o';
  pcVar7 = pcVar4;
  pcVar6 = DAT_053fbdb8;
  do {
    pcVar6 = pcVar6 + 1;
    if (*pcVar7 != cVar8) {
      cVar8 = 'm';
      lVar11 = 1;
      pcVar7 = pcVar4;
      pcVar6 = DAT_053fbdc0;
      goto LAB_0218bc14;
    }
    cVar8 = *pcVar6;
    pcVar7 = pcVar7 + 1;
  } while (cVar8 != '\0');
  lVar11 = 0;
  goto LAB_0218bcb4;
  while (cVar8 = *pcVar6, pcVar7 = pcVar7 + 1, cVar8 != '\0') {
LAB_0218bc14:
    pcVar6 = pcVar6 + 1;
    if (*pcVar7 != cVar8) {
      cVar8 = 'm';
      lVar11 = 2;
      pcVar7 = pcVar4;
      pcVar6 = DAT_053fbdc8;
      goto LAB_0218bc44;
    }
  }
  goto LAB_0218bcb4;
LAB_0218bc74:
  pcVar6 = pcVar6 + 1;
  if (*pcVar7 == cVar8) goto code_r0x0218bc80;
  cVar8 = 'p';
  lVar11 = 4;
  pcVar7 = DAT_053fbdd8;
  do {
    pcVar7 = pcVar7 + 1;
    if (*pcVar4 != cVar8) {
      return 0;
    }
    cVar8 = *pcVar7;
    pcVar4 = pcVar4 + 1;
  } while (cVar8 != '\0');
  goto LAB_0218bcb4;
code_r0x0218bc80:
  cVar8 = *pcVar6;
  pcVar7 = pcVar7 + 1;
  if (cVar8 == '\0') goto LAB_0218bcb4;
  goto LAB_0218bc74;
  while (cVar8 = *pcVar6, pcVar7 = pcVar7 + 1, cVar8 != '\0') {
LAB_0218bc44:
    pcVar6 = pcVar6 + 1;
    if (*pcVar7 != cVar8) {
      cVar8 = 's';
      lVar11 = 3;
      pcVar7 = pcVar4;
      pcVar6 = DAT_053fbdd0;
      goto LAB_0218bc74;
    }
  }
LAB_0218bcb4:
  lVar12 = param_1 + 0x1c18 + lVar11 * 0xb0;
  pvVar9 = *(void **)(lVar12 + 8);
  (**(code **)(*param_3 + 0x18))(param_3);
  pvVar10 = (void *)param_3[1];
  if (pvVar9 != pvVar10) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar5 = 0;
    do {
      if (*(char *)(param_3[1] + lVar5) == '\0') goto LAB_0218bd40;
      lVar1 = param_3[1] + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0218bd40;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0218bd40;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0218bd40:
    iVar3 = *(int *)(lVar12 + 0x10);
    iVar2 = (int)lVar5;
    if (iVar3 <= (int)lVar5) {
      iVar2 = iVar3 + -1;
    }
    memcpy(pvVar9,pvVar10,(long)iVar2);
    *(undefined1 *)((long)pvVar9 + (long)iVar2) = 0;
  }
  lVar11 = param_1 + 0x1c18 + lVar11 * 0xb0;
  pvVar9 = *(void **)(lVar11 + 0x60);
  (**(code **)(*param_4 + 0x18))(param_4);
  pvVar10 = (void *)param_4[1];
  if (pvVar9 != pvVar10) {
    (**(code **)(*param_4 + 0x18))(param_4);
    lVar12 = 0;
    do {
      if (*(char *)(param_4[1] + lVar12) == '\0') goto LAB_0218bdec;
      lVar5 = param_4[1] + lVar12;
      if (*(char *)(lVar5 + 1) == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_0218bdec;
      }
      if (*(char *)(lVar5 + 2) == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_0218bdec;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_0218bdec:
    iVar3 = *(int *)(lVar11 + 0x68);
    iVar2 = (int)lVar12;
    if (iVar3 <= (int)lVar12) {
      iVar2 = iVar3 + -1;
    }
    memcpy(pvVar9,pvVar10,(long)iVar2);
    *(undefined1 *)((long)pvVar9 + (long)iVar2) = 0;
  }
  return 1;
}

