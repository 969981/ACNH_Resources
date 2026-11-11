
uint FUN_00482c60(ushort *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  uVar4 = *param_1;
  if (uVar4 == 0) {
    lVar6 = 0;
    do {
      lVar7 = *(long *)(param_1 + 4);
      lVar5 = lVar6 * 4;
      lVar2 = lVar6 + 1;
      uVar1 = (int)lVar6 + 0x18d;
      uVar3 = *(uint *)(lVar7 + (ulong)(((uint)lVar2 & 0xffff) +
                                       (((uint)lVar2 >> 4 & 0xfff) / 0x27) * -0x270) * 4);
      *(uint *)(lVar7 + lVar5) =
           *(uint *)(lVar7 + (ulong)((uVar1 & 0xffff) + ((uVar1 >> 4 & 0xfff) / 0x27) * -0x270) * 4)
           ^ (uVar3 & 0x7ffffffe | *(uint *)(lVar7 + lVar5) & 0x80000000) >> 1;
      if ((uVar3 & 1) != 0) {
        *(uint *)(*(long *)(param_1 + 4) + lVar5) =
             *(uint *)(*(long *)(param_1 + 4) + lVar5) ^ 0x9908b0df;
      }
      lVar6 = lVar2;
    } while (lVar2 != 0x270);
    uVar4 = *param_1;
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 4) + (ulong)uVar4 * 4);
  uVar1 = uVar1 ^ uVar1 >> 0xb;
  uVar1 = (uVar1 & 0x13a58ad) << 7 ^ uVar1;
  uVar1 = (uVar1 & 0x1df8c) << 0xf ^ uVar1;
  *param_1 = (short)(uVar4 + 1) + (short)((uVar4 + 1) / 0x270) * -0x270;
  return uVar1 ^ uVar1 >> 0x12;
}

