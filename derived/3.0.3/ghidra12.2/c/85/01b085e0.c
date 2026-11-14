
uint FUN_01b085e0(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = FUN_01b032d0();
  if ((uVar3 & 1) == 0) {
    uVar4 = 1;
  }
  else {
    uVar3 = FUN_01b032d0(param_1);
    uVar4 = 1;
    if (((uVar3 & 1) != 0) && ((*(byte *)(param_1 + 0xb) & 3) != 0)) {
      uVar3 = FUN_01b032d0(param_1);
      uVar4 = *(byte *)(param_1 + 0xb) & 3;
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
      }
      uVar3 = FUN_01b032d0(param_1);
      bVar1 = *(byte *)(param_1 + 0xb) >> 2 & 0xf;
      if ((uVar3 & 1) == 0) {
        bVar1 = 1;
      }
      if (uVar4 == 3) {
        if (bVar1 == 0xf) {
          uVar5 = 1;
        }
        else {
          iVar2 = FUN_01b03610(bVar1);
          if (iVar2 == 0) {
            uVar4 = 6;
            if (bVar1 != 10) {
              uVar4 = 3;
            }
            uVar5 = 5;
            if (bVar1 != 0xb) {
              uVar5 = uVar4;
            }
          }
          else {
            uVar5 = 4;
          }
        }
      }
      else if ((uVar4 == 2) || (uVar5 = 0, uVar4 == 1)) {
        uVar5 = uVar4;
      }
      uVar4 = (uint)(uVar5 < 5) & 0x13U >> (ulong)uVar5;
    }
  }
  return uVar4;
}

