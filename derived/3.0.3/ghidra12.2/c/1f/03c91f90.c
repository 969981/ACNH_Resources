
void FUN_03c91f90(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = (**(code **)(*param_1 + 0x18))();
  lVar4 = param_2[1];
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar7 = param_2[1];
  lVar6 = 0;
  do {
    if (*(char *)(lVar7 + lVar6) == '\0') goto LAB_03c92020;
    if (*(char *)(lVar7 + lVar6 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_03c92020;
    }
    if (*(char *)(lVar7 + lVar6 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_03c92020;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_03c92020:
  uVar2 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
  lVar6 = 0;
  do {
    lVar1 = lVar5 + lVar6;
    if (*(char *)(lVar1 + 0xb0) == '\0') goto LAB_03c9206c;
    if (*(char *)(lVar1 + 0xb1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_03c9206c;
    }
    if (*(char *)(lVar1 + 0xb2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_03c9206c;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_03c9206c:
  uVar3 = (uint)lVar6;
  if ((int)((int)param_2[2] - uVar2) <= (int)(uint)lVar6) {
    uVar3 = (int)param_2[2] + ~uVar2;
  }
  if (0 < (int)uVar3) {
    memcpy((void *)(lVar4 + (ulong)uVar2),(void *)(lVar5 + 0xb0),(ulong)uVar3);
    *(undefined1 *)(lVar4 + (int)(uVar3 + uVar2)) = 0;
    lVar7 = param_2[1];
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar6 = 0;
  do {
    if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_03c920fc;
    lVar4 = param_2[1] + lVar6;
    if (*(char *)(lVar4 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_03c920fc;
    }
    if (*(char *)(lVar4 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_03c920fc;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_03c920fc:
  uVar3 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
  uVar2 = (int)param_2[2] + ~uVar3;
  if (1 < (int)((int)param_2[2] - uVar3)) {
    uVar2 = 1;
  }
  if (0 < (int)uVar2) {
    memcpy((void *)(lVar7 + (ulong)uVar3),&DAT_040a3a35,(ulong)uVar2);
    *(undefined1 *)(lVar7 + (ulong)uVar2 + (ulong)uVar3) = 0;
  }
  FUN_03c9e9c0(param_1[2],param_2);
  return;
}

