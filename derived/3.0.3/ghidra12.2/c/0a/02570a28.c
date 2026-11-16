
void FUN_02570a28(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  ushort uVar10;
  undefined2 *puVar11;
  uint *puVar12;
  uint *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_f0;
  undefined *local_e8;
  undefined2 local_e0;
  undefined1 local_de;
  undefined1 local_dd;
  undefined4 local_dc;
  uint *local_d8;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined2 local_9c;
  undefined1 local_9a;
  undefined1 local_99;
  undefined4 local_98;
  undefined4 local_94;
  
  puVar6 = PTR_DAT_04bb43c0;
  puVar11 = *(undefined2 **)(param_1 + 0x228);
  if (puVar11 == (undefined2 *)0x0) {
    return;
  }
  uVar5 = *puVar11;
  uVar3 = *(undefined1 *)(puVar11 + 1);
  uVar4 = *(undefined1 *)((long)puVar11 + 3);
  uVar2 = *(undefined4 *)(puVar11 + 2);
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  local_9c = uVar5;
  local_9a = uVar3;
  local_99 = uVar4;
  local_98 = uVar2;
  local_94 = param_2;
  uVar7 = FUN_0277d6c4(&local_9c);
  lVar15 = *(long *)puVar6;
  if (lVar15 == 0) {
    return;
  }
  lVar16 = *(long *)(lVar16 + 0x57e58);
  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
  if (*(uint *)(lVar16 + 0x1d8) <= uVar7) {
    return;
  }
  if (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) == 0) {
    return;
  }
  local_e8 = PTR_DAT_04bc0510 + 0x10;
  local_d8 = (uint *)0x0;
  local_e0 = uVar5;
  local_de = uVar3;
  local_dd = uVar4;
  local_dc = uVar2;
  uVar7 = FUN_0277d6c4(&local_e0);
  if (*(long *)puVar6 == 0) {
LAB_02570c04:
    uVar10 = 0x21;
  }
  else {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((*(uint *)(lVar15 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_02570c04;
    lVar15 = *(long *)PTR_DAT_04bc0428;
    uVar7 = FUN_0277d6c4(&local_9c);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((*(uint *)(lVar15 + 0x1d8) <= uVar7) ||
       (puVar12 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8),
       puVar12 == (uint *)0x0)) goto LAB_02570c04;
    uVar7 = *puVar12;
    uVar10 = 0;
    local_d8 = puVar12;
    if ((uVar7 != 0) && (puVar12 != (uint *)(ulong)uVar7)) {
      puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar7);
      uVar10 = 0;
      if (*puVar13 != 0) {
        uVar7 = puVar13[1];
        if ((uVar7 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
          lVar15 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar15 != 0) {
            uVar1 = 0;
            if ((ulong)uVar7 != 0) {
              uVar1 = (uint)((ulong)((long)puVar12 - lVar15) / (ulong)uVar7);
            }
            if (*puVar13 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc0148) &&
               (uVar10 = *(ushort *)(*(long *)(PTR_DAT_04bc0148 + 8) + (long)(int)uVar1 * 2),
               uVar10 < 0xa2)) goto LAB_02570c08;
          }
        }
        uVar10 = 0;
      }
    }
  }
LAB_02570c08:
  if (((((uVar10 != 0xf) && (uVar10 != 0x10)) && (uVar10 != 0x12)) &&
      ((uVar10 != 0x13 && (uVar10 != 0xe)))) && (uVar10 != 0x11)) {
    FUN_01adb600(&local_e8,&local_d0);
    goto LAB_02570dfc;
  }
  switch(uVar10) {
  case 0xe:
    FUN_0090c5e0(&local_d0,*(undefined8 *)PTR_DAT_04bb4868,local_94);
    break;
  case 0xf:
    FUN_0090aea0(&local_d0,*(undefined8 *)PTR_DAT_04bb4868,local_94);
    break;
  case 0x10:
    FUN_0090b470(&local_d0,*(undefined8 *)PTR_DAT_04bb4868,local_94);
    break;
  case 0x11:
    FUN_0090cbb0(&local_d0,*(undefined8 *)PTR_DAT_04bb4868,local_94);
    break;
  case 0x12:
    FUN_0090ba40(&local_d0,*(undefined8 *)PTR_DAT_04bb4868,local_94);
    break;
  case 0x13:
    FUN_0090c010(&local_d0,*(undefined8 *)PTR_DAT_04bb4868,local_94);
    break;
  default:
    fStack_c4 = 0.0;
    local_f0 = 0.0;
    local_c0 = 0.0;
    fStack_bc = 0.0;
    fVar24 = 0.0;
    fVar23 = 0.0;
    goto LAB_02570d4c;
  }
  local_f0 = local_d0;
  fVar24 = fStack_cc;
  fVar23 = fStack_c8;
LAB_02570d4c:
  fVar17 = sinf(fStack_c4 * 0.017453292);
  fVar18 = sinf(local_c0 * 0.017453292);
  fVar19 = sinf(fStack_bc * 0.017453292);
  fVar20 = cosf(fStack_c4 * 0.017453292);
  fVar21 = cosf(local_c0 * 0.017453292);
  fVar22 = cosf(fStack_bc * 0.017453292);
  fStack_ac = fVar17 * fVar21;
  local_b0 = -fVar18;
  fStack_b8 = -(fVar17 * fVar22) + fVar18 * fVar19 * fVar20;
  fStack_cc = fVar17 * fVar18 * fVar22 - fVar19 * fVar20;
  fStack_bc = fVar20 * fVar22 + fVar19 * fVar17 * fVar18;
  local_c0 = fVar19 * fVar21;
  local_d0 = fVar21 * fVar22;
  fStack_c8 = fVar17 * fVar19 + fVar18 * fVar20 * fVar22;
  fStack_a8 = fVar20 * fVar21;
  fStack_c4 = local_f0;
  fStack_b4 = fVar24;
  fStack_a4 = fVar23;
LAB_02570dfc:
  plVar14 = *(long **)(param_1 + 0x68);
  if (((*PTR_DAT_04bb2f68 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb2f68), iVar8 != 0))
  {
    *(undefined **)PTR_DAT_04bb2f60 = PTR_DAT_04bb2e20 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb2f68);
  }
  uVar9 = (**(code **)(*plVar14 + 0x10))(plVar14,PTR_DAT_04bb2f60);
  if ((uVar9 & 1) == 0) {
    plVar14 = (long *)0x0;
  }
  *(ulong *)((long)plVar14 + 0x34c) = CONCAT44(fStack_c4,fStack_c8);
  *(ulong *)((long)plVar14 + 0x344) = CONCAT44(fStack_cc,local_d0);
  *(ulong *)((long)plVar14 + 0x35c) = CONCAT44(fStack_b4,fStack_b8);
  *(ulong *)((long)plVar14 + 0x354) = CONCAT44(fStack_bc,local_c0);
  *(ulong *)((long)plVar14 + 0x36c) = CONCAT44(fStack_a4,fStack_a8);
  *(ulong *)((long)plVar14 + 0x364) = CONCAT44(fStack_ac,local_b0);
  return;
}

