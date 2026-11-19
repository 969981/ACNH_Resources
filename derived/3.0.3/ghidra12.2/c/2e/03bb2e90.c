
void FUN_03bb2e90(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar5 = param_2[1];
  (**(code **)(*param_3 + 0x18))(param_3);
  FUN_038b78e0(param_1,lVar5,param_3[1]);
  lVar4 = param_1[1];
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar5 = 0;
  do {
    if (*(char *)(param_1[1] + lVar5) == '\0') goto LAB_03bb2f4c;
    lVar1 = param_1[1] + lVar5;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_03bb2f4c;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_03bb2f4c;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_03bb2f4c:
  uVar2 = (uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU);
  (**(code **)(*param_4 + 0x18))(param_4);
  lVar5 = 0;
  do {
    if (*(char *)(param_4[1] + lVar5) == '\0') goto LAB_03bb2fac;
    lVar1 = param_4[1] + lVar5;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_03bb2fac;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_03bb2fac;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_03bb2fac:
  uVar3 = (uint)lVar5;
  if ((int)((int)param_1[2] - uVar2) <= (int)(uint)lVar5) {
    uVar3 = (int)param_1[2] + ~uVar2;
  }
  if (0 < (int)uVar3) {
    (**(code **)(*param_4 + 0x18))(param_4);
    memcpy((void *)(lVar4 + (ulong)uVar2),(void *)param_4[1],(ulong)uVar3);
    *(undefined1 *)(lVar4 + (int)(uVar3 + uVar2)) = 0;
  }
  return;
}

