
undefined8 FUN_0218be40(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  char cVar7;
  void *pvVar8;
  void *pvVar9;
  long *plVar10;
  long lVar11;
  
  pcVar3 = *(char **)(param_2 + 8);
  cVar7 = 'o';
  pcVar6 = pcVar3;
  pcVar5 = DAT_053fbdb8;
  do {
    pcVar5 = pcVar5 + 1;
    if (*pcVar6 != cVar7) {
      cVar7 = 'm';
      lVar11 = 1;
      pcVar6 = pcVar3;
      pcVar5 = DAT_053fbdc0;
      goto LAB_0218beb4;
    }
    cVar7 = *pcVar5;
    pcVar6 = pcVar6 + 1;
  } while (cVar7 != '\0');
  lVar11 = 0;
  goto LAB_0218bf54;
  while (cVar7 = *pcVar5, pcVar6 = pcVar6 + 1, cVar7 != '\0') {
LAB_0218beb4:
    pcVar5 = pcVar5 + 1;
    if (*pcVar6 != cVar7) {
      cVar7 = 'm';
      lVar11 = 2;
      pcVar6 = pcVar3;
      pcVar5 = DAT_053fbdc8;
      goto LAB_0218bee4;
    }
  }
  goto LAB_0218bf54;
LAB_0218bf14:
  pcVar5 = pcVar5 + 1;
  if (*pcVar6 == cVar7) goto code_r0x0218bf20;
  cVar7 = 'p';
  lVar11 = 4;
  pcVar6 = DAT_053fbdd8;
  do {
    pcVar6 = pcVar6 + 1;
    if (*pcVar3 != cVar7) {
      return 0;
    }
    cVar7 = *pcVar6;
    pcVar3 = pcVar3 + 1;
  } while (cVar7 != '\0');
  goto LAB_0218bf54;
code_r0x0218bf20:
  cVar7 = *pcVar5;
  pcVar6 = pcVar6 + 1;
  if (cVar7 == '\0') goto LAB_0218bf54;
  goto LAB_0218bf14;
  while (cVar7 = *pcVar5, pcVar6 = pcVar6 + 1, cVar7 != '\0') {
LAB_0218bee4:
    pcVar5 = pcVar5 + 1;
    if (*pcVar6 != cVar7) {
      cVar7 = 's';
      lVar11 = 3;
      pcVar6 = pcVar3;
      pcVar5 = DAT_053fbdd0;
      goto LAB_0218bf14;
    }
  }
LAB_0218bf54:
  pvVar8 = *(void **)(param_3 + 8);
  plVar10 = (long *)(param_1 + 0x1c18 + lVar11 * 0xb0);
  (**(code **)(*plVar10 + 0x18))(plVar10);
  pvVar9 = (void *)plVar10[1];
  if (pvVar8 != pvVar9) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
    lVar4 = 0;
    do {
      if (*(char *)(plVar10[1] + lVar4) == '\0') goto LAB_0218bfe0;
      lVar1 = plVar10[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0218bfe0;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0218bfe0;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0218bfe0:
    iVar2 = (int)lVar4;
    if (*(int *)(param_3 + 0x10) <= (int)lVar4) {
      iVar2 = *(int *)(param_3 + 0x10) + -1;
    }
    memcpy(pvVar8,pvVar9,(long)iVar2);
    *(undefined1 *)((long)pvVar8 + (long)iVar2) = 0;
  }
  pvVar8 = *(void **)(param_4 + 8);
  lVar11 = param_1 + 0x1c18 + lVar11 * 0xb0;
  plVar10 = (long *)(lVar11 + 0x58);
  (**(code **)(*plVar10 + 0x18))(plVar10);
  pvVar9 = *(void **)(lVar11 + 0x60);
  if (pvVar8 != pvVar9) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
    lVar4 = 0;
    do {
      if (*(char *)(*(long *)(lVar11 + 0x60) + lVar4) == '\0') goto LAB_0218c08c;
      lVar1 = *(long *)(lVar11 + 0x60) + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0218c08c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0218c08c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0218c08c:
    iVar2 = (int)lVar4;
    if (*(int *)(param_4 + 0x10) <= (int)lVar4) {
      iVar2 = *(int *)(param_4 + 0x10) + -1;
    }
    memcpy(pvVar8,pvVar9,(long)iVar2);
    *(undefined1 *)((long)pvVar8 + (long)iVar2) = 0;
  }
  return 1;
}

