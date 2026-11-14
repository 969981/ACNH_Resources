
undefined8
FUN_01733670(long *param_1,long *param_2,byte param_3,undefined4 *param_4,undefined4 *param_5,
            uint param_6,byte param_7,byte param_8)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  char *pcVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  void *__dest;
  void *__src;
  char *pcVar9;
  
  if ((param_7 & 1) != 0) {
    if ((char)param_1[0xf] != '\0') {
      (**(code **)(*param_1 + 0x18))(param_1);
      (**(code **)(*param_1 + 0x18))(param_1);
      pcVar9 = (char *)param_1[1];
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar5 = (char *)param_2[1];
      if (pcVar9 == pcVar5) {
        return 1;
      }
      pcVar9 = (char *)param_1[1];
      if (*pcVar9 == *pcVar5) {
        if (*pcVar9 == '\0') {
          return 1;
        }
        lVar8 = 0;
        while ((lVar8 != 0x80000 && (pcVar9[lVar8 + 1] == pcVar5[lVar8 + 1]))) {
          if (pcVar9[lVar8 + 1] == '\0') {
            return 1;
          }
          lVar7 = lVar8 + 2;
          if (pcVar9[lVar7] != pcVar5[lVar8 + 2]) break;
          lVar8 = lVar8 + 2;
          if (pcVar9[lVar7] == '\0') {
            return 1;
          }
        }
      }
    }
    if ((char)param_1[0x1f] != '\0') {
      plVar6 = param_1 + 0x10;
      (**(code **)(*plVar6 + 0x18))(plVar6);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      pcVar9 = (char *)param_1[0x11];
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar5 = (char *)param_2[1];
      if (pcVar9 == pcVar5) {
        return 1;
      }
      pcVar9 = (char *)param_1[0x11];
      if (*pcVar9 == *pcVar5) {
        if (*pcVar9 == '\0') {
          return 1;
        }
        lVar8 = 0;
        while ((lVar8 != 0x80000 && (pcVar9[lVar8 + 1] == pcVar5[lVar8 + 1]))) {
          if (pcVar9[lVar8 + 1] == '\0') {
            return 1;
          }
          lVar7 = lVar8 + 2;
          if (pcVar9[lVar7] != pcVar5[lVar8 + 2]) break;
          lVar8 = lVar8 + 2;
          if (pcVar9[lVar7] == '\0') {
            return 1;
          }
        }
      }
    }
    if ((char)param_1[0x2f] != '\0') {
      (**(code **)(param_1[0x20] + 0x18))(param_1 + 0x20);
      (**(code **)(param_1[0x20] + 0x18))(param_1 + 0x20);
      pcVar9 = (char *)param_1[0x21];
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar5 = (char *)param_2[1];
      if (pcVar9 == pcVar5) {
        return 1;
      }
      pcVar9 = (char *)param_1[0x21];
      if (*pcVar9 == *pcVar5) {
        if (*pcVar9 == '\0') {
          return 1;
        }
        lVar8 = 0;
        while ((lVar8 != 0x80000 && (pcVar9[lVar8 + 1] == pcVar5[lVar8 + 1]))) {
          if (pcVar9[lVar8 + 1] == '\0') {
            return 1;
          }
          lVar7 = lVar8 + 2;
          if (pcVar9[lVar7] != pcVar5[lVar8 + 2]) break;
          lVar8 = lVar8 + 2;
          if (pcVar9[lVar7] == '\0') {
            return 1;
          }
        }
      }
    }
    if ((char)param_1[0x3f] != '\0') {
      (**(code **)(param_1[0x30] + 0x18))(param_1 + 0x30);
      (**(code **)(param_1[0x30] + 0x18))(param_1 + 0x30);
      pcVar9 = (char *)param_1[0x31];
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar5 = (char *)param_2[1];
      if (pcVar9 == pcVar5) {
        return 1;
      }
      pcVar9 = (char *)param_1[0x31];
      if (*pcVar9 == *pcVar5) {
        if (*pcVar9 == '\0') {
          return 1;
        }
        lVar8 = 0;
        while ((lVar8 != 0x80000 && (pcVar9[lVar8 + 1] == pcVar5[lVar8 + 1]))) {
          if (pcVar9[lVar8 + 1] == '\0') {
            return 1;
          }
          lVar7 = lVar8 + 2;
          if (pcVar9[lVar7] != pcVar5[lVar8 + 2]) break;
          lVar8 = lVar8 + 2;
          if (pcVar9[lVar7] == '\0') {
            return 1;
          }
        }
      }
    }
  }
  puVar4 = PTR_DAT_04bb2118;
  plVar6 = param_1 + 0xf;
  if ((char)*plVar6 == '\0') {
    lVar8 = 0;
  }
  else {
    plVar6 = param_1 + 0x1f;
    if ((char)*plVar6 == '\0') {
      lVar8 = 1;
    }
    else if ((char)param_1[0x2f] == '\0') {
      plVar6 = param_1 + 0x2f;
      lVar8 = 2;
    }
    else {
      if ((char)param_1[0x3f] != '\0') {
        return 0;
      }
      plVar6 = param_1 + 0x3f;
      lVar8 = 3;
    }
  }
  *(char *)plVar6 = '\x01';
  __dest = (void *)param_1[lVar8 * 0x10 + 1];
  *(uint *)((long)param_1 + lVar8 * 0x80 + 0x7c) = *(int *)(*(long *)puVar4 + 0x508) + (param_6 & 1)
  ;
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar7 = 0;
    do {
      if (*(char *)(param_2[1] + lVar7) == '\0') goto LAB_01733a7c;
      lVar1 = param_2[1] + lVar7;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_01733a7c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_01733a7c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_01733a7c:
    iVar2 = (int)lVar7;
    if ((int)param_1[lVar8 * 0x10 + 2] <= (int)lVar7) {
      iVar2 = (int)param_1[lVar8 * 0x10 + 2] + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  *(byte *)((long)param_1 + lVar8 * 0x80 + 0x72) = param_7 & 1;
  *(undefined1 *)(param_1 + lVar8 * 0x10 + 0xe) = 1;
  *(byte *)((long)param_1 + lVar8 * 0x80 + 0x71) = param_3 & 1;
  *(undefined4 *)(param_1 + lVar8 * 0x10 + 0xb) = *param_4;
  *(undefined4 *)((long)param_1 + lVar8 * 0x80 + 0x5c) = param_4[1];
  *(undefined4 *)(param_1 + lVar8 * 0x10 + 0xc) = param_4[2];
  *(undefined4 *)((long)param_1 + lVar8 * 0x80 + 100) = *param_5;
  *(undefined4 *)(param_1 + lVar8 * 0x10 + 0xd) = param_5[1];
  uVar3 = param_5[2];
  *(byte *)((long)param_1 + lVar8 * 0x80 + 0x73) = param_8 & 1;
  *(undefined4 *)((long)param_1 + lVar8 * 0x80 + 0x6c) = uVar3;
  return 1;
}

