
/* WARNING: Removing unreachable block (ram,0x0335618c) */
/* WARNING: Removing unreachable block (ram,0x03355d74) */
/* WARNING: Removing unreachable block (ram,0x03355438) */
/* WARNING: Removing unreachable block (ram,0x03354ee8) */
/* WARNING: Removing unreachable block (ram,0x03354e88) */
/* WARNING: Removing unreachable block (ram,0x03354eb4) */
/* WARNING: Removing unreachable block (ram,0x03354fb8) */
/* WARNING: Removing unreachable block (ram,0x03355b7c) */
/* WARNING: Removing unreachable block (ram,0x03356160) */
/* WARNING: Removing unreachable block (ram,0x033561c0) */

void FUN_03354e30(long param_1,long *param_2,uint *param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  short sVar6;
  ushort uVar7;
  ushort uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  long *plVar19;
  uint *puVar20;
  char *pcVar21;
  undefined **ppuVar22;
  ushort *puVar23;
  undefined *puVar24;
  long lVar25;
  void *pvVar26;
  ulong uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined8 local_1d8;
  long *local_1d0;
  undefined8 local_1c8;
  long lStack_1c0;
  code *local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  undefined8 local_1a0;
  undefined8 *local_198;
  undefined1 local_c5;
  undefined *local_c0;
  char *pcStack_b8;
  long local_b0;
  undefined *local_a8;
  undefined8 *puStack_a0;
  undefined *local_98;
  undefined8 *puStack_90;
  undefined *local_88;
  char *pcStack_80;
  
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "LayoutTextAreaPro Fixed Heap";
  local_1d8 = (undefined *)0x0;
  local_1d0 = (long *)0x0;
  if (*param_2 != 0) {
    local_1d8 = (undefined *)FUN_038c6d48(0,&local_88,*param_2,8,1,1);
    local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
  }
  *(undefined **)(param_1 + 0x2e0) = local_1d8;
  plVar1 = (long *)(param_1 + 0x2e0);
  *(long **)(param_1 + 0x2e8) = local_1d0;
  uVar17 = param_3[0xee];
  *(uint *)(param_1 + 0x17a0) = uVar17;
  if (uVar17 == 2) {
    if ((*param_3 < 10) && ((1 << (ulong)(*param_3 & 0x1f) & 0x319U) != 0)) {
      uVar17 = 1;
      *(undefined4 *)(param_1 + 0x17a0) = 1;
    }
    if (0x18 < param_3[0xeb]) {
      uVar17 = 1;
      *(undefined4 *)(param_1 + 0x17a0) = 1;
    }
  }
  if (param_3[0xeb] - 0x21 < 0xffffffe0) {
    *(undefined4 *)(param_1 + 0x17a0) = 1;
  }
  else if ((uVar17 | 2) == 2) {
    if (param_3[0xeb] < 0xb) {
      iVar16 = (uint)(uVar17 == 2) << 1;
    }
    else {
      iVar16 = 1;
    }
    *(int *)(param_1 + 0x17ac) = iVar16;
  }
  local_1d8 = (undefined *)((ulong)local_1d8 & 0xffffffff00000000);
  uVar10 = (**(code **)(*(long *)*plVar1 + 0x30))((long *)*plVar1,0xf80,8);
  FUN_032d04c4(uVar10,plVar1);
  pvVar26 = *(void **)(param_1 + 0x300);
  *(undefined8 *)(param_1 + 0x300) = uVar10;
  puVar24 = PTR_DAT_04bb2698;
  if (pvVar26 != (void *)0x0) {
    FUN_032d0688(pvVar26);
    if (*(long *)puVar24 == 0) {
      free(pvVar26);
    }
    else {
      plVar11 = (long *)FUN_038cb610(*(long *)puVar24,pvVar26);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,pvVar26);
      }
    }
    uVar10 = *(undefined8 *)(param_1 + 0x300);
  }
  puVar24 = PTR_DAT_04bc8e68;
  local_1d8._0_4_ = 4;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = (undefined8 *)0x0;
  local_1b8 = (code *)((ulong)local_1b8 & 0xffffffffff000000);
  if (*(uint *)(*(long *)PTR_DAT_04bc96f8 + 0x10) < 5) {
    local_1d8._0_4_ = 0;
  }
  local_1d8 = (undefined *)
              (*(long *)(*(long *)PTR_DAT_04bc96f8 + 0x18) + (long)(int)local_1d8 * 0x158);
  local_1d0 = (long *)(PTR_DAT_04bc8e68 + 0x10);
  local_1c8 = (undefined **)0x40bcdbb;
  lStack_1c0 = 0x640;
  FUN_032d0880(uVar10,&local_1d8);
  if (local_198 != (undefined8 *)0x0) {
    (**(code **)*local_198)();
  }
  puVar3 = PTR_DAT_04bb2120;
  lVar25 = *(long *)(*(long *)(param_1 + 0x300) + 0xf0);
  pcVar21 = PTR_DAT_04bb2120;
  if (*(char **)(PTR_PTR_04bb2238 + 8) != (char *)0x0) {
    pcVar21 = *(char **)(PTR_PTR_04bb2238 + 8);
  }
  if (*pcVar21 != '\0') {
    local_1d8 = puVar24 + 0x10;
    local_1d0 = (long *)pcVar21;
    lVar25 = FUN_032cb8e0(&local_88,&local_1d8,lVar25);
    if (lVar25 == 0) {
      lVar25 = 0;
    }
    else {
      lVar25 = *(long *)(lVar25 + 0xe8);
    }
  }
  local_b0 = lVar25;
  if (*(int *)(param_1 + 0x17a0) == 1) {
    *(long **)(param_1 + 0x400) = plVar1;
    lVar13 = param_1 + 1000;
    *(undefined8 *)(param_1 + 0x410) = *(undefined8 *)(*(long *)(param_1 + 0x300) + 0xf0);
    FUN_032c6b2c(lVar13,3);
    FUN_032c6ccc(lVar13);
    puVar2 = puVar24 + 0x10;
    local_1d0 = (long *)&DAT_040a4215;
    pcStack_80 = "In";
    puStack_90 = &DAT_0407ebb1;
    puStack_a0 = &DAT_0407ebb1;
    local_1d8 = puVar2;
    local_a8 = puVar2;
    local_98 = puVar2;
    local_88 = puVar2;
    FUN_032c7320(lVar13,&local_1d8,&local_88,&local_98,&local_a8);
    local_1d0 = (long *)&DAT_0406ffa2;
    pcStack_80 = "Out";
    puStack_90 = &DAT_0407ebb1;
    puStack_a0 = &DAT_0407ebb1;
    local_1d8 = puVar2;
    local_a8 = puVar2;
    local_98 = puVar2;
    local_88 = puVar2;
    FUN_032c7320(lVar13,&local_1d8,&local_88,&local_98,&local_a8);
    local_1d0 = (long *)0x407e084;
    pcStack_80 = "TextAreaPos";
    puStack_90 = &DAT_0407ebb1;
    puStack_a0 = &DAT_0407ebb1;
    local_1d8 = puVar2;
    local_a8 = puVar2;
    local_98 = puVar2;
    local_88 = puVar2;
    FUN_032c7320(lVar13,&local_1d8,&local_88,&local_98,&local_a8);
    local_1d0 = (long *)0x40e1207;
    pcStack_80 = "BgMaskIn";
    puStack_90 = &DAT_0407ebb1;
    puStack_a0 = &DAT_0407ebb1;
    local_1d8 = puVar2;
    local_a8 = puVar2;
    local_98 = puVar2;
    local_88 = puVar2;
    FUN_032c7320(lVar13,&local_1d8,&local_88,&local_98,&local_a8);
    local_1d0 = (long *)0x40a8096;
    pcStack_80 = "BgMaskOut";
    puStack_90 = &DAT_0407ebb1;
    puStack_a0 = &DAT_0407ebb1;
    local_1d8 = puVar2;
    local_a8 = puVar2;
    local_98 = puVar2;
    local_88 = puVar2;
    FUN_032c7320(lVar13,&local_1d8,&local_88,&local_98,&local_a8);
  }
  else {
    *(long **)(param_1 + 0x3a8) = plVar1;
    lVar13 = param_1 + 0x390;
    *(undefined8 *)(param_1 + 0x3b8) = *(undefined8 *)(*(long *)(param_1 + 0x300) + 0xf0);
    FUN_032c6b2c(lVar13,6);
    FUN_032c6ccc(lVar13);
    lVar12 = 0;
    puVar24 = puVar24 + 0x10;
    do {
      puStack_90 = &DAT_0407ebb1;
      puStack_a0 = &DAT_0407ebb1;
      local_1d0 = (long *)puVar3;
      if (*(char **)((long)&PTR_DAT_04b20028 + lVar12) != (char *)0x0) {
        local_1d0 = (long *)*(char **)((long)&PTR_DAT_04b20028 + lVar12);
      }
      local_1d8 = puVar24;
      local_a8 = puVar24;
      local_98 = puVar24;
      local_88 = puVar24;
      pcStack_80 = (char *)local_1d0;
      FUN_032c7320(lVar13,&local_1d8,&local_88,&local_98,&local_a8);
      lVar12 = lVar12 + 8;
    } while (lVar12 != 0x50);
    puVar24 = PTR_DAT_04bc8e68;
  }
  FUN_032c8670(lVar13,1,0);
  if (*(int *)(param_1 + 0x17a0) == 0) {
    uVar28 = 0x40000000;
    if (*(int *)(param_1 + 0x17ac) != 2) {
      uVar28 = 0x3f800000;
    }
    uVar29 = 0;
    if (*(int *)(param_1 + 0x17ac) != 0) {
      uVar29 = uVar28;
    }
    FUN_032c8150(uVar29,param_1 + 0x390,2,1);
  }
  lVar12 = FUN_0036ab80(lVar25,"L_Count");
  *(long **)(param_1 + 0x458) = plVar1;
  lVar13 = param_1 + 0x440;
  *(undefined8 *)(param_1 + 0x468) = *(undefined8 *)(lVar12 + 0xe8);
  FUN_032c6b2c(lVar13,2);
  FUN_032c6ccc(lVar13);
  puVar2 = puVar24 + 0x10;
  local_1d0 = (long *)0x40b79f1;
  pcStack_80 = "Limit";
  puStack_90 = &DAT_0407ebb1;
  puStack_a0 = &DAT_0407ebb1;
  local_1d8 = puVar2;
  local_a8 = puVar2;
  local_98 = puVar2;
  local_88 = puVar2;
  FUN_032c7320(lVar13,&local_1d8,&local_88,&local_98,&local_a8);
  local_1d0 = (long *)&DAT_040d0d96;
  pcStack_80 = "Err";
  puStack_90 = &DAT_0407ebb1;
  puStack_a0 = &DAT_0407ebb1;
  local_1d8 = puVar2;
  local_a8 = puVar2;
  local_98 = puVar2;
  local_88 = puVar2;
  FUN_032c7320(lVar13,&local_1d8,&local_88,&local_98,&local_a8);
  uVar17 = *(uint *)(param_1 + 0x17a0);
  if (uVar17 == 1) {
    lVar13 = FUN_0036ab80(lVar25,"L_Indicator_00");
    local_1d0 = *(long **)(lVar13 + 0xe8);
    lVar13 = *(long *)(*(long *)(param_1 + 0x300) + 0x110);
    if (lVar13 != 0) {
      do {
        while (*(ulong *)((long)local_1d0 + 0x30) < *(ulong *)(lVar13 + 0x20)) {
          lVar13 = *(long *)(lVar13 + 8);
          if (lVar13 == 0) goto LAB_03355410;
        }
        if (*(ulong *)((long)local_1d0 + 0x30) <= *(ulong *)(lVar13 + 0x20)) {
          local_1d8 = (undefined *)(lVar13 + 0x28);
          goto LAB_0335541c;
        }
        lVar13 = *(long *)(lVar13 + 0x10);
      } while (lVar13 != 0);
    }
LAB_03355410:
    local_1d8 = (undefined *)0x0;
LAB_0335541c:
    local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
    local_1c8 = (undefined **)plVar1;
    plVar11 = (long *)(**(code **)(*(long *)*plVar1 + 0x30))((long *)*plVar1,0x70,8);
    plVar11[8] = 0;
    puVar2 = PTR_DAT_04bc9310;
    *(undefined4 *)(plVar11 + 9) = 0;
    plVar11[10] = 0;
    *(undefined1 *)(plVar11 + 0xb) = 0;
    plVar11[2] = 0;
    plVar11[3] = 0;
    plVar11[6] = 0;
    *(undefined4 *)(plVar11 + 7) = 0;
    plVar11[4] = 0;
    plVar11[5] = 0;
    plVar11[0xc] = 0;
    plVar11[0xd] = 0;
    *plVar11 = (long)(puVar2 + 0x10);
    plVar11[1] = 0;
    plVar19 = *(long **)(param_1 + 0x498);
    *(long **)(param_1 + 0x498) = plVar11;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 8))(plVar19);
      plVar11 = *(long **)(param_1 + 0x498);
    }
    FUN_032b6270(plVar11,&local_1d8);
    local_88 = puVar24 + 0x10;
    pcStack_80 = "Color";
    FUN_032c8270(0x40000000,*(long *)(param_1 + 0x498) + 8,&local_88,2);
    uVar17 = *(uint *)(param_1 + 0x17a0);
  }
  if ((uVar17 & 0xfffffffd) == 0) {
    local_88 = *(undefined **)(lVar25 + 0x18);
    local_1d0 = (long *)0x40e11fe;
    local_1d8 = puVar24 + 0x10;
    uVar10 = FUN_0328b6d0(&local_88,&local_1d8,0);
    *(undefined8 *)(param_1 + 0x310) = uVar10;
    local_88 = *(undefined **)(lVar25 + 0x18);
    local_1d0 = (long *)0x407e0b8;
    local_1d8 = puVar24 + 0x10;
    uVar10 = FUN_0328b6d0(&local_88,&local_1d8,0);
    *(undefined8 *)(param_1 + 0x318) = uVar10;
    if (*(int *)(param_1 + 0x17ac) == 2) {
      local_88 = *(undefined **)(lVar25 + 0x18);
      local_1d0 = (long *)0x40eb7a6;
    }
    else if (*(int *)(param_1 + 0x17ac) == 0) {
      local_88 = *(undefined **)(lVar25 + 0x18);
      local_1d0 = (long *)0x40c1f54;
    }
    else {
      local_88 = *(undefined **)(lVar25 + 0x18);
      local_1d0 = (long *)0x40c6e61;
    }
  }
  else {
    local_88 = *(undefined **)(lVar25 + 0x18);
    local_1d0 = (long *)0x40d140a;
  }
  local_1d8 = puVar24 + 0x10;
  uVar10 = FUN_0328b6d0(&local_88,&local_1d8,0);
  *(undefined8 *)(param_1 + 800) = uVar10;
  local_c0 = puVar24 + 0x10;
  pcStack_b8 = "L_Count/T_TextLimit";
  lVar25 = FUN_032bff60(&local_b0,&local_c0);
  *(long *)(param_1 + 0x328) = lVar25;
  if ((*(long *)(lVar25 + 0x18) != 0) && (lVar25 = FUN_032cbf00(), lVar25 != 0)) {
    *(undefined1 *)(lVar25 + 0xd4) = 0;
  }
  if ((*(uint *)(param_1 + 0x17a0) & 0xfffffffd) == 0) {
    uVar17 = 0;
    **(undefined2 **)(param_1 + 0x13c8) = 0;
    puVar20 = param_3 + 9;
    do {
      sVar6 = (short)*puVar20;
      if (sVar6 == 0xe) {
        uVar7 = *(ushort *)((long)puVar20 + 6) >> 1;
        puVar20 = (uint *)((ushort *)((long)puVar20 + 6) + uVar7);
        uVar17 = uVar17 + uVar7 + 3;
      }
      else if (sVar6 == 0) goto code_r0x033555b4;
      uVar18 = uVar17 + 2;
      if (sVar6 != 0xf) {
        uVar18 = uVar17;
      }
      uVar17 = uVar18 + 1;
      puVar20 = (uint *)((long)puVar20 + (ulong)(sVar6 == 0xf) * 4 + 2);
    } while( true );
  }
  goto LAB_033558dc;
