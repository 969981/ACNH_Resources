
int FUN_0011db10(undefined8 param_1,long param_2,undefined8 param_3,undefined2 *param_4,uint param_5
                )

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  short sVar8;
  ushort uVar9;
  ulong uVar10;
  
  lVar3 = *(long *)(param_2 + 0x10);
  uVar6 = (*(uint *)(lVar3 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar3 + 8) & 0xff00ff) << 8;
  uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
  uVar5 = (*(uint *)(lVar3 + 4) & 0xff00ff00) >> 8 | (*(uint *)(lVar3 + 4) & 0xff00ff) << 8;
  uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
  if (((uVar6 == 0x80020000) && (uVar5 != 0x40000)) || ((uVar6 == 0x80030000 && (uVar5 != 0x30000)))
     ) {
    return 0;
  }
  if (1 < *(byte *)(param_2 + 0x68) - 1) {
    if (*(byte *)(param_2 + 0x68) == 3) {
      uVar6 = *(uint *)(lVar3 + 0x70);
    }
    if (uVar6 == 0x80020000) {
      uVar7 = 1;
      if (((*(byte *)(param_2 + 0x67) & 0xf0) == 0x10) &&
         (uVar7 = 1, *(char *)(param_2 + 0x66) == ' ')) {
        uVar7 = 2;
      }
      goto LAB_0011dbe0;
    }
  }
  uVar7 = 1;
LAB_0011dbe0:
  uVar9 = 0;
  sVar8 = 0;
  uVar10 = (ulong)(*(uint *)(param_2 + 0x40) >> 0x10);
  do {
    while( true ) {
      pbVar4 = (byte *)(lVar3 + ((ulong)*(byte *)(lVar3 + 0x38) << 0x18 |
                                 (ulong)*(byte *)(lVar3 + 0x39) << 0x10 |
                                 (ulong)*(byte *)(lVar3 + 0x3a) << 8 |
                                (ulong)*(byte *)(lVar3 + 0x3b)) + (uVar10 & 0xffff) * 0x70);
      bVar2 = *pbVar4;
      if (param_5 < bVar2 + 2) {
        return -0x6b6a;
      }
      FUN_00100660(param_4,pbVar4 + 2,(uint)bVar2);
      param_4 = param_4 + (bVar2 >> 1);
      sVar8 = sVar8 + (ushort)(bVar2 >> 1);
      lVar3 = *(long *)(param_2 + 0x10);
      uVar6 = (uint)CONCAT11(*(undefined1 *)(lVar3 + 0x2a),*(undefined1 *)(lVar3 + 0x2b));
      param_5 = param_5 - bVar2;
      if (uVar6 == 0) break;
      uVar5 = 0;
      do {
        uVar1 = 0;
        if (((int)uVar10 + 1U & 0xffff) < uVar6) {
          uVar1 = (int)uVar10 + 1;
        }
        uVar10 = (ulong)uVar1;
        if ((*(byte *)(lVar3 + ((ulong)*(byte *)(lVar3 + 0x20) << 0x18 |
                                (ulong)*(byte *)(lVar3 + 0x21) << 0x10 |
                                (ulong)*(byte *)(lVar3 + 0x22) << 8 | (ulong)*(byte *)(lVar3 + 0x23)
                               ) +
                      (ulong)CONCAT11(*(undefined1 *)(lVar3 + 0x2e),*(undefined1 *)(lVar3 + 0x2f)) *
                      (uVar10 & 0xffff)) & 3) != 0) goto LAB_0011dcc8;
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xffff) < uVar6);
      uVar10 = 0;
LAB_0011dcc8:
      uVar9 = uVar9 + 1;
      if (uVar7 <= uVar9) goto LAB_0011dce8;
    }
    uVar10 = 0;
    uVar9 = uVar9 + 1;
  } while (uVar9 < uVar7);
LAB_0011dce8:
  *param_4 = 0;
  return (int)sVar8;
}

