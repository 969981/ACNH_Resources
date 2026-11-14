
void FUN_0187bffc(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  ulong uVar6;
  uint *puVar7;
  float *pfVar8;
  undefined4 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  puVar5 = PTR_DAT_04bb39d8;
  lVar13 = *(long *)(param_1 + 0x4b8);
  lVar12 = *(long *)(param_1 + 0x4b0);
  lVar10 = *(long *)(param_1 + 0x3d0);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x2d8) + 0x28))(lVar10 + 0x2d8);
    plVar14 = DAT_0537d558;
    uVar6 = FUN_01d3e29c(*DAT_0537d558 + 8);
    if (((uVar6 & 1) != 0) && (uVar6 = FUN_01d692e8(plVar14[2]), (uVar6 & 1) == 0))
    goto LAB_0187c1a8;
  }
  uVar3 = *(undefined4 *)puVar5;
  lVar10 = *(long *)(param_1 + 0x4b0);
  uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x168);
  *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x160);
  *(undefined4 *)(param_1 + 0x330) = uVar4;
  puVar7 = (uint *)nn::os::GetTlsValue(uVar3);
  uVar2 = puVar7[3];
  uVar1 = *puVar7 ^ *puVar7 << 0xb;
  *puVar7 = puVar7[1];
  puVar7[1] = puVar7[2];
  uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
  puVar7[2] = uVar2;
  puVar7[3] = uVar1;
  if (0.6 <= (float)(uVar1 >> 9 | 0x3f800000) + -1.0) {
    puVar7 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar5);
    uVar1 = *puVar7 ^ *puVar7 << 0xb;
    uVar2 = puVar7[3];
    *puVar7 = puVar7[1];
    puVar7[1] = puVar7[2];
    uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
    puVar7[2] = uVar2;
    puVar7[3] = uVar1;
    uVar11 = (ulong)(((float)(uVar1 >> 9 | 0x3f800000) + -1.0) * 6.2831855 * 6.8356525e+08);
    uVar6 = uVar11 >> 0x18 & 0xff;
    fVar15 = (float)((uint)uVar11 & 0xffffff) * 5.9604645e-08;
    fVar16 = (float)(&DAT_04199798)[uVar6 * 4];
    fVar18 = (float)(&DAT_0419979c)[uVar6 * 4];
    fVar17 = (float)(&DAT_041997a0)[uVar6 * 4];
    fVar19 = (float)(&DAT_041997a4)[uVar6 * 4];
    plVar14 = (long *)(lVar10 + 0xf0);
    pfVar8 = (float *)(**(code **)(*plVar14 + 0xf0))(plVar14);
    *(float *)(param_1 + 0x328) = *(float *)(param_1 + 0x328) + *pfVar8 * (fVar16 + fVar15 * fVar18)
    ;
    pfVar8 = (float *)(**(code **)(*plVar14 + 0xf0))(plVar14);
    *(float *)(param_1 + 0x330) = *(float *)(param_1 + 0x330) + *pfVar8 * (fVar17 + fVar15 * fVar19)
    ;
  }
LAB_0187c1a8:
  *(undefined4 *)(param_1 + 0x308) = 0;
  plVar14 = (long *)(lVar13 + 200);
  puVar9 = (undefined4 *)(**(code **)(*plVar14 + 0xf0))(plVar14);
  lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 0x60) + 0x1138);
  if (lVar10 != 0) {
    FUN_03850760(*puVar9,lVar10);
  }
  puVar7 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar5);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar12 + 0x30) + 0xf0))();
  fVar15 = *pfVar8;
  plVar14 = (long *)(lVar12 + 0x60);
  pfVar8 = (float *)(**(code **)(*plVar14 + 0xf0))(plVar14);
  fVar16 = *pfVar8;
  uVar1 = *puVar7 ^ *puVar7 << 0xb;
  uVar2 = puVar7[3];
  *puVar7 = puVar7[1];
  puVar7[1] = puVar7[2];
  uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
  puVar7[2] = uVar2;
  puVar7[3] = uVar1;
  *(undefined4 *)(param_1 + 0x4d8) = 0;
  uVar1 = (int)((ulong)uVar1 * (ulong)(uint)((int)(fVar16 * 30.0) - (int)(fVar15 * 30.0)) >> 0x20) +
          (int)(fVar15 * 30.0);
  *(byte *)(param_1 + 0x4e4) = (byte)(uVar1 >> 0x1f);
  *(uint *)(param_1 + 0x4e0) = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_1 + 0x4dc) = uVar1 & (int)uVar1 >> 0x1f;
  FUN_01815e0c(param_1,*(undefined4 *)(param_1 + 0x280),param_1 + 0x328);
  *(undefined4 *)(param_1 + 0x4e8) = 1;
  return;
}

