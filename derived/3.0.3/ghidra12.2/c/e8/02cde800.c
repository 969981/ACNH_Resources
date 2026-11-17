
byte FUN_02cde800(undefined8 param_1)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  
  lVar1 = DAT_05abbc58;
  bVar2 = 0x58;
  if (DAT_05abbc58 != 0) {
    iVar3 = FUN_03722560(DAT_05abbc58,param_1);
    if (iVar3 == -1) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*(long *)(*(long *)(lVar1 + 0xe8) + (long)iVar3 * 8) + 0xd8);
    }
    bVar2 = FUN_03772400(uVar4);
    bVar2 = bVar2 ^ 1;
  }
  return lVar1 != 0 & bVar2;
}

