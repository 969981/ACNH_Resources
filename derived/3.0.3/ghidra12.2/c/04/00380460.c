
void FUN_00380460(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_00380358();
  if (*(long **)(param_1 + 0x48) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x48) + 0x30))();
    if ((uVar1 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x48) + 0x18))(*(long **)(param_1 + 0x48),param_2);
    }
    FUN_00367b50(*(undefined8 *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(long **)(param_1 + 0x80) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x80) + 0x30))();
    if ((uVar1 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x80) + 0x18))(*(long **)(param_1 + 0x80),param_2);
    }
    FUN_00367b50(*(undefined8 *)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if (*(long **)(param_1 + 0x88) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x88) + 0x30))();
    if ((uVar1 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x88) + 0x18))(*(long **)(param_1 + 0x88),param_2);
    }
    FUN_00367b50(*(undefined8 *)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(long **)(param_1 + 0x90) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x90) + 0x30))();
    if ((uVar1 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x90) + 0x18))(*(long **)(param_1 + 0x90),param_2);
    }
    FUN_00367b50(*(undefined8 *)(param_1 + 0x90));
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(long **)(param_1 + 0x78) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x78) + 0x30))();
    if ((uVar1 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x78) + 0x18))(*(long **)(param_1 + 0x78),param_2);
    }
    FUN_00367b50(*(undefined8 *)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  return;
}

