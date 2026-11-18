
/* WARNING: Removing unreachable block (ram,0x032b3ca8) */
/* WARNING: Removing unreachable block (ram,0x032b39e0) */
/* WARNING: Removing unreachable block (ram,0x032b398c) */
/* WARNING: Removing unreachable block (ram,0x032b3970) */
/* WARNING: Removing unreachable block (ram,0x032b39b4) */
/* WARNING: Removing unreachable block (ram,0x032b3a14) */
/* WARNING: Removing unreachable block (ram,0x032b4214) */
/* WARNING: Removing unreachable block (ram,0x032b3a5c) */
/* WARNING: Removing unreachable block (ram,0x032b3af0) */

void FUN_032b3910(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ushort uVar4;
  undefined1 *puVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined ***pppuVar15;
  long *plVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  long lVar20;
  long lVar21;
  void *pvVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 local_a0;
  undefined ***local_98;
  undefined **local_90;
  long *plStack_88;
  undefined1 *local_80;
  undefined8 uStack_78;
  undefined *local_70;
  char *pcStack_68;
  
  puVar9 = PTR_DAT_04bb2698;
  plVar14 = (long *)*param_2;
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    lVar11 = *plVar14;
    pppuVar15 = (undefined ***)plVar14[1];
  }
  else {
    local_70 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "ScrollerPack";
    if (*plVar14 == 0) {
      uVar24 = 1;
    }
    else {
      uVar24 = *(undefined4 *)(*plVar14 + 0x88);
    }
    local_a0 = (undefined **)0x0;
    local_98 = (undefined ***)0x0;
    if (*plVar14 == 0) {
      pppuVar15 = (undefined ***)0x0;
      lVar11 = 0;
    }
    else {
      lVar11 = FUN_038c6d48(0,&local_70,*plVar14,8,uVar24,1);
      pppuVar15 = local_98;
      local_a0 = (undefined **)lVar11;
    }
  }
  *param_1 = lVar11;
  param_1[1] = (long)pppuVar15;
  puVar1 = PTR_DAT_04bc9240;
  if (*(char *)(param_2 + 0xd) == '\0') {
    local_a0 = (undefined **)((ulong)local_a0._4_4_ << 0x20);
    plVar14 = (long *)(**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,0x158,8);
    puVar2 = PTR_DAT_04bc9080;
    plVar14[0x29] = 0;
    plVar14[2] = 0;
    plVar14[3] = 0;
    plVar14[4] = 0;
    plVar14[5] = 0;
    *(undefined1 *)(plVar14 + 0x2a) = 0;
    plVar14[6] = 0;
    plVar14[7] = 0;
    *(undefined8 *)((long)plVar14 + 0x3e) = 0;
    plVar14[9] = 0;
    plVar14[10] = 0;
    plVar14[0xb] = 0;
    plVar14[0xc] = 0;
    *plVar14 = (long)(puVar2 + 0x10);
    plVar14[1] = 0;
    plVar14[0xd] = 0;
    plVar14[0xe] = 0;
    plVar14[0xf] = 0;
    plVar14[0x10] = 0;
    plVar14[0x11] = 0;
    plVar14[0x12] = 0;
    plVar14[0x13] = 0;
    plVar14[0x14] = 0;
    plVar14[0x15] = 0;
    plVar14[0x16] = 0;
    plVar14[0x17] = 0;
    plVar14[0x18] = 0;
    plVar14[0x19] = (long)(puVar1 + 0x10);
    plVar14[0x1a] = 0;
    plVar14[0x1f] = (long)&PTR_LAB_04b1a150;
    plVar14[0x20] = 0;
    plVar14[0x25] = 0;
    plVar14[0x26] = 0;
    plVar14[0x27] = 0;
    plVar14[0x28] = 0;
  }
  else {
    local_a0 = (undefined **)((ulong)local_a0._4_4_ << 0x20);
    plVar14 = (long *)(**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,0x180,8);
    plVar14[2] = 0;
    plVar14[3] = 0;
    plVar14[0x29] = 0;
    plVar14[4] = 0;
    plVar14[5] = 0;
    plVar14[6] = 0;
    plVar14[7] = 0;
    *(undefined8 *)((long)plVar14 + 0x3e) = 0;
    plVar14[9] = 0;
    plVar14[10] = 0;
    plVar14[0xb] = 0;
    plVar14[0xc] = 0;
    plVar14[0xd] = 0;
    plVar14[0xe] = 0;
    plVar14[0xf] = 0;
    plVar14[0x10] = 0;
    plVar14[0x11] = 0;
    plVar14[0x12] = 0;
    plVar14[0x13] = 0;
    plVar14[0x14] = 0;
    plVar14[0x15] = 0;
    plVar14[0x16] = 0;
    plVar14[0x17] = 0;
    plVar14[0x18] = 0;
    plVar14[0x19] = (long)(puVar1 + 0x10);
    plVar14[0x1a] = 0;
    plVar14[0x1f] = (long)&PTR_LAB_04b1a150;
    plVar14[0x20] = 0;
    plVar14[0x25] = 0;
    plVar14[0x26] = 0;
    plVar14[0x27] = 0;
    plVar14[0x28] = 0;
    puVar1 = PTR_DAT_04bc9058 + 0x10;
    *(undefined1 *)(plVar14 + 0x2a) = 0;
    plVar14[0x2f] = 0;
    *plVar14 = (long)puVar1;
    plVar14[1] = 0;
    plVar14[0x2b] = 0;
    plVar14[0x2c] = 0;
    plVar14[0x2d] = 0;
    plVar14[0x2e] = 0;
  }
  plVar16 = (long *)param_1[2];
  param_1[2] = (long)plVar14;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x18))(plVar16);
    plVar14 = (long *)param_1[2];
  }
  local_a0 = (undefined **)0x0;
  *(undefined4 *)(plVar14 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((long)plVar14 + 0x14) = *(undefined4 *)((long)param_2 + 0xc);
  *(undefined4 *)(plVar14 + 3) = *(undefined4 *)(param_2 + 2);
  fVar23 = *(float *)((long)param_2 + 0x1c);
  fVar25 = *(float *)(param_2 + 4);
  *(undefined8 *)((long)plVar14 + 0x1c) = 0;
  *(float *)(plVar14 + 5) = fVar25 + 0.0;
  *(float *)((long)plVar14 + 0x24) = fVar23 + 0.0;
  uVar24 = *(undefined4 *)((long)param_2 + 0x24);
  *(undefined4 *)(plVar14 + 6) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((long)plVar14 + 0x2c) = uVar24;
  fVar23 = *(float *)((long)param_2 + 0x14);
  fVar25 = *(float *)(param_2 + 3);
  *(undefined8 *)((long)plVar14 + 0x34) = 0;
  *(float *)(plVar14 + 8) = fVar25 + 0.0;
  *(float *)((long)plVar14 + 0x3c) = fVar23 + 0.0;
  lVar11 = *(long *)((long)param_2 + 0x34);
  plVar14[0x17] = *(long *)((long)param_2 + 0x2c);
  plVar14[0x18] = lVar11;
  uVar24 = *(undefined4 *)((long)param_2 + 0x3c);
  *(undefined8 *)((long)plVar14 + 0xc) = 0;
  plVar14[0x27] = 0;
  plVar14[0x28] = 0;
  *(undefined4 *)((long)plVar14 + 0xac) = 1;
  *(undefined4 *)(plVar14 + 0x16) = uVar24;
  plVar14[0x25] = 0;
  plVar14[0x26] = 0;
  *(undefined4 *)((long)plVar14 + 0x14c) = 4;
  (**(code **)(*plVar14 + 0x30))(plVar14,&local_a0);
  lVar11 = param_1[2];
  local_80 = &LAB_032b4708;
  uStack_78 = 0;
  local_98 = &local_90;
  ppuVar19 = &PTR_LAB_04b1a168;
  plVar14 = *(long **)(lVar11 + 0x100);
  local_90 = &PTR_LAB_04b1a168;
  local_a0 = &PTR_LAB_04b1a150;
  plStack_88 = param_1;
  if (plVar14 == (long *)0x0) {
LAB_032b3c64:
    uVar12 = (*(code *)ppuVar19[3])(local_98,lVar11 + 0x108);
    *(undefined8 *)(lVar11 + 0x100) = uVar12;
    if (local_98 != (undefined ***)0x0) {
      (*(code *)(*local_98)[1])();
    }
  }
  else {
    (**(code **)(*plVar14 + 8))(plVar14);
    if (local_98 != (undefined ***)0x0) {
      ppuVar19 = *local_98;
      goto LAB_032b3c64;
    }
    *(undefined8 *)(lVar11 + 0x100) = 0;
  }
  local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
  puVar13 = (undefined8 *)(**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,0x220,8);
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar13[2] = 0;
  puVar13[3] = 0;
  puVar13[4] = 0;
  puVar13[5] = 0;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[8] = 0;
  puVar13[9] = 0;
  *(undefined8 *)((long)puVar13 + 0x4d) = 0;
  puVar3 = PTR_DAT_04bc8e60;
  puVar1 = PTR_DAT_04bc8e60 + 0x10;
  puVar13[0xb] = puVar1;
  puVar13[0xc] = 0;
  puVar13[0x11] = puVar1;
  puVar13[0x12] = 0;
  puVar13[0x17] = puVar1;
  puVar13[0x18] = 0;
  puVar13[0x1d] = puVar1;
  puVar13[0x1e] = 0;
  puVar13[0x23] = puVar1;
  puVar13[0x24] = 0;
  puVar10 = PTR_DAT_04bc8f88;
  puVar2 = PTR_DAT_04bc8f88 + 0x10;
  puVar13[0x41] = 0;
  puVar13[0x29] = puVar2;
  puVar13[0x2a] = 0;
  puVar13[0x2f] = puVar2;
  puVar13[0x30] = 0;
  puVar13[0x35] = puVar2;
  puVar13[0x36] = 0;
  puVar13[0x3b] = puVar2;
  puVar13[0x3c] = 0;
  *(undefined8 *)((long)puVar13 + 0x217) = 0;
  puVar13[0x42] = 0;
  *(undefined4 *)(puVar13 + 0x43) = *(undefined4 *)(param_2 + 8);
  uVar4 = 0;
  if (*(char *)((long)param_2 + 0x44) != '\0') {
    uVar4 = 0x200;
  }
  local_a0 = (undefined **)CONCAT44(local_a0._4_4_,6);
  *(ushort *)(puVar13 + 10) = uVar4 | 0x41;
  *(undefined2 *)((long)puVar13 + 0x53) = 0x50f;
  pvVar22 = (void *)param_1[3];
  param_1[3] = (long)puVar13;
  if (pvVar22 != (void *)0x0) {
    FUN_032c1b04(pvVar22);
    if (*(long *)puVar9 == 0) {
      free(pvVar22);
    }
    else {
      plVar14 = (long *)FUN_038cb610(*(long *)puVar9,pvVar22);
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x38))(plVar14,pvVar22);
      }
    }
    puVar13 = (undefined8 *)param_1[3];
  }
  ppuVar19 = &PTR_LAB_04b1a1f0;
  local_98 = &local_90;
  local_90 = &PTR_LAB_04b1a1f0;
  local_80 = &LAB_032b4724;
  uStack_78 = 0;
  plVar14 = (long *)puVar13[0x18];
  local_a0 = (undefined **)puVar1;
  if (plVar14 == (long *)0x0) {
    ppuVar17 = &PTR_LAB_04b1a1f0;
    plStack_88 = param_1;
LAB_032b3e2c:
    uVar12 = (*(code *)ppuVar17[3])(local_98,puVar13 + 0x19);
    puVar13[0x18] = uVar12;
    if (local_98 != (undefined ***)0x0) {
      (*(code *)(*local_98)[1])();
    }
  }
  else {
    plStack_88 = param_1;
    (**(code **)(*plVar14 + 8))(plVar14);
    if (local_98 != (undefined ***)0x0) {
      ppuVar17 = *local_98;
      goto LAB_032b3e2c;
    }
    puVar13[0x18] = 0;
  }
  lVar11 = param_1[3];
  local_a0 = (undefined **)(puVar3 + 0x10);
  local_98 = &local_90;
  local_80 = &LAB_032b4798;
  uStack_78 = 0;
  plVar14 = *(long **)(lVar11 + 0x90);
  local_90 = &PTR_LAB_04b1a1f0;
  plStack_88 = param_1;
  if (plVar14 == (long *)0x0) {
LAB_032b3ea4:
    uVar12 = (*(code *)ppuVar19[3])(local_98,lVar11 + 0x98);
    *(undefined8 *)(lVar11 + 0x90) = uVar12;
    if (local_98 != (undefined ***)0x0) {
      (*(code *)(*local_98)[1])();
    }
  }
  else {
    (**(code **)(*plVar14 + 8))(plVar14);
    if (local_98 != (undefined ***)0x0) {
      ppuVar19 = *local_98;
      goto LAB_032b3ea4;
    }
    *(undefined8 *)(lVar11 + 0x90) = 0;
  }
  lVar11 = param_1[3];
  local_a0 = (undefined **)(puVar10 + 0x10);
  local_98 = &local_90;
  ppuVar19 = &PTR_LAB_04b1a278;
  plVar14 = *(long **)(lVar11 + 0x1b0);
  local_90 = &PTR_LAB_04b1a278;
  plStack_88 = param_1;
  if (plVar14 == (long *)0x0) {
LAB_032b3f18:
    uVar12 = (*(code *)ppuVar19[3])(local_98,lVar11 + 0x1b8);
    *(undefined8 *)(lVar11 + 0x1b0) = uVar12;
    if (local_98 != (undefined ***)0x0) {
      (*(code *)(*local_98)[1])();
    }
  }
  else {
    (**(code **)(*plVar14 + 8))(plVar14);
    if (local_98 != (undefined ***)0x0) {
      ppuVar19 = *local_98;
      goto LAB_032b3f18;
    }
    *(undefined8 *)(lVar11 + 0x1b0) = 0;
  }
  lVar11 = param_1[3];
  local_a0 = (undefined **)(puVar10 + 0x10);
  local_98 = &local_90;
  ppuVar19 = &PTR_LAB_04b1a2b0;
  plVar14 = *(long **)(lVar11 + 0x1e0);
  local_90 = &PTR_LAB_04b1a2b0;
  plStack_88 = param_1;
  if (plVar14 == (long *)0x0) {
LAB_032b3f8c:
    uVar12 = (*(code *)ppuVar19[3])(local_98,lVar11 + 0x1e8);
    *(undefined8 *)(lVar11 + 0x1e0) = uVar12;
    if (local_98 != (undefined ***)0x0) {
      (*(code *)(*local_98)[1])();
    }
  }
  else {
    (**(code **)(*plVar14 + 8))(plVar14);
    if (local_98 != (undefined ***)0x0) {
      ppuVar19 = *local_98;
      goto LAB_032b3f8c;
    }
    *(undefined8 *)(lVar11 + 0x1e0) = 0;
  }
  lVar11 = param_1[3];
  if (param_2[9] == 0) {
    *(ushort *)(lVar11 + 0x50) = *(ushort *)(lVar11 + 0x50) | 0x20;
    lVar11 = param_2[10];
  }
  else {
    *(undefined8 *)(lVar11 + 0x20) = param_2[9];
    lVar11 = param_1[3];
    *(undefined8 *)(lVar11 + 0x28) = param_2[9];
    *(ushort *)(lVar11 + 0x50) = *(ushort *)(lVar11 + 0x50) & 0xffbf;
    lVar11 = param_2[10];
  }
  if (lVar11 != 0) {
    fVar25 = *(float *)(lVar11 + 0x30);
    fVar23 = *(float *)(lVar11 + 0x34);
    if (*(long *)(lVar11 + 0x18) == 0) {
      fVar26 = 0.0;
      fVar27 = 0.0;
    }
    else {
      fVar27 = 0.0;
      fVar26 = 0.0;
      lVar20 = lVar11;
      lVar21 = *(long *)(lVar11 + 0x18);
      do {
        bVar6 = *(byte *)(lVar20 + 0x5b) >> 6;
        if (bVar6 == 2) {
          fVar28 = *(float *)(lVar21 + 0x4c) * *(float *)(lVar21 + 0x54) * -0.5;
LAB_032b40c0:
          fVar23 = fVar23 + fVar28;
        }
        else if (bVar6 == 1) {
          fVar28 = *(float *)(lVar21 + 0x4c) * *(float *)(lVar21 + 0x54) * 0.5;
          goto LAB_032b40c0;
        }
        bVar6 = *(byte *)(lVar20 + 0x5b) >> 4 & 3;
        if (bVar6 == 1) {
          fVar28 = *(float *)(lVar21 + 0x48) * *(float *)(lVar21 + 0x50) * -0.5;
LAB_032b4064:
          fVar25 = fVar25 + fVar28;
        }
        else if (bVar6 == 2) {
          fVar28 = *(float *)(lVar21 + 0x48) * *(float *)(lVar21 + 0x50) * 0.5;
          goto LAB_032b4064;
        }
        fVar27 = fVar27 + fVar25;
        fVar26 = fVar26 + fVar23;
        plVar14 = (long *)(lVar21 + 0x18);
        fVar25 = *(float *)(lVar21 + 0x30);
        fVar23 = *(float *)(lVar21 + 0x34);
        lVar20 = lVar21;
        lVar21 = *plVar14;
      } while (*plVar14 != 0);
    }
    bVar6 = *(byte *)(lVar11 + 0x5b);
    fVar27 = fVar27 + fVar25;
    if ((bVar6 & 3) == 2) {
      fVar28 = fVar27 - *(float *)(lVar11 + 0x50);
      fVar25 = fVar27;
    }
    else if ((bVar6 & 3) == 1) {
      fVar25 = fVar27 + *(float *)(lVar11 + 0x50);
      fVar28 = fVar27;
    }
    else {
      fVar25 = 0.0;
      fVar28 = 0.0;
      if ((bVar6 & 3) == 0) {
        fVar28 = *(float *)(lVar11 + 0x50) * 0.5;
        fVar25 = fVar27 + fVar28;
        fVar28 = fVar27 - fVar28;
      }
    }
    fVar26 = fVar26 + fVar23;
    bVar6 = bVar6 >> 2 & 3;
    if (bVar6 == 2) {
      fVar27 = fVar26 + *(float *)(lVar11 + 0x54);
      fVar23 = fVar26;
    }
    else if (bVar6 == 1) {
      fVar23 = fVar26 - *(float *)(lVar11 + 0x54);
      fVar27 = fVar26;
    }
    else {
      fVar23 = 0.0;
      fVar27 = 0.0;
      if (bVar6 == 0) {
        fVar27 = *(float *)(lVar11 + 0x54) * 0.5;
        fVar23 = fVar26 - fVar27;
        fVar27 = fVar26 + fVar27;
      }
    }
    *(float *)(param_1 + 0x1b) = fVar28;
    *(float *)((long)param_1 + 0xdc) = fVar23;
    *(undefined1 *)((long)param_1 + 0xd4) = 1;
    *(float *)(param_1 + 0x1c) = fVar25;
    *(float *)((long)param_1 + 0xe4) = fVar27;
  }
  lVar11 = param_2[0xb];
  if (lVar11 != 0) {
    param_1[4] = lVar11;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(lVar11 + 0x30);
    *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(lVar11 + 0x34);
  }
  lVar11 = param_2[0xc];
  local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
  *(undefined1 *)(param_1 + 0x13) = 1;
  param_1[6] = lVar11;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)((long)param_2 + 0x7c);
  *(undefined4 *)((long)param_1 + 0xc4) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)((long)param_2 + 0x84);
  puVar13 = (undefined8 *)(**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,0x1d0,8);
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar13[6] = 0;
  puVar13[2] = 0;
  puVar13[3] = 0;
  puVar13[4] = 0;
  puVar13[5] = 0;
  *(undefined4 *)(puVar13 + 7) = *(undefined4 *)((long)param_2 + 0x6c);
  *(undefined4 *)((long)puVar13 + 0x3c) = *(undefined4 *)(param_2 + 0xe);
  puVar10 = PTR_DAT_04bc8f90;
  *(undefined4 *)(puVar13 + 8) = *(undefined4 *)((long)param_2 + 0x74);
  puVar13[9] = puVar10 + 0x10;
  puVar13[10] = 0;
  puVar2 = PTR_DAT_04bc8e98;
  puVar13[0x1b] = puVar10 + 0x10;
  puVar13[0x1c] = 0;
  puVar3 = puVar3 + 0x10;
  *(undefined4 *)(puVar13 + 0x39) = 0;
  puVar13[0x2d] = puVar3;
  puVar13[0x2e] = 0;
  puVar1 = puVar2 + 0x10;
  puVar13[0x33] = puVar3;
  puVar13[0x34] = 0;
  puVar13[0xf] = puVar1;
  puVar13[0x10] = 0;
  puVar13[0x15] = puVar1;
  puVar13[0x16] = 0;
  puVar13[0x21] = puVar1;
  puVar13[0x22] = 0;
  puVar13[0x27] = puVar1;
  puVar13[0x28] = 0;
  local_a0 = (undefined **)CONCAT44((int)((ulong)local_a0 >> 0x20),1);
  *(byte *)(puVar13 + 0x39) = *(char *)(param_2 + 0xf) != '\0' | 6;
  *(undefined2 *)((long)puVar13 + 0x1ca) = 0x40a;
  pvVar22 = (void *)param_1[0x14];
  param_1[0x14] = (long)puVar13;
  if (pvVar22 != (void *)0x0) {
    FUN_032ae0c8(pvVar22);
    if (*(long *)puVar9 == 0) {
      free(pvVar22);
    }
    else {
      plVar14 = (long *)FUN_038cb610(*(long *)puVar9,pvVar22);
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x38))(plVar14,pvVar22);
      }
    }
    puVar13 = (undefined8 *)param_1[0x14];
  }
  *(undefined4 *)((long)puVar13 + 0x3c) = 5;
  ppuVar19 = &PTR_LAB_04b1a2e8;
  local_90 = &PTR_LAB_04b1a2e8;
  *(undefined4 *)(param_1[0x14] + 0x40) = 5;
  lVar11 = param_1[0x14];
  local_98 = &local_90;
  local_80 = &LAB_032b47e4;
  uStack_78 = 0;
  plVar14 = *(long **)(lVar11 + 0xb0);
  local_a0 = (undefined **)puVar1;
  if (plVar14 == (long *)0x0) {
    ppuVar17 = &PTR_LAB_04b1a2e8;
    plStack_88 = param_1;
LAB_032b4394:
    uVar12 = (*(code *)ppuVar17[3])(local_98,lVar11 + 0xb8);
    *(undefined8 *)(lVar11 + 0xb0) = uVar12;
    if (local_98 != (undefined ***)0x0) {
      (*(code *)(*local_98)[1])();
    }
  }
  else {
    plStack_88 = param_1;
    (**(code **)(*plVar14 + 8))(plVar14);
    if (local_98 != (undefined ***)0x0) {
      ppuVar17 = *local_98;
      goto LAB_032b4394;
    }
    *(undefined8 *)(lVar11 + 0xb0) = 0;
  }
  lVar11 = param_1[0x14];
  local_a0 = (undefined **)(puVar10 + 0x10);
  local_98 = &local_90;
  local_80 = &LAB_032b4854;
  uStack_78 = 0;
  ppuVar17 = &PTR_LAB_04b1a370;
  local_90 = &PTR_LAB_04b1a370;
  plVar14 = *(long **)(lVar11 + 0x50);
  if (plVar14 == (long *)0x0) {
    ppuVar18 = &PTR_LAB_04b1a370;
    plStack_88 = param_1;
LAB_032b441c:
    uVar12 = (*(code *)ppuVar18[3])(local_98,lVar11 + 0x58);
    *(undefined8 *)(lVar11 + 0x50) = uVar12;
    if (local_98 != (undefined ***)0x0) {
      (*(code *)(*local_98)[1])();
    }
  }
  else {
    plStack_88 = param_1;
    (**(code **)(*plVar14 + 8))(plVar14);
    if (local_98 != (undefined ***)0x0) {
      ppuVar18 = *local_98;
      goto LAB_032b441c;
    }
    *(undefined8 *)(lVar11 + 0x50) = 0;
  }
  lVar11 = param_1[0x14];
  local_a0 = (undefined **)(puVar2 + 0x10);
  local_98 = &local_90;
  local_80 = &LAB_032b4928;
  uStack_78 = 0;
  plVar14 = *(long **)(lVar11 + 0x80);
  local_90 = &PTR_LAB_04b1a2e8;
  if (plVar14 == (long *)0x0) {
    ppuVar18 = &PTR_LAB_04b1a2e8;
    plStack_88 = param_1;
LAB_032b449c:
    uVar12 = (*(code *)ppuVar18[3])(local_98,lVar11 + 0x88);
    *(undefined8 *)(lVar11 + 0x80) = uVar12;
    if (local_98 != (undefined ***)0x0) {
      (*(code *)(*local_98)[1])();
    }
  }
  else {
    plStack_88 = param_1;
    (**(code **)(*plVar14 + 8))(plVar14);
    if (local_98 != (undefined ***)0x0) {
      ppuVar18 = *local_98;
      goto LAB_032b449c;
    }
    *(undefined8 *)(lVar11 + 0x80) = 0;
  }
  lVar11 = param_1[0x14];
  local_a0 = (undefined **)(puVar10 + 0x10);
  local_98 = &local_90;
  local_80 = &LAB_032b4a54;
  uStack_78 = 0;
  plVar14 = *(long **)(lVar11 + 0xe0);
  local_90 = &PTR_LAB_04b1a370;
  plStack_88 = param_1;
  if (plVar14 == (long *)0x0) {
LAB_032b4514:
    uVar12 = (*(code *)ppuVar17[3])(local_98,lVar11 + 0xe8);
    *(undefined8 *)(lVar11 + 0xe0) = uVar12;
    if (local_98 != (undefined ***)0x0) {
      (*(code *)(*local_98)[1])();
    }
  }
  else {
    (**(code **)(*plVar14 + 8))(plVar14);
    if (local_98 != (undefined ***)0x0) {
      ppuVar17 = *local_98;
      goto LAB_032b4514;
    }
    *(undefined8 *)(lVar11 + 0xe0) = 0;
  }
  lVar11 = param_1[0x14];
  local_a0 = (undefined **)(puVar2 + 0x10);
  local_98 = &local_90;
  local_80 = &LAB_032b4a64;
  uStack_78 = 0;
  plVar14 = *(long **)(lVar11 + 0x110);
  local_90 = &PTR_LAB_04b1a2e8;
  if (plVar14 == (long *)0x0) {
    ppuVar17 = &PTR_LAB_04b1a2e8;
    plStack_88 = param_1;
LAB_032b4594:
    uVar12 = (*(code *)ppuVar17[3])(local_98,lVar11 + 0x118);
    *(undefined8 *)(lVar11 + 0x110) = uVar12;
    if (local_98 != (undefined ***)0x0) {
      (*(code *)(*local_98)[1])();
    }
  }
  else {
    plStack_88 = param_1;
    (**(code **)(*plVar14 + 8))(plVar14);
    if (local_98 != (undefined ***)0x0) {
      ppuVar17 = *local_98;
      goto LAB_032b4594;
    }
    *(undefined8 *)(lVar11 + 0x110) = 0;
  }
  lVar11 = param_1[0x14];
  local_a0 = (undefined **)(puVar2 + 0x10);
  local_98 = &local_90;
  local_80 = &LAB_032b4b0c;
  uStack_78 = 0;
  plVar14 = *(long **)(lVar11 + 0x140);
  local_90 = &PTR_LAB_04b1a2e8;
  plStack_88 = param_1;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))(plVar14);
    if (local_98 == (undefined ***)0x0) {
      *(undefined8 *)(lVar11 + 0x140) = 0;
      goto LAB_032b463c;
    }
    ppuVar19 = *local_98;
  }
  uVar12 = (*(code *)ppuVar19[3])(local_98,lVar11 + 0x148);
  *(undefined8 *)(lVar11 + 0x140) = uVar12;
  if (local_98 != (undefined ***)0x0) {
    (*(code *)(*local_98)[1])();
  }
