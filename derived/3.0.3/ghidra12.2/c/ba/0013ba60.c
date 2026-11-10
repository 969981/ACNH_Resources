
ulong FUN_0013ba60(undefined8 param_1,long param_2,byte param_3,long param_4,uint param_5)

{
  undefined1 *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  switch(*(byte *)(param_2 + 0x67) >> 4) {
  case 0:
  case 1:
    uVar3 = *(uint *)(param_2 + 0x40);
    goto LAB_0013bb54;
  case 2:
    lVar2 = *(long *)(param_2 + 0x10);
    uVar4 = (ulong)*(byte *)(lVar2 + 0x2c) << 0x18 | (ulong)*(byte *)(lVar2 + 0x2d) << 0x10 |
            (ulong)*(byte *)(lVar2 + 0x2e) << 8;
    uVar5 = (ulong)*(byte *)(lVar2 + 0x2f);
    break;
  case 3:
  case 4:
    lVar2 = *(long *)(param_2 + 0x28);
    if (lVar2 != 0) goto LAB_0013bad0;
    lVar2 = *(long *)(param_2 + 0x10);
    uVar4 = (ulong)*(byte *)(lVar2 + 0x38) << 0x18 | (ulong)*(byte *)(lVar2 + 0x39) << 0x10 |
            (ulong)*(byte *)(lVar2 + 0x3a) << 8;
    uVar5 = (ulong)*(byte *)(lVar2 + 0x3b);
    break;
  case 5:
  case 6:
    lVar2 = *(long *)(param_2 + 0x20);
    if (lVar2 == 0) {
      return 0;
    }
LAB_0013bad0:
    uVar4 = (ulong)*(byte *)(lVar2 + 0x10) << 0x18 | (ulong)*(byte *)(lVar2 + 0x11) << 0x10 |
            (ulong)*(byte *)(lVar2 + 0x12) << 8;
    uVar5 = (ulong)*(byte *)(lVar2 + 0x13);
    break;
  default:
    return 0xffff9b81;
  }
  lVar2 = lVar2 + (uVar4 | uVar5) + (ulong)(*(int *)(param_2 + 0x40) * 4 - 4);
  uVar3 = (uint)*(byte *)(lVar2 + 1) << 0x10 | (uint)*(byte *)(lVar2 + 2) << 8 |
          (uint)*(byte *)(lVar2 + 3);
LAB_0013bb54:
  lVar2 = *(long *)(param_2 + (ulong)param_3 * 8 + 0x30);
  puVar1 = (undefined1 *)
           (lVar2 + ((ulong)*(byte *)(lVar2 + 0x10) << 0x18 | (ulong)*(byte *)(lVar2 + 0x11) << 0x10
                     | (ulong)*(byte *)(lVar2 + 0x12) << 8 | (ulong)*(byte *)(lVar2 + 0x13)) +
           (ulong)(uVar3 * 6 - 6));
  uVar3 = (uint)CONCAT11(*puVar1,puVar1[1]);
  if (param_5 < (uVar3 & 0xfffe) + 2) {
    return 0xffff9498;
  }
  if (((param_3 == 0) && (0x6f < uVar3)) && (*(char *)(lVar2 + 0x27) < '\0')) {
    return 0xffff9498;
  }
  uVar4 = (ulong)(ushort)(CONCAT11(*puVar1,puVar1[1]) >> 1);
  FUN_00100660(param_4,lVar2 + ((ulong)*(byte *)(lVar2 + 0x18) << 0x18 |
                                (ulong)*(byte *)(lVar2 + 0x19) << 0x10 |
                                (ulong)*(byte *)(lVar2 + 0x1a) << 8 | (ulong)*(byte *)(lVar2 + 0x1b)
                               ) +
                       ((ulong)(byte)puVar1[2] << 0x18 | (ulong)(byte)puVar1[3] << 0x10 |
                        (ulong)(byte)puVar1[4] << 8 | (ulong)(byte)puVar1[5]),uVar3 & 0xfffe);
  *(undefined2 *)(param_4 + uVar4 * 2) = 0;
  return uVar4;
}

