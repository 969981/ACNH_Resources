
void FUN_033066f0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x508);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x30) != 0)) {
    if (*(int *)(lVar2 + 0x30) == 4) {
      *(undefined4 *)(lVar2 + 0x30) = 5;
    }
    FUN_032ae1e0(param_1 + 0x540);
    lVar2 = *(long *)(param_1 + 0x510);
    FUN_032b7de0(*(undefined8 *)(*(long *)(lVar2 + 0x38) + 0x68));
    FUN_032c0058(*(undefined8 *)(lVar2 + 0x30));
    *(undefined1 *)(param_1 + 0x712) = 0;
    *(undefined1 *)(param_1 + 0x710) = 1;
    if (((*(long *)(param_1 + 0x20) != 0) && (-1 < *(int *)(param_1 + 0x30))) &&
       (plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x80), plVar1 != (long *)0x0)) {
      (**(code **)(*plVar1 + 0x20))();
    }
    *(long *)(param_1 + 0x28) = param_1 + 0x38;
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  }
  return;
}

