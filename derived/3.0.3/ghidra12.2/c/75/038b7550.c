
undefined8 FUN_038b7550(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  void *__dest;
  uint uVar5;
  int iVar6;
  
  if (param_1 == param_2) {
    (**(code **)(*param_1 + 0x18))(param_1);
    uVar4 = 0;
    do {
      if (*(char *)(param_1[1] + uVar4) == '\0') goto LAB_038b779c;
      lVar1 = param_1[1] + uVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        uVar4 = uVar4 + 1;
        goto LAB_038b779c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        uVar4 = uVar4 + 2;
        goto LAB_038b779c;
      }
      uVar4 = uVar4 + 3;
    } while (uVar4 != 0x80001);
    uVar4 = 0;
LAB_038b779c:
    (**(code **)(*param_1 + 0x18))(param_1);
    if ((int)uVar4 < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      do {
        uVar2 = (uint)uVar4;
        if (*(char *)(param_1[1] + (uVar4 & 0xffffffff)) == '/') goto LAB_038b77e8;
        uVar4 = (ulong)(uVar2 - 1);
      } while (0 < (int)uVar2);
      uVar2 = 0xffffffff;
    }
LAB_038b77e8:
    (**(code **)(*param_1 + 0x18))(param_1);
    uVar4 = 0;
    do {
      if (*(char *)(param_1[1] + uVar4) == '\0') goto LAB_038b783c;
      lVar1 = param_1[1] + uVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        uVar4 = uVar4 + 1;
        goto LAB_038b783c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        uVar4 = uVar4 + 2;
        goto LAB_038b783c;
      }
      uVar4 = uVar4 + 3;
    } while (uVar4 != 0x80001);
    uVar4 = 0;
LAB_038b783c:
    (**(code **)(*param_1 + 0x18))(param_1);
    if ((int)uVar4 < 0) {
      uVar5 = 0xffffffff;
    }
    else {
      do {
        uVar5 = (uint)uVar4;
        if (*(char *)(param_1[1] + (uVar4 & 0xffffffff)) == '\\') goto LAB_038b7888;
        uVar4 = (ulong)(uVar5 - 1);
      } while (0 < (int)uVar5);
      uVar5 = 0xffffffff;
    }
LAB_038b7888:
    if ((int)uVar2 <= (int)uVar5) {
      uVar2 = uVar5;
    }
    if ((int)uVar2 < 1) {
      return 0;
    }
    if ((int)uVar2 < (int)param_1[2]) {
      *(undefined1 *)(param_1[1] + (ulong)uVar2) = 0;
    }
    else {
      (**(code **)(*param_1 + 0x18))(param_1);
    }
  }
  else {
    if ((int)param_1[2] < 1) {
      (**(code **)(*param_1 + 0x18))(param_1);
    }
    else {
      *(undefined1 *)param_1[1] = 0;
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    uVar4 = 0;
    do {
      if (*(char *)(param_2[1] + uVar4) == '\0') goto LAB_038b764c;
      lVar1 = param_2[1] + uVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        uVar4 = uVar4 + 1;
        goto LAB_038b764c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        uVar4 = uVar4 + 2;
        goto LAB_038b764c;
      }
      uVar4 = uVar4 + 3;
    } while (uVar4 != 0x80001);
    uVar4 = 0;
LAB_038b764c:
    (**(code **)(*param_2 + 0x18))(param_2);
    if ((int)uVar4 < 0) {
      iVar3 = -1;
    }
    else {
      do {
        iVar3 = (int)uVar4;
        if (*(char *)(param_2[1] + (uVar4 & 0xffffffff)) == '/') goto LAB_038b7698;
        uVar4 = (ulong)(iVar3 - 1);
      } while (0 < iVar3);
      iVar3 = -1;
    }
LAB_038b7698:
    (**(code **)(*param_2 + 0x18))(param_2);
    uVar4 = 0;
    do {
      if (*(char *)(param_2[1] + uVar4) == '\0') goto LAB_038b76ec;
      lVar1 = param_2[1] + uVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        uVar4 = uVar4 + 1;
        goto LAB_038b76ec;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        uVar4 = uVar4 + 2;
        goto LAB_038b76ec;
      }
      uVar4 = uVar4 + 3;
    } while (uVar4 != 0x80001);
    uVar4 = 0;
LAB_038b76ec:
    (**(code **)(*param_2 + 0x18))(param_2);
    if ((int)uVar4 < 0) {
      iVar6 = -1;
    }
    else {
      do {
        iVar6 = (int)uVar4;
        if (*(char *)(param_2[1] + (uVar4 & 0xffffffff)) == '\\') goto LAB_038b7738;
        uVar4 = (ulong)(iVar6 - 1);
      } while (0 < iVar6);
      iVar6 = -1;
    }
LAB_038b7738:
    if (iVar3 <= iVar6) {
      iVar3 = iVar6;
    }
    if (iVar3 < 1) {
      return 0;
    }
    __dest = (void *)param_1[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    if (__dest != (void *)param_2[1]) {
      if ((int)param_1[2] <= iVar3) {
        iVar3 = (int)param_1[2] + -1;
      }
      memcpy(__dest,(void *)param_2[1],(long)iVar3);
      *(undefined1 *)((long)__dest + (long)iVar3) = 0;
    }
  }
  return 1;
}

