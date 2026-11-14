
void FUN_01bd9850(undefined4 *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  void *__dest;
  void *__src;
  undefined1 auStack_50 [8];
  char *local_48;
  
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0xffffffffffffffff;
  **(undefined1 **)(param_1 + 8) = 0;
  *param_1 = 6;
  __dest = *(void **)(param_1 + 8);
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar4 = 0;
    do {
      if (*(char *)(param_2[1] + lVar4) == '\0') goto LAB_01bd990c;
      lVar1 = param_2[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_01bd990c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_01bd990c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_01bd990c:
    iVar2 = (int)lVar4;
    if ((int)param_1[10] <= (int)lVar4) {
      iVar2 = param_1[10] + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  FUN_01bd9620(auStack_50,param_1,param_2);
  if ((*local_48 != '\0') && (uVar3 = FUN_01bd997c(auStack_50), uVar3 < 8)) {
    param_1[4] = uVar3;
  }
  return;
}