code_r0x033555b4:
  lVar25 = *(long *)(param_1 + 0x13c8);
  *(bool *)(param_1 + 0x17b0) = 0 < (int)uVar17;
  if (0x3f < (int)uVar17) {
    uVar17 = 0x40;
  }
  uVar27 = (ulong)uVar17;
  (**(code **)(*(long *)(param_1 + 0x13c0) + 0x18))(param_1 + 0x13c0);
  lVar13 = 0;
  do {
    if (*(short *)(*(long *)(param_1 + 0x13c8) + lVar13 * 2) == 0) {
LAB_033556d0:
      uVar18 = (uint)lVar13 & ((int)(uint)lVar13 >> 0x1f ^ 0xffffffffU);
      goto joined_r0x03355820;
    }
    lVar12 = *(long *)(param_1 + 0x13c8) + lVar13 * 2;
    if (*(short *)(lVar12 + 2) == 0) {
      lVar13 = lVar13 + 1;
      goto LAB_033556d0;
    }
    if (*(short *)(lVar12 + 4) == 0) {
      uVar18 = (int)lVar13 + 2;
      uVar18 = uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU);
      goto joined_r0x03355820;
    }
    lVar13 = lVar13 + 3;
  } while (lVar13 != 0x80001);
  uVar18 = 0;
