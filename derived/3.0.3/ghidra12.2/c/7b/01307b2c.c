
/* WARNING: Removing unreachable block (ram,0x01307f6c) */
/* WARNING: Removing unreachable block (ram,0x01307f24) */
/* WARNING: Removing unreachable block (ram,0x01307be8) */
/* WARNING: Removing unreachable block (ram,0x01307bdc) */
/* WARNING: Removing unreachable block (ram,0x01307c08) */
/* WARNING: Removing unreachable block (ram,0x01307f34) */
/* WARNING: Removing unreachable block (ram,0x01307f7c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffbe : 0x01307f44 */
/* WARNING: Removing unreachable block (ram,0x01307c50) */
/* WARNING: Removing unreachable block (ram,0x01307c2c) */
/* WARNING: Removing unreachable block (ram,0x01307c38) */
/* WARNING: Removing unreachable block (ram,0x01307c58) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01307b2c(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  short sVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  undefined2 *puVar13;
  byte local_38;
  
  if (param_2 == 0) {
    return;
  }
  sVar9 = *(short *)(param_1 + 0x84);
  if (*(short *)(param_1 + 0x88) <= *(short *)(param_1 + 0x84)) {
    sVar9 = *(short *)(param_1 + 0x88);
  }
  iVar3 = *(int *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x1c);
  sVar10 = *(short *)(param_1 + 0x86);
  if (*(short *)(param_1 + 0x8a) <= *(short *)(param_1 + 0x86)) {
    sVar10 = *(short *)(param_1 + 0x8a);
  }
  puVar13 = (undefined2 *)
            (param_1 + 0x8c + (ulong)(uint)((iVar4 - sVar10) * 3 + (iVar3 - sVar9)) * 0xe);
  if (2 < (uint)(iVar4 - sVar10) || 2 < (uint)(iVar3 - sVar9)) {
    puVar13 = (undefined2 *)PTR_DAT_04bbc2f8;
  }
  local_38 = *(byte *)(puVar13 + 6);
  uVar8 = *puVar13;
  uVar7 = *(undefined1 *)(puVar13 + 2);
  if (param_2 == 2) {
    FUN_01308400(param_1);
    uVar12 = local_38 - 1;
    if (5 < uVar12) {
      uVar12 = 4;
    }
    local_38 = (byte)uVar12;
    lVar1 = param_1 + 0x1370;
    iVar3 = *(int *)(param_1 + 0x18);
    lVar2 = lVar1 + (ulong)*(uint *)(param_1 + 0x50) * 0x28;
    if (1 < *(uint *)(param_1 + 0x50)) {
      lVar2 = lVar1;
    }
    iVar4 = *(int *)(lVar2 + 0x20);
    if ((iVar4 <= iVar3) && (iVar3 <= iVar4 + 3)) {
      iVar5 = *(int *)(lVar2 + 0x24);
      iVar6 = *(int *)(param_1 + 0x1c);
      if ((iVar5 <= iVar6) &&
         ((((iVar6 <= iVar5 + 3 && ((uint)(iVar3 - iVar4) < 3)) && ((uint)(iVar6 - iVar5) < 3)) &&
          ((*(uint *)(lVar2 + 0x10) >> (ulong)((iVar6 - iVar5) * 3 + (iVar3 - iVar4) & 0x1f) & 1) !=
           0)))) {
        lVar2 = lVar1 + (ulong)*(uint *)(param_1 + 0x50) * 0x28;
        if (1 < *(uint *)(param_1 + 0x50)) {
          lVar2 = lVar1;
        }
        iVar4 = *(int *)(lVar2 + 0x20);
        if ((iVar4 <= iVar3) && (iVar3 <= iVar4 + 3)) {
          iVar5 = *(int *)(lVar2 + 0x24);
          if (((iVar5 <= iVar6) && ((iVar6 <= iVar5 + 3 && ((uint)(iVar3 - iVar4) < 3)))) &&
             ((uint)(iVar6 - iVar5) < 3)) {
            *(uint *)(lVar2 + 0x10) =
                 *(uint *)(lVar2 + 0x10) &
                 (1 << (ulong)((iVar6 - iVar5) * 3 + (iVar3 - iVar4) & 0x1f) ^ 0xffffffffU);
          }
        }
      }
    }
  }
  else if (param_2 == 1) {
    if (local_38 < 5) {
      local_38 = local_38 + 1;
    }
    else {
      local_38 = 4;
    }
    lVar1 = param_1 + 0x1370;
    lVar2 = lVar1 + (ulong)*(uint *)(param_1 + 0x50) * 0x28;
    if (1 < *(uint *)(param_1 + 0x50)) {
      lVar2 = lVar1;
    }
    iVar5 = *(int *)(lVar2 + 0x20);
    if ((iVar5 <= iVar3) && (iVar3 <= iVar5 + 3)) {
      iVar6 = *(int *)(lVar2 + 0x24);
      if (((iVar6 <= iVar4) &&
          (((iVar4 <= iVar6 + 3 && ((uint)(iVar3 - iVar5) < 3)) && ((uint)(iVar4 - iVar6) < 3)))) &&
         ((*(uint *)(lVar2 + 0x10) >> (ulong)((iVar4 - iVar6) * 3 + (iVar3 - iVar5) & 0x1f) & 1) !=
          0)) goto LAB_01307eac;
    }
    lVar2 = lVar1 + (ulong)*(uint *)(param_1 + 0x50) * 0x28;
    if (1 < *(uint *)(param_1 + 0x50)) {
      lVar2 = lVar1;
    }
    iVar5 = *(int *)(lVar2 + 0x20);
    if ((iVar5 <= iVar3) && (iVar3 <= iVar5 + 3)) {
      iVar6 = *(int *)(lVar2 + 0x24);
      if (((iVar6 <= iVar4) && ((iVar4 <= iVar6 + 3 && ((uint)(iVar3 - iVar5) < 3)))) &&
         ((uint)(iVar4 - iVar6) < 3)) {
        *(uint *)(lVar2 + 0x10) =
             *(uint *)(lVar2 + 0x10) | 1 << (ulong)((iVar4 - iVar6) * 3 + (iVar3 - iVar5) & 0x1f);
      }
    }
  }
LAB_01307eac:
  sVar9 = *(short *)(param_1 + 0x84);
  if (*(short *)(param_1 + 0x88) <= *(short *)(param_1 + 0x84)) {
    sVar9 = *(short *)(param_1 + 0x88);
  }
  sVar10 = *(short *)(param_1 + 0x86);
  if (*(short *)(param_1 + 0x8a) <= *(short *)(param_1 + 0x86)) {
    sVar10 = *(short *)(param_1 + 0x8a);
  }
  uVar12 = *(int *)(param_1 + 0x18) - (int)sVar9;
  if ((uVar12 < 3) && (uVar11 = *(int *)(param_1 + 0x1c) - (int)sVar10, uVar11 < 3)) {
    puVar13 = (undefined2 *)(param_1 + 0x8c + (ulong)(uVar11 * 3 + uVar12) * 0xe);
    *puVar13 = uVar8;
    puVar13[1] = 0;
    *(undefined1 *)(puVar13 + 2) = uVar7;
    puVar13[3] = 0;
    puVar13[4] = 0;
    *(undefined1 *)(puVar13 + 5) = 0;
    *(byte *)(puVar13 + 6) = local_38;
  }
  return;
}

