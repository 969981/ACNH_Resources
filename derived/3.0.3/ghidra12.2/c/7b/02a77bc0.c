
/* WARNING: Removing unreachable block (ram,0x02a77cd4) */
/* WARNING: Removing unreachable block (ram,0x02a77ce4) */
/* WARNING: Removing unreachable block (ram,0x02a77cf0) */

void FUN_02a77bc0(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  
  if (*(char *)(param_1 + 800) != '\0') {
    fVar10 = (float)*(int *)(param_1 + 0x2b0) * 0.5;
    uVar6 = 0;
    if (fVar10 != (float)(int)fVar10) {
      uVar6 = (uint)(fVar10 < 0.0);
    }
    iVar2 = (int)fVar10 - uVar6;
    fVar10 = (float)*(int *)(param_1 + 0x2b4) * 0.5;
    uVar6 = 0;
    if (fVar10 != (float)(int)fVar10) {
      uVar6 = (uint)(fVar10 < 0.0);
    }
    iVar3 = (int)fVar10 - uVar6;
    fVar10 = (float)*(int *)(param_1 + 0x2c0) * 0.5;
    uVar6 = 0;
    if (fVar10 != (float)(int)fVar10) {
      uVar6 = (uint)(fVar10 < 0.0);
    }
    iVar7 = (int)fVar10 - uVar6;
    fVar10 = (float)*(int *)(param_1 + 0x2c4) * 0.5;
    uVar6 = 0;
    if (fVar10 != (float)(int)fVar10) {
      uVar6 = (uint)(fVar10 < 0.0);
    }
    iVar9 = (int)fVar10 - uVar6;
    iVar1 = iVar2;
    if (iVar7 <= iVar2) {
      iVar1 = iVar7;
    }
    if (iVar2 <= iVar7) {
      iVar2 = iVar7;
    }
    iVar7 = iVar3;
    if (iVar9 <= iVar3) {
      iVar7 = iVar9;
    }
    if (iVar3 <= iVar9) {
      iVar3 = iVar9;
    }
    FUN_009392c8(param_1 + 0x280);
    if (((*(long *)(DAT_0519d040 + 0x1f8) != 0) &&
        (lVar8 = *(long *)(*(long *)(DAT_0519d040 + 0x1f8) + 0xb0), lVar8 != 0)) &&
       (iVar3 + 1 != iVar7)) {
      iVar9 = iVar1;
      do {
        uVar6 = iVar9 - *(int *)(lVar8 + 0x28);
        uVar4 = iVar7 - *(int *)(lVar8 + 0x2c);
        if ((uVar6 < *(uint *)(lVar8 + 0x18) && uVar4 <= *(uint *)(lVar8 + 0x1c)) &&
            (*(uint *)(lVar8 + 0x18) <= uVar6 || *(uint *)(lVar8 + 0x1c) != uVar4)) {
          lVar5 = lVar8 + 0x40;
LAB_02a77d78:
          FUN_0138367c(lVar5);
        }
        else if (((*(char *)(lVar8 + 0x88) != '\0') &&
                 ((uint)(iVar9 - *(int *)(lVar8 + 0x98)) < *(uint *)(lVar8 + 0xa0))) &&
                ((uint)(iVar7 - *(int *)(lVar8 + 0x9c)) < *(uint *)(lVar8 + 0xa4))) {
          lVar5 = lVar8 + 0xa8;
          goto LAB_02a77d78;
        }
        if (iVar9 < iVar2) {
          iVar9 = iVar9 + 1;
        }
        else {
          iVar7 = iVar7 + 1;
          iVar9 = iVar1;
        }
      } while ((iVar1 != iVar9) || (iVar3 + 1 != iVar7));
    }
  }
  return;
}

