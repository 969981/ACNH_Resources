
undefined8 FUN_01c8d2c8(long param_1)

{
  ulong uVar1;
  
  if (((*(int *)(*(long *)(param_1 + 0x20) + 0x40) == 8) ||
      (*(int *)(*(long *)(param_1 + 0x18) + 0x40) == 8)) &&
     ((uVar1 = nn::pctl::CheckFreeCommunicationPermission(false), (uVar1 & 1) == 0 ||
      (**(long **)(DAT_053719b8 + 8) == 0 && (*(long **)(DAT_053719b8 + 8))[1] == 0)))) {
    *(undefined2 *)(*(long *)(param_1 + 0x20) + 0xa8) = 0;
    *(undefined2 *)(*(long *)(param_1 + 0x18) + 0xa8) = 0;
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return 0;
}

