
byte FUN_02cde870(int *param_1)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = DAT_05abbc58;
  bVar2 = 0x58;
  if (DAT_05abbc58 != 0) {
    if (*(int *)(DAT_05abbc58 + 0xe0) != 0) {
      lVar4 = 0;
      lVar5 = (long)*(int *)(DAT_05abbc58 + 0xe0) << 3;
      do {
        if (*param_1 == *(int *)(*(long *)(*(long *)(DAT_05abbc58 + 0xe8) + lVar4 * 8) + 8)) {
          uVar3 = *(undefined4 *)(*(long *)(*(long *)(DAT_05abbc58 + 0xe8) + lVar4 * 8) + 0xd8);
          goto LAB_02cde8d4;
        }
        lVar4 = lVar4 + 1;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    uVar3 = 0;
LAB_02cde8d4:
    bVar2 = FUN_03772400(uVar3);
    bVar2 = bVar2 ^ 1;
  }
  return lVar1 != 0 & bVar2;
}

