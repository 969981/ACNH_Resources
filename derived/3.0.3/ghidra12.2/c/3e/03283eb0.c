
void FUN_03283eb0(long param_1)

{
  long lVar1;
  
  FUN_03292228(*(undefined8 *)(param_1 + 0x4f8));
  lVar1 = *(long *)(param_1 + 0x20);
  if ((lVar1 != param_1 + 0x230 && lVar1 != param_1 + 0x2d8) && lVar1 != param_1 + 0x38) {
    if (((lVar1 != 0) && (-1 < *(int *)(param_1 + 0x30))) &&
       (*(long **)(lVar1 + 0x80) != (long *)0x0)) {
      (**(code **)(**(long **)(lVar1 + 0x80) + 0x20))();
    }
    *(long *)(param_1 + 0x28) = param_1 + 0x230;
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  }
  return;
}

