
void FUN_02970290(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  void *__src;
  size_t __n;
  
  if (param_2 != (long *)0x0) {
    FUN_02953760(*(undefined8 *)PTR_DAT_04bb4208);
    (**(code **)(*param_2 + 0x18))(param_2);
    __src = (void *)param_2[1];
    lVar8 = 0;
    do {
      if (*(char *)((long)__src + lVar8) == '\0') goto LAB_0297031c;
      if (*(char *)((long)__src + lVar8 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_0297031c;
      }
      if (*(char *)((long)__src + lVar8 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_0297031c;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0297031c:
    iVar6 = (int)param_2[2];
    iVar7 = iVar6 - (int)lVar8;
    uVar2 = 9;
    if (iVar6 < 10) {
      uVar2 = iVar6 - 1;
    }
    iVar3 = (int)lVar8;
    if (iVar7 < 10) {
      iVar3 = iVar6 + ~uVar2;
    }
    uVar4 = 9;
    if (iVar7 < 10) {
      uVar4 = uVar2;
    }
    __n = (size_t)(int)uVar4;
    memmove((void *)((long)__src + __n),__src,(long)iVar3);
    memcpy(__src,"DIVEFISH_",__n);
    *(undefined1 *)((long)__src + __n + (long)iVar3) = 0;
    lVar5 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = 0;
    do {
      if (*(char *)(param_2[1] + lVar8) == '\0') goto LAB_029703d0;
      lVar1 = param_2[1] + lVar8;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_029703d0;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_029703d0;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_029703d0:
    uVar2 = (uint)lVar8 & ((int)(uint)lVar8 >> 0x1f ^ 0xffffffffU);
    uVar4 = 6;
    if ((int)((int)param_2[2] - uVar2) < 7) {
      uVar4 = (int)param_2[2] + ~uVar2;
    }
    if (0 < (int)uVar4) {
      memcpy((void *)(lVar5 + (ulong)uVar2),"Museum",(ulong)uVar4);
      *(undefined1 *)(lVar5 + (ulong)uVar4 + (ulong)uVar2) = 0;
    }
  }
  return;
}

