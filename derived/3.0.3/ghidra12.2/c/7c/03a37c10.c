
undefined8 FUN_03a37c10(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = (uint)*(byte *)(param_3 + 8);
  if (*(uint *)(*(long *)(param_1 + 0x248) + 8) <= (uint)*(byte *)(param_3 + 8)) {
    uVar3 = 0;
  }
  if ((*(byte *)(param_1 + 0x14c2) >> 5 & 1) == 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x248) + 0x10);
    lVar5 = *(long *)(lVar4 + (ulong)uVar3 * 0x23c0 + 0x1fa8);
    uVar1 = FUN_039d0790(lVar5,param_2,lVar4 + (ulong)uVar3 * 0x23c0 + 0x308);
    if ((uVar1 & 1) != 0) {
      lVar4 = lVar5 + 0x10;
      *(ulong *)(param_3 + 0x60) = lVar4 + (ulong)(~*(uint *)(lVar5 + 0x498) & 1) * 0x5d8 + 8;
      *(ulong *)(param_3 + 0x68) =
           lVar4 + (ulong)(~*(uint *)(lVar5 + 0x498) >> 1 & 1) * 0x5d8 + 0xf0;
      *(ulong *)(param_3 + 0x70) =
           lVar4 + (ulong)(~*(uint *)(lVar5 + 0x498) >> 3 & 1) * 0x5d8 + 0x2c0;
      *(ulong *)(param_3 + 0x78) =
           lVar4 + (ulong)(~*(uint *)(lVar5 + 0x498) >> 2 & 1) * 0x5d8 + 0x1d8;
      *(ulong *)(param_3 + 0x80) =
           lVar4 + (ulong)(~*(uint *)(lVar5 + 0x498) >> 4 & 1) * 0x5d8 + 0x3a8;
      return 1;
    }
  }
  plVar2 = *(long **)(param_3 + 0x318);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
    FUN_038e77e4(*(undefined8 *)(param_3 + 800),param_2,*(undefined8 *)(param_3 + 0x318));
  }
  return 0;
}

