
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_016ffdc0(long param_1,uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long *plVar5;
  float *pfVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined *local_60;
  undefined *puStack_58;
  
  uVar7 = *(uint *)(param_1 + 0x14d4);
  uVar9 = uVar7 & 0xffff;
  if (uVar7 < 0xffff0000 && uVar9 != 0xffff) {
    uVar7 = uVar7 & 0xffff0000;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x1150);
    if (lVar8 == 0) {
      uVar7 = 0xffff0000;
      uVar9 = 0xffff;
    }
    else {
      local_60 = PTR_DAT_04bb2020 + 0x10;
      puStack_58 = PTR_DAT_04bb2f90 + 0x54;
      if (*(int *)(lVar8 + 0x30) == 0) {
        uVar9 = 0xffffffff;
      }
      else {
        lVar11 = *(long *)(lVar8 + 0x38);
        lVar10 = 0;
        lVar8 = (long)*(int *)(lVar8 + 0x30) << 3;
        uVar9 = 0xffffffff;
        do {
          plVar5 = (long *)**(undefined8 **)(lVar11 + lVar10 * 8);
          iVar4 = (**(code **)(*plVar5 + 0x38))(plVar5,&local_60);
          if (iVar4 != -1) {
            uVar9 = (uint)lVar10 & 0xffff | iVar4 << 0x10;
            break;
          }
          lVar10 = lVar10 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
      uVar7 = uVar9 & 0xffff0000;
      uVar9 = uVar9 & 0xffff;
    }
  }
  uVar3 = _UNK_04102888;
  uVar2 = _DAT_04102880;
  uVar1 = _DAT_04102200;
  if (param_3 != (undefined8 *)0x0) {
    param_3[1] = _UNK_04102208;
    *param_3 = uVar1;
    param_3[3] = uVar3;
    param_3[2] = uVar2;
    uVar1 = _DAT_041023d0;
    param_3[5] = _UNK_041023d8;
    param_3[4] = uVar1;
  }
  if (uVar9 != 0xffff && uVar7 != 0xffff0000) {
    plVar5 = (long *)**(undefined8 **)
                       (*(long *)(*(long *)(param_1 + 0x1150) + 0x38) +
                       (-(ulong)(uVar9 >> 0xf) & 0xfffffffffff80000 | (ulong)uVar9 << 3));
    (**(code **)(*plVar5 + 0x70))(plVar5,param_3,(int)uVar7 >> 0x10);
    local_60 = (undefined *)CONCAT44(local_60._4_4_,param_2);
    if (param_2 < *(uint *)(param_1 + 0x1748)) {
      lVar8 = *(long *)(*(long *)(param_1 + 0x1750) + (long)(int)param_2 * 8);
    }
    else {
      lVar8 = 0;
    }
    pfVar6 = (float *)(**(code **)(*(long *)(lVar8 + 0x30) + 0xf0))();
    fVar13 = *pfVar6;
    fVar15 = (float)*param_3;
    fVar14 = pfVar6[1];
    fVar12 = pfVar6[2];
    fVar16 = (float)((ulong)*param_3 >> 0x20);
    fVar17 = (float)param_3[1];
    fVar18 = (float)param_3[2];
    fVar19 = (float)((ulong)param_3[2] >> 0x20);
    fVar21 = (float)param_3[4];
    fVar22 = (float)((ulong)param_3[4] >> 0x20);
    fVar20 = (float)param_3[3];
    fVar23 = (float)param_3[5];
    param_3[1] = CONCAT44((float)((ulong)param_3[1] >> 0x20) +
                          fVar13 * fVar15 + fVar14 * fVar16 + fVar12 * fVar17,
                          fVar15 * 0.0 + fVar16 * 0.0 + fVar17 * 1.0 + 0.0);
    *param_3 = CONCAT44(fVar15 * 0.0 + fVar16 * 1.0 + fVar17 * 0.0 + 0.0,
                        fVar15 * 1.0 + fVar16 * 0.0 + fVar17 * 0.0 + 0.0);
    param_3[3] = CONCAT44((float)((ulong)param_3[3] >> 0x20) +
                          fVar13 * fVar18 + fVar14 * fVar19 + fVar12 * fVar20,
                          fVar18 * 0.0 + fVar19 * 0.0 + fVar20 * 1.0 + 0.0);
    param_3[2] = CONCAT44(fVar18 * 0.0 + fVar19 * 1.0 + fVar20 * 0.0 + 0.0,
                          fVar18 * 1.0 + fVar19 * 0.0 + fVar20 * 0.0 + 0.0);
    param_3[5] = CONCAT44((float)((ulong)param_3[5] >> 0x20) +
                          fVar13 * fVar21 + fVar14 * fVar22 + fVar12 * fVar23,
                          fVar21 * 0.0 + fVar22 * 0.0 + fVar23 * 1.0 + 0.0);
    param_3[4] = CONCAT44(fVar21 * 0.0 + fVar22 * 1.0 + fVar23 * 0.0 + 0.0,
                          fVar21 * 1.0 + fVar22 * 0.0 + fVar23 * 0.0 + 0.0);
  }
  return uVar9 != 0xffff && uVar7 != 0xffff0000;
}

