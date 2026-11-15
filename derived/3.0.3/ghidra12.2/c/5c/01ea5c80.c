
undefined8
FUN_01ea5c80(long *param_1,undefined8 param_2,undefined8 param_3,uint param_4,byte param_5,
            undefined8 param_6)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  void *pvVar7;
  void *pvVar8;
  
  if ((*(byte *)(param_1 + 0xf25) & 1) == 0) {
    return 1;
  }
  uVar6 = param_1[0x15ab];
  if (((uint)uVar6 >> 0x1c & 1) != 0) {
    lVar4 = param_1[3];
    uVar2 = *(byte *)(lVar4 + 0x290) & 0xffffffef;
    *(char *)(lVar4 + 0x290) = (char)uVar2;
    uVar5 = 3;
    if (((uVar2 >> 3 & 1) == 0) && (uVar5 = 2, (uVar2 >> 2 & 1) == 0)) {
      uVar5 = uVar2 >> 1 & 1;
    }
    *(uint *)(lVar4 + 0x294) = uVar5;
    uVar6 = param_1[0x15ab] & 0xffffffffefffffff;
  }
  param_1[0x15ab] = uVar6 & 0xffffbfffffffffff;
  if (((uint)uVar6 >> 10 & 1) == 0) {
    if ((uVar6 >> 0x21 & 1) == 0) {
      if ((int)param_1[0xef6] - 3U < 2) {
        return 0;
      }
    }
    else if ((int)param_1[0xf8e] != 0) {
      return 0;
    }
  }
  param_1[0x15ab] = uVar6 & 0xffffbfffffffffff | 0x4000000000000;
  uVar6 = FUN_01f90000(param_1 + 0xf22,param_2,param_3,param_4 & 1,param_6,
                       param_5 & 1 | *(char *)((long)param_1 + 0x7879) != '\0');
  param_1[0x15ab] = param_1[0x15ab] & 0xfffbffffffffffff;
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0xf25) & 6) == 0) goto LAB_01ea6084;
  if (*(char *)param_1[0xf53] == '\0') {
    if (*(char *)param_1[0xf5e] != '\0') {
      pvVar7 = (void *)param_1[0x104c];
      (**(code **)(param_1[0xf5d] + 0x18))(param_1 + 0xf5d);
      pvVar8 = (void *)param_1[0xf5e];
      if (pvVar7 != pvVar8) {
        (**(code **)(param_1[0xf5d] + 0x18))(param_1 + 0xf5d);
        lVar4 = 0;
        do {
          if (*(char *)(param_1[0xf5e] + lVar4) == '\0') goto LAB_01ea5f8c;
          lVar1 = param_1[0xf5e] + lVar4;
          if (*(char *)(lVar1 + 1) == '\0') goto LAB_01ea5f80;
          if (*(char *)(lVar1 + 2) == '\0') goto LAB_01ea5f88;
          lVar4 = lVar4 + 3;
        } while (lVar4 != 0x80001);
        goto LAB_01ea5f78;
      }
    }
  }
  else {
    pvVar7 = (void *)param_1[0x1041];
    (**(code **)(param_1[0xf52] + 0x18))(param_1 + 0xf52);
    pvVar8 = (void *)param_1[0xf53];
    if (pvVar7 != pvVar8) {
      (**(code **)(param_1[0xf52] + 0x18))(param_1 + 0xf52);
      lVar4 = 0;
      do {
        if (*(char *)(param_1[0xf53] + lVar4) == '\0') goto LAB_01ea5ee0;
        lVar1 = param_1[0xf53] + lVar4;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_01ea5ee0;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_01ea5ee0;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_01ea5ee0:
      iVar3 = (int)lVar4;
      if ((int)param_1[0x1042] <= (int)lVar4) {
        iVar3 = (int)param_1[0x1042] + -1;
      }
      memcpy(pvVar7,pvVar8,(long)iVar3);
      *(undefined1 *)((long)pvVar7 + (long)iVar3) = 0;
    }
    pvVar7 = (void *)param_1[0x104c];
    (**(code **)(param_1[0xf5d] + 0x18))(param_1 + 0xf5d);
    pvVar8 = (void *)param_1[0xf5e];
    if (pvVar7 != pvVar8) {
      (**(code **)(param_1[0xf5d] + 0x18))(param_1 + 0xf5d);
      lVar4 = 0;
      do {
        if (*(char *)(param_1[0xf5e] + lVar4) == '\0') goto LAB_01ea5f8c;
        lVar1 = param_1[0xf5e] + lVar4;
        if (*(char *)(lVar1 + 1) == '\0') goto LAB_01ea5f80;
        if (*(char *)(lVar1 + 2) == '\0') goto LAB_01ea5f88;
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
LAB_01ea5f78:
      lVar4 = 0;
      goto LAB_01ea5f8c;
    }
  }
  goto LAB_01ea5fb8;
LAB_01ea5f80:
  lVar4 = lVar4 + 1;
  goto LAB_01ea5f8c;
LAB_01ea5f88:
  lVar4 = lVar4 + 2;
LAB_01ea5f8c:
  iVar3 = (int)lVar4;
  if ((int)param_1[0x104d] <= (int)lVar4) {
    iVar3 = (int)param_1[0x104d] + -1;
  }
  memcpy(pvVar7,pvVar8,(long)iVar3);
  *(undefined1 *)((long)pvVar7 + (long)iVar3) = 0;
LAB_01ea5fb8:
  if ((*(byte *)(param_1 + 0xf25) >> 1 & 1) != 0) {
    pvVar7 = (void *)param_1[0xf3e];
    (**(code **)(param_1[0xf4b] + 0x18))(param_1 + 0xf4b);
    pvVar8 = (void *)param_1[0xf4c];
    if (pvVar7 != pvVar8) {
      (**(code **)(param_1[0xf4b] + 0x18))(param_1 + 0xf4b);
      lVar4 = 0;
      do {
        if (*(char *)(param_1[0xf4c] + lVar4) == '\0') goto LAB_01ea603c;
        lVar1 = param_1[0xf4c] + lVar4;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_01ea603c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_01ea603c;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_01ea603c:
      iVar3 = (int)lVar4;
      if ((int)param_1[0xf3f] <= (int)lVar4) {
        iVar3 = (int)param_1[0xf3f] + -1;
      }
      memcpy(pvVar7,pvVar8,(long)iVar3);
      *(undefined1 *)((long)pvVar7 + (long)iVar3) = 0;
    }
    (**(code **)(*param_1 + 0x38))
              (param_1,(int)param_1[0xf3c],param_1 + 0xf69,*(undefined1 *)((long)param_1 + 0x7b41));
  }
LAB_01ea6084:
  lVar4 = param_1[1];
  if (*(char *)(lVar4 + 0x68e) == '\0') {
    if (*(int *)(lVar4 + 0x548) == 0) {
      *(undefined4 *)(lVar4 + 0x590) = 0;
    }
    *(undefined1 *)(lVar4 + 0x68d) = 1;
  }
  return 1;
}

