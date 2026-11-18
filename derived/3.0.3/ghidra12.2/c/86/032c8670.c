
void FUN_032c8670(long param_1,undefined8 param_2,uint param_3)

{
  char *pcVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = param_3;
  if (*(uint *)(param_1 + 0x40) <= param_3) {
    uVar2 = 0;
  }
  if ((*(byte *)(*(long *)(param_1 + 0x48) + (long)(int)uVar2) & 1) != 0) {
    return;
  }
  if ((*(byte *)(*(long *)(param_1 + 0x48) + (long)(int)uVar2) & 1) == 0) {
    FUN_032c7910(param_1,param_2,param_3);
    uVar2 = param_3;
    if (*(uint *)(param_1 + 0x30) <= param_3) {
      uVar2 = 0;
    }
    lVar5 = *(long *)(*(long *)(param_1 + 0x38) + (long)(int)uVar2 * 8);
    do {
      lVar4 = lVar5;
      plVar3 = *(long **)(lVar4 + 0x28);
      lVar5 = *(long *)(lVar4 + 0x18);
    } while (*(long *)(lVar4 + 0x18) != 0 && plVar3 == (long *)0x0);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0xd0))(0);
    }
    *(undefined4 *)(lVar4 + 0x6c) = 1;
  }
  if (*(uint *)(param_1 + 0x30) <= param_3) {
    param_3 = 0;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x38) + (long)(int)param_3 * 8);
  do {
    lVar4 = *(long *)(lVar5 + 0x18);
    plVar3 = *(long **)(lVar5 + 0x28);
    if (lVar4 == 0 || plVar3 != (long *)0x0) goto LAB_032c87a4;
    pcVar1 = (char *)(lVar5 + 0x20);
    lVar5 = lVar4;
  } while (*pcVar1 == '\0');
  while( true ) {
    lVar5 = *(long *)(lVar4 + 0x18);
    plVar3 = *(long **)(lVar4 + 0x28);
    if (lVar5 == 0 || plVar3 != (long *)0x0) break;
    pcVar1 = (char *)(lVar4 + 0x20);
    lVar4 = lVar5;
    if (*pcVar1 != '\0') {
      do {
        lVar4 = *(long *)(lVar5 + 0x18);
        plVar3 = *(long **)(lVar5 + 0x28);
        if (lVar4 == 0 || plVar3 != (long *)0x0) goto LAB_032c87a4;
        pcVar1 = (char *)(lVar5 + 0x20);
        lVar5 = lVar4;
      } while (*pcVar1 == '\0');
    }
  }
  lVar5 = lVar4;
  if (plVar3 == (long *)0x0) goto LAB_032c87b8;
  lVar4 = 0x1c;
LAB_032c87ac:
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_032c87b8:
  *(undefined4 *)(lVar5 + 0x6c) = 3;
  return;
LAB_032c87a4:
  if (plVar3 == (long *)0x0) goto LAB_032c87b8;
  lVar4 = 0x1d;
  goto LAB_032c87ac;
}

