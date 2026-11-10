
ulong FUN_00112820(long param_1,long param_2,long param_3,ushort param_4,uint param_5,ulong param_6)

{
  uint uVar1;
  undefined1 *puVar2;
  char cVar3;
  ulong uVar4;
  undefined1 *puVar5;
  
  param_2 = param_2 + (ulong)param_4;
  if (*(char *)(param_1 + 0x46) == '\0') {
    if ((param_6 & 0xffff) < ((ulong)param_5 & 0xffff) + 2) goto LAB_00112938;
    FUN_00100660(param_3,param_2,(ulong)param_5);
    uVar4 = (ulong)(param_5 >> 1 & 0x7fff);
  }
  else if ((param_5 & 0xffff) == 0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *(char *)(param_1 + 0x47);
    param_1 = param_1 + ((ulong)*(byte *)(param_1 + 0x42) << 0x18 |
                         (ulong)*(byte *)(param_1 + 0x43) << 0x10 |
                         (ulong)*(byte *)(param_1 + 0x44) << 8 | (ulong)*(byte *)(param_1 + 0x45));
    if (cVar3 == '\x02') {
      uVar4 = 0;
      do {
        uVar4 = uVar4 & 0xffff;
        if ((param_6 & 0xffff) < uVar4 * 2 + 4) goto LAB_00112938;
        puVar5 = (undefined1 *)(param_1 + ((ulong)*(byte *)(param_2 + uVar4) - 1) * 2);
        puVar2 = (undefined1 *)(param_3 + uVar4 * 2);
        uVar1 = (int)uVar4 + 1;
        uVar4 = (ulong)uVar1;
        *puVar2 = *puVar5;
        puVar2[1] = puVar5[1];
      } while ((uVar1 & 0xffff) < (param_5 & 0xffff));
    }
    else {
      uVar4 = 0;
      do {
        uVar4 = uVar4 & 0xffff;
        if ((param_6 & 0xffff) < uVar4 * 2 + 4) goto LAB_00112938;
        *(ushort *)(param_3 + uVar4 * 2) =
             (ushort)*(byte *)(param_1 + ((ulong)*(byte *)(param_2 + uVar4) - 1) * (long)cVar3);
        uVar1 = (int)uVar4 + 1;
        uVar4 = (ulong)uVar1;
      } while ((uVar1 & 0xffff) < (param_5 & 0xffff));
    }
  }
  param_6 = uVar4;
  *(undefined2 *)(param_3 + (param_6 & 0xffff) * 2) = 0;
LAB_00112938:
  return param_6 & 0xffffffff;
}

