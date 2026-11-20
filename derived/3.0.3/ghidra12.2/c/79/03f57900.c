
void FUN_03f57900(long param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  ushort uVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  
  uVar5 = *(ushort *)(param_1 + 0x14);
  if (uVar5 == 0) {
    sVar1 = *(short *)(param_1 + 0x16);
    uVar6 = (uint)sVar1;
    *(short *)(param_1 + 0x14) = sVar1;
    if (-1 < sVar1) {
      *(undefined2 *)(param_1 + 0x24) = 0;
      *(short *)(param_1 + 0x1a) = sVar1;
      if ((int)sVar1 == 0) {
        *(undefined2 *)(param_1 + 0x16) = 0;
        return;
      }
      uVar5 = 0;
      do {
        uVar7 = uVar5;
        uVar4 = (undefined2)uVar6;
        uVar8 = uVar6 & 0x8000;
        uVar3 = uVar6 >> 0xe;
        uVar6 = uVar6 << 1;
        uVar5 = uVar7 + 1;
      } while ((uVar3 & 1) == uVar8 >> 0xf);
      goto LAB_03f57a20;
    }
    uVar5 = (ushort)((uint)(int)sVar1 >> 1) ^ 0x8000;
  }
  else {
    if (uVar5 != 0xffff) {
      *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x16) >> 1;
      uVar6 = (uint)uVar5;
      iVar2 = 0;
      do {
        iVar9 = iVar2;
        uVar8 = uVar6;
        uVar6 = uVar8 << 1;
        iVar2 = iVar9 + 1;
      } while ((uVar8 >> 0xe & 1) == (uVar8 & 0x8000) >> 0xf);
      *(ushort *)(param_1 + 0x24) = (ushort)iVar9 & 0xf0;
      sVar1 = *(short *)(&DAT_041ea9d8 + (ulong)(0x40U - iVar9 & 0x3ff) * 2);
      *(undefined2 *)(param_1 + 0x26) = 0x21;
      iVar2 = (int)sVar1 * (*(ushort *)(param_1 + 0x16) & 0xfffe);
      *(short *)(param_1 + 0x1a) = sVar1;
      *(short *)(param_1 + 0x1e) = (short)iVar2;
      sVar1 = (short)((uint)iVar2 >> 0x10);
      *(short *)(param_1 + 0x1c) = sVar1;
      *(short *)(param_1 + 0x14) = (short)uVar8 + sVar1;
      *(ushort *)(param_1 + 0x16) = 0x1f - (ushort)iVar9;
      return;
    }
    sVar1 = *(short *)(param_1 + 0x16);
    uVar6 = (uint)sVar1;
    if (sVar1 < 0) {
      uVar5 = 0;
      do {
        uVar7 = uVar5;
        uVar4 = (undefined2)uVar6;
        uVar8 = uVar6 & 0x8000;
        uVar3 = uVar6 >> 0xe;
        uVar6 = uVar6 << 1;
        uVar5 = uVar7 + 1;
      } while ((uVar3 & 1) == uVar8 >> 0xf);
LAB_03f57a20:
      *(undefined2 *)(param_1 + 0x1a) = uVar4;
      *(undefined2 *)(param_1 + 0x14) = uVar4;
      *(ushort *)(param_1 + 0x16) = 0xf - uVar7;
      *(ushort *)(param_1 + 0x24) = uVar7 & 0xf0;
      return;
    }
    uVar5 = (ushort)((uint)(int)sVar1 >> 1) | 0x8000;
  }
  *(undefined4 *)(param_1 + 0x16) = 0x80000010;
  *(ushort *)(param_1 + 0x14) = uVar5;
  return;
}

