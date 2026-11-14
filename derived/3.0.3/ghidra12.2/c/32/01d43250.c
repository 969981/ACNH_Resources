
undefined8 FUN_01d43250(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x370);
  pcVar1 = *(code **)(param_1 + 0x368);
  if (pcVar1 != (code *)0x0 || uVar2 != 0 && ((uVar2 & 1) != 0 || pcVar1 != (code *)0x0)) {
    if ((uVar2 & 1) != 0) {
      pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + ((long)uVar2 >> 1)));
    }
    (*pcVar1)();
  }
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  return 1;
}

