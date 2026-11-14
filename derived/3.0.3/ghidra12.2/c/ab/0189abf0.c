
void FUN_0189abf0(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined4 uVar6;
  void *__src;
  long lVar7;
  undefined8 uVar8;
  void *__dest;
  
  if (param_2 != (long *)0x0) {
    uVar8 = *(undefined8 *)PTR_DAT_04bb4008;
    uVar6 = (**(code **)(*param_1 + 0x100))();
    __src = (void *)FUN_01a113c0(uVar8,uVar6);
    if ((__src != (void *)0x0) && (__dest = (void *)param_2[1], __dest != __src)) {
      lVar7 = 0;
      do {
        if (*(char *)((long)__src + lVar7) == '\0') goto LAB_0189ac90;
        if (*(char *)((long)__src + lVar7 + 1) == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_0189ac90;
        }
        if (*(char *)((long)__src + lVar7 + 2) == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_0189ac90;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_0189ac90:
      iVar3 = (int)lVar7;
      if ((int)param_2[2] <= (int)lVar7) {
        iVar3 = (int)param_2[2] + -1;
      }
      memcpy(__dest,__src,(long)iVar3);
      *(undefined1 *)((long)__dest + (long)iVar3) = 0;
    }
    lVar5 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar7 = 0;
    do {
      if (*(char *)(param_2[1] + lVar7) == '\0') goto LAB_0189ad0c;
      lVar1 = param_2[1] + lVar7;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_0189ad0c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_0189ad0c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_0189ad0c:
    uVar2 = (uint)lVar7 & ((int)(uint)lVar7 >> 0x1f ^ 0xffffffffU);
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar7 = 0;
    do {
      if (*(char *)(param_3[1] + lVar7) == '\0') goto LAB_0189ad6c;
      lVar1 = param_3[1] + lVar7;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_0189ad6c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_0189ad6c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_0189ad6c:
    uVar4 = (uint)lVar7;
    if ((int)((int)param_2[2] - uVar2) <= (int)(uint)lVar7) {
      uVar4 = (int)param_2[2] + ~uVar2;
    }
    if (0 < (int)uVar4) {
      (**(code **)(*param_3 + 0x18))(param_3);
      memcpy((void *)(lVar5 + (ulong)uVar2),(void *)param_3[1],(ulong)uVar4);
      *(undefined1 *)(lVar5 + (int)(uVar4 + uVar2)) = 0;
    }
  }
  return;
}

