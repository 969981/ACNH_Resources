
ulong FUN_0013e390(long param_1,long param_2,ushort param_3)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined2 auStack_90 [56];
  
  if ((1 < (byte)((*(byte *)(param_1 + 0x67) >> 4) - 1)) ||
     ((*(byte *)(param_1 + 0x70) & 0x7f) == 0)) {
    return 0x9b91;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  lVar3 = lVar5 + ((ulong)*(byte *)(lVar5 + 0x34) << 0x18 | (ulong)*(byte *)(lVar5 + 0x35) << 0x10 |
                   (ulong)*(byte *)(lVar5 + 0x36) << 8 | (ulong)*(byte *)(lVar5 + 0x37)) +
          (ulong)(uint)(*(int *)(param_1 + 0x40) << 2);
  pbVar1 = (byte *)(lVar5 + ((ulong)*(byte *)(lVar5 + 0x28) << 0x18 |
                             (ulong)*(byte *)(lVar5 + 0x29) << 0x10 |
                             (ulong)*(byte *)(lVar5 + 0x2a) << 8 | (ulong)*(byte *)(lVar5 + 0x2b)) +
                   (ulong)(((uint)*(byte *)(lVar3 + 1) << 0x10 | (uint)*(byte *)(lVar3 + 2) << 8 |
                           (uint)*(byte *)(lVar3 + 3)) * 10 - 10));
  uVar2 = (uint)(int)(char)pbVar1[4] >> 1 & 0x3f;
  uVar6 = (ulong)uVar2;
  if (uVar2 == 0) {
    uVar6 = (ulong)(*pbVar1 >> 1) & 0x3f;
    uVar4 = uVar6 * 2;
    if ((ulong)param_3 < uVar4 + 2) {
      return 0x9491;
    }
    lVar3 = lVar5 + ((ulong)*(byte *)(lVar5 + 0x2c) << 0x18 | (ulong)*(byte *)(lVar5 + 0x2d) << 0x10
                     | (ulong)*(byte *)(lVar5 + 0x2e) << 8 | (ulong)*(byte *)(lVar5 + 0x2f)) +
            ((ulong)pbVar1[1] << 0x10 | (ulong)pbVar1[2] << 8 | (ulong)pbVar1[3]);
    if ((char)pbVar1[4] < 0) {
      FUN_00100660(auStack_90,lVar3,uVar4);
      auStack_90[uVar6] = 0;
      FUN_00114550(auStack_90,param_2,uVar6);
      goto LAB_0013e534;
    }
  }
  else {
    uVar4 = (ulong)(uVar2 * 2);
    if ((uint)param_3 < uVar2 * 2 + 2) {
      return 0x9491;
    }
    lVar3 = lVar5 + ((ulong)*(byte *)(lVar5 + 0x2c) << 0x18 | (ulong)*(byte *)(lVar5 + 0x2d) << 0x10
                     | (ulong)*(byte *)(lVar5 + 0x2e) << 8 | (ulong)*(byte *)(lVar5 + 0x2f)) +
            ((ulong)pbVar1[5] << 0x10 | (ulong)pbVar1[6] << 8 | (ulong)pbVar1[7]);
  }
  FUN_00100660(param_2,lVar3,uVar4);
LAB_0013e534:
  *(undefined2 *)(param_2 + uVar6 * 2) = 0;
  return uVar6;
}

