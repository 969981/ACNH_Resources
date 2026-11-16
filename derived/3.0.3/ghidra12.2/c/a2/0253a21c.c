
void FUN_0253a21c(float *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined4 param_5)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  undefined8 local_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined1 uStack_9c;
  undefined **local_98;
  undefined8 local_90;
  uint *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  local_98 = &PTR_LAB_048f9770;
  local_90 = "IsBedWaitRightSideCloudIsland";
  iVar5 = FUN_0274bce0(param_2,&local_98);
  puVar1 = PTR_DAT_04bb43c0;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(param_4);
  lVar11 = *(long *)puVar1;
  if (lVar11 == 0) {
    return;
  }
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if (*(uint *)(lVar12 + 0x1d8) <= uVar6) {
    return;
  }
  if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) == 0) {
    return;
  }
  local_88 = (uint *)0x0;
  local_90 = (char *)*param_4;
  local_98 = &PTR_FUN_04a36b50;
  uVar6 = FUN_0277d6c4(&local_90);
  if (*(long *)puVar1 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(param_4);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
         (puVar9 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8),
         puVar9 != (uint *)0x0)) {
        uVar8 = 0;
        uVar6 = *puVar9;
        local_88 = puVar9;
        if ((uVar6 == 0) || (puVar9 == (uint *)(ulong)uVar6)) goto LAB_0253a3f4;
        puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar6);
        uVar8 = 0;
        if (*puVar10 == 0) goto LAB_0253a3f4;
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar11 != 0) {
            uVar8 = 0;
            if ((ulong)uVar6 != 0) {
              uVar8 = (uint)((ulong)((long)puVar9 - lVar11) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar8) {
              uVar8 = 0xffffffff;
            }
            if ((uVar8 < DAT_05326d48) &&
               (uVar8 = (uint)*(ushort *)(DAT_05326d50 + (long)(int)uVar8 * 2), uVar8 < 0x52))
            goto LAB_0253a3f4;
          }
        }
      }
    }
  }
  uVar8 = 0;
LAB_0253a3f4:
  local_b0 = CONCAT44(local_b0._4_4_,uVar8);
  if ((uVar8 & 0xfffffffe) == 10) {
    FUN_01afade0(&local_98,param_5);
    fStack_a0 = 0.0;
    uStack_9c = 0;
    local_b0 = 0;
    local_a8 = 0.0;
    fStack_a4 = 0.0;
    local_78 = (undefined4)local_90;
    uStack_74 = local_90._4_4_;
    uVar7 = FUN_0151d310(&local_b0,&local_78,param_3);
    fVar4 = fStack_a4;
    fVar3 = local_a8;
    if ((uVar7 & 1) != 0) {
      param_1[2] = local_a8;
      fVar2 = (float)local_b0;
      *param_1 = (float)local_b0;
      param_1[1] = fStack_a4;
      if (iVar5 != 0) {
        fVar13 = (float)NEON_ucvtf(fStack_a0);
        fVar14 = cosf(fVar13 * 1.4629181e-09);
        fVar13 = sinf(fVar13 * 1.4629181e-09);
        *param_1 = fVar2 + fVar13 * 0.0 + fVar14 * 10.0;
        param_1[1] = fVar4 + 0.0;
        param_1[2] = fVar3 + (fVar14 * 0.0 - fVar13 * 10.0);
      }
      param_1[4] = fStack_a0;
    }
  }
  return;
}

