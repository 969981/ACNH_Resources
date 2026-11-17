
/* WARNING: Removing unreachable block (ram,0x02b10ad8) */
/* WARNING: Removing unreachable block (ram,0x02b10c54) */
/* WARNING: Removing unreachable block (ram,0x02b10a98) */

void FUN_02b109a0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  
  plVar8 = (long *)(param_1 + 8) + *(uint *)(param_1 + 0x40);
  if (6 < *(uint *)(param_1 + 0x40)) {
    plVar8 = (long *)(param_1 + 8);
  }
  if ((long *)*plVar8 == (long *)0x0) {
    return;
  }
  lVar6 = (**(code **)(*(long *)*plVar8 + 0x38))();
  if (lVar6 == 0) {
    return;
  }
  if (DAT_04c487d4 != -1) {
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar2 + 4) & 1) != 0) {
      plVar8 = (long *)(DAT_0519d040 + 0x1c0);
      goto LAB_02b10a9c;
    }
  }
  plVar8 = (long *)(DAT_0519d040 + 0x1f8);
LAB_02b10a9c:
  if ((*plVar8 != 0) && (lVar9 = *(long *)(*plVar8 + 0xb0), lVar9 != 0)) {
    if ((*(byte *)(lVar6 + 8) >> 1 & 1) == 0) {
      lVar6 = lVar6 + 0x90;
    }
    else {
      lVar6 = lVar6 + 0x2e0;
    }
    fVar12 = (float)*(int *)(lVar6 + 0x10) * 0.5;
    uVar7 = 0;
    if (fVar12 != (float)(int)fVar12) {
      uVar7 = (uint)(fVar12 < 0.0);
    }
    iVar3 = (int)fVar12 - uVar7;
    fVar12 = (float)*(int *)(lVar6 + 0x14) * 0.5;
    uVar7 = 0;
    if (fVar12 != (float)(int)fVar12) {
      uVar7 = (uint)(fVar12 < 0.0);
    }
    iVar10 = (int)fVar12 - uVar7;
    fVar12 = (float)*(int *)(lVar6 + 0x20) * 0.5;
    uVar7 = 0;
    if (fVar12 != (float)(int)fVar12) {
      uVar7 = (uint)(fVar12 < 0.0);
    }
    iVar4 = (int)fVar12 - uVar7;
    fVar12 = (float)*(int *)(lVar6 + 0x24) * 0.5;
    uVar7 = 0;
    if (fVar12 != (float)(int)fVar12) {
      uVar7 = (uint)(fVar12 < 0.0);
    }
    iVar11 = (int)fVar12 - uVar7;
    iVar1 = iVar3;
    if (iVar4 <= iVar3) {
      iVar1 = iVar4;
    }
    if (iVar3 <= iVar4) {
      iVar3 = iVar4;
    }
    iVar4 = iVar10;
    if (iVar10 <= iVar11) {
      iVar4 = iVar11;
    }
    if (iVar11 <= iVar10) {
      iVar10 = iVar11;
    }
    if (iVar4 + 1 != iVar10) {
      iVar11 = iVar1;
      do {
        uVar7 = iVar11 - *(int *)(lVar9 + 0x28);
        uVar5 = iVar10 - *(int *)(lVar9 + 0x2c);
        if ((uVar7 < *(uint *)(lVar9 + 0x18) && uVar5 <= *(uint *)(lVar9 + 0x1c)) &&
            (*(uint *)(lVar9 + 0x18) <= uVar7 || *(uint *)(lVar9 + 0x1c) != uVar5)) {
          lVar6 = lVar9 + 0x40;
LAB_02b10c18:
          FUN_0138367c(lVar6);
        }
        else if (((*(char *)(lVar9 + 0x88) != '\0') &&
                 ((uint)(iVar11 - *(int *)(lVar9 + 0x98)) < *(uint *)(lVar9 + 0xa0))) &&
                ((uint)(iVar10 - *(int *)(lVar9 + 0x9c)) < *(uint *)(lVar9 + 0xa4))) {
          lVar6 = lVar9 + 0xa8;
          goto LAB_02b10c18;
        }
        if (iVar11 < iVar3) {
          iVar11 = iVar11 + 1;
        }
        else {
          iVar10 = iVar10 + 1;
          iVar11 = iVar1;
        }
      } while ((iVar1 != iVar11) || (iVar4 + 1 != iVar10));
    }
  }
  return;
}

