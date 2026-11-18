
void FUN_035c2f98(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  long *plVar13;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    return;
  }
  uVar12 = *(ulong *)(param_1 + 0x658) & 7;
  uVar2 = 0;
  if (*(long *)(param_1 + 0x660) != 0) {
    uVar2 = (uint)(*(int *)(param_1 + 0x668) - (int)*(long *)(param_1 + 0x660)) >> 1 & 0xffff;
  }
  uVar4 = (param_3 & 0xff) << 3;
  uVar3 = (param_2 & 0xff) << (ulong)(uVar4 & 0x1f) | 0x1000000 << (ulong)(param_3 & 0x1f);
  lVar10 = param_1 + uVar12 * 0xb8;
  puVar11 = (ulong *)(lVar10 + 200);
  uVar6 = *puVar11;
  lVar10 = lVar10 + 0xb0;
  if (uVar6 == 0) {
    puVar9 = (ulong *)(param_1 + uVar12 * 0xb8 + 0xd0);
    if (*puVar9 == 0) {
      iVar5 = FUN_035c57e0(lVar10,4);
      if (iVar5 == 0) {
        uVar6 = *puVar11;
        goto LAB_035c3054;
      }
      FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
      uVar6 = *puVar11;
    }
    else {
      uVar6 = 0;
LAB_035c3054:
      *(uint *)(*(long *)(param_1 + uVar12 * 0xb8 + 0xc0) + uVar6 * 4) = uVar2;
      uVar6 = *puVar11 + 1;
      *puVar11 = uVar6;
    }
    uVar7 = *puVar9;
    if (uVar7 <= uVar6) {
      uVar7 = uVar7 + (uVar7 >> 1);
      if (uVar7 <= uVar6 + 1) {
        uVar7 = uVar6 + 1;
      }
      if (uVar7 < 5) {
        uVar7 = 4;
      }
      iVar5 = FUN_035c57e0(lVar10,uVar7);
      if (iVar5 != 0) goto LAB_035c3190;
      uVar6 = *puVar11;
    }
    lVar10 = *(long *)(param_1 + uVar12 * 0xb8 + 0xc0);
    goto LAB_035c31cc;
  }
  plVar13 = (long *)(param_1 + uVar12 * 0xb8 + 0xc0);
  lVar8 = *plVar13;
  lVar1 = lVar8 + uVar6 * 4;
  if (*(uint *)(lVar1 + -8) == uVar2) {
    *(uint *)(lVar1 + -4) =
         *(uint *)(lVar1 + -4) & (0xff << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU) | uVar3;
    return;
  }
  puVar9 = (ulong *)(param_1 + uVar12 * 0xb8 + 0xd0);
  uVar12 = *puVar9;
  if (uVar6 < uVar12) {
LAB_035c314c:
    *(uint *)(lVar8 + uVar6 * 4) = uVar2;
    uVar6 = *puVar11 + 1;
    *puVar11 = uVar6;
  }
  else {
    uVar12 = uVar12 + (uVar12 >> 1);
    if (uVar12 <= uVar6 + 1) {
      uVar12 = uVar6 + 1;
    }
    if (uVar12 < 5) {
      uVar12 = 4;
    }
    iVar5 = FUN_035c57e0(lVar10,uVar12);
    if (iVar5 == 0) {
      uVar6 = *puVar11;
      lVar8 = *plVar13;
      goto LAB_035c314c;
    }
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
    uVar6 = *puVar11;
  }
  uVar12 = *puVar9;
  if (uVar12 <= uVar6) {
    uVar12 = uVar12 + (uVar12 >> 1);
    if (uVar12 <= uVar6 + 1) {
      uVar12 = uVar6 + 1;
    }
    if (uVar12 < 5) {
      uVar12 = 4;
    }
    iVar5 = FUN_035c57e0(lVar10,uVar12);
    if (iVar5 != 0) {
LAB_035c3190:
      FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
      return;
    }
    uVar6 = *puVar11;
  }
  lVar10 = *plVar13;
LAB_035c31cc:
  *(uint *)(lVar10 + uVar6 * 4) = uVar3;
  *puVar11 = *puVar11 + 1;
  return;
}

