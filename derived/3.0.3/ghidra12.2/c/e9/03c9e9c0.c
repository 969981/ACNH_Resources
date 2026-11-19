
void FUN_03c9e9c0(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  void *__src;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  plVar7 = (long *)(param_1 + 0x18);
  lVar6 = *plVar7;
  lVar5 = *(long *)(lVar6 + 0x18);
  while (lVar5 != 0) {
    lVar4 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = param_2[1];
    lVar5 = 0;
    do {
      if (*(char *)(lVar8 + lVar5) == '\0') goto LAB_03c9ea84;
      if (*(char *)(lVar8 + lVar5 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_03c9ea84;
      }
      if (*(char *)(lVar8 + lVar5 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_03c9ea84;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_03c9ea84:
    uVar2 = (uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU);
    lVar5 = 0;
    do {
      lVar1 = lVar6 + lVar5;
      if (*(char *)(lVar1 + 0xb0) == '\0') goto LAB_03c9ead4;
      if (*(char *)(lVar1 + 0xb1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_03c9ead4;
      }
      if (*(char *)(lVar1 + 0xb2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_03c9ead4;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_03c9ead4:
    uVar3 = (uint)lVar5;
    if ((int)((int)param_2[2] - uVar2) <= (int)(uint)lVar5) {
      uVar3 = (int)param_2[2] + ~uVar2;
    }
    if (0 < (int)uVar3) {
      memcpy((void *)(lVar4 + (ulong)uVar2),(void *)(lVar6 + 0xb0),(ulong)uVar3);
      *(undefined1 *)(lVar4 + (int)(uVar3 + uVar2)) = 0;
      lVar8 = param_2[1];
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_03c9eb74;
      lVar5 = param_2[1] + lVar6;
      if (*(char *)(lVar5 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_03c9eb74;
      }
      if (*(char *)(lVar5 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_03c9eb74;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_03c9eb74:
    uVar3 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    uVar2 = (int)param_2[2] + ~uVar3;
    if (1 < (int)((int)param_2[2] - uVar3)) {
      uVar2 = 1;
    }
    if (0 < (int)uVar2) {
      memcpy((void *)(lVar8 + (ulong)uVar3),&DAT_0407ec0b,(ulong)uVar2);
      *(undefined1 *)(lVar8 + (ulong)uVar2 + (ulong)uVar3) = 0;
    }
    param_1 = *(long *)(*(long *)(*plVar7 + 0xc9) + 0x10);
    plVar7 = (long *)(param_1 + 0x18);
    lVar6 = *plVar7;
    lVar5 = *(long *)(lVar6 + 0x18);
  }
  lVar5 = param_2[1];
  __src = *(void **)(param_1 + 0x30);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar6 = 0;
  do {
    if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_03c9ec0c;
    lVar4 = param_2[1] + lVar6;
    if (*(char *)(lVar4 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_03c9ec0c;
    }
    if (*(char *)(lVar4 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_03c9ec0c;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_03c9ec0c:
  uVar2 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
  lVar6 = 0;
  do {
    if (*(char *)((long)__src + lVar6) == '\0') goto LAB_03c9ec50;
    if (*(char *)((long)__src + lVar6 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_03c9ec50;
    }
    if (*(char *)((long)__src + lVar6 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_03c9ec50;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_03c9ec50:
  uVar3 = (uint)lVar6;
  if ((int)((int)param_2[2] - uVar2) <= (int)(uint)lVar6) {
    uVar3 = (int)param_2[2] + ~uVar2;
  }
  if (0 < (int)uVar3) {
    memcpy((void *)(lVar5 + (ulong)uVar2),__src,(ulong)uVar3);
    *(undefined1 *)(lVar5 + (int)(uVar3 + uVar2)) = 0;
  }
  return;
}

