
/* WARNING: Removing unreachable block (ram,0x016404f4) */
/* WARNING: Removing unreachable block (ram,0x016403f0) */
/* WARNING: Removing unreachable block (ram,0x0163fccc) */
/* WARNING: Removing unreachable block (ram,0x016404bc) */
/* WARNING: Removing unreachable block (ram,0x01640548) */

void FUN_0163fc10(long param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  int iVar4;
  char *pcVar5;
  float *pfVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  float *pfVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 local_a0;
  undefined8 local_98;
  float local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  
  lVar16 = *(long *)(param_1 + 0x1c8);
  lVar18 = *(long *)(param_1 + 0x1b8);
  pcVar5 = (char *)(**(code **)(*(long *)(lVar16 + 0x158) + 0xf0))(lVar16 + 0x158);
  if (*pcVar5 == '\0') {
    pfVar6 = (float *)(**(code **)(*(long *)(lVar18 + 0x3a0) + 0xf0))(lVar18 + 0x3a0);
    plVar17 = (long *)(lVar18 + 0x3d8);
  }
  else {
    pfVar6 = (float *)(**(code **)(*(long *)(lVar16 + 0x188) + 0xf0))(lVar16 + 0x188);
    plVar17 = (long *)(lVar16 + 0x1c0);
  }
  fVar29 = *pfVar6;
  fVar31 = pfVar6[1];
  pfVar6 = (float *)(**(code **)(*plVar17 + 0xf0))();
  puVar3 = PTR_DAT_04bb2200;
  fVar26 = *pfVar6;
  fVar27 = pfVar6[1];
  if (*(long *)(*(long *)PTR_DAT_04bb2200 + 0x58) == 0) {
    lVar16 = 0;
    plVar17 = (long *)0x0;
  }
  else {
    lVar16 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x58) + 0xe88);
    plVar17 = (long *)**(undefined8 **)(*(long *)PTR_DAT_04bbdb78 + 0x28);
  }
  local_a0 = (ulong)local_a0._4_4_ << 0x20;
  if (((*PTR_DAT_04bbdb68 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbdb68), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bbdb60 = PTR_DAT_04bbdb70 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbdb68);
  }
  if (plVar17 == (long *)0x0) {
    plVar17 = (long *)0x0;
  }
  else {
    uVar7 = (**(code **)(*plVar17 + 0x10))(plVar17,PTR_DAT_04bbdb60);
    if ((uVar7 & 1) == 0) {
      plVar17 = (long *)0x0;
    }
  }
  if ((((*(ushort *)((long)plVar17 + 0x8a) & 0x21) == 0) ||
      ((*(ushort *)((long)plVar17 + 0x8a) >> 1 & 1) == 0)) || (plVar17[0x3f] == 0)) {
    puVar13 = PTR_DAT_04bd13c0;
    if ((undefined *)plVar17[0xf] != (undefined *)0x0) {
      puVar13 = (undefined *)plVar17[0xf];
    }
  }
  else {
    puVar13 = (undefined *)(plVar17[0x3f] + 8);
  }
  fVar20 = *(float *)(param_1 + 0x110);
  fVar22 = *(float *)(param_1 + 0x10c);
  fVar19 = fVar20 - fVar31 * 0.5;
  fVar24 = *(float *)(param_1 + 0x114);
  *(undefined1 *)(*(long *)(lVar16 + 0x2bf0) + 0x10) = *(undefined1 *)(param_1 + 0x1a8);
  puVar14 = *(undefined8 **)(lVar16 + 0x2bf0);
  fVar20 = fVar31 * 0.5 + fVar20;
  fVar31 = fVar22 - fVar29 * 0.5;
  fVar22 = fVar29 * 0.5 + fVar22;
  fVar23 = fVar24 - fVar27;
  fVar24 = fVar26 + fVar24;
  *puVar14 = 0x3f80000000000000;
  *(undefined4 *)(puVar14 + 1) = 0;
  *(float *)((long)puVar14 + 0xc) = fVar19;
  fVar29 = fVar31 + (fVar22 - fVar31);
  *(undefined1 *)
   (*(long *)(lVar16 + 0x2bf0) + (ulong)(1 < *(uint *)(lVar16 + 0x2be8)) * 0x14 + 0x10) =
       *(undefined1 *)(param_1 + 0x1a8);
  puVar14 = (undefined8 *)
            (*(long *)(lVar16 + 0x2bf0) + (ulong)(1 < *(uint *)(lVar16 + 0x2be8)) * 0x14);
  *puVar14 = 0xbf80000000000000;
  *(undefined4 *)(puVar14 + 1) = 0;
  *(float *)((long)puVar14 + 0xc) = -fVar20;
  lVar18 = 0x28;
  if (*(uint *)(lVar16 + 0x2be8) < 3) {
    lVar18 = 0;
  }
  *(undefined1 *)(*(long *)(lVar16 + 0x2bf0) + lVar18 + 0x10) = *(undefined1 *)(param_1 + 0x1a8);
  lVar18 = 0x28;
  if (*(uint *)(lVar16 + 0x2be8) < 3) {
    lVar18 = 0;
  }
  puVar14 = (undefined8 *)(*(long *)(lVar16 + 0x2bf0) + lVar18);
  *puVar14 = 0x3f800000;
  *(undefined4 *)(puVar14 + 1) = 0;
  *(float *)((long)puVar14 + 0xc) = fVar31;
  lVar18 = 0x3c;
  if (*(uint *)(lVar16 + 0x2be8) < 4) {
    lVar18 = 0;
  }
  *(undefined1 *)(*(long *)(lVar16 + 0x2bf0) + lVar18 + 0x10) = *(undefined1 *)(param_1 + 0x1a8);
  lVar18 = 0x3c;
  if (*(uint *)(lVar16 + 0x2be8) < 4) {
    lVar18 = 0;
  }
  puVar14 = (undefined8 *)(*(long *)(lVar16 + 0x2bf0) + lVar18);
  *puVar14 = 0xbf800000;
  *(undefined4 *)(puVar14 + 1) = 0;
  *(float *)((long)puVar14 + 0xc) = -fVar22;
  lVar18 = 0x50;
  if (*(uint *)(lVar16 + 0x2be8) < 5) {
    lVar18 = 0;
  }
  *(undefined1 *)(*(long *)(lVar16 + 0x2bf0) + lVar18 + 0x10) = *(undefined1 *)(param_1 + 0x1a8);
  lVar18 = 0x50;
  if (*(uint *)(lVar16 + 0x2be8) < 5) {
    lVar18 = 0;
  }
  puVar14 = (undefined8 *)(*(long *)(lVar16 + 0x2bf0) + lVar18);
  *puVar14 = 0;
  *(undefined4 *)(puVar14 + 1) = 0x3f800000;
  *(float *)((long)puVar14 + 0xc) = fVar23;
  fVar22 = (fVar24 + fVar23) * 0.5;
  lVar18 = 100;
  if (*(uint *)(lVar16 + 0x2be8) < 6) {
    lVar18 = 0;
  }
  *(undefined1 *)(*(long *)(lVar16 + 0x2bf0) + lVar18 + 0x10) = *(undefined1 *)(param_1 + 0x1a8);
  lVar18 = 100;
  if (*(uint *)(lVar16 + 0x2be8) < 6) {
    lVar18 = 0;
  }
  puVar14 = (undefined8 *)(*(long *)(lVar16 + 0x2bf0) + lVar18);
  *puVar14 = 0;
  *(undefined4 *)(puVar14 + 1) = 0xbf800000;
  *(float *)((long)puVar14 + 0xc) = -fVar24;
  fVar34 = *(float *)(puVar13 + 0x28);
  fVar24 = *(float *)(puVar13 + 0x2c);
  fVar23 = (fVar19 + (fVar20 - fVar19)) * fVar24;
  fVar20 = 1210.0;
  if (*(char *)(param_1 + 0xd6) != '\0') {
    fVar20 = 3000.0;
  }
  fVar26 = (fVar26 + fVar27) * 0.5;
  fVar27 = fVar22 - fVar26;
  fVar21 = *(float *)(puVar13 + 0x30);
  fVar35 = *(float *)(puVar13 + 0x34);
  fVar33 = fVar27 + 0.0;
  *(ushort *)(lVar16 + 0x1a34) = *(ushort *)(lVar16 + 0x1a34) | 2;
  lVar16 = *(long *)(lVar16 + 0x1a78);
  fVar22 = fVar27 + ((fVar26 + fVar22) - fVar27);
  fVar27 = -(fVar35 + fVar19 * fVar24 + fVar31 * fVar34 + fVar27 * fVar21);
  fVar26 = fVar27;
  if (fVar20 <= fVar27) {
    fVar26 = fVar20;
  }
  if (fVar27 <= 0.0) {
    fVar27 = 0.0;
  }
  fVar24 = (fVar19 + 0.0) * fVar24;
  fVar32 = fVar24 + fVar29 * fVar34;
  fVar19 = -(fVar35 + fVar32 + fVar33 * fVar21);
  fVar32 = -(fVar35 + fVar32 + fVar22 * fVar21);
  fVar24 = -(fVar35 + fVar24 + (fVar31 + 0.0) * fVar34 + fVar22 * fVar21);
  fVar25 = fVar19;
  if (fVar26 <= fVar19) {
    fVar25 = fVar26;
  }
  if (fVar19 <= fVar27) {
    fVar19 = fVar27;
  }
  fVar26 = fVar32;
  if (fVar25 <= fVar32) {
    fVar26 = fVar25;
  }
  if (fVar32 <= fVar19) {
    fVar32 = fVar19;
  }
  fVar27 = fVar24;
  if (fVar26 <= fVar24) {
    fVar27 = fVar26;
  }
  if (fVar24 <= fVar32) {
    fVar24 = fVar32;
  }
  fVar19 = fVar23 + (fVar31 + 0.0) * fVar34;
  fVar23 = fVar23 + fVar29 * fVar34;
  fVar26 = -(fVar35 + fVar19 + fVar33 * fVar21);
  fVar29 = -(fVar35 + fVar23 + fVar33 * fVar21);
  fVar31 = fVar26;
  if (fVar27 <= fVar26) {
    fVar31 = fVar27;
  }
  if (fVar26 <= fVar24) {
    fVar26 = fVar24;
  }
  fVar27 = fVar29;
  if (fVar31 <= fVar29) {
    fVar27 = fVar31;
  }
  if (fVar29 <= fVar26) {
    fVar29 = fVar26;
  }
  fVar31 = -(fVar35 + fVar19 + fVar22 * fVar21);
  fVar19 = -(fVar35 + fVar23 + fVar22 * fVar21);
  fVar26 = fVar31;
  if (fVar27 <= fVar31) {
    fVar26 = fVar27;
  }
  if (fVar31 <= fVar29) {
    fVar31 = fVar29;
  }
  fVar27 = fVar19;
  if (fVar26 <= fVar19) {
    fVar27 = fVar26;
  }
  if (fVar19 <= fVar31) {
    fVar19 = fVar31;
  }
  fVar26 = fVar20;
  if (fVar27 <= fVar20) {
    fVar26 = fVar27;
  }
  fVar29 = 1.0;
  if (1.0 <= fVar27) {
    fVar29 = fVar26;
  }
  if (fVar19 <= fVar20) {
    fVar20 = fVar19;
  }
  **(float **)(lVar16 + 0x318) = fVar29;
  fVar26 = 1.0;
  if (1.0 <= fVar19) {
    fVar26 = fVar20;
  }
  *(float *)(*(long *)(lVar16 + 0x318) + (long)*(int *)(lVar16 + 0x238) * 4) = fVar26;
  if (*(char *)(param_1 + 0xd0) == '\0') {
    lVar16 = *(long *)puVar3;
  }
  else {
    lVar18 = *(long *)(param_1 + 0x1e0);
    local_a0 = 0;
    local_98 = 0x3f80000000000000;
    FUN_016405c0(param_1,&local_a0);
    uVar1 = local_a0;
    uVar28 = (undefined4)local_98;
    lVar16 = *(long *)(*(long *)(param_1 + 0xa8) + 0x10);
    puVar14 = (undefined8 *)(**(code **)(*(long *)(lVar16 + 0x210) + 0xf0))(lVar16 + 0x210);
    *puVar14 = uVar1;
    *(undefined4 *)(puVar14 + 1) = uVar28;
    *(undefined4 *)((long)puVar14 + 0xc) = 0x3f800000;
    *(uint *)(lVar16 + 0x230) = *(uint *)(lVar16 + 0x230) | 0x1000000;
    puVar14 = (undefined8 *)(**(code **)(*(long *)(lVar18 + 0xc40) + 0xf0))(lVar18 + 0xc40);
    lVar16 = *(long *)(*(long *)(param_1 + 0xa0) + 0x10);
    puVar8 = (undefined8 *)(**(code **)(*(long *)(lVar16 + 0x210) + 0xf0))(lVar16 + 0x210);
    uVar1 = puVar14[1];
    *puVar8 = *puVar14;
    puVar8[1] = uVar1;
    puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar18 + 0xc80) + 0xf0))(lVar18 + 0xc80);
    uVar28 = *puVar9;
    lVar16 = *(long *)(*(long *)(param_1 + 0xa0) + 0x10);
    puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar16 + 0x250) + 0xf0))(lVar16 + 0x250);
    *puVar9 = uVar28;
    puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar18 + 0xcb0) + 0xf0))(lVar18 + 0xcb0);
    uVar28 = *puVar9;
    uVar30 = puVar9[1];
    lVar16 = *(long *)(*(long *)(param_1 + 0xa0) + 0x10);
    puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar16 + 0x280) + 0xf0))(lVar16 + 0x280);
    *puVar9 = uVar28;
    puVar9[1] = uVar30;
    puVar9[2] = local_80;
    puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar18 + 0xce8) + 0xf0))(lVar18 + 0xce8);
    uVar28 = *puVar9;
    lVar16 = *(long *)(*(long *)(param_1 + 0xa0) + 0x10);
    puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar16 + 0x2b8) + 0xf0))(lVar16 + 0x2b8);
    *puVar9 = uVar28;
    puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar18 + 0xd18) + 0xf0))(lVar18 + 0xd18);
    lVar16 = *(long *)(*(long *)(param_1 + 0xa0) + 0x10);
    puVar10 = (undefined4 *)(**(code **)(*(long *)(lVar16 + 0x5a8) + 0xf0))(lVar16 + 0x5a8);
    *puVar10 = *puVar9;
    puVar10[1] = puVar9[1];
    puVar10[2] = puVar9[2];
    puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar18 + 0xd50) + 0xf0))(lVar18 + 0xd50);
    uVar28 = *puVar9;
    lVar16 = *(long *)(*(long *)(param_1 + 0xa0) + 0x10);
    puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar16 + 0x5e0) + 0xf0))(lVar16 + 0x5e0);
    *puVar9 = uVar28;
    puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar18 + 0xd80) + 0xf0))(lVar18 + 0xd80);
    uVar28 = *puVar9;
    lVar16 = *(long *)(*(long *)(param_1 + 0xa0) + 0x10);
    puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar16 + 0x610) + 0xf0))(lVar16 + 0x610);
    *puVar9 = uVar28;
    lVar16 = *(long *)(*(long *)(param_1 + 0xa0) + 0x10);
    puVar11 = (undefined1 *)(**(code **)(*(long *)(lVar16 + 0x158) + 0xf0))(lVar16 + 0x158);
    *puVar11 = 1;
    *(uint *)(lVar16 + 0x178) = *(uint *)(lVar16 + 0x178) | 0x1000000;
    *(uint *)(*(long *)(param_1 + 0xa0) + 0x38) =
         *(uint *)(*(long *)(param_1 + 0xa0) + 0x38) & 0xfffffffe;
    pfVar6 = (float *)(**(code **)(*(long *)(lVar18 + 0xab8) + 0xf0))(lVar18 + 0xab8);
    fVar26 = *pfVar6;
    lVar16 = *(long *)(*(long *)(param_1 + 0xa8) + 0x10);
    pfVar6 = (float *)(**(code **)(*(long *)(lVar16 + 0x250) + 0xf0))(lVar16 + 0x250);
    *pfVar6 = fVar26 * local_90;
    lVar16 = *(long *)(*(long *)(param_1 + 0xa8) + 0x10);
    puVar14 = (undefined8 *)(**(code **)(*(long *)(lVar16 + 0x280) + 0xf0))(lVar16 + 0x280);
    *puVar14 = local_8c;
    *(undefined4 *)(puVar14 + 1) = local_84;
    lVar16 = *(long *)(*(long *)(param_1 + 0xa8) + 0x10);
    puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar16 + 0x2b8) + 0xf0))(lVar16 + 0x2b8);
    *puVar9 = local_7c;
    lVar16 = *(long *)(*(long *)(param_1 + 0xa8) + 0x10);
    puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar16 + 0x5a8) + 0xf0))(lVar16 + 0x5a8);
    *puVar9 = local_78;
    uVar2 = *(undefined1 *)(param_1 + 0x9c);
    lVar16 = *(long *)(*(long *)(param_1 + 0xa8) + 0x10);
    puVar11 = (undefined1 *)(**(code **)(*(long *)(lVar16 + 0x158) + 0xf0))(lVar16 + 0x158);
    *puVar11 = uVar2;
    *(uint *)(lVar16 + 0x178) = *(uint *)(lVar16 + 0x178) | 0x1000000;
    *(uint *)(*(long *)(param_1 + 0xa8) + 0x38) =
         *(uint *)(*(long *)(param_1 + 0xa8) + 0x38) & 0xfffffffe;
    lVar16 = *(long *)(param_1 + 0xa8);
    puVar14 = (undefined8 *)
              (**(code **)(*(long *)(*(long *)(lVar16 + 0x10) + 0x280) + 0xf0))
                        (*(long *)(lVar16 + 0x10) + 0x280);
    local_74 = 0;
    if (*(long *)(*(long *)puVar3 + 0x50) == 0) {
      lVar18 = 0;
    }
    else {
      lVar18 = *(long *)(*(long *)(*(long *)puVar3 + 0x50) + 0x88);
    }
    pfVar6 = (float *)(**(code **)(*(long *)(*(long *)(lVar16 + 0x10) + 0x210) + 0xf0))
                                (*(long *)(lVar16 + 0x10) + 0x210);
    pfVar12 = (float *)(**(code **)(*(long *)(*(long *)(lVar16 + 0x10) + 0x250) + 0xf0))
                                 (*(long *)(lVar16 + 0x10) + 0x250);
    fVar26 = *pfVar12;
    fVar29 = *pfVar6;
    fVar31 = pfVar6[1];
    fVar19 = pfVar6[2];
    fVar20 = pfVar6[3];
    pcVar5 = (char *)(**(code **)(*(long *)(*(long *)(lVar16 + 0x10) + 0x158) + 0xf0))
                               (*(long *)(lVar16 + 0x10) + 0x158);
    lVar16 = *(long *)puVar3;
    fVar27 = 1.0;
    if (*pcVar5 == '\0') {
      fVar27 = 0.0;
    }
    *(float *)(lVar18 + 0x530) = fVar26 * fVar29 * fVar27;
    *(float *)(lVar18 + 0x534) = fVar26 * fVar31 * fVar27;
    *(float *)(lVar18 + 0x538) = fVar26 * fVar19 * fVar27;
    *(float *)(lVar18 + 0x53c) = fVar26 * fVar20 * fVar27;
    uVar28 = *(undefined4 *)(puVar14 + 1);
    lVar18 = *(long *)(*(long *)(lVar16 + 0x50) + 0x88);
    *(undefined8 *)(lVar18 + 0x520) = *puVar14;
    *(undefined4 *)(lVar18 + 0x528) = uVar28;
    *(undefined4 *)(lVar18 + 0x52c) = 0x3f800000;
  }
  lVar18 = *(long *)(lVar16 + 0x50);
  if (lVar18 != 0) {
    lVar15 = *(long *)(lVar18 + 0x88);
    if (lVar15 != 0) {
      *(undefined4 *)(lVar15 + 0x6bc) = *(undefined4 *)(param_1 + 0x280);
      *(undefined4 *)(lVar15 + 0x6c0) = *(undefined4 *)(param_1 + 0x284);
      *(undefined4 *)(lVar15 + 0x6c4) = *(undefined4 *)(param_1 + 0x288);
      lVar18 = *(long *)(lVar16 + 0x50);
      if (lVar18 == 0) {
        return;
      }
    }
    lVar16 = *(long *)(lVar18 + 0x3d0);
    if (lVar16 != 0) {
      *(undefined4 *)(lVar16 + 0x6c4) = 0xbf800000;
      *(undefined8 *)(lVar16 + 0x6bc) = 0;
    }
  }
  return;
}

