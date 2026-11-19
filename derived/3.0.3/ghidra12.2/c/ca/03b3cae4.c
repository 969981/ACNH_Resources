
long FUN_03b3cae4(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return 0;
  }
  if (((*(byte *)(lVar1 + 0x18) & 1) != 0) &&
     ((*(long *)(lVar1 + 8) == 0 || ((*(byte *)(*(long *)(lVar1 + 8) + 0x18) & 1) != 0)))) {
    *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) ^ 1;
    *(ulong *)(lVar1 + 0x18) = *(ulong *)(lVar1 + 0x18) ^ 1;
    *(ulong *)(*(long *)(param_1 + 0x10) + 0x18) = *(ulong *)(*(long *)(param_1 + 0x10) + 0x18) ^ 1;
    lVar1 = *(long *)(param_1 + 0x10);
    lVar3 = *(long *)(lVar1 + 8);
    if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x18) & 1) == 0)) {
      *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar3 + 0x10);
      *(long *)(lVar3 + 0x10) = lVar1;
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
      *(undefined8 *)(lVar1 + 0x18) = 0;
      *(long *)(param_1 + 0x10) = lVar3;
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar3 + 8);
      *(long *)(lVar3 + 8) = param_1;
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(ulong *)(lVar3 + 0x18) = *(ulong *)(lVar3 + 0x18) ^ 1;
      *(ulong *)(*(long *)(lVar3 + 8) + 0x18) = *(ulong *)(*(long *)(lVar3 + 8) + 0x18) ^ 1;
      *(ulong *)(*(long *)(lVar3 + 0x10) + 0x18) = *(ulong *)(*(long *)(lVar3 + 0x10) + 0x18) ^ 1;
      param_1 = lVar3;
    }
  }
  lVar1 = FUN_03b3cae4(*(undefined8 *)(param_1 + 8));
  *(long *)(param_1 + 8) = lVar1;
  lVar3 = *(long *)(param_1 + 0x10);
  if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x18) & 1) == 0)) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar3 + 8);
    *(long *)(lVar3 + 8) = param_1;
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    lVar1 = *(long *)(lVar3 + 8);
    param_1 = lVar3;
  }
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(lVar1 + 0x18);
    lVar3 = lVar1;
    if ((uVar2 & 1) == 0) {
      if ((*(long *)(lVar1 + 8) != 0) && ((*(byte *)(*(long *)(lVar1 + 8) + 0x18) & 1) == 0)) {
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar1 + 0x10);
        *(long *)(lVar1 + 0x10) = param_1;
        *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
        *(undefined8 *)(param_1 + 0x18) = 0;
        lVar3 = *(long *)(lVar1 + 8);
        if (lVar3 == 0) {
          return lVar1;
        }
        uVar2 = *(ulong *)(lVar3 + 0x18);
        param_1 = lVar1;
      }
    }
    if ((((uVar2 & 1) == 0) && (*(long *)(param_1 + 0x10) != 0)) &&
       ((*(byte *)(*(long *)(param_1 + 0x10) + 0x18) & 1) == 0)) {
      *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) ^ 1;
      *(ulong *)(lVar3 + 0x18) = *(ulong *)(lVar3 + 0x18) ^ 1;
      *(ulong *)(*(long *)(param_1 + 0x10) + 0x18) =
           *(ulong *)(*(long *)(param_1 + 0x10) + 0x18) ^ 1;
    }
  }
  return param_1;
}

