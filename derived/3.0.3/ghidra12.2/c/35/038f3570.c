
undefined8 FUN_038f3570(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  char *pcVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  
  puVar1 = PTR_DAT_04bb2120;
  lVar8 = *param_1;
  lVar4 = lVar8;
  do {
    if (lVar4 == 0) {
      return 0;
    }
    plVar6 = (long *)(lVar8 + 0x28);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    uVar11 = 0;
    do {
      if (*(char *)(*(long *)(lVar8 + 0x30) + uVar11) == '\0') goto LAB_038f3634;
      lVar4 = *(long *)(lVar8 + 0x30) + uVar11;
      if (*(char *)(lVar4 + 1) == '\0') {
        uVar11 = uVar11 + 1;
        goto LAB_038f3634;
      }
      if (*(char *)(lVar4 + 2) == '\0') {
        uVar11 = uVar11 + 2;
        goto LAB_038f3634;
      }
      uVar11 = uVar11 + 3;
    } while (uVar11 != 0x80001);
    uVar11 = 0;
LAB_038f3634:
    (**(code **)(*(long *)(lVar8 + 0x28) + 0x18))(plVar6);
    (**(code **)(*(long *)(lVar8 + 0x28) + 0x18))(plVar6);
    pcVar7 = *(char **)(lVar8 + 0x30);
    (**(code **)(*param_2 + 0x18))(param_2);
    uVar10 = (uint)uVar11;
    if ((0 < (int)uVar10) && (pcVar7 != (char *)param_2[1])) {
      uVar9 = uVar10;
      if (0x7ffff < (int)uVar10) {
        uVar9 = 0x80000;
      }
      uVar5 = (ulong)uVar9;
      pcVar7 = (char *)param_2[1];
      pcVar3 = *(char **)(lVar8 + 0x30);
      do {
        uVar5 = uVar5 - 1;
        if (*pcVar3 != *pcVar7) goto LAB_038f35cc;
      } while ((*pcVar3 != '\0') && (pcVar7 = pcVar7 + 1, pcVar3 = pcVar3 + 1, uVar5 != 0));
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar2 = param_2[1];
    lVar4 = 0;
    do {
      if (*(char *)(lVar2 + lVar4) == '\0') goto LAB_038f370c;
      if (*(char *)(lVar2 + lVar4 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_038f370c;
      }
      if (*(char *)(lVar2 + lVar4 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_038f370c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_038f370c:
    pcVar7 = puVar1;
    if ((int)uVar10 <= (int)lVar4 && -1 < (int)uVar10) {
      pcVar7 = (char *)(lVar2 + (uVar11 & 0xffffffff));
    }
    if (*pcVar7 == '/') {
LAB_038f3784:
      *param_1 = lVar8;
      return 1;
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar2 = param_2[1];
    lVar4 = 0;
    do {
      if (*(char *)(lVar2 + lVar4) == '\0') goto LAB_038f35b4;
      if (*(char *)(lVar2 + lVar4 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_038f35b4;
      }
      if (*(char *)(lVar2 + lVar4 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_038f35b4;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_038f35b4:
    pcVar7 = puVar1;
    if ((int)uVar10 <= (int)lVar4 && -1 < (int)uVar10) {
      pcVar7 = (char *)(lVar2 + (uVar11 & 0xffffffff));
    }
    if (*pcVar7 == '\0') goto LAB_038f3784;
LAB_038f35cc:
    lVar4 = *(long *)(lVar8 + 0x18);
    lVar8 = lVar4 + -8;
  } while( true );
}

