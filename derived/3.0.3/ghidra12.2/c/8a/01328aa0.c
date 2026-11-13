
void FUN_01328aa0(long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined *__src;
  
  lVar4 = param_2[1];
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar5 = 0;
  do {
    if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_01328b20;
    lVar1 = param_2[1] + lVar5;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_01328b20;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_01328b20;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_01328b20:
  uVar2 = (uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU);
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar5 = 0;
  do {
    if (*(char *)(param_1[1] + lVar5) == '\0') goto LAB_01328b7c;
    lVar1 = param_1[1] + lVar5;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_01328b7c;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_01328b7c;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_01328b7c:
  uVar3 = (uint)lVar5;
  if ((int)((int)param_2[2] - uVar2) <= (int)(uint)lVar5) {
    uVar3 = (int)param_2[2] + ~uVar2;
  }
  if (0 < (int)uVar3) {
    (**(code **)(*param_1 + 0x18))(param_1);
    memcpy((void *)(lVar4 + (ulong)uVar2),(void *)param_1[1],(ulong)uVar3);
    *(undefined1 *)(lVar4 + (int)(uVar3 + uVar2)) = 0;
  }
  __src = (&PTR_s__Field_0498e298)[param_3 & 0xffffffff];
  lVar4 = param_2[1];
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar5 = 0;
  do {
    if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_01328c2c;
    lVar1 = param_2[1] + lVar5;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_01328c2c;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_01328c2c;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_01328c2c:
  uVar2 = (uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU);
  lVar5 = 0;
  do {
    if (__src[lVar5] == '\0') goto LAB_01328c70;
    if (__src[lVar5 + 1] == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_01328c70;
    }
    if (__src[lVar5 + 2] == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_01328c70;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_01328c70:
  uVar3 = (uint)lVar5;
  if ((int)((int)param_2[2] - uVar2) <= (int)(uint)lVar5) {
    uVar3 = (int)param_2[2] + ~uVar2;
  }
  if (0 < (int)uVar3) {
    memcpy((void *)(lVar4 + (ulong)uVar2),__src,(ulong)uVar3);
    *(undefined1 *)(lVar4 + (int)(uVar3 + uVar2)) = 0;
  }
  return;
}

