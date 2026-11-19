
void FUN_03c907b0(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(param_2 + 0x18) != 0) {
    FUN_03c907b0(param_1);
  }
  lVar4 = FUN_03b180d0(param_2);
  if (lVar4 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar5 = param_1[1];
    lVar4 = 0;
    do {
      if (*(char *)(lVar5 + lVar4) == '\0') goto LAB_03c9084c;
      if (*(char *)(lVar5 + lVar4 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_03c9084c;
      }
      if (*(char *)(lVar5 + lVar4 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_03c9084c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_03c9084c:
    if ((int)lVar4 < (int)param_1[2] + -1) {
      *(undefined2 *)(lVar5 + (int)lVar4) = 0x2f;
      lVar5 = param_1[1];
    }
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar4 = 0;
    do {
      if (*(char *)(param_1[1] + lVar4) == '\0') goto LAB_03c908c0;
      lVar1 = param_1[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_03c908c0;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_03c908c0;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_03c908c0:
    uVar2 = (uint)lVar4 & ((int)(uint)lVar4 >> 0x1f ^ 0xffffffffU);
    lVar4 = 0;
    do {
      lVar1 = param_2 + lVar4;
      if (*(char *)(lVar1 + 0xb0) == '\0') goto LAB_03c9090c;
      if (*(char *)(lVar1 + 0xb1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_03c9090c;
      }
      if (*(char *)(lVar1 + 0xb2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_03c9090c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_03c9090c:
    uVar3 = (uint)lVar4;
    if ((int)((int)param_1[2] - uVar2) <= (int)(uint)lVar4) {
      uVar3 = (int)param_1[2] + ~uVar2;
    }
    if (0 < (int)uVar3) {
      memcpy((void *)(lVar5 + (ulong)uVar2),(void *)(param_2 + 0xb0),(ulong)uVar3);
      *(undefined1 *)(lVar5 + (int)(uVar3 + uVar2)) = 0;
    }
  }
  return;
}

