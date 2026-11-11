
void FUN_003ad250(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if ((lVar2 != 0) && ((*(ushort *)(lVar2 + 8) & 1) != 0)) {
    FUN_003b38a0(lVar2,param_2);
  }
  uVar3 = (ulong)*(ushort *)(param_1 + 0x30);
  if (*(ushort *)(param_1 + 0x30) != 0) {
    lVar2 = 0;
    uVar4 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x40) + lVar2;
      if ((*(byte *)(lVar1 + 8) & 1) != 0) {
        FUN_003af040(lVar1,param_2);
        uVar3 = (ulong)*(ushort *)(param_1 + 0x30);
      }
      uVar4 = uVar4 + 1;
      lVar2 = lVar2 + 0x70;
    } while (uVar4 < uVar3);
  }
  uVar3 = (ulong)*(ushort *)(param_1 + 0x32);
  if (*(ushort *)(param_1 + 0x32) != 0) {
    lVar2 = 0;
    uVar4 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x48) + lVar2;
      if ((*(ushort *)(lVar1 + 8) & 1) != 0) {
        FUN_003b1220(lVar1,param_2);
        uVar3 = (ulong)*(ushort *)(param_1 + 0x32);
      }
      uVar4 = uVar4 + 1;
      lVar2 = lVar2 + 0x80;
    } while (uVar4 < uVar3);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(ushort *)(param_1 + 0x1a) = *(ushort *)(param_1 + 0x1a) ^ 1;
  return;
}

