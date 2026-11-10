
ulong FUN_0013e670(undefined8 param_1,long param_2,byte param_3,long param_4,uint param_5)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  if (1 < (byte)((*(byte *)(param_2 + 0x67) >> 4) - 1)) {
    return 0xffff9b99;
  }
  if ((*(byte *)(param_2 + 0x70) & 0x7f) == 0) {
    return 0xffff9b99;
  }
  lVar2 = *(long *)(param_2 + 0x10);
  lVar2 = lVar2 + ((ulong)*(byte *)(lVar2 + 0x34) << 0x18 | (ulong)*(byte *)(lVar2 + 0x35) << 0x10 |
                   (ulong)*(byte *)(lVar2 + 0x36) << 8 | (ulong)*(byte *)(lVar2 + 0x37)) +
          (ulong)(uint)(*(int *)(param_2 + 0x40) << 2);
  lVar3 = ((long *)(param_2 + 0x10))[(ulong)param_3 + 4];
  puVar1 = (undefined1 *)
           (lVar3 + ((ulong)*(byte *)(lVar3 + 0x10) << 0x18 | (ulong)*(byte *)(lVar3 + 0x11) << 0x10
                     | (ulong)*(byte *)(lVar3 + 0x12) << 8 | (ulong)*(byte *)(lVar3 + 0x13)) +
           (ulong)(((uint)*(byte *)(lVar2 + 1) << 0x10 | (uint)*(byte *)(lVar2 + 2) << 8 |
                   (uint)*(byte *)(lVar2 + 3)) * 6 - 6));
  uVar4 = (uint)CONCAT11(*puVar1,puVar1[1]);
  if (param_5 < (uVar4 & 0xfffe) + 2) {
    return 0xffff9499;
  }
  if (((param_3 == 0) && (0x6f < uVar4)) && (*(char *)(lVar3 + 0x27) < '\0')) {
    return 0xffff9499;
  }
  uVar5 = (ulong)(ushort)(CONCAT11(*puVar1,puVar1[1]) >> 1);
  FUN_00100660(param_4,lVar3 + ((ulong)*(byte *)(lVar3 + 0x18) << 0x18 |
                                (ulong)*(byte *)(lVar3 + 0x19) << 0x10 |
                                (ulong)*(byte *)(lVar3 + 0x1a) << 8 | (ulong)*(byte *)(lVar3 + 0x1b)
                               ) +
                       ((ulong)(byte)puVar1[2] << 0x18 | (ulong)(byte)puVar1[3] << 0x10 |
                        (ulong)(byte)puVar1[4] << 8 | (ulong)(byte)puVar1[5]),uVar4 & 0xfffe);
  *(undefined2 *)(param_4 + uVar5 * 2) = 0;
  return uVar5;
}

