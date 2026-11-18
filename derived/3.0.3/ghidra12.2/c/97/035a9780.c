
void FUN_035a9780(ushort *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  
  iVar1 = *(int *)(param_2 + 0x24) + 1;
  iVar8 = *(int *)(param_2 + 0x14);
  if (iVar1 != iVar8) {
    iVar2 = *(int *)(param_2 + 0x10);
    iVar10 = iVar2;
    iVar9 = iVar2;
    do {
      iVar6 = iVar9 - (uint)*param_1;
      if ((((-1 < iVar6) && (iVar6 < *(int *)(param_1 + 6))) &&
          (iVar7 = iVar8 - (uint)param_1[1], -1 < iVar7)) && (iVar7 < *(int *)(param_1 + 8))) {
        lVar11 = *(long *)(param_1 + 0x20);
        uVar5 = iVar6 + *(int *)(lVar11 + 0x1c) * iVar7;
        uVar4 = 1 << (ulong)(uVar5 & 0x1f);
        uVar3 = *(uint *)(*(long *)(lVar11 + 0x10) + (long)((int)uVar5 >> 5) * 4);
        if ((uVar4 & uVar3) != 0) {
          *(uint *)(*(long *)(lVar11 + 0x10) + ((long)((ulong)uVar5 << 0x20) >> 0x25) * 4) =
               uVar3 & (uVar4 ^ 0xffffffff);
          *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + -1;
          iVar10 = *(int *)(param_2 + 0x10);
        }
      }
      if (iVar9 < *(int *)(param_2 + 0x20)) {
        iVar9 = iVar9 + 1;
      }
      else {
        iVar8 = iVar8 + 1;
        iVar9 = iVar10;
      }
    } while (iVar2 != iVar9 || iVar1 != iVar8);
  }
  return;
}

