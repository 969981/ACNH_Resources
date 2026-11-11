
void FUN_003ad5c0(long param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(short *)(param_1 + 0x32) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      FUN_003b12a8(*(long *)(param_1 + 0x48) + lVar1,param_2);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x80;
    } while (uVar2 < *(ushort *)(param_1 + 0x32));
  }
  return;
}

