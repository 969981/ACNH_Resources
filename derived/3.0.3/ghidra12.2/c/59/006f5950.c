
undefined8 FUN_006f5950(long *param_1,long *param_2,long *param_3,uint param_4)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  void *__dest;
  void *__src;
  undefined **local_58;
  long lStack_50;
  int local_48;
  
  (**(code **)(*param_1 + 0x38))();
  if (param_4 < *(uint *)(param_2 + 1)) {
    lVar5 = *param_2;
    iVar3 = *(int *)(lVar5 + 0x24);
    if (iVar3 != -1) {
      piVar4 = *(int **)(*(long *)(lVar5 + 0x18) + (long)iVar3 * 0x18);
      if ((int)param_4 < *piVar4) {
        if ((ulong)(long)*(char *)(lVar5 + 0x10) < 3) {
          piVar2 = piVar4 + (int)(param_4 + 2);
          if (*piVar4 <= (int)(param_4 + 1)) {
            piVar2 = (int *)(*(long *)(lVar5 + 0x18) + (long)iVar3 * 0x18 + 0xc);
          }
          local_48 = ((*piVar2 - piVar4[(int)(param_4 + 1)]) +
                      *(int *)(&DAT_0414e678 + (long)*(char *)(lVar5 + 0x10) * 4) >> 1) + 1;
        }
        else {
          local_48 = 0;
        }
        lStack_50 = (long)piVar4 + (ulong)(uint)piVar4[(int)(param_4 + 1)];
        local_58 = &PTR_LAB_048fc768;
        (**(code **)(*param_1 + 0x28))(param_1,&local_58);
        (**(code **)(*param_1 + 0x30))(param_1,&local_58);
        uVar6 = 1;
        goto LAB_006f5a14;
      }
    }
  }
  uVar6 = 0;
LAB_006f5a14:
  __dest = (void *)param_1[7];
  (**(code **)(*param_3 + 0x18))(param_3);
  __src = (void *)param_3[1];
  if (__dest != __src) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar5 = 0;
    do {
      if (*(char *)(param_3[1] + lVar5) == '\0') goto LAB_006f5a90;
      lVar1 = param_3[1] + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_006f5a90;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_006f5a90;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_006f5a90:
    iVar3 = (int)lVar5;
    if ((int)param_1[8] <= (int)lVar5) {
      iVar3 = (int)param_1[8] + -1;
    }
    memcpy(__dest,__src,(long)iVar3);
    *(undefined1 *)((long)__dest + (long)iVar3) = 0;
  }
  return uVar6;
}