joined_r0x03355820:
  if ((int)uVar17 < 0) {
    uVar27 = 0;
    do {
      if (*(short *)((long)param_3 + uVar27 * 2 + 0x24) == 0) goto LAB_033556d8;
      if (*(short *)((long)param_3 + uVar27 * 2 + 0x26) == 0) {
        uVar27 = uVar27 + 1;
        goto LAB_033556d8;
      }
      if (*(short *)((long)param_3 + uVar27 * 2 + 0x28) == 0) {
        uVar27 = uVar27 + 2;
        goto LAB_033556d8;
      }
      uVar27 = uVar27 + 3;
    } while (uVar27 != 0x80001);
    uVar27 = 0;
  }
LAB_033556d8:
  uVar17 = (uint)uVar27;
  if ((int)(*(int *)(param_1 + 0x13d0) - uVar18) <= (int)(uint)uVar27) {
    uVar17 = *(int *)(param_1 + 0x13d0) + ~uVar18;
  }
  if (0 < (int)uVar17) {
    memcpy((void *)(lVar25 + (ulong)uVar18 * 2),param_3 + 9,(ulong)uVar17 << 1);
    *(undefined2 *)(lVar25 + (long)(int)(uVar17 + uVar18) * 2) = 0;
  }
  local_88 = *(undefined **)(param_1 + 0x310);
  (**(code **)(*(long *)(param_1 + 0x13c0) + 0x18))(param_1 + 0x13c0);
  local_1d0 = *(long **)(param_1 + 0x13c8);
  local_1d8 = PTR_DAT_04bb8610 + 0x10;
  FUN_032d67f0(&local_88,&local_1d8);
  uVar17 = 0;
  **(undefined2 **)(param_1 + 0x1460) = 0;
  puVar23 = (ushort *)((long)param_3 + 0xa6);
  do {
    uVar7 = *puVar23;
    if (uVar7 == 0xe) {
      uVar8 = puVar23[3] >> 1;
      puVar23 = puVar23 + 3 + uVar8;
      uVar17 = uVar17 + uVar8 + 3;
    }
    else if (uVar7 == 0) break;
    uVar18 = uVar17 + 2;
    if (uVar7 != 0xf) {
      uVar18 = uVar17;
    }
    uVar17 = uVar18 + 1;
    puVar23 = puVar23 + (ulong)(uVar7 == 0xf) * 2 + 1;
  } while( true );
  lVar25 = *(long *)(param_1 + 0x1460);
  *(bool *)(param_1 + 0x17b1) = 0 < (int)uVar17;
  if (0x7f < (int)uVar17) {
    uVar17 = 0x80;
  }
  uVar27 = (ulong)uVar17;
  (**(code **)(*(long *)(param_1 + 0x1458) + 0x18))(param_1 + 0x1458);
  lVar13 = 0;
  do {
    if (*(short *)(*(long *)(param_1 + 0x1460) + lVar13 * 2) == 0) {
LAB_03355864:
      uVar18 = (uint)lVar13 & ((int)(uint)lVar13 >> 0x1f ^ 0xffffffffU);
      goto joined_r0x0335620c;
    }
    lVar12 = *(long *)(param_1 + 0x1460) + lVar13 * 2;
    if (*(short *)(lVar12 + 2) == 0) {
      lVar13 = lVar13 + 1;
      goto LAB_03355864;
    }
    if (*(short *)(lVar12 + 4) == 0) {
      uVar18 = (int)lVar13 + 2;
      uVar18 = uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU);
      goto joined_r0x0335620c;
    }
    lVar13 = lVar13 + 3;
  } while (lVar13 != 0x80001);
  uVar18 = 0;
