
/* WARNING: Removing unreachable block (ram,0x0253cdd4) */

void FUN_0253cd3c(float *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  uint uVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  undefined8 local_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined1 uStack_9c;
  undefined **local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  uint *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  
  param_1[4] = 0.0;
  lVar12 = DAT_054f5738;
  param_1[5] = 0.0;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  if (lVar12 == 0) {
    if ((DAT_054f08c8 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_054f08c8);
      puVar10 = &DAT_054f08c0;
      if (iVar7 != 0) {
        DAT_054f08c0 = 0;
        __cxa_guard_release(&DAT_054f08c8);
      }
    }
    else {
      puVar10 = &DAT_054f08c0;
    }
  }
  else {
    puVar10 = (uint *)(lVar12 + 0x1fc);
  }
  puVar2 = PTR_DAT_04bb43c0;
  local_98 = (undefined **)CONCAT44(local_98._4_4_,0xd);
  uVar1 = *puVar10;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(param_4);
  lVar12 = *(long *)puVar2;
  if (lVar12 == 0) {
    return;
  }
  lVar13 = *(long *)(lVar13 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
  if (*(uint *)(lVar13 + 0x1d8) <= uVar6) {
    return;
  }
  if (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) == 0) {
    return;
  }
  local_88 = (uint *)0x0;
  local_90 = *param_4;
  uStack_8c = param_4[1];
  local_98 = &PTR_FUN_04a36b50;
  uVar6 = FUN_0277d6c4(&local_90);
  if (*(long *)puVar2 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar12 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(param_4);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
         (puVar10 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8),
         puVar10 != (uint *)0x0)) {
        uVar9 = 0;
        uVar6 = *puVar10;
        local_88 = puVar10;
        if ((uVar6 == 0) || (puVar10 == (uint *)(ulong)uVar6)) goto LAB_0253cf4c;
        puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar6);
        uVar9 = 0;
        if (*puVar11 == 0) goto LAB_0253cf4c;
        uVar6 = puVar11[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar11 + lVar12 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar12 != 0) {
            uVar9 = 0;
            if ((ulong)uVar6 != 0) {
              uVar9 = (uint)((ulong)((long)puVar10 - lVar12) / (ulong)uVar6);
            }
            if (*puVar11 <= uVar9) {
              uVar9 = 0xffffffff;
            }
            if ((uVar9 < DAT_05326d48) &&
               (uVar9 = (uint)*(ushort *)(DAT_05326d50 + (long)(int)uVar9 * 2), uVar9 < 0x52))
            goto LAB_0253cf4c;
          }
        }
      }
    }
  }
  uVar9 = 0;
LAB_0253cf4c:
  local_b0 = CONCAT44(local_b0._4_4_,uVar9);
  if ((uVar9 & 0xfffffffe) == 10) {
    FUN_01afade0(&local_98,param_5);
    fStack_a0 = 0.0;
    uStack_9c = 0;
    local_b0 = 0;
    local_a8 = 0.0;
    fStack_a4 = 0.0;
    local_78 = local_90;
    uStack_74 = uStack_8c;
    uVar8 = FUN_0151d310(&local_b0,&local_78,param_3);
    fVar5 = fStack_a4;
    fVar4 = local_a8;
    if ((uVar8 & 1) != 0) {
      param_1[2] = local_a8;
      fVar3 = (float)local_b0;
      *param_1 = (float)local_b0;
      param_1[1] = fStack_a4;
      if ((uVar1 >> 0xd & 1) != 0) {
        fVar14 = (float)NEON_ucvtf(fStack_a0);
        fVar15 = cosf(fVar14 * 1.4629181e-09);
        fVar14 = sinf(fVar14 * 1.4629181e-09);
        *param_1 = fVar3 + fVar14 * 0.0 + fVar15 * 10.0;
        param_1[1] = fVar5 + 0.0;
        param_1[2] = fVar4 + (fVar15 * 0.0 - fVar14 * 10.0);
      }
      param_1[4] = fStack_a0;
    }
  }
  return;
}

