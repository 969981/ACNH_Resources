
void FUN_0139543c(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0xc4);
  uVar1 = *(uint *)(param_1 + 0xd0);
  *(undefined1 *)(param_1 + 0xd9) = 1;
  *(uint *)(param_1 + 0xc0) = uVar1;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  if (uVar1 != 0xffffffff) {
    if (*(uint *)(param_1 + 0xe0) <= uVar1) {
      uVar1 = 0;
    }
    puVar2 = *(undefined8 **)(*(long *)(param_1 + 0xe8) + (long)(int)uVar1 * 0x40);
    if (puVar2 != (undefined8 *)0x0) {
      (*(code *)*puVar2)();
    }
  }
  FUN_013954e8(param_1);
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x48))();
  }
  if (*(long **)(param_1 + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x78) + 0x48))();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_0138dd70(param_1 + 0x108);
  *(undefined1 *)(param_1 + 0x510) = 0;
  return;
}