joined_r0x0335620c:
  if ((int)uVar17 < 0) {
    uVar27 = 0;
    do {
      if (*(short *)((long)param_3 + uVar27 * 2 + 0xa6) == 0) goto LAB_0335586c;
      if (*(short *)((long)param_3 + uVar27 * 2 + 0xa8) == 0) {
        uVar27 = uVar27 + 1;
        goto LAB_0335586c;
      }
      if (*(short *)((long)param_3 + uVar27 * 2 + 0xaa) == 0) {
        uVar27 = uVar27 + 2;
        goto LAB_0335586c;
      }
      uVar27 = uVar27 + 3;
    } while (uVar27 != 0x80001);
    uVar27 = 0;
  }
LAB_0335586c:
  uVar17 = (uint)uVar27;
  if ((int)(*(int *)(param_1 + 0x1468) - uVar18) <= (int)(uint)uVar27) {
    uVar17 = *(int *)(param_1 + 0x1468) + ~uVar18;
  }
  if (0 < (int)uVar17) {
    memcpy((void *)(lVar25 + (ulong)uVar18 * 2),(ushort *)((long)param_3 + 0xa6),(ulong)uVar17 << 1)
    ;
    *(undefined2 *)(lVar25 + (long)(int)(uVar17 + uVar18) * 2) = 0;
  }
  local_88 = *(undefined **)(param_1 + 0x318);
  (**(code **)(*(long *)(param_1 + 0x1458) + 0x18))(param_1 + 0x1458);
  local_1d0 = *(long **)(param_1 + 0x1460);
  local_1d8 = PTR_DAT_04bb8610 + 0x10;
  FUN_032d67f0(&local_88,&local_1d8);
