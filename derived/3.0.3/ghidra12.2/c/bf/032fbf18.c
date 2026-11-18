
void FUN_032fbf18(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_033019e0();
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 != 0) {
      lVar3 = *(long *)(lVar4 + 0x30);
      if (lVar3 != 0) {
        *(long *)(lVar4 + 0x28) = lVar3;
        *(undefined8 *)(lVar4 + 0x30) = 0;
        *(undefined4 *)(lVar4 + 0x38) = 0;
        if (*(long **)(lVar3 + 0x20) != (long *)0x0) {
          (**(code **)(**(long **)(lVar3 + 0x20) + 0x20))();
        }
      }
      if ((*(long *)(lVar4 + 0x28) != 0) &&
         (plVar2 = *(long **)(*(long *)(lVar4 + 0x28) + 0x50), plVar2 != (long *)0x0)) {
        (**(code **)(*plVar2 + 0x20))();
      }
      *(int *)(lVar4 + 0x38) = *(int *)(lVar4 + 0x38) + 1;
      lVar3 = *(long *)(lVar4 + 0x30);
      if (lVar3 != 0) {
        *(long *)(lVar4 + 0x28) = lVar3;
        *(undefined8 *)(lVar4 + 0x30) = 0;
        *(undefined4 *)(lVar4 + 0x38) = 0;
        if (*(long **)(lVar3 + 0x20) != (long *)0x0) {
          (**(code **)(**(long **)(lVar3 + 0x20) + 0x20))();
        }
      }
    }
    lVar4 = *(long *)(param_1 + 0xbf8);
    if (lVar4 != 0) {
      lVar3 = *(long *)(lVar4 + 0x38);
      if (lVar3 != 0) {
        *(long *)(lVar4 + 0x30) = lVar3;
        *(undefined8 *)(lVar4 + 0x38) = 0;
        *(undefined4 *)(lVar4 + 0x40) = 0;
        if (*(long **)(lVar3 + 0x20) != (long *)0x0) {
          (**(code **)(**(long **)(lVar3 + 0x20) + 0x20))();
        }
      }
      if ((*(long *)(lVar4 + 0x30) != 0) &&
         (plVar2 = *(long **)(*(long *)(lVar4 + 0x30) + 0x50), plVar2 != (long *)0x0)) {
        (**(code **)(*plVar2 + 0x20))();
      }
      *(int *)(lVar4 + 0x40) = *(int *)(lVar4 + 0x40) + 1;
      lVar3 = *(long *)(lVar4 + 0x38);
      if (lVar3 != 0) {
        *(long *)(lVar4 + 0x30) = lVar3;
        *(undefined8 *)(lVar4 + 0x38) = 0;
        *(undefined4 *)(lVar4 + 0x40) = 0;
        if (*(long **)(lVar3 + 0x20) != (long *)0x0) {
          (**(code **)(**(long **)(lVar3 + 0x20) + 0x20))();
        }
      }
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_03351a10();
    }
  }
  if ((*(char *)(*(long *)(param_1 + 0x20) + 0x1a5d) == '\0' ||
      *(char *)(*(long *)(param_1 + 0x20) + 0x1a38) == '\0') || *(char *)(param_1 + 0x49a) == '\0')
  {
    if ((*(char *)(param_1 + 0x49b) != '\0') && (iVar1 = FUN_032fbd70(param_1), iVar1 != 2)) {
      *(undefined1 *)(param_1 + 0x49b) = 0;
    }
  }
  else {
    iVar1 = FUN_032fbd70(param_1);
    if (iVar1 != 2) {
      *(undefined1 *)(param_1 + 0x49a) = 0;
    }
  }
  return;
}