LAB_032b463c:
  lVar20 = param_1[0x14];
  lVar11 = *(long *)(*(long *)PTR_DAT_04bc8fe0 + 0xb8);
  puVar5 = (undefined1 *)(*(long *)PTR_DAT_04bc8ee8 + 0x494);
  puVar8 = (undefined1 *)(*(long *)PTR_DAT_04bc8ee8 + 0x495);
  if (lVar11 != 0) {
    puVar5 = (undefined1 *)(lVar11 + 0x1ca);
    puVar8 = (undefined1 *)(lVar11 + 0x1cb);
  }
  uVar7 = *puVar5;
  *(undefined1 *)(lVar20 + 0x1cb) = *puVar8;
  lVar11 = *(long *)puVar9;
  *(undefined1 *)(lVar20 + 0x1ca) = uVar7;
  if (lVar11 != 0) {
    if ((long *)*param_1 != (long *)0x0) {
      (**(code **)(*(long *)*param_1 + 0x28))();
    }
    if ((long *)param_1[1] != (long *)0x0) {
      (**(code **)(*(long *)param_1[1] + 0x28))();
    }
  }
  *(undefined1 *)((long)param_1 + 0x99) = 0;
  local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
  *(ushort *)(param_1[3] + 0x50) = *(ushort *)(param_1[3] + 0x50) & 0xfffe;
  FUN_032c2100();
  FUN_032b4bc0(param_1);
  return;
}