LAB_033558dc:
  lVar25 = param_1 + 0x1570;
  **(undefined2 **)(param_1 + 0x1578) = 0;
  if (*(int *)(param_1 + 0x17a0) == 1) {
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar25);
    lVar13 = *(long *)(param_1 + 0x1578);
    uVar27 = 0;
    do {
      if (*(short *)(lVar13 + uVar27 * 2) == 0) goto LAB_03355950;
      lVar12 = lVar13 + uVar27 * 2;
      if (*(short *)(lVar12 + 2) == 0) {
        uVar27 = uVar27 + 1;
        goto LAB_03355950;
      }
      if (*(short *)(lVar12 + 4) == 0) {
        uVar27 = uVar27 + 2;
        goto LAB_03355950;
      }
      uVar27 = uVar27 + 3;
    } while (uVar27 != 0x80001);
    uVar27 = 0;
LAB_03355950:
    if ((int)uVar27 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar13 + (-(uVar27 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar27 & 0xffffffff) << 1)) = 10;
    }
  }
  uVar17 = 0;
  puVar20 = param_3 + 0x6a;
  do {
    sVar6 = (short)*puVar20;
    if (sVar6 == 0xe) {
      uVar7 = *(ushort *)((long)puVar20 + 6) >> 1;
      puVar20 = (uint *)((ushort *)((long)puVar20 + 6) + uVar7);
      uVar17 = uVar17 + uVar7 + 3;
    }
    else if (sVar6 == 0) break;
    uVar18 = uVar17 + 2;
    if (sVar6 != 0xf) {
      uVar18 = uVar17;
    }
    uVar17 = uVar18 + 1;
    puVar20 = (uint *)((long)puVar20 + (ulong)(sVar6 == 0xf) * 4 + 2);
  } while( true );
  lVar13 = *(long *)(param_1 + 0x1578);
  if (0xff < (int)uVar17) {
    uVar17 = 0x100;
  }
  uVar27 = (ulong)uVar17;
  (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar25);
  lVar12 = 0;
  do {
    if (*(short *)(*(long *)(param_1 + 0x1578) + lVar12 * 2) == 0) {
LAB_03355a2c:
      uVar18 = (uint)lVar12 & ((int)(uint)lVar12 >> 0x1f ^ 0xffffffffU);
      goto joined_r0x03355c20;
    }
    lVar4 = *(long *)(param_1 + 0x1578) + lVar12 * 2;
    if (*(short *)(lVar4 + 2) == 0) {
      lVar12 = lVar12 + 1;
      goto LAB_03355a2c;
    }
    if (*(short *)(lVar4 + 4) == 0) {
      uVar18 = (int)lVar12 + 2;
      uVar18 = uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU);
      goto joined_r0x03355c20;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  uVar18 = 0;
joined_r0x03355c20:
  if ((int)uVar17 < 0) {
    uVar27 = 0;
    do {
      if (*(short *)((long)param_3 + uVar27 * 2 + 0x1a8) == 0) goto LAB_03355a34;
      if (*(short *)((long)param_3 + uVar27 * 2 + 0x1aa) == 0) {
        uVar27 = uVar27 + 1;
        goto LAB_03355a34;
      }
      if (*(short *)((long)param_3 + uVar27 * 2 + 0x1ac) == 0) {
        uVar27 = uVar27 + 2;
        goto LAB_03355a34;
      }
      uVar27 = uVar27 + 3;
    } while (uVar27 != 0x80001);
    uVar27 = 0;
  }
LAB_03355a34:
  uVar17 = (uint)uVar27;
  if ((int)(*(int *)(param_1 + 0x1580) - uVar18) <= (int)(uint)uVar27) {
    uVar17 = *(int *)(param_1 + 0x1580) + ~uVar18;
  }
  if (0 < (int)uVar17) {
    memcpy((void *)(lVar13 + (ulong)uVar18 * 2),param_3 + 0x6a,(ulong)uVar17 << 1);
    *(undefined2 *)(lVar13 + (long)(int)(uVar17 + uVar18) * 2) = 0;
  }
  local_88 = *(undefined **)(param_1 + 800);
  (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar25);
  local_1d0 = *(long **)(param_1 + 0x1578);
  local_1d8 = PTR_DAT_04bb8610 + 0x10;
  FUN_032d67f0(&local_88,&local_1d8);
  uVar27 = 0;
  puVar24 = PTR_DAT_04bb21f8 + 0x10;
  uVar5 = 2;
  if ((*(uint *)(param_1 + 0x17a0) & 0xfffffffd) != 0) {
    uVar5 = 6;
  }
  puVar2 = PTR_DAT_04bc8e68 + 0x10;
  do {
    local_c5 = 0;
    local_1c8 = (undefined **)CONCAT35(local_1c8._5_3_,0x100);
    local_1d8 = puVar24;
    local_1d0 = (long *)((long)&local_1c8 + 4);
    FUN_038d1270(&local_1d8,"P_UnFixed_%02d",uVar27 & 0xffffffff);
    (**(code **)(local_1d8 + 0x18))(&local_1d8);
    local_98 = *(undefined **)(local_b0 + 0x18);
    pcStack_80 = puVar3;
    if (local_1d0 != (long *)0x0) {
      pcStack_80 = (char *)local_1d0;
    }
    local_88 = puVar2;
    uVar10 = FUN_032a2940(&local_98,&local_88,0);
    lVar25 = uVar27 * 8;
    uVar27 = uVar27 + 1;
    *(undefined8 *)(param_1 + lVar25 + 0x330) = uVar10;
  } while (uVar5 != uVar27);
  local_1d8 = (undefined *)((ulong)local_1d8 & 0xffffffff00000000);
  puVar14 = (undefined8 *)(**(code **)(*(long *)*plVar1 + 0x30))((long *)*plVar1,0x70,8);
  puVar14[10] = 0;
  *(undefined4 *)(puVar14 + 0xb) = 0;
  puVar14[0xc] = 0;
  *(undefined1 *)(puVar14 + 0xd) = 0;
  puVar14[8] = 0;
  *(undefined4 *)(puVar14 + 9) = 0;
  *puVar14 = 0;
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar14[3] = 0;
  puVar14[4] = 0;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  pvVar26 = *(void **)(param_1 + 0x388);
  *(undefined8 **)(param_1 + 0x388) = puVar14;
  if (pvVar26 == (void *)0x0) {
    puVar24 = PTR_DAT_04bc8e68;
    plVar11 = (long *)PTR_DAT_04bb2698;
  }
  else {
    FUN_03359a7c(pvVar26);
    plVar11 = (long *)PTR_DAT_04bb2698;
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar26);
      puVar24 = PTR_DAT_04bc8e68;
    }
    else {
      plVar19 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar26);
      puVar24 = PTR_DAT_04bc8e68;
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x38))(plVar19,pvVar26);
      }
    }
    puVar14 = *(undefined8 **)(param_1 + 0x388);
  }
  FUN_03359b44(puVar14,plVar1);
  uVar28 = 0;
  if ((*(uint *)(param_1 + 0x17ac) & 0xfffffffd) != 0) {
    uVar28 = 0x3f800000;
  }
  uVar29 = 0x40000000;
  if (*(int *)(param_1 + 0x17a0) != 1) {
    uVar29 = uVar28;
  }
  FUN_032c8150(uVar29,*(long *)(param_1 + 0x388) + 0x18,1,1);
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x388) + 0x10);
  lVar25 = *(long *)(param_1 + 0x300);
  pcVar21 = *(char **)(PTR_PTR_04bb2238 + 8);
  if (*(int *)(param_1 + 0x17a0) == 1) {
    if (*pcVar21 == '\0') {
      plVar19 = *(long **)(*(long *)(lVar25 + 0xf0) + 0x18);
    }
    else {
      local_1d8 = puVar24 + 0x10;
      local_1d0 = (long *)pcVar21;
      plVar19 = (long *)FUN_032cb8e0(&local_88,&local_1d8,*(undefined8 *)(lVar25 + 0xf0));
    }
    lVar13 = *plVar19;
    pcVar21 = "N_InputCnt";
  }
  else {
    if (*pcVar21 == '\0') {
      plVar19 = *(long **)(*(long *)(lVar25 + 0xf0) + 0x18);
    }
    else {
      local_1d8 = puVar24 + 0x10;
      local_1d0 = (long *)pcVar21;
      plVar19 = (long *)FUN_032cb8e0(&local_88,&local_1d8,*(undefined8 *)(lVar25 + 0xf0));
    }
    lVar13 = *plVar19;
    pcVar21 = "N_TextArea";
  }
  uVar15 = (**(code **)(lVar13 + 0x60))(plVar19,pcVar21,1);
  FUN_032d1c90(lVar25,uVar10,uVar15);
  local_1d8 = (undefined *)((ulong)local_1d8 & 0xffffffff00000000);
  puVar14 = (undefined8 *)(**(code **)(*(long *)*plVar1 + 0x30))((long *)*plVar1,0x220,8);
  *puVar14 = 0;
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar14[3] = 0;
  puVar14[4] = 0;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  puVar14[8] = 0;
  puVar14[9] = 0;
  puVar2 = PTR_DAT_04bc8e60;
  puVar24 = PTR_DAT_04bc8e60 + 0x10;
  *(undefined8 *)((long)puVar14 + 0x4d) = 0;
  puVar14[0xb] = puVar24;
  puVar14[0xc] = 0;
  puVar14[0x11] = puVar24;
  puVar14[0x12] = 0;
  puVar14[0x17] = puVar24;
  puVar14[0x18] = 0;
  puVar14[0x1d] = puVar24;
  puVar14[0x1e] = 0;
  puVar14[0x23] = puVar24;
  puVar14[0x24] = 0;
  puVar9 = PTR_DAT_04bc8f88;
  puVar3 = PTR_DAT_04bc8f88 + 0x10;
  puVar14[0x41] = 0;
  puVar14[0x29] = puVar3;
  puVar14[0x2a] = 0;
  puVar14[0x2f] = puVar3;
  puVar14[0x30] = 0;
  puVar14[0x35] = puVar3;
  puVar14[0x36] = 0;
  puVar14[0x3b] = puVar3;
  puVar14[0x3c] = 0;
  *(undefined8 *)((long)puVar14 + 0x217) = 0;
  puVar14[0x42] = 0;
  *(undefined4 *)(puVar14 + 0x43) = 1;
  local_1d8 = (undefined *)CONCAT44((int)((ulong)local_1d8 >> 0x20),6);
  *(undefined2 *)(puVar14 + 10) = 0x41;
  *(undefined2 *)((long)puVar14 + 0x53) = 0x50f;
  pvVar26 = *(void **)(param_1 + 0x1788);
  *(undefined8 **)(param_1 + 0x1788) = puVar14;
  if (pvVar26 != (void *)0x0) {
    FUN_032c1b04(pvVar26);
    if (*plVar11 == 0) {
      free(pvVar26);
    }
    else {
      plVar11 = (long *)FUN_038cb610(*plVar11,pvVar26);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,pvVar26);
      }
    }
    puVar14 = *(undefined8 **)(param_1 + 0x1788);
  }
  local_1d0 = &local_1c8;
  local_1c8 = &PTR_LAB_04b20108;
  local_1b8 = FUN_03356274;
  local_1b0 = 0;
  plVar11 = (long *)puVar14[0x18];
  local_1d8 = puVar24;
  lStack_1c0 = param_1;
  if (plVar11 == (long *)0x0) {
    ppuVar22 = &PTR_LAB_04b20108;
LAB_03355ed8:
    uVar10 = (*(code *)ppuVar22[3])(local_1d0,puVar14 + 0x19);
    puVar14[0x18] = uVar10;
    puVar24 = PTR_DAT_04bb2020;
    if (local_1d0 != (long *)0x0) {
      (**(code **)(*local_1d0 + 8))();
    }
  }
  else {
    (**(code **)(*plVar11 + 8))(plVar11);
    if (local_1d0 != (long *)0x0) {
      ppuVar22 = (undefined **)*local_1d0;
      goto LAB_03355ed8;
    }
    puVar14[0x18] = 0;
    puVar24 = PTR_DAT_04bb2020;
  }
  lVar25 = *(long *)(param_1 + 0x1788);
  local_1d8 = puVar2 + 0x10;
  local_1d0 = &local_1c8;
  local_1b8 = (code *)&LAB_033562c8;
  local_1b0 = 0;
  plVar11 = *(long **)(lVar25 + 0xf0);
  local_1c8 = &PTR_LAB_04b20108;
  if (plVar11 == (long *)0x0) {
    ppuVar22 = &PTR_LAB_04b20108;
    lStack_1c0 = param_1;
LAB_03355f68:
    uVar10 = (*(code *)ppuVar22[3])(local_1d0,lVar25 + 0xf8);
    *(undefined8 *)(lVar25 + 0xf0) = uVar10;
    if (local_1d0 != (long *)0x0) {
      (**(code **)(*local_1d0 + 8))();
    }
  }
  else {
    lStack_1c0 = param_1;
    (**(code **)(*plVar11 + 8))(plVar11);
    if (local_1d0 != (long *)0x0) {
      ppuVar22 = (undefined **)*local_1d0;
      goto LAB_03355f68;
    }
    *(undefined8 *)(lVar25 + 0xf0) = 0;
  }
  lVar25 = *(long *)(param_1 + 0x1788);
  local_1d8 = puVar9 + 0x10;
  local_1d0 = &local_1c8;
  local_1b8 = (code *)&LAB_03356390;
  local_1b0 = 0;
  ppuVar22 = &PTR_LAB_04b201f0;
  local_1c8 = &PTR_LAB_04b201f0;
  plVar11 = *(long **)(lVar25 + 0x150);
  lStack_1c0 = param_1;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))(plVar11);
    if (local_1d0 == (long *)0x0) {
      *(undefined8 *)(lVar25 + 0x150) = 0;
      goto LAB_03356020;
    }
    ppuVar22 = (undefined **)*local_1d0;
  }
  uVar10 = (*(code *)ppuVar22[3])(local_1d0,lVar25 + 0x158);
  *(undefined8 *)(lVar25 + 0x150) = uVar10;
  if (local_1d0 != (long *)0x0) {
    (**(code **)(*local_1d0 + 8))();
  }
