
undefined8 FUN_01fb7078(long param_1)

{
  short *psVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  psVar1 = (short *)FUN_01e57b44(*(undefined8 *)(param_1 + 0x10));
  if ((*psVar1 == -2) || (uVar2 = FUN_0277d7b4(psVar1,param_1 + 0xae84), (uVar2 & 1) != 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0x12;
  }
  return uVar3;
}

