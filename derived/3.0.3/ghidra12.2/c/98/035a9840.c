
void FUN_035a9840(ushort *param_1,long param_2,ushort *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  
  uVar1 = *(int *)(param_2 + 0x24) + 1;
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar8 = *(uint *)(param_2 + 0x14);
  if (param_3 == (ushort *)0x0) {
    if (uVar1 != uVar8) {
      uVar10 = uVar2;
      uVar9 = uVar2;
      do {
        iVar6 = uVar9 - *param_1;
        if ((((-1 < iVar6) && (iVar6 < *(int *)(param_1 + 6))) &&
            (iVar7 = uVar8 - param_1[1], -1 < iVar7)) && (iVar7 < *(int *)(param_1 + 8))) {
          lVar11 = *(long *)(param_1 + 0x20);
          uVar5 = iVar6 + *(int *)(lVar11 + 0x1c) * iVar7;
          uVar4 = 1 << (ulong)(uVar5 & 0x1f);
          uVar3 = *(uint *)(*(long *)(lVar11 + 0x10) + (long)((int)uVar5 >> 5) * 4);
          if ((uVar4 & uVar3) != 0) {
            *(uint *)(*(long *)(lVar11 + 0x10) + ((long)((ulong)uVar5 << 0x20) >> 0x25) * 4) =
                 uVar3 & (uVar4 ^ 0xffffffff);
            *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + -1;
            uVar10 = *(uint *)(param_2 + 0x10);
          }
        }
        if ((int)uVar9 < *(int *)(param_2 + 0x20)) {
          uVar9 = uVar9 + 1;
        }
        else {
          uVar8 = uVar8 + 1;
          uVar9 = uVar10;
        }
      } while (uVar2 != uVar9 || uVar1 != uVar8);
    }
  }
  else if (uVar1 != uVar8) {
    uVar10 = uVar2;
    uVar9 = uVar2;
    do {
      iVar6 = uVar9 - *param_1;
      if ((((-1 < iVar6) && (iVar6 < *(int *)(param_1 + 6))) &&
          ((iVar7 = uVar8 - param_1[1], -1 < iVar7 && (iVar7 < *(int *)(param_1 + 8))))) &&
         ((uVar9 != *param_3 || (uVar8 != param_3[1])))) {
        lVar11 = *(long *)(param_1 + 0x20);
        uVar5 = iVar6 + *(int *)(lVar11 + 0x1c) * iVar7;
        uVar4 = 1 << (ulong)(uVar5 & 0x1f);
        uVar3 = *(uint *)(*(long *)(lVar11 + 0x10) + (long)((int)uVar5 >> 5) * 4);
        if ((uVar4 & uVar3) != 0) {
          *(uint *)(*(long *)(lVar11 + 0x10) + ((long)((ulong)uVar5 << 0x20) >> 0x25) * 4) =
               uVar3 & (uVar4 ^ 0xffffffff);
          *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + -1;
          uVar10 = *(uint *)(param_2 + 0x10);
        }
      }
      if ((int)uVar9 < *(int *)(param_2 + 0x20)) {
        uVar9 = uVar9 + 1;
      }
      else {
        uVar8 = uVar8 + 1;
        uVar9 = uVar10;
      }
    } while (uVar2 != uVar9 || uVar1 != uVar8);
  }
  return;
}

