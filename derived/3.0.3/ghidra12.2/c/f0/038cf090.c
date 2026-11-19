
void FUN_038cf090(long param_1,void *param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  void *__dest;
  int iVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  uVar3 = param_3 & 0xffffffff;
  uVar1 = *(uint *)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x18))(plVar5);
  __dest = (void *)0x0;
  iVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (int)plVar5[2])) {
    __dest = (void *)(plVar5[1] + (ulong)uVar1);
    iVar2 = (int)plVar5[2] - uVar1;
    *(undefined1 *)((long)__dest + (long)iVar2 + -1) = 0;
  }
  if (__dest == param_2) {
    iVar4 = 0;
  }
  else {
    if ((int)param_3 < 0) {
      uVar3 = 0;
      do {
        if (*(char *)((long)param_2 + uVar3) == '\0') goto LAB_038cf100;
        if (*(char *)((long)param_2 + uVar3 + 1) == '\0') {
          uVar3 = uVar3 + 1;
          goto LAB_038cf100;
        }
        if (*(char *)((long)param_2 + uVar3 + 2) == '\0') {
          uVar3 = uVar3 + 2;
          goto LAB_038cf100;
        }
        uVar3 = uVar3 + 3;
      } while (uVar3 != 0x80001);
      uVar3 = 0;
    }
LAB_038cf100:
    iVar4 = (int)uVar3;
    if (iVar2 <= (int)uVar3) {
      iVar4 = iVar2 + -1;
    }
    memcpy(__dest,param_2,(long)iVar4);
    *(undefined1 *)((long)__dest + (long)iVar4) = 0;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar4;
  return;
}

