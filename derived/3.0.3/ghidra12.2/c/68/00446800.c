
uint FUN_00446800(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x811c9dc5;
  uVar2 = (uint)*param_1;
  if (*param_1 != 0) {
    do {
      param_1 = param_1 + 1;
      uVar1 = (uVar1 ^ uVar2) * 0x1000193;
      uVar2 = (uint)*param_1;
    } while (uVar2 != 0);
  }
  return uVar1;
}

