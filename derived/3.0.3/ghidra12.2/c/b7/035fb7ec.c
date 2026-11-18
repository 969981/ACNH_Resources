
uint FUN_035fb7ec(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  bVar2 = *(byte *)(param_1 + -0xa8b);
  if (bVar2 != 0xff) {
    if ((bVar2 & 0xfc) == 0x50) {
      if ((param_2 & 0xf8) == 0x98) goto LAB_035fb8b4;
      puVar8 = (undefined8 *)(*(long *)(param_1 + 0x28) + (ulong)(param_2 & 0xf8));
      puVar7 = (undefined8 *)(*(long *)(param_1 + 0x28) + 0x98);
    }
    else if ((bVar2 & 0xfc) == 0) {
      if ((param_2 & 0xf8) == 0) goto LAB_035fb8b4;
      puVar8 = *(undefined8 **)(param_1 + 0x28);
      puVar7 = (undefined8 *)((long)puVar8 + (ulong)(param_2 & 0xf8));
    }
    else {
      uVar5 = bVar2 - 4;
      uVar6 = (ulong)(uVar5 * 2) & 0xf8;
      iVar4 = (int)uVar6;
      *(undefined8 *)(*(long *)(param_1 + 0x28) + ((ulong)(iVar4 + 8) & 0xf8)) =
           *(undefined8 *)(*(long *)(param_1 + 0x28) + uVar6);
      if ((((uVar5 >> 2 & 1) == 0) ||
          (*(undefined8 *)(*(long *)(param_1 + 0x28) + ((ulong)(iVar4 - 8) & 0xff)) =
                *(undefined8 *)(*(long *)(param_1 + 0x28) + uVar6),
          ((uVar5 ^ 0xffffffff) & 0xc) != 0)) ||
         (*(undefined8 *)(*(long *)(param_1 + 0x28) + ((ulong)(iVar4 - 0x18) & 0xff)) =
               *(undefined8 *)(*(long *)(param_1 + 0x28) + uVar6),
         ((uVar5 ^ 0xffffffff) & 0x1c) != 0)) goto LAB_035fb8b4;
      puVar8 = *(undefined8 **)(param_1 + 0x28);
      puVar7 = (undefined8 *)((long)puVar8 + uVar6);
    }
    *puVar8 = *puVar7;
  }
LAB_035fb8b4:
  uVar3 = *(ushort *)(param_1 + (ulong)param_3 * 8 + 0x168);
  if (uVar3 == 0) {
    param_2 = param_2 + 0x200;
    if (0x9f < (param_2 & 0xffff)) {
      return 0;
    }
    lVar1 = param_1 + (ulong)param_3 * 8;
    bVar2 = *(byte *)(*(long *)(param_1 + 0x88) + ((ulong)param_2 & 0xffff));
    *(short *)(param_1 + 6) = (short)param_2;
    *(short *)(lVar1 + 0x16c) = (short)param_2;
    *(byte *)(lVar1 + 0x16e) = bVar2;
  }
  else {
    if (0xff < uVar3) {
      return 0xff;
    }
    if (param_3 == 4) {
      if (*(ushort *)(param_1 + 6) == 0xffff) {
        return 0;
      }
      return (uint)*(byte *)(*(long *)(param_1 + 0x88) +
                            (ulong)(*(ushort *)(param_1 + 6) & 0xfe | param_2 & 1));
    }
    bVar2 = *(byte *)(param_1 + (ulong)param_3 * 8 + 0x16e);
    if (param_3 == 1) {
      uVar5 = (uint)bVar2;
      if ((uVar3 & 2) != 0) {
        uVar5 = 0xffffffff;
      }
      return uVar5;
    }
  }
  return (uint)bVar2;
}

