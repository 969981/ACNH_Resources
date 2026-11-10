
undefined8 FUN_0011da90(undefined8 param_1,long param_2,undefined2 *param_3,byte *param_4)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x10);
  uVar2 = (*(uint *)(lVar3 + 4) & 0xff00ff00) >> 8 | (*(uint *)(lVar3 + 4) & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  if ((uVar2 == 0x40000) || (uVar2 == 0x30000)) {
    lVar3 = lVar3 + ((ulong)*(byte *)(lVar3 + 0x44) << 0x18 | (ulong)*(byte *)(lVar3 + 0x45) << 0x10
                     | (ulong)*(byte *)(lVar3 + 0x46) << 8 | (ulong)*(byte *)(lVar3 + 0x47)) +
            (ulong)*(ushort *)(param_2 + 0x42) * 6;
    uVar1 = *(ushort *)(lVar3 + 4);
    *param_3 = (short)(((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) >> 7);
    *param_4 = *(byte *)(lVar3 + 5) >> 1 & 0x3f;
    return 1;
  }
  return 0;
}

