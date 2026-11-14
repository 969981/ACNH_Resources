
void FUN_01848110(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  float *pfVar8;
  uint uVar9;
  long *plVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  byte local_64 [4];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  float local_48;
  
  FUN_01815e0c(param_1,*(undefined4 *)(param_1 + 0x280),param_1 + 0x328);
  local_60 = PTR_DAT_04bb2020 + 0x10;
  local_58 = &DAT_040ba9de;
  puVar4 = (undefined4 *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b8) + 200) + 0xf0))();
  uVar12 = *puVar4;
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 0x60), lVar5 != 0)) {
    FUN_0073d870(lVar5,&local_60,10,0,0);
  }
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x3d0) + 0x60) + 0x1138) != 0) {
    FUN_03850760(uVar12);
  }
  *(undefined1 *)(param_1 + 0x3b4) = 0;
  if ((*(int *)(param_1 + 0x3a8) == 0x263) && (*(char *)(param_1 + 0x524) != '\0')) {
    *(undefined4 *)(param_1 + 0x518) = *(undefined4 *)(param_1 + 0x31c);
    *(undefined4 *)(param_1 + 0x520) = *(undefined4 *)(param_1 + 800);
  }
  lVar5 = *(long *)(param_1 + 0x3d0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x2d8) + 0x28))(lVar5 + 0x2d8);
    plVar10 = *(long **)PTR_DAT_04bb27d0;
    uVar6 = FUN_01d3e29c(*plVar10 + 8);
    if (((uVar6 & 1) != 0) && (uVar6 = FUN_01d692e8(plVar10[2]), (uVar6 & 1) == 0))
    goto LAB_01848428;
  }
  local_64[0] = 0;
  local_48 = 0.0;
  local_50 = 0;
  local_60 = PTR_DAT_04bb2010 + 0x10;
  local_58 = (undefined1 *)
             CONCAT44((int)((float)(int)*(float *)(param_1 + 0x4cc) / 5.0) -
                      (uint)(*(float *)(param_1 + 0x4cc) < 0.0),
                      (int)((float)(int)*(float *)(param_1 + 0x4c4) / 5.0) -
                      (uint)(*(float *)(param_1 + 0x4c4) < 0.0));
  uVar6 = FUN_01a1c950(&local_60,&local_50);
  fVar15 = local_48;
  fVar11 = 0.0;
  fVar13 = 0.0;
  fVar14 = 0.0;
  if ((uVar6 & 1) != 0) {
    fVar13 = (float)local_50;
    fVar11 = (float)FUN_015cb8d4(&local_50,1);
    fVar14 = fVar15;
  }
  puVar3 = PTR_DAT_04bb39d8;
  local_58 = (undefined1 *)((ulong)local_58 & 0xffffffff00000000);
  local_60 = (undefined *)0x0;
  if (*(char *)(param_1 + 0x525) == '\0') {
    FUN_019705ec(*(undefined8 *)PTR_DAT_04bb47e0,local_64,&local_60,param_1 + 0x334);
  }
  else {
    puVar7 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar9 = *puVar7 ^ *puVar7 << 0xb;
    uVar2 = puVar7[3];
    *puVar7 = puVar7[1];
    puVar7[1] = puVar7[2];
    uVar1 = uVar9 ^ uVar2;
    puVar7[2] = uVar2;
    puVar7[3] = uVar9 >> 8 ^ uVar2 >> 0x13 ^ uVar1;
    local_64[0] = (byte)(uVar1 >> 0x1e);
    lVar5 = (ulong)(uVar1 >> 0x1e) * 0xc;
    local_60 = *(undefined **)(&DAT_041774b0 + lVar5);
    local_58 = (undefined1 *)CONCAT44(local_58._4_4_,*(undefined4 *)(&DAT_041774b8 + lVar5));
  }
  *(float *)(param_1 + 0x32c) = fVar11 + local_60._4_4_;
  *(float *)(param_1 + 0x328) = fVar13 + (float)local_60;
  *(float *)(param_1 + 0x330) = fVar14 + (float)local_58;
  uVar12 = FUN_006f0400((fVar13 + (float)local_60) - *(float *)(*(long *)(param_1 + 0x300) + 0x278),
                        (fVar14 + (float)local_58) - *(float *)(*(long *)(param_1 + 0x300) + 0x280))
  ;
  *(undefined4 *)(param_1 + 0x4d0) = uVar12;
  *(byte *)(param_1 + 0x3fa) = local_64[0];
  FUN_01815e0c(param_1,*(undefined4 *)(param_1 + 0x280),param_1 + 0x328);
  pfVar8 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b0) + 0x30) + 0xf0))();
  fVar13 = *pfVar8;
  pfVar8 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b0) + 0x60) + 0xf0))();
  fVar15 = *pfVar8;
  puVar7 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar3);
  uVar1 = puVar7[3];
  uVar9 = *puVar7 ^ *puVar7 << 0xb;
  *puVar7 = puVar7[1];
  puVar7[1] = puVar7[2];
  uVar9 = uVar9 >> 8 ^ uVar1 >> 0x13 ^ uVar9 ^ uVar1;
  puVar7[2] = uVar1;
  puVar7[3] = uVar9;
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  uVar9 = (uint)((fVar13 + (fVar15 - fVar13) * ((float)(uVar9 >> 9 | 0x3f800000) + -1.0)) * 30.0);
  *(byte *)(param_1 + 0x4ec) = (byte)(uVar9 >> 0x1f);
  *(uint *)(param_1 + 0x4e8) = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_1 + 0x4e4) = uVar9 & (int)uVar9 >> 0x1f;
LAB_01848428:
  *(undefined4 *)(param_1 + 0x510) = 0;
  if ((*(int *)(param_1 + 0x3a8) == 0x263) && (*(char *)(param_1 + 0x524) != '\0')) {
    lVar5 = *(long *)(param_1 + 0x300);
    fVar13 = *(float *)(param_1 + 0x328) - *(float *)(lVar5 + 0x278);
    fVar15 = *(float *)(param_1 + 0x330) - *(float *)(lVar5 + 0x280);
    uVar12 = FUN_006f0400(-(*(float *)(param_1 + 0x32c) - *(float *)(lVar5 + 0x27c)),
                          SQRT(fVar15 * fVar15 + fVar13 * fVar13));
    *(undefined4 *)(param_1 + 0x51c) = uVar12;
  }
  *(undefined4 *)(param_1 + 0x508) = 0;
  return;
}

