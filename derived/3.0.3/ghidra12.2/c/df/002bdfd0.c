
bool FUN_002bdfd0(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00227cb0(param_1 + 0x348);
  uVar1 = 0xf8000;
  if (iVar2 != 0) {
    uVar1 = 0x10f8000;
  }
  iVar2 = FUN_00227cb0(param_1 + 0x388);
  iVar3 = FUN_00227cb0(param_1 + 0x3c8);
  uVar1 = uVar1 | (uint)(iVar2 != 0) << 0x19 | (uint)(iVar3 != 0) << 0x1a;
  iVar2 = FUN_00227cb0(param_1 + 0x438);
  if (iVar2 != 0) {
    uVar1 = uVar1 | 0x800000;
  }
  return (*(uint *)(param_1 + 0x638) & uVar1) != 0;
}

