
void FUN_01730b80(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  void *__dest;
  void *__src;
  undefined *local_50;
  long lStack_48;
  
  if (((param_1[1] != 0) && (lVar3 = *(long *)(param_1[1] + 0x1138), lVar3 != 0)) &&
     (uVar4 = FUN_03850a90(lVar3,0x27,0,0), (uVar4 & 1) != 0)) {
    return;
  }
  __dest = (void *)param_1[0x29];
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_01730c4c;
      lVar1 = param_2[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_01730c4c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_01730c4c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_01730c4c:
    iVar2 = (int)lVar3;
    if ((int)param_1[0x2a] <= (int)lVar3) {
      iVar2 = (int)param_1[0x2a] + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  if (*(long *)(*param_1 + 0x280) != 0) {
    lStack_48 = param_2[1];
    local_50 = PTR_DAT_04bb2020 + 0x10;
    FUN_03ef3440(*(long *)(*param_1 + 0x280),&local_50);
  }
  return;
}

