
ulong FUN_0013e220(long param_1,long param_2,ushort param_3)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  ulong uVar4;
  
  if (1 < (byte)((*(byte *)(param_1 + 0x67) >> 4) - 1)) {
    return 0x9b92;
  }
  if ((*(byte *)(param_1 + 0x70) & 0x7f) == 0) {
    return 0x9b92;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = lVar3 + ((ulong)*(byte *)(lVar3 + 0x34) << 0x18 | (ulong)*(byte *)(lVar3 + 0x35) << 0x10 |
                   (ulong)*(byte *)(lVar3 + 0x36) << 8 | (ulong)*(byte *)(lVar3 + 0x37)) +
          (ulong)(uint)(*(int *)(param_1 + 0x40) << 2);
  pbVar2 = (byte *)(lVar3 + ((ulong)*(byte *)(lVar3 + 0x28) << 0x18 |
                             (ulong)*(byte *)(lVar3 + 0x29) << 0x10 |
                             (ulong)*(byte *)(lVar3 + 0x2a) << 8 | (ulong)*(byte *)(lVar3 + 0x2b)) +
                   (ulong)(((uint)*(byte *)(lVar1 + 1) << 0x10 | (uint)*(byte *)(lVar1 + 2) << 8 |
                           (uint)*(byte *)(lVar1 + 3)) * 10 - 10));
  uVar4 = (ulong)(*pbVar2 >> 1) & 0x3f;
  if ((ulong)param_3 < uVar4 * 2 + 2) {
    return 0x9492;
  }
  FUN_00100660(param_2,lVar3 + ((ulong)*(byte *)(lVar3 + 0x2c) << 0x18 |
                                (ulong)*(byte *)(lVar3 + 0x2d) << 0x10 |
                                (ulong)*(byte *)(lVar3 + 0x2e) << 8 | (ulong)*(byte *)(lVar3 + 0x2f)
                               ) +
                       ((ulong)pbVar2[1] << 0x10 | (ulong)pbVar2[2] << 8 | (ulong)pbVar2[3]),
               uVar4 * 2);
  *(undefined2 *)(param_2 + uVar4 * 2) = 0;
  return uVar4;
}

