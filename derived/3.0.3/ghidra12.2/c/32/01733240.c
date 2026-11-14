
undefined8 FUN_01733240(long *param_1,long *param_2,byte param_3,uint param_4,byte param_5)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  void *__dest;
  void *__src;
  char *pcVar8;
  
  if ((param_5 & 1) != 0) {
    if ((char)param_1[0xf] != '\0') {
      (**(code **)(*param_1 + 0x18))(param_1);
      (**(code **)(*param_1 + 0x18))(param_1);
      pcVar8 = (char *)param_1[1];
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar4 = (char *)param_2[1];
      if (pcVar8 == pcVar4) {
        return 1;
      }
      pcVar8 = (char *)param_1[1];
      if (*pcVar8 == *pcVar4) {
        if (*pcVar8 == '\0') {
          return 1;
        }
        lVar7 = 0;
        while ((lVar7 != 0x80000 && (pcVar8[lVar7 + 1] == pcVar4[lVar7 + 1]))) {
          if (pcVar8[lVar7 + 1] == '\0') {
            return 1;
          }
          lVar6 = lVar7 + 2;
          if (pcVar8[lVar6] != pcVar4[lVar7 + 2]) break;
          lVar7 = lVar7 + 2;
          if (pcVar8[lVar6] == '\0') {
            return 1;
          }
        }
      }
    }
    if ((char)param_1[0x1f] != '\0') {
      plVar5 = param_1 + 0x10;
      (**(code **)(*plVar5 + 0x18))(plVar5);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      pcVar8 = (char *)param_1[0x11];
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar4 = (char *)param_2[1];
      if (pcVar8 == pcVar4) {
        return 1;
      }
      pcVar8 = (char *)param_1[0x11];
      if (*pcVar8 == *pcVar4) {
        if (*pcVar8 == '\0') {
          return 1;
        }
        lVar7 = 0;
        while ((lVar7 != 0x80000 && (pcVar8[lVar7 + 1] == pcVar4[lVar7 + 1]))) {
          if (pcVar8[lVar7 + 1] == '\0') {
            return 1;
          }
          lVar6 = lVar7 + 2;
          if (pcVar8[lVar6] != pcVar4[lVar7 + 2]) break;
          lVar7 = lVar7 + 2;
          if (pcVar8[lVar6] == '\0') {
            return 1;
          }
        }
      }
    }
    if ((char)param_1[0x2f] != '\0') {
      (**(code **)(param_1[0x20] + 0x18))(param_1 + 0x20);
      (**(code **)(param_1[0x20] + 0x18))(param_1 + 0x20);
      pcVar8 = (char *)param_1[0x21];
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar4 = (char *)param_2[1];
      if (pcVar8 == pcVar4) {
        return 1;
      }
      pcVar8 = (char *)param_1[0x21];
      if (*pcVar8 == *pcVar4) {
        if (*pcVar8 == '\0') {
          return 1;
        }
        lVar7 = 0;
        while ((lVar7 != 0x80000 && (pcVar8[lVar7 + 1] == pcVar4[lVar7 + 1]))) {
          if (pcVar8[lVar7 + 1] == '\0') {
            return 1;
          }
          lVar6 = lVar7 + 2;
          if (pcVar8[lVar6] != pcVar4[lVar7 + 2]) break;
          lVar7 = lVar7 + 2;
          if (pcVar8[lVar6] == '\0') {
            return 1;
          }
        }
      }
    }
    if ((char)param_1[0x3f] != '\0') {
      (**(code **)(param_1[0x30] + 0x18))(param_1 + 0x30);
      (**(code **)(param_1[0x30] + 0x18))(param_1 + 0x30);
      pcVar8 = (char *)param_1[0x31];
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar4 = (char *)param_2[1];
      if (pcVar8 == pcVar4) {
        return 1;
      }
      pcVar8 = (char *)param_1[0x31];
      if (*pcVar8 == *pcVar4) {
        if (*pcVar8 == '\0') {
          return 1;
        }
        lVar7 = 0;
        while ((lVar7 != 0x80000 && (pcVar8[lVar7 + 1] == pcVar4[lVar7 + 1]))) {
          if (pcVar8[lVar7 + 1] == '\0') {
            return 1;
          }
          lVar6 = lVar7 + 2;
          if (pcVar8[lVar6] != pcVar4[lVar7 + 2]) break;
          lVar7 = lVar7 + 2;
          if (pcVar8[lVar6] == '\0') {
            return 1;
          }
        }
      }
    }
  }
  puVar3 = PTR_DAT_04bb2118;
  plVar5 = param_1 + 0xf;
  if ((char)*plVar5 == '\0') {
    lVar7 = 0;
  }
  else {
    plVar5 = param_1 + 0x1f;
    if ((char)*plVar5 == '\0') {
      lVar7 = 1;
    }
    else if ((char)param_1[0x2f] == '\0') {
      plVar5 = param_1 + 0x2f;
      lVar7 = 2;
    }
    else {
      if ((char)param_1[0x3f] != '\0') {
        return 0;
      }
      plVar5 = param_1 + 0x3f;
      lVar7 = 3;
    }
  }
  *(char *)plVar5 = '\x01';
  __dest = (void *)param_1[lVar7 * 0x10 + 1];
  *(uint *)((long)param_1 + lVar7 * 0x80 + 0x7c) = *(int *)(*(long *)puVar3 + 0x508) + (param_4 & 1)
  ;
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_01733620;
      lVar1 = param_2[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01733620;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01733620;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01733620:
    iVar2 = (int)lVar6;
    if ((int)param_1[lVar7 * 0x10 + 2] <= (int)lVar6) {
      iVar2 = (int)param_1[lVar7 * 0x10 + 2] + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  *(byte *)((long)param_1 + lVar7 * 0x80 + 0x71) = param_3 & 1;
  *(byte *)((long)param_1 + lVar7 * 0x80 + 0x72) = param_5 & 1;
  *(undefined1 *)(param_1 + lVar7 * 0x10 + 0xe) = 0;
  *(undefined1 *)((long)param_1 + lVar7 * 0x80 + 0x73) = 0;
  return 1;
}

