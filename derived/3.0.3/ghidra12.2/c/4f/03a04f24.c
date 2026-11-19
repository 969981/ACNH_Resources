
void FUN_03a04f24(long param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  if (*(uint *)(param_1 + 0x108) <= param_3) {
    param_3 = 0;
  }
  lVar4 = *(long *)(param_1 + 0x110) + (long)(int)param_3 * 0x430;
  if ((*(byte *)(lVar4 + 0x3c8) >> 1 & 1) != 0) {
    FUN_03a3a0c4(param_1 + 0x3428,param_2,*(undefined1 *)(lVar4 + 8),param_4,
                 *(undefined8 *)(lVar4 + 800));
    bVar1 = *(byte *)(lVar4 + 8);
    uVar2 = (uint)bVar1;
    uVar3 = uVar2;
    if (*(uint *)(param_1 + 0x3430) <= (uint)bVar1) {
      uVar3 = 0;
    }
    if (*(char *)(*(long *)(param_1 + 0x3438) + (ulong)uVar3 * 0x238 + 0x230) != '\x01') {
      if (*(uint *)(*(long *)(param_1 + 0x3420) + 8) <= uVar2) {
        uVar2 = 0;
      }
      *(ulong *)(lVar4 + 0x318) =
           *(long *)(*(long *)(param_1 + 0x3420) + 0x10) + (ulong)uVar2 * 0x23c0 + 0x308;
      uVar3 = (uint)bVar1;
      if (*(uint *)(*(long *)(param_1 + 0x3420) + 8) <= uVar3) {
        uVar3 = 0;
      }
      *(ulong *)(lVar4 + 800) =
           *(long *)(*(long *)(param_1 + 0x3420) + 0x10) + (ulong)uVar3 * 0x23c0 + 0xaa0;
    }
    if (*(long *)(param_1 + 0x4ee8) != 0) {
      FUN_03a507f4(*(long *)(param_1 + 0x4ee8),lVar4,param_1 + 0x31d8);
      return;
    }
  }
  return;
}

