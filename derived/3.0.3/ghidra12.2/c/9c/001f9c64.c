
bool FUN_001f9c64(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined1 auStack_58 [56];
  
  FUN_00196bb8(auStack_58);
  uVar3 = FUN_00193770(param_1 + 0x2a0,auStack_58);
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_00195a0c(param_1 + 8,auStack_58,param_3);
    bVar1 = iVar2 == 0;
  }
  FUN_00196ce0(auStack_58);
  return bVar1;
}

