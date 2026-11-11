
uint FUN_0044b580(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  undefined4 uVar15;
  
  lVar6 = FUN_0044f820();
  uVar14 = *(uint *)((long)param_4 + 0xc);
  if (0 < (int)uVar14) {
    uVar8 = (int)lVar6 * -0x61c8864f;
    uVar1 = (int)((ulong)lVar6 >> 0x20) * -0x61c8864f;
    uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
    uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar12 = (ulong)((uVar8 + (uVar8 >> 2) + uVar1 * 0x40 + 0x9e3779b9 ^ uVar1) & uVar14);
    lVar11 = *param_4;
    lVar13 = *(long *)(lVar11 + uVar12 * 0x10);
    if (lVar13 != -1) {
      if (lVar13 != lVar6) {
        do {
          uVar12 = (ulong)((int)uVar12 + 1U & uVar14);
          lVar13 = *(long *)(lVar11 + uVar12 * 0x10);
          if (lVar13 == -1) goto LAB_0044b634;
        } while (lVar13 != lVar6);
      }
      lVar6 = *(long *)(lVar11 + uVar12 * 0x10 + 8);
    }
  }
LAB_0044b634:
  uVar14 = *(uint *)((long)param_3 + 0xc);
  iVar10 = (int)((ulong)lVar6 >> 0x20);
  if (0 < (int)uVar14) {
    uVar8 = (int)lVar6 * -0x61c8864f;
    uVar1 = iVar10 * -0x61c8864f;
    uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
    uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar12 = (ulong)((uVar8 + (uVar8 >> 2) + uVar1 * 0x40 + 0x9e3779b9 ^ uVar1) & uVar14);
    lVar11 = *param_3;
    lVar13 = *(long *)(lVar11 + uVar12 * 0x10);
    if (lVar13 != -1) {
      if (lVar13 != lVar6) {
        do {
          uVar12 = (ulong)((int)uVar12 + 1U & uVar14);
          lVar13 = *(long *)(lVar11 + uVar12 * 0x10);
          if (lVar13 == -1) goto LAB_0044b6b8;
        } while (lVar13 != lVar6);
      }
      uVar14 = *(uint *)(lVar11 + uVar12 * 0x10 + 8);
      if (-1 < (int)uVar14) {
        return uVar14;
      }
    }
  }
LAB_0044b6b8:
  if (*(long *)(lVar6 + 8) == 0) {
    uVar14 = *(uint *)(param_2 + 1);
    iVar5 = -1;
    uVar15 = 0xffffffff;
    uVar8 = uVar14;
    iVar3 = -1;
    uVar4 = 0xffffffff;
    if (uVar14 != (*(uint *)((long)param_2 + 0xc) & 0x3fffffff)) goto LAB_0044b724;
  }
  else {
    uVar7 = FUN_0044f1b0();
    iVar5 = FUN_0044b580(uVar7,param_2,param_3,param_4);
    uVar14 = *(uint *)(param_2 + 1);
    iVar3 = iVar5;
    if (iVar5 == -1) {
      uVar15 = 0xffffffff;
      uVar8 = uVar14;
      uVar4 = uVar15;
      if (uVar14 != (*(uint *)((long)param_2 + 0xc) & 0x3fffffff)) goto LAB_0044b724;
    }
    else {
      lVar11 = *param_2 + (long)iVar5 * 0x18;
      uVar15 = *(undefined4 *)(lVar11 + 0xc);
      *(uint *)(lVar11 + 0xc) = uVar14;
      uVar8 = *(uint *)(param_2 + 1);
      uVar4 = uVar15;
      if (*(uint *)(param_2 + 1) != (*(uint *)((long)param_2 + 0xc) & 0x3fffffff))
      goto LAB_0044b724;
    }
  }
  uVar15 = uVar4;
  iVar5 = iVar3;
  FUN_00426990(PTR_DAT_048607c0,param_2,0x18);
  uVar8 = *(uint *)(param_2 + 1);
LAB_0044b724:
  plVar9 = (long *)(*param_2 + (long)(int)uVar8 * 0x18);
  *plVar9 = lVar6;
  *(int *)(plVar9 + 1) = iVar5;
  *(undefined4 *)((long)plVar9 + 0xc) = 0xffffffff;
  *(undefined4 *)(plVar9 + 2) = uVar15;
  *(uint *)(param_2 + 1) = uVar8 + 1;
  uVar8 = *(uint *)((long)param_3 + 0xc);
  if ((int)uVar8 < (int)param_3[1] * 2) {
    FUN_0044b920(param_3,PTR_DAT_048607c0,uVar8 * 2 + 2);
    uVar8 = *(uint *)((long)param_3 + 0xc);
  }
  uVar1 = (int)lVar6 * -0x61c8864f;
  uVar2 = iVar10 * -0x61c8864f;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar12 = (ulong)(uVar8 & (uVar1 + (uVar1 >> 2) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2));
  lVar13 = *param_3;
  lVar11 = *(long *)(lVar13 + uVar12 * 0x10);
  do {
    if (lVar11 == -1) {
      iVar10 = 1;
LAB_0044b7e8:
      *(int *)(param_3 + 1) = (int)param_3[1] + iVar10;
      uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
      *(long *)(lVar13 + uVar12) = lVar6;
      *(long *)(*param_3 + uVar12 + 8) = (long)(int)uVar14;
      return uVar14;
    }
    if (lVar11 == lVar6) {
      iVar10 = 0;
      goto LAB_0044b7e8;
    }
    uVar12 = (ulong)((int)uVar12 + 1U & uVar8);
    lVar11 = *(long *)(lVar13 + uVar12 * 0x10);
  } while( true );
}

