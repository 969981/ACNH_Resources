
void FUN_003cc400(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    lVar2 = *(long *)(param_1 + 0x20);
    while (lVar2 != param_1 + 0x18) {
      lVar1 = lVar2 + -0x3d8;
      lVar2 = *(long *)(lVar2 + 8);
      FUN_003bf4f0(lVar1);
      FUN_003bfa90(lVar1,3);
      FUN_003cc49c(param_1,lVar1);
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_003bd8d0();
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_003bd8d0();
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    FUN_003bd8d0(param_1);
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}

