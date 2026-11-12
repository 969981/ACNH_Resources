
void FUN_008ca280(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = param_1[1];
  (**(code **)(*param_1 + 0x18))();
  lVar5 = 0;
  do {
    if (*(char *)(param_1[1] + lVar5) == '\0') goto LAB_008ca2fc;
    lVar1 = param_1[1] + lVar5;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_008ca2fc;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_008ca2fc;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_008ca2fc:
  uVar2 = (uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar5 = 0;
  do {
    if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_008ca35c;
    lVar1 = param_2[1] + lVar5;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_008ca35c;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_008ca35c;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_008ca35c:
  uVar3 = (uint)lVar5;
  if ((int)((int)param_1[2] - uVar2) <= (int)(uint)lVar5) {
    uVar3 = (int)param_1[2] + ~uVar2;
  }
  if (0 < (int)uVar3) {
    (**(code **)(*param_2 + 0x18))(param_2);
    memcpy((void *)(lVar4 + (ulong)uVar2),(void *)param_2[1],(ulong)uVar3);
    *(undefined1 *)(lVar4 + (int)(uVar3 + uVar2)) = 0;
  }
  return;
}

