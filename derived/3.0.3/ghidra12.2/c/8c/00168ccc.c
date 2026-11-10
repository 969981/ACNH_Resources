
undefined8 FUN_00168ccc(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x440);
  if (param_2 <= *(ulong *)(param_1 + 0x440)) {
    uVar1 = param_2;
  }
  *(ulong *)(param_1 + 0x30) = uVar1;
  uVar2 = *(ulong *)(param_1 + 0x448);
  if (uVar1 <= *(ulong *)(param_1 + 0x448)) {
    uVar2 = uVar1;
  }
  *(ulong *)(param_1 + 0x448) = uVar2;
  *(undefined1 *)(param_1 + 0x450) = 1;
  FUN_00168d10(param_1,param_1 + 0x40);
  return 0;
}

