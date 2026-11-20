
void FUN_03f56c94(long param_1,uint param_2)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  *(undefined4 *)(param_1 + 0x250) = 0;
  uVar12 = 0x32e - (param_2 >> 4 & 3);
  *(short *)(param_1 + 0x26) = (short)uVar12;
  *(undefined4 *)(param_1 + 0x23c) = 1;
  sVar4 = *(short *)(param_1 + 0x22e);
  *(short *)(param_1 + 0x14) = *(short *)(param_1 + 0x22a);
  iVar9 = *(short *)(param_1 + 0x22a) * 2;
  uVar3 = *(ushort *)(&DAT_041ea9d8 + (ulong)uVar12 * 2);
  *(short *)(param_1 + 0x22) = sVar4;
  *(short *)(param_1 + 0x1a) = sVar4;
  iVar10 = *(short *)(param_1 + 0x22c) * 2;
  *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x22c);
  lVar1 = param_1 + 0x28;
  uVar2 = uVar3 - 2 ^ 0x10;
  sVar5 = *(short *)(lVar1 + ((ulong)uVar3 << 1 | 0x80));
  *(undefined4 *)(param_1 + 0x23c) = 2;
  sVar6 = *(short *)(lVar1 + (ulong)(ushort)(uVar3 - 1 | 0x40) * 2);
  *(undefined4 *)(param_1 + 0x23c) = 3;
  iVar11 = sVar4 * 2;
  sVar7 = *(short *)(lVar1 + (ulong)(ushort)(uVar3 - 2 | 0x40) * 2);
  sVar8 = *(short *)(lVar1 + (ulong)uVar2 * 2);
  *(undefined4 *)(param_1 + 0x250) = 1;
  *(short *)(param_1 + 0x240) =
       (short)((uint)(iVar10 * sVar6) >> 0x10) + (short)((uint)(iVar9 * sVar5) >> 0x10) +
       (short)((uint)(iVar11 * sVar7) >> 0x10);
  uVar3 = uVar2 + 2 ^ 0x30;
  sVar5 = *(short *)(lVar1 + (ulong)(ushort)(uVar2 + 1 | 0x40) * 2);
  sVar6 = *(short *)(lVar1 + (ulong)(ushort)(uVar2 + 2 | 0x40) * 2);
  sVar7 = *(short *)(lVar1 + (ulong)uVar3 * 2);
  *(undefined4 *)(param_1 + 0x250) = 2;
  *(ushort *)(param_1 + 0x24) = uVar3 - 2;
  *(short *)(param_1 + 0x242) =
       (short)((uint)(iVar10 * sVar5) >> 0x10) + (short)((uint)(iVar11 * sVar8) >> 0x10) +
       (short)((uint)(iVar9 * sVar6) >> 0x10);
  sVar5 = *(short *)(lVar1 + (ulong)(ushort)(uVar3 - 1 | 0x40) * 2);
  sVar6 = *(short *)(lVar1 + (ulong)(ushort)(uVar3 - 2 | 0x40) * 2);
  *(undefined4 *)(param_1 + 0x250) = 3;
  *(short *)(param_1 + 0x18) = sVar6;
  uVar12 = (int)sVar6 * (int)sVar4;
  sVar4 = (short)(uVar12 >> 0xf);
  *(short *)(param_1 + 0x1e) = (short)uVar12 * 2;
  *(short *)(param_1 + 0x1c) = sVar4;
  sVar4 = (short)((uint)(iVar10 * sVar5) >> 0x10) + (short)((uint)(iVar9 * sVar7) >> 0x10) + sVar4;
  *(short *)(param_1 + 0x16) = sVar4;
  *(short *)(param_1 + 0x244) = sVar4;
  return;
}

