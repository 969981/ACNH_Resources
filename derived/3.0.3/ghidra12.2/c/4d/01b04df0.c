
undefined8 FUN_01b04df0(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  
  uVar3 = FUN_01b032d0();
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = FUN_01b032d0(param_1);
    if ((uVar3 & 1) != 0) {
      uVar3 = FUN_01b032d0(param_1);
      bVar5 = *(byte *)(param_1 + 0xb) & 3;
      if ((uVar3 & 1) == 0) {
        bVar5 = 0;
      }
      uVar3 = FUN_01b032d0(param_1);
      bVar1 = *(byte *)(param_1 + 0xb) >> 2 & 0xf;
      if ((uVar3 & 1) == 0) {
        bVar1 = 1;
      }
      if (bVar5 == 3) {
        if (bVar1 == 0xf) {
          bVar6 = 1;
        }
        else {
          iVar2 = FUN_01b03610(bVar1);
          if (iVar2 == 0) {
            bVar5 = 6;
            if (bVar1 != 10) {
              bVar5 = 3;
            }
            bVar6 = 5;
            if (bVar1 != 0xb) {
              bVar6 = bVar5;
            }
          }
          else {
            bVar6 = 4;
          }
        }
      }
      else if ((bVar5 == 2) || (bVar6 = 0, bVar5 == 1)) {
        bVar6 = bVar5;
      }
      if ((bVar6 & 0xfe) == 2) {
        return 0;
      }
      if (0xfffffffd < bVar6 - 7) {
        return 0;
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}

