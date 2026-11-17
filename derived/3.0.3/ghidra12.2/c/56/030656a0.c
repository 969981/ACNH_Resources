
void FUN_030656a0(long param_1,long param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint local_3c;
  undefined2 local_38;
  undefined4 local_34;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x210) + 0x580);
  if (lVar6 == 0) {
    return;
  }
  if ((int)*(uint *)(lVar6 + 0x2f8) < 1) {
LAB_03065764:
    uVar12 = 0xffffffff;
  }
  else {
    uVar7 = *(uint *)(lVar6 + 0x208);
    uVar10 = 0;
    uVar12 = 0xffffffff;
    lVar8 = *(long *)(param_2 + 8);
    do {
      if ((((int)uVar10 < 0) || ((int)uVar7 <= (int)uVar10)) || (uVar7 <= uVar10)) {
        if (lVar8 == 0) break;
      }
      else if (lVar8 == *(long *)(*(long *)(lVar6 + 0x210) + (ulong)uVar10 * 8)) {
        if (lVar8 == 0) goto LAB_03065764;
        uVar10 = 0;
        uVar12 = 0xffffffff;
        goto LAB_03065720;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != *(uint *)(lVar6 + 0x2f8));
  }
  goto LAB_03065768;
  while (uVar10 = uVar10 + 1, uVar7 != uVar10) {
LAB_03065720:
    if (*(long *)(*(long *)(lVar6 + 0x210) + (long)(int)uVar10 * 8) == lVar8) {
      if ((int)uVar10 < 0) goto LAB_03065764;
      iVar3 = *(int *)(lVar6 + 0x2e8);
      iVar11 = *(int *)(lVar6 + 0x430) - *(int *)(lVar6 + 0x438);
      iVar5 = 0;
      if (iVar3 != 0) {
        iVar5 = (int)uVar10 / iVar3;
      }
      if ((*(byte *)(lVar6 + 1000) >> 1 & 1) == 0) {
        iVar11 = iVar11 + iVar5;
      }
      else {
        uVar12 = *(uint *)(lVar6 + 0x434);
        uVar7 = 0;
        if ((int)uVar12 < iVar11) {
          uVar7 = ~uVar12;
        }
        if (iVar11 < 0) {
          uVar7 = uVar12 + 1;
        }
        iVar4 = iVar11 + iVar5 + uVar7;
        iVar11 = *(int *)(lVar6 + 0x3d0);
        iVar2 = 0;
        if (iVar11 <= iVar4) {
          iVar2 = iVar11;
        }
        if (-1 < iVar4) {
          iVar11 = -iVar2;
        }
        iVar11 = iVar11 + iVar4;
      }
      iVar4 = *(int *)(lVar6 + 0x3cc);
      uVar10 = (iVar11 * iVar3 - iVar5 * iVar3) + uVar10;
      uVar12 = uVar10;
      if ((int)uVar10 < 0 || iVar4 <= (int)uVar10) {
        uVar12 = 0xffffffff;
      }
      if (((int)uVar10 >= 0 && iVar4 > (int)uVar10) && (int)uVar12 < iVar4) {
        local_3c = 0;
        uVar7 = (uint)*(ushort *)(param_1 + 0x350);
        if (*(uint *)(param_1 + 0x340) <= (uint)*(ushort *)(param_1 + 0x350)) {
          uVar7 = 0;
        }
        piVar9 = (int *)(*(long *)(param_1 + 0x348) + (ulong)uVar7 * 0x160);
        if ((int)uVar12 < *piVar9) {
          local_3c = **(uint **)(*(long *)(piVar9 + 2) + (ulong)uVar12 * 8);
        }
        *(uint *)(param_1 + 0x378) = local_3c;
        uVar12 = uVar10;
      }
      break;
    }
  }
LAB_03065768:
  puVar1 = (uint *)(param_1 + 0x1c3e4);
  if ((*puVar1 & 0xfffffffe) == 2) {
    FUN_03065894(param_1,uVar12);
    uVar10 = *puVar1;
    if (uVar10 == 2) {
      FUN_03065bd8(param_1,uVar12);
      uVar10 = *puVar1;
    }
    local_34 = *(undefined4 *)(param_1 + 0x378);
    local_38 = 0x100;
    local_3c = uVar10;
    FUN_03065e30(param_1,&local_3c);
  }
  return;
}

