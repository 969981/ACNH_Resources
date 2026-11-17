
void FUN_031098d4(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  float *pfVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  undefined **local_c0;
  long lStack_b8;
  undefined **local_a0;
  long lStack_98;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  if (*(long *)(param_1 + 0x270) != 0) {
    local_7c = (**(code **)(**(long **)(param_1 + 0x278) + 0x40))();
    FUN_02fed99c(*(undefined8 *)(param_1 + 0x270),local_7c);
    puVar2 = PTR_DAT_04bc4f00;
    plVar12 = *(long **)(*(long *)(param_1 + 0x210) + 0x208);
    if (plVar12 != (long *)0x0) {
      puVar1 = PTR_DAT_04bc4f00 + 0x10;
      local_68 = 9;
      local_70 = puVar1;
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_70);
      fVar13 = (float)(**(code **)(plVar12[3] + 0xb0))(plVar12[1]);
      if ((float)local_7c <= fVar13) {
        fVar13 = (float)local_7c;
        local_68 = 0x14;
        local_70 = puVar1;
        (**(code **)(*plVar12 + 0x18))(plVar12,&local_70);
        (**(code **)(plVar12[3] + 0x158))(fVar13,plVar12[1]);
      }
      else {
        local_70 = PTR_DAT_04bc4e68 + 0x10;
        local_68 = 7;
        (**(code **)(*plVar12 + 0x18))(plVar12,&local_70);
        (**(code **)(plVar12[3] + 0x1c0))(plVar12[1]);
      }
    }
    if ((*(long *)(param_1 + 0x220) != 0) &&
       (plVar12 = *(long **)(*(long *)(param_1 + 0x220) + 0x208), plVar12 != (long *)0x0)) {
      fVar13 = (float)local_7c;
      local_70 = puVar2 + 0x10;
      local_68 = 0x14;
      (**(code **)(*plVar12 + 0x18))(plVar12,&local_70);
      (**(code **)(plVar12[3] + 0x158))(fVar13,plVar12[1]);
    }
    if ((*(long *)(param_1 + 0x210) != 0) &&
       (plVar12 = *(long **)(*(long *)(param_1 + 0x210) + 0x230), plVar12 != (long *)0x0)) {
      local_68 = 0xb;
      puVar2 = PTR_DAT_04bc0cb8 + 0x10;
      local_70 = puVar2;
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_70);
      pfVar7 = (float *)(**(code **)(plVar12[3] + 0xd0))(plVar12[1]);
      fVar14 = *pfVar7;
      fVar13 = -fVar14;
      if (0.0 <= fVar14) {
        fVar13 = fVar14;
      }
      if (0.0001 < fVar13) {
        local_68 = 0xb;
        fVar13 = *(float *)(*(long *)(param_1 + 0x270) + 0x78);
        local_70 = puVar2;
        (**(code **)(*plVar12 + 0x20))(plVar12,&local_70);
        pfVar7 = (float *)(**(code **)(plVar12[3] + 0xd0))(plVar12[1]);
        *(float *)(param_1 + 0x2fc) = fVar13 / *pfVar7;
      }
    }
    puVar9 = *(undefined8 **)(param_1 + 0x268);
    *puVar9 = 0;
    *(float *)(puVar9 + 1) = (float)(*(int *)((long)puVar9 + 4) * 100);
    puVar2 = PTR_DAT_04bd0d90;
    fVar13 = (*(float *)(*(long *)(param_1 + 0x268) + 8) / 100.0) * 0.6931472;
    iVar8 = (int)(fVar13 * 1.442695);
    fVar13 = ((fVar13 - (float)iVar8 * 0.6931472) + 0.6931472) * 23.08312;
    uVar11 = (ulong)(uint)(int)fVar13;
    lVar10 = *(long *)(param_1 + 0x2f0);
    fVar13 = *(float *)(param_1 + 0x2fc) *
             ABS((float)((int)(*(float *)(PTR_DAT_04bd0d90 + uVar11 * 8) +
                              *(float *)((long)(PTR_DAT_04bd0d90 + uVar11 * 8) + 4) *
                              (fVar13 - (float)uVar11)) + iVar8 * 0x800000));
    local_70 = (undefined *)CONCAT44(fVar13,fVar13);
    *(float *)(lVar10 + 0x554) = fVar13;
    *(float *)(lVar10 + 0x558) = fVar13;
    uVar11 = (ulong)*(uint *)(lVar10 + 0x550);
    if (0x12 < *(uint *)(lVar10 + 0x550)) {
      uVar11 = 0;
    }
    plVar12 = *(long **)(lVar10 + uVar11 * 8);
    (**(code **)(*plVar12 + 0x20))(plVar12,&local_70);
    fVar13 = (*(float *)(*(long *)(param_1 + 0x268) + 8) / 100.0) * 0.6931472;
    iVar8 = (int)(fVar13 * 1.442695);
    fVar13 = ((fVar13 - (float)iVar8 * 0.6931472) + 0.6931472) * 23.08312;
    uVar11 = (ulong)(uint)(int)fVar13;
    pfVar7 = (float *)(puVar2 + uVar11 * 8);
    *(uint *)(*(long *)(param_1 + 0x270) + 0x4c) =
         (int)(*pfVar7 + pfVar7[1] * (fVar13 - (float)uVar11)) + iVar8 * 0x800000 & 0x7fffffff;
    lVar10 = *(long *)(param_1 + 0x270);
    if (lVar10 == 0) {
      iVar8 = 1;
    }
    else {
      iVar8 = (int)*(float *)(lVar10 + 0x78);
    }
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0x288) + 0x900);
    uVar4 = *(uint *)(*(long *)(param_1 + 0x288) + 0x8f8);
    puVar3 = puVar9 + uVar4;
    if (0x12 < uVar4) {
      puVar3 = puVar9;
    }
    if ((lVar10 != 0) && (plVar12 = (long *)*puVar3, plVar12 != (long *)0x0)) {
      iVar5 = (**(code **)(*plVar12 + 0x50))(plVar12);
      if ((0 < iVar8) && (0 < iVar5)) {
        *(float *)(lVar10 + 0x84) = (float)iVar5;
        *(float *)(lVar10 + 0x88) = (float)iVar8;
      }
      local_78 = 0;
      local_70 = (undefined *)0x0;
      (**(code **)(*plVar12 + 0x58))(plVar12,&local_70,&local_78);
      *(undefined4 *)(lVar10 + 0x8c) = (undefined4)local_70;
      *(undefined4 *)(lVar10 + 0x90) = local_70._4_4_;
      *(undefined4 *)(lVar10 + 0x94) = (undefined4)local_78;
      *(undefined4 *)(lVar10 + 0x98) = local_78._4_4_;
      lVar10 = *(long *)(param_1 + 0x270);
    }
    *(int *)(lVar10 + 0x60) = iVar8;
    *(int *)(lVar10 + 100) = iVar8;
    *(float *)(param_1 + 0x2e8) = (float)iVar8 * 0.5;
    fVar13 = (*(float *)(*(long *)(param_1 + 0x268) + 8) / 100.0) * 0.6931472;
    iVar8 = (int)(fVar13 * 1.442695);
    fVar13 = ((fVar13 - (float)iVar8 * 0.6931472) + 0.6931472) * 23.08312;
    uVar11 = (ulong)(uint)(int)fVar13;
    pfVar7 = (float *)(puVar2 + uVar11 * 8);
    lVar10 = *(long *)(param_1 + 0x2f0);
    fVar13 = *(float *)(param_1 + 0x2fc) *
             ABS((float)((int)(*pfVar7 + pfVar7[1] * (fVar13 - (float)uVar11)) + iVar8 * 0x800000));
    local_70 = (undefined *)CONCAT44(fVar13,fVar13);
    *(float *)(lVar10 + 0x554) = fVar13;
    *(float *)(lVar10 + 0x558) = fVar13;
    uVar11 = (ulong)*(uint *)(lVar10 + 0x550);
    if (0x12 < *(uint *)(lVar10 + 0x550)) {
      uVar11 = 0;
    }
    plVar12 = *(long **)(lVar10 + uVar11 * 8);
    (**(code **)(*plVar12 + 0x20))(plVar12,&local_70);
  }
  *(undefined2 *)(param_1 + 0x2ec) = 0x101;
  FUN_03109e34(param_1);
  if (param_2 == (long *)0x0) {
    param_2 = (long *)0x0;
  }
  else {
    uVar6 = (**(code **)(*param_2 + 0x88))(param_2);
    plVar12 = *(long **)(param_1 + 0x400);
    if (plVar12 != (long *)0x0) {
      local_a0 = &PTR_LAB_04b00ae0;
      lStack_98 = param_1;
      (**(code **)(*plVar12 + 0x30))(plVar12,&local_a0,uVar6);
    }
    plVar12 = *(long **)(param_1 + 0x408);
    if (plVar12 != (long *)0x0) {
      local_c0 = &PTR_LAB_04b00b08;
      lStack_b8 = param_1;
      (**(code **)(*plVar12 + 0x30))(plVar12,&local_c0,uVar6);
    }
  }
  FUN_03109ff8(param_1,param_2);
  return;
}

