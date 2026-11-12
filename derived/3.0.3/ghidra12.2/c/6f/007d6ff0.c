
void FUN_007d6ff0(uint *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  void *__dest;
  char *__src;
  long lVar3;
  uint uVar4;
  size_t __n;
  long lVar5;
  uint uVar6;
  
  *(undefined1 *)param_2[1] = 0;
  if (*param_1 == DAT_04cb0c60) {
    return;
  }
  FUN_038d13f0(param_2,"Photograph/");
  uVar2 = *param_1;
  uVar6 = uVar2 & 0x38;
  uVar4 = uVar2 & 7;
  if (uVar6 == 0x18) {
    lVar5 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_007d71b4;
      lVar1 = param_2[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_007d71b4;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_007d71b4;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_007d71b4:
    uVar6 = (uint)lVar3 & ((int)(uint)lVar3 >> 0x1f ^ 0xffffffffU);
    uVar2 = 7;
    if ((int)((int)param_2[2] - uVar6) < 8) {
      uVar2 = (int)param_2[2] + ~uVar6;
    }
    __n = (size_t)uVar2;
    if ((int)uVar2 < 1) goto LAB_007d723c;
    __dest = (void *)(lVar5 + (ulong)uVar6);
    __src = "suspend";
  }
  else if (uVar6 == 8) {
    lVar5 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_007d71f8;
      lVar1 = param_2[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_007d71f8;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_007d71f8;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_007d71f8:
    uVar6 = (uint)lVar3 & ((int)(uint)lVar3 >> 0x1f ^ 0xffffffffU);
    uVar2 = 0xc;
    if ((int)((int)param_2[2] - uVar6) < 0xd) {
      uVar2 = (int)param_2[2] + ~uVar6;
    }
    __n = (size_t)uVar2;
    if ((int)uVar2 < 1) goto LAB_007d723c;
    __dest = (void *)(lVar5 + (ulong)uVar6);
    __src = "hotelviproom";
  }
  else {
    if (uVar6 != 0) {
      return;
    }
    uVar4 = uVar2 >> 6 & 0x3ff;
    lVar5 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_007d7170;
      lVar1 = param_2[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_007d7170;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_007d7170;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_007d7170:
    uVar6 = (uint)lVar3 & ((int)(uint)lVar3 >> 0x1f ^ 0xffffffffU);
    uVar2 = 9;
    if ((int)((int)param_2[2] - uVar6) < 10) {
      uVar2 = (int)param_2[2] + ~uVar6;
    }
    __n = (size_t)uVar2;
    if ((int)uVar2 < 1) goto LAB_007d723c;
    __dest = (void *)(lVar5 + (ulong)uVar6);
    __src = "hotelroom";
  }
  memcpy(__dest,__src,__n);
  *(undefined1 *)(lVar5 + (ulong)((int)__n + uVar6)) = 0;
LAB_007d723c:
  FUN_038d13f0(param_2,"_%u.dat",uVar4);
  return;
}

