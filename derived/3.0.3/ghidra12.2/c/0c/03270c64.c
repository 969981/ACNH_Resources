
/* WARNING: Removing unreachable block (ram,0x03270ec8) */

void FUN_03270c64(long param_1,int param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  long lVar7;
  int *piVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  FUN_032646b0(param_1 + 0x228,param_2,&local_18);
  lVar7 = *(long *)(*(long *)(param_1 + 0x210) + 0x588);
  if (lVar7 != 0) {
    uVar9 = 0xffffffff;
    if (param_2 < *(int *)(lVar7 + 0x3d4)) {
      iVar3 = *(int *)(lVar7 + 0x2e8);
      iVar5 = 0;
      if (iVar3 != 0) {
        iVar5 = param_2 / iVar3;
      }
      iVar12 = *(int *)(lVar7 + 0x430) - *(int *)(lVar7 + 0x438);
      if ((*(byte *)(lVar7 + 1000) >> 1 & 1) != 0) {
        uVar4 = *(uint *)(lVar7 + 0x434);
        uVar9 = 0;
        if ((int)uVar4 < iVar12) {
          uVar9 = ~uVar4;
        }
        if (iVar12 < 0) {
          uVar9 = uVar4 + 1;
        }
        iVar12 = uVar9 + iVar12;
      }
      uVar9 = (param_2 - iVar5 * iVar3) + (iVar5 - iVar12) * iVar3;
      if (*(int *)(lVar7 + 0x208) <= (int)uVar9 || 0x7fffffff < uVar9) {
        uVar9 = 0xffffffff;
      }
    }
    uVar11 = *(uint *)(param_1 + 0x8e928);
    lVar10 = *(long *)(param_1 + 0x8e930);
    uVar4 = uVar9;
    if (uVar11 <= uVar9) {
      uVar4 = 0;
    }
    uVar4 = *(uint *)(lVar10 + (long)(int)uVar4 * 0x20 + 8);
    if (uVar4 != 0xffffffff) {
      if (uVar4 < 0x10e) {
        lVar13 = param_1 + 0x8e968 + (ulong)uVar4 * 0x1a8;
        if (*(int *)(lVar13 + 0x1a0) != 0) {
          lVar10 = param_1 + 0x8e968 + (ulong)uVar4 * 0x1a8;
          **(undefined1 **)(lVar10 + 0x60) = 0;
          *(undefined1 *)(lVar10 + 0xf0) = 0;
          if (((*(int *)(lVar10 + 0x100) != 1) && ((*(byte *)(lVar10 + 0x18) >> 1 & 1) != 0)) &&
             (*(int *)(lVar10 + 0x140) == -1)) {
            *(undefined4 *)(lVar10 + 0x140) = 1;
          }
          *(undefined4 *)(lVar13 + 0x1a0) = 0;
          uVar11 = *(uint *)(param_1 + 0x8e928);
          lVar10 = *(long *)(param_1 + 0x8e930);
        }
      }
      if (uVar11 <= uVar9) {
        uVar9 = 0;
      }
      piVar8 = (int *)(lVar10 + (long)(int)uVar9 * 0x20 + 8);
      if (*piVar8 != -1) {
        *piVar8 = -1;
      }
    }
    if (param_2 < *(int *)(lVar7 + 0x3d4)) {
      iVar3 = *(int *)(lVar7 + 0x2e8);
      iVar5 = 0;
      if (iVar3 != 0) {
        iVar5 = param_2 / iVar3;
      }
      iVar12 = *(int *)(lVar7 + 0x430) - *(int *)(lVar7 + 0x438);
      if ((*(byte *)(lVar7 + 1000) >> 1 & 1) != 0) {
        uVar4 = *(uint *)(lVar7 + 0x434);
        uVar9 = 0;
        if ((int)uVar4 < iVar12) {
          uVar9 = ~uVar4;
        }
        if (iVar12 < 0) {
          uVar9 = uVar4 + 1;
        }
        iVar12 = uVar9 + iVar12;
      }
      uVar9 = (param_2 - iVar5 * iVar3) + (iVar5 - iVar12) * iVar3;
      uVar4 = *(uint *)(lVar7 + 0x208);
      bVar6 = (int)uVar9 < 0;
      bVar1 = (int)uVar4 <= (int)uVar9;
      if (bVar6 || bVar1) {
        uVar9 = 0xffffffff;
      }
      if ((((!bVar6 && !bVar1) && (int)uVar9 < (int)uVar4) && uVar9 < uVar4) &&
         (lVar7 = *(long *)(*(long *)(lVar7 + 0x210) + (ulong)uVar9 * 8), lVar7 != 0)) {
        bVar2 = *(byte *)(lVar7 + 0x2c2) & 0xfe;
        if ((*(byte *)(lVar7 + 0x2c3) & 1) != 0) {
          bVar2 = *(byte *)(lVar7 + 0x2c2) | 2;
        }
        *(byte *)(lVar7 + 0x2c2) = bVar2;
        local_14 = 2;
                    /* WARNING: Could not recover jumptable at 0x03270e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_03270e88 + (ulong)DAT_041845e1 * 4))();
        return;
      }
    }
  }
  *(int *)(param_1 + 0xaa9fc) = *(int *)(param_1 + 0xaa9fc) + -1;
  FUN_0326ee10(param_1);
  return;
}

