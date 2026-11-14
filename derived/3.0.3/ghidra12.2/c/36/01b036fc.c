
byte FUN_01b036fc(long param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = FUN_01b032d0();
  if ((uVar4 & 1) == 0) {
    bVar2 = 1;
  }
  else {
    uVar4 = FUN_01b032d0(param_1);
    bVar2 = 1;
    if (((uVar4 & 1) != 0) && (bVar1 = *(byte *)(param_1 + 0xb), (bVar1 & 3) != 0)) {
      uVar4 = FUN_01b032d0(param_1);
      bVar2 = *(byte *)(param_1 + 0xb) >> 2 & 0xf;
      if ((uVar4 & 1) == 0) {
        bVar2 = 1;
      }
      if ((bVar1 & 3) == 3) {
        if (bVar2 == 0xf) {
          return 0x10;
        }
        iVar3 = FUN_01b03610(bVar2);
        if (iVar3 != 0) {
          return 1;
        }
        if ((bVar2 & 0xe) == 10) {
          return 1;
        }
      }
    }
  }
  return bVar2;
}

