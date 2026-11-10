
ulong FUN_00129d70(undefined8 param_1,long param_2,byte param_3,long param_4,uint param_5)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long local_28;
  
  local_28 = 0;
  switch(*(byte *)(param_2 + 0x67) >> 4) {
  case 0:
  case 1:
    uVar4 = *(uint *)(param_2 + 0x40);
    goto LAB_00129e68;
  case 2:
    lVar3 = *(long *)(*(long *)(param_2 + 0x10) + 0x50);
    break;
  case 3:
  case 4:
    lVar3 = *(long *)(param_2 + 0x28);
    if (lVar3 != 0) goto LAB_00129e08;
    uVar4 = *(uint *)(*(long *)(*(long *)(param_2 + 0x10) + 8) + 0x38);
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    iVar2 = FUN_0010dbc0(*(long *)(param_2 + 0x10),3,
                         (uVar4 >> 0x10 | uVar4 << 0x10) + *(int *)(param_2 + 0x40) * 4 + -4,4,
                         &local_28);
    if (iVar2 < 0) {
      return 0xffff9ba4;
    }
    lVar3 = local_28;
    goto LAB_00129e50;
  case 5:
  case 6:
    lVar3 = *(long *)(param_2 + 0x20);
    if (lVar3 == 0) {
      return 0;
    }
LAB_00129e08:
    lVar3 = lVar3 + ((ulong)*(byte *)(lVar3 + 0x10) << 0x18 | (ulong)*(byte *)(lVar3 + 0x11) << 0x10
                     | (ulong)*(byte *)(lVar3 + 0x12) << 8 | (ulong)*(byte *)(lVar3 + 0x13));
    break;
  default:
    return 0xffff9ba4;
  }
  lVar3 = lVar3 + (ulong)(*(int *)(param_2 + 0x40) * 4 - 4);
LAB_00129e50:
  uVar4 = (uint)*(byte *)(lVar3 + 1) << 0x10 | (uint)*(byte *)(lVar3 + 2) << 8 |
          (uint)*(byte *)(lVar3 + 3);
LAB_00129e68:
  lVar3 = *(long *)(param_2 + (ulong)param_3 * 8 + 0x30);
  puVar1 = (undefined1 *)
           (lVar3 + ((ulong)*(byte *)(lVar3 + 0x10) << 0x18 | (ulong)*(byte *)(lVar3 + 0x11) << 0x10
                     | (ulong)*(byte *)(lVar3 + 0x12) << 8 | (ulong)*(byte *)(lVar3 + 0x13)) +
           (ulong)(uVar4 * 6 - 6));
  uVar4 = (uint)CONCAT11(*puVar1,puVar1[1]);
  if ((param_5 < (uVar4 & 0xfffe) + 2) ||
     (((param_3 == 0 && (0x6f < uVar4)) && (*(char *)(lVar3 + 0x27) < '\0')))) {
    uVar5 = 0xffff94a4;
  }
  else {
    uVar5 = (ulong)(ushort)(CONCAT11(*puVar1,puVar1[1]) >> 1);
    FUN_00100660(param_4,lVar3 + ((ulong)*(byte *)(lVar3 + 0x18) << 0x18 |
                                  (ulong)*(byte *)(lVar3 + 0x19) << 0x10 |
                                  (ulong)*(byte *)(lVar3 + 0x1a) << 8 |
                                 (ulong)*(byte *)(lVar3 + 0x1b)) +
                         ((ulong)(byte)puVar1[2] << 0x18 | (ulong)(byte)puVar1[3] << 0x10 |
                          (ulong)(byte)puVar1[4] << 8 | (ulong)(byte)puVar1[5]),uVar4 & 0xfffe);
    *(undefined2 *)(param_4 + uVar5 * 2) = 0;
  }
  return uVar5;
}

