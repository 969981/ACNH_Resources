
bool FUN_03c27c10(long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined *__src;
  char cVar5;
  void *__src_00;
  long lVar6;
  char *pcVar7;
  
  *(undefined1 *)param_2[1] = 0;
  (**(code **)(*param_1 + 0xe0))();
  pcVar7 = (char *)param_2[1];
  cVar5 = *pcVar7;
  if (cVar5 != '\0') {
    __src = &UNK_040fc3cf;
    if ((param_3 & 1) == 0) {
      __src = &DAT_0407ec0b;
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_03c27ccc;
      lVar1 = param_2[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_03c27ccc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_03c27ccc;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_03c27ccc:
    uVar3 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    lVar6 = 0;
    do {
      if (__src[lVar6] == '\0') goto LAB_03c27d10;
      if (__src[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_03c27d10;
      }
      if (__src[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_03c27d10;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_03c27d10:
    uVar4 = (uint)lVar6;
    if ((int)((int)param_2[2] - uVar3) <= (int)(uint)lVar6) {
      uVar4 = (int)param_2[2] + ~uVar3;
    }
    if (0 < (int)uVar4) {
      memcpy(pcVar7 + uVar3,__src,(ulong)uVar4);
      pcVar7[(int)(uVar4 + uVar3)] = '\0';
    }
    __src_00 = (void *)(**(code **)(*param_1 + 0xe8))(param_1);
    lVar1 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_03c27db0;
      lVar2 = param_2[1] + lVar6;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_03c27db0;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_03c27db0;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_03c27db0:
    uVar3 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    lVar6 = 0;
    do {
      if (*(char *)((long)__src_00 + lVar6) == '\0') goto LAB_03c27dfc;
      if (*(char *)((long)__src_00 + lVar6 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_03c27dfc;
      }
      if (*(char *)((long)__src_00 + lVar6 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_03c27dfc;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_03c27dfc:
    uVar4 = (uint)lVar6;
    if ((int)((int)param_2[2] - uVar3) <= (int)(uint)lVar6) {
      uVar4 = (int)param_2[2] + ~uVar3;
    }
    if (0 < (int)uVar4) {
      memcpy((void *)(lVar1 + (ulong)uVar3),__src_00,(ulong)uVar4);
      *(undefined1 *)(lVar1 + (int)(uVar4 + uVar3)) = 0;
    }
  }
  return cVar5 != '\0';
}

