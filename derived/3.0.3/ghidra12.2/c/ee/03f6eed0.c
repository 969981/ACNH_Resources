
void FUN_03f6eed0(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0x14);
  iVar5 = *(int *)(param_1 + 0x20);
  iVar6 = *(int *)(param_1 + 0x2c);
  while( true ) {
    uVar7 = 3;
    *(undefined1 *)(param_1 + 0x3c) = 3;
    if (iVar3 == 0) {
      iVar8 = 0x7fffff;
    }
    else {
      iVar8 = (iVar3 - iVar6) + *(int *)(param_1 + 4);
      if (iVar8 < 0x800000) {
        uVar7 = 0;
        *(undefined1 *)(param_1 + 0x3c) = 0;
      }
      else {
        iVar8 = 0x7fffff;
        uVar7 = 3;
      }
    }
    if ((iVar4 != 0) && (iVar1 = (iVar4 - iVar6) + *(int *)(param_1 + 0x10), iVar1 <= iVar8)) {
      uVar7 = 1;
      *(undefined1 *)(param_1 + 0x3c) = 1;
      iVar8 = iVar1;
    }
    if ((iVar5 != 0) && (iVar1 = (iVar5 - iVar6) + *(int *)(param_1 + 0x1c), iVar1 <= iVar8)) {
      uVar7 = 2;
      *(undefined1 *)(param_1 + 0x3c) = 2;
      iVar8 = iVar1;
    }
    lVar11 = *(long *)(param_1 + 0x40);
    iVar6 = iVar8 + iVar6;
    *(int *)(param_1 + 0x2c) = iVar6;
    lVar10 = (long)*(int *)(lVar11 + 0x34) * (long)iVar8;
    lVar2 = lVar10 + 0xff;
    if (-1 < lVar10) {
      lVar2 = lVar10;
    }
    lVar2 = ((long)*(int *)(param_1 + 0x4c) - (long)(int)param_2) + (lVar2 >> 8);
    if (-1 < lVar2) break;
    if (uVar7 == 3) {
      return;
    }
    *(byte *)(param_1 + (ulong)uVar7 + 0x155) = *(char *)(param_1 + (ulong)uVar7 + 0x155) + 1U & 0xf
    ;
    iVar8 = 0;
    if ((long)*(int *)(lVar11 + 0x34) != 0) {
      iVar8 = (int)((long)(-(ulong)(param_2 >> 0x1f) & 0xffffff0000000000 | (ulong)param_2 << 8) /
                   (long)*(int *)(lVar11 + 0x34));
    }
    *(int *)(param_1 + (ulong)uVar7 * 0xc + 4) = iVar6 + iVar8;
  }
  uVar7 = 0;
  uVar9 = (uint)lVar2;
  if (*(uint *)(lVar11 + 0x28) != 0) {
    uVar7 = uVar9 / *(uint *)(lVar11 + 0x28);
  }
  *(short *)(param_1 + 0x34) = (short)uVar7;
  *(uint *)(param_1 + 0x38) = uVar9 - *(int *)(lVar11 + 0x28) * uVar7;
  return;
}