LAB_03356020:
  *(char **)(param_1 + 0x20) = "LayoutTextAreaPro";
  if ((*(long *)(param_1 + 0x90) == 0) && (*(long *)(param_1 + 0xc0) == 0)) {
    *(undefined8 *)(param_1 + 0x98) = &PTR_LAB_04b20108;
    *(long *)(param_1 + 0xa0) = param_1;
    *(undefined1 **)(param_1 + 0xa8) = &LAB_03357ef0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 **)(param_1 + 0x90) = (undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    lVar25 = *(long *)(param_1 + 0x138);
  }
  else {
    lVar25 = *(long *)(param_1 + 0x138);
  }
  if ((lVar25 == 0) && (*(long *)(param_1 + 0x168) == 0)) {
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined ***)(param_1 + 0x140) = &PTR_LAB_04b20108;
    *(long *)(param_1 + 0x148) = param_1;
    *(long *)(param_1 + 0x138) = param_1 + 0x140;
    *(undefined1 **)(param_1 + 0x150) = &LAB_03357f00;
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  if ((*(long *)(param_1 + 0x1e0) == 0) && (*(long *)(param_1 + 0x210) == 0)) {
    *(undefined8 *)(param_1 + 0x210) = 0;
    *(undefined ***)(param_1 + 0x1e8) = &PTR_LAB_04b20108;
    *(long *)(param_1 + 0x1f0) = param_1;
    *(long *)(param_1 + 0x1e0) = param_1 + 0x1e8;
    *(undefined1 **)(param_1 + 0x1f8) = &LAB_03358460;
    *(undefined8 *)(param_1 + 0x200) = 0;
    lVar25 = *(long *)(param_1 + 0x288);
  }
  else {
    lVar25 = *(long *)(param_1 + 0x288);
  }
  if ((lVar25 == 0) && (*(long *)(param_1 + 0x2b8) == 0)) {
    *(undefined ***)(param_1 + 0x290) = &PTR_LAB_04b20108;
    *(long *)(param_1 + 0x298) = param_1;
    *(undefined1 **)(param_1 + 0x2a0) = &LAB_03358770;
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    *(long *)(param_1 + 0x288) = param_1 + 0x290;
    *(undefined8 *)(param_1 + 0x2b8) = 0;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    *(long *)(param_1 + 0x30) = param_1 + 0x40;
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  }
  if ((long *)*plVar1 != (long *)0x0) {
    (**(code **)(*(long *)*plVar1 + 0x28))();
  }
  if (*(long **)(param_1 + 0x2e8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2e8) + 0x28))();
  }
  local_88 = puVar24 + 0x10;
  pcStack_80 = "LayoutTextAreaPro Heap";
  local_1d8 = (undefined *)0x0;
  local_1d0 = (long *)0x0;
  if (*param_2 == 0) {
    local_1d0 = (long *)0x0;
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_038c6d48(0x2800,&local_88,*param_2,8,1,1);
  }
  *(undefined8 *)(param_1 + 0x2f0) = uVar10;
  *(long **)(param_1 + 0x2f8) = local_1d0;
  return;
}

