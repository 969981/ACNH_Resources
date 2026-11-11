
void FUN_0065a920(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)PTR_PTR_04bd4d20;
  if (*(char *)(param_1 + 0x148) == '\0') {
    (**(code **)(*plVar1 + 0x18))
              (plVar1,*(undefined8 *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x140));
  }
  *(undefined1 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x2c)) && (*(long *)(param_1 + 0x20) != 0)) {
    FUN_00421f90(plVar1,*(long *)(param_1 + 0x20),0x10,*(uint *)(param_1 + 0x2c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  return;
}

