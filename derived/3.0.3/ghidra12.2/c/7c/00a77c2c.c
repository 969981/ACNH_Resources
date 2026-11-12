
bool FUN_00a77c2c(undefined8 param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  
  lVar1 = DAT_04da4ab8;
  if (DAT_04da4ab8 == 0) {
    bVar2 = false;
  }
  else {
    iVar3 = FUN_00a74b78();
    bVar2 = iVar3 == 4;
    if ((bVar2) && (*DAT_055c10d8 == '\0')) {
      FUN_00a76460(lVar1,param_1,0xffffffffffffffff,4,0x13,5);
    }
  }
  return bVar2;
}

