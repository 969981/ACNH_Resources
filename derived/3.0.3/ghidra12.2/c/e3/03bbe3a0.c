
void FUN_03bbe3a0(long param_1)

{
  long lVar1;
  
  if (((*(long *)PTR_DAT_04bc3ee8 != 0) &&
      (lVar1 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x28), lVar1 != 0)) &&
     (*(long *)(lVar1 + 0x88) == param_1)) {
    *(undefined8 *)(lVar1 + 0x88) = 0;
  }
  if (*(long **)(param_1 + 0xa0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa0) + 8))();
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  if (*(long **)(param_1 + 0xa8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa8) + 8))();
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  if (*(long **)(param_1 + 0xb0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xb0) + 8))();
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  if (*(long **)(param_1 + 0xc0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xc0) + 8))();
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if (*(long **)(param_1 + 200) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 200) + 8))();
    *(undefined8 *)(param_1 + 200) = 0;
  }
  if (*(long **)(param_1 + 0xd0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xd0) + 8))();
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  return;
}

