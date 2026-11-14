
uint FUN_01afc374(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_8;
  
  local_8 = 0xa12;
  FUN_0277d4ac(&local_8);
  uVar2 = FUN_0277d7b4(param_1 + 8,&local_8);
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0277e024(param_1 + 8);
  }
  return uVar1 & 1;
}

