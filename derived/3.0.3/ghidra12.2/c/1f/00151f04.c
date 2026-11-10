
undefined8 FUN_00151f04(long param_1)

{
  long lVar1;
  ushort uVar2;
  
  lVar1 = *(long *)(param_1 + 0x800);
  *(long *)(param_1 + 0x1518) = lVar1;
  if ((lVar1 == 0) && (*(long *)(param_1 + 0xd58) == 0)) {
    uVar2 = *(ushort *)(param_1 + 0x15c4) & 0xfdff;
  }
  else {
    if ((*(ushort *)(param_1 + 0x15c4) >> 10 & 1) != 0) {
      FUN_00143300(*(undefined8 *)(param_1 + 0x1510));
      lVar1 = *(long *)(param_1 + 0x1518);
    }
    if (lVar1 == 0) {
      lVar1 = FUN_00143320(*(undefined8 *)(param_1 + 0xd58));
    }
    else {
      lVar1 = FUN_00146120(&DAT_040c29c0);
    }
    *(long *)(param_1 + 0x1510) = lVar1;
    uVar2 = *(ushort *)(param_1 + 0x15c4) & 0xf800 |
            *(ushort *)(param_1 + 0x15c4) & 0x3ff | (ushort)(lVar1 != 0) << 10;
    *(ushort *)(param_1 + 0x15c4) = uVar2;
    if (lVar1 == 0) {
      return 0x1b;
    }
    uVar2 = uVar2 | 0x200;
  }
  *(ushort *)(param_1 + 0x15c4) = uVar2;
  return 0;
}

