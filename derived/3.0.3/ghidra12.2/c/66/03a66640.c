
void FUN_03a66640(long param_1,ulong param_2,uint param_3,long *param_4)

{
  long lVar1;
  size_t __size;
  long *plVar2;
  float *pfVar3;
  uint uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  long lVar11;
  long *plVar12;
  ulong *puVar13;
  ulong *puVar14;
  long lVar15;
  void *pvVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 *puVar19;
  uint uVar20;
  ulong extraout_x1;
  ulong extraout_x1_00;
  undefined8 extraout_x1_01;
  uint *puVar21;
  long lVar22;
  undefined8 *puVar23;
  short sVar24;
  uint uVar25;
  long lVar26;
  int iVar27;
  short sVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  int local_98;
  undefined4 local_94;
  long local_90;
  long lStack_88;
  
  uVar20 = (uint)param_2;
  if (0 < (int)uVar20) {
    __size = (param_2 & 0xffffffff) * 0x338 + 8;
    lVar26 = *(long *)PTR_DAT_04bb2698;
    if (lVar26 == 0) {
      puVar13 = malloc(__size);
      puVar8 = PTR_DAT_04bd1178;
      puVar9 = PTR_DAT_04bd1198;
joined_r0x03a666f4:
      PTR_DAT_04bd1178 = puVar8;
      PTR_DAT_04bd1198 = puVar9;
      if (puVar13 != (ulong *)0x0) {
        puVar14 = puVar13 + 1;
        *puVar13 = param_2 & 0xffffffff;
        puVar13 = puVar14;
        do {
          *(undefined4 *)puVar13 = 0;
          *(undefined8 *)((long)puVar13 + 0x104) = 0x3f80000000000000;
          *(undefined4 *)((long)puVar13 + 0x10c) = 0x3f800000;
          puVar13[0x1e] = (ulong)(puVar8 + 0x10);
          puVar13[0x1f] = (ulong)&DAT_3f8000003f800000;
          puVar13[1] = 0;
          *(undefined4 *)(puVar13 + 4) = 0;
          puVar13[0x13] = 0;
          *(undefined4 *)(puVar13 + 0x14) = 0xffffffff;
          *(undefined4 *)(puVar13 + 0x1d) = 0x10000;
          *(undefined4 *)(puVar13 + 0x20) = 0;
          puVar13[0x22] = 0;
          *(undefined4 *)(puVar13 + 0x36) = 0xffffffff;
          *(undefined4 *)(puVar13 + 0x3f) = 0x10000;
          puVar13[5] = 0;
          puVar13[6] = 0;
          puVar13[7] = 0;
          puVar13[8] = 0;
          puVar13[9] = 0;
          puVar13[10] = 0;
          puVar13[0xb] = 0;
          puVar13[0xc] = 0;
          puVar13[0xd] = 0;
          puVar13[0xe] = 0;
          puVar13[0xf] = 0;
          puVar13[0x10] = 0;
          puVar13[0x11] = 0;
          puVar13[0x12] = 0;
          puVar13[0x19] = 0;
          puVar13[0x1a] = 0;
          puVar13[0x17] = 0;
          puVar13[0x18] = 0;
          puVar13[0x15] = 0;
          puVar13[0x16] = 0;
          puVar13[0x1b] = 0;
          puVar13[0x1c] = (ulong)"agl::TextureData";
          puVar13[0x29] = 0;
          puVar13[0x2a] = 0;
          puVar13[0x27] = 0;
          puVar13[0x28] = 0;
          puVar13[0x25] = 0;
          puVar13[0x26] = 0;
          puVar13[0x23] = 0;
          puVar13[0x24] = 0;
          puVar13[0x34] = 0;
          puVar13[0x35] = 0;
          puVar13[0x32] = 0;
          puVar13[0x33] = 0;
          puVar13[0x30] = 0;
          puVar13[0x31] = 0;
          puVar13[0x2e] = 0;
          puVar13[0x2f] = 0;
          puVar13[0x2c] = 0;
          puVar13[0x2d] = 0;
          puVar13[0x3b] = 0;
          puVar13[0x3c] = 0;
          puVar13[0x39] = 0;
          puVar13[0x3a] = 0;
          puVar13[0x37] = 0;
          puVar13[0x38] = 0;
          puVar13[0x3d] = 0;
          puVar13[0x3e] = (ulong)"agl::TextureData";
          *(undefined4 *)(puVar13 + 0x42) = 0xff;
          *(undefined4 *)((long)puVar13 + 0x214) = 0;
          puVar13[0x2b] = (ulong)(puVar9 + 0x10);
          puVar13[0x43] = 0x80000000000;
          puVar13[0x46] = 0;
          puVar13[0x45] = 0;
          puVar13[0x44] = 0;
          FUN_0390cee0(puVar13 + 0x47);
          puVar13[0x66] = 0;
          puVar13[0x65] = 0;
          puVar13[100] = 0;
          puVar13[99] = 0;
          puVar13[0x22] = (ulong)(puVar13 + 0x2b);
          puVar13 = puVar13 + 0x67;
        } while (puVar13 != puVar14 + (param_2 & 0xffffffff) * 0x67);
        *(uint *)(param_1 + 0x520) = uVar20;
        *(ulong **)(param_1 + 0x528) = puVar14;
      }
    }
    else {
      plVar12 = param_4;
      if (param_4 != (long *)0x0) {
LAB_03a666d0:
        puVar13 = (ulong *)(**(code **)(*plVar12 + 0x30))(plVar12,__size,8);
        puVar8 = PTR_DAT_04bd1178;
        puVar9 = PTR_DAT_04bd1198;
        goto joined_r0x03a666f4;
      }
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar12 = (long *)(lVar26 + 8);
      if (lVar11 != 0) {
        plVar12 = (long *)(lVar11 + 0xa8);
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 != (long *)0x0) goto LAB_03a666d0;
    }
    if ((int)param_3 < 1) {
      uVar25 = 0;
      do {
        uVar4 = uVar25;
        if (*(uint *)(param_1 + 0x520) <= uVar25) {
          uVar4 = 0;
        }
        FUN_0390a734(*(long *)(param_1 + 0x528) + (ulong)uVar4 * 0x338 + 0x50,1,0x1d,1,1,1,1,0,0,1);
        uVar25 = uVar25 + 1;
        param_2 = extraout_x1_00;
      } while (uVar20 != uVar25);
    }
    else {
      uVar25 = 0;
      do {
        lVar26 = *(long *)(param_1 + 0x528);
        uVar4 = uVar25;
        if (*(uint *)(param_1 + 0x520) <= uVar25) {
          uVar4 = 0;
        }
        uVar29 = (ulong)uVar4;
        lVar11 = *(long *)PTR_DAT_04bb2698;
        if (lVar11 == 0) {
          pvVar16 = malloc((ulong)param_3 << 4);
joined_r0x03a66958:
          if (pvVar16 != (void *)0x0) {
            puVar21 = (uint *)(lVar26 + uVar29 * 0x338);
            *(void **)(puVar21 + 2) = pvVar16;
            *puVar21 = param_3;
          }
          lVar11 = *(long *)PTR_DAT_04bb2698;
          if (lVar11 == 0) goto LAB_03a669c0;
          plVar12 = param_4;
          if (param_4 != (long *)0x0) {
LAB_03a6699c:
            pvVar16 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,(ulong)param_3 << 2,8);
            if (pvVar16 == (void *)0x0) goto LAB_03a66870;
            goto LAB_03a669cc;
          }
LAB_03a66970:
          lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar12 = (long *)(lVar11 + 8);
          if (lVar15 != 0) {
            plVar12 = (long *)(lVar15 + 0xa8);
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 != (long *)0x0) goto LAB_03a6699c;
        }
        else {
          plVar12 = param_4;
          if (param_4 != (long *)0x0) {
LAB_03a66908:
            pvVar16 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,(ulong)param_3 << 4,8);
            goto joined_r0x03a66958;
          }
          lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar12 = (long *)(lVar11 + 8);
          if (lVar15 != 0) {
            plVar12 = (long *)(lVar15 + 0xa8);
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 != (long *)0x0) goto LAB_03a66908;
          lVar11 = *(long *)PTR_DAT_04bb2698;
          if (lVar11 != 0) goto LAB_03a66970;
LAB_03a669c0:
          pvVar16 = malloc((ulong)param_3 << 2);
          if (pvVar16 != (void *)0x0) {
LAB_03a669cc:
            lVar11 = lVar26 + uVar29 * 0x338;
            *(void **)(lVar11 + 0x28) = pvVar16;
            *(uint *)(lVar11 + 0x20) = param_3;
          }
        }
LAB_03a66870:
        FUN_0390a734(lVar26 + uVar29 * 0x338 + 0x50,1,0x1d,1,1,1,1,0,0,1);
        uVar25 = uVar25 + 1;
        param_2 = extraout_x1;
      } while (uVar20 != uVar25);
    }
  }
  plVar12 = param_4;
  if (param_4 == (long *)0x0) {
    lVar11 = *(long *)PTR_DAT_04bb2698;
    lVar26 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),param_2,0);
    plVar12 = (long *)(lVar11 + 8);
    if (lVar26 != 0) {
      plVar12 = (long *)(lVar26 + 0xa8);
    }
    plVar12 = (long *)*plVar12;
  }
  *(undefined8 *)(param_1 + 0x560) = 0;
  *(undefined8 *)(param_1 + 0x538) = 0;
  *(undefined8 *)(param_1 + 0x540) = 0;
  *(undefined8 *)(param_1 + 0x548) = 0;
  plVar2 = (long *)(param_1 + 0x538);
  *(undefined8 *)(param_1 + 0x550) = 0;
  puVar8 = PTR_DAT_04bd0fa8;
  uVar17 = *(undefined8 *)PTR_DAT_04bd0fa8;
  *(byte *)(param_1 + 0x558) = *(byte *)(param_1 + 0x558) & 0xfe;
  *(undefined2 *)(param_1 + 0x55a) = 0;
  FUN_038f8590(uVar17,param_1 + 0x530,plVar12,0x308,8,0);
  *(undefined2 *)(param_1 + 0x55a) = 0;
  lVar11 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(param_1 + 0x548));
  lVar26 = 0;
  if (*(long *)(param_1 + 0x550) != 0) {
    lVar26 = *plVar2 - *(long *)(*(long *)(param_1 + 0x550) + 0x10);
  }
  lVar15 = 0;
  iVar27 = 0;
  *(undefined8 *)(lVar11 + lVar26) = 0;
  do {
    fVar31 = (float)iVar27 * 6.2831855 * 0.03125;
    fVar30 = cosf(fVar31);
    fVar31 = sinf(fVar31);
    lVar11 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(param_1 + 0x548));
    lVar26 = 0;
    if (*(long *)(param_1 + 0x550) != 0) {
      lVar26 = *plVar2 - *(long *)(*(long *)(param_1 + 0x550) + 0x10);
    }
    lVar26 = lVar26 + lVar15;
    lVar15 = lVar15 + 8;
    lVar11 = lVar11 + lVar26;
    iVar27 = iVar27 + 1;
    *(float *)(lVar11 + 8) = fVar30 * 0.16666667;
    *(float *)(lVar11 + 0xc) = fVar31 * 0.16666667;
  } while ((int)lVar15 != 0x100);
  iVar27 = 0;
  lVar26 = 0x10c;
  do {
    fVar31 = (float)iVar27 * 6.2831855 * 0.03125;
    fVar30 = cosf(fVar31);
    fVar31 = sinf(fVar31);
    lVar15 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(param_1 + 0x548));
    lVar11 = 0;
    if (*(long *)(param_1 + 0x550) != 0) {
      lVar11 = *plVar2 - *(long *)(*(long *)(param_1 + 0x550) + 0x10);
    }
    lVar11 = lVar11 + lVar26;
    lVar26 = lVar26 + 8;
    pfVar3 = (float *)(lVar15 + lVar11);
    iVar27 = iVar27 + 1;
    pfVar3[-1] = fVar30 * 0.33333334;
    *pfVar3 = fVar31 * 0.33333334;
  } while ((int)lVar26 != 0x20c);
  iVar27 = 0;
  lVar26 = 0x20c;
  do {
    fVar31 = (float)iVar27 * 6.2831855 * 0.03125;
    fVar30 = cosf(fVar31);
    fVar31 = sinf(fVar31);
    lVar15 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(param_1 + 0x548));
    lVar11 = 0;
    if (*(long *)(param_1 + 0x550) != 0) {
      lVar11 = *plVar2 - *(long *)(*(long *)(param_1 + 0x550) + 0x10);
    }
    lVar11 = lVar11 + lVar26;
    lVar26 = lVar26 + 8;
    pfVar3 = (float *)(lVar15 + lVar11);
    iVar27 = iVar27 + 1;
    pfVar3[-1] = fVar30 * 0.5;
    *pfVar3 = fVar31 * 0.5;
  } while ((int)lVar26 != 0x30c);
  local_90 = *(long *)(param_1 + 0x548);
  local_98 = 0;
  if (*(long *)(param_1 + 0x550) != 0) {
    local_98 = *(int *)plVar2 - *(int *)(*(long *)(param_1 + 0x550) + 0x10);
  }
  local_94 = 0;
  if (local_90 != 0) {
    local_94 = *(undefined4 *)(local_90 + 0x104);
  }
  lStack_88 = param_1 + 0x530;
  FUN_0390ebc0(param_1 + 0x5a0,&local_98,8,*(undefined4 *)(param_1 + 0x540));
  lVar26 = param_1 + 0x2e0;
  *(undefined8 *)(param_1 + 0x5d8) = 0x16;
  *(undefined2 *)(param_1 + 0x5e0) = 1;
  FUN_0390e390(lVar26,1,param_4);
  FUN_0390e4c0(lVar26,0,param_1 + 0x5a0,0);
  FUN_0390e640(lVar26);
  plVar12 = param_4;
  if (param_4 == (long *)0x0) {
    lVar11 = *(long *)PTR_DAT_04bb2698;
    lVar26 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1_01,0)
    ;
    plVar12 = (long *)(lVar11 + 8);
    if (lVar26 != 0) {
      plVar12 = (long *)(lVar26 + 0xa8);
    }
    plVar12 = (long *)*plVar12;
  }
  uVar17 = *(undefined8 *)puVar8;
  *(undefined8 *)(param_1 + 0x598) = 0;
  plVar2 = (long *)(param_1 + 0x570);
  *(undefined8 *)(param_1 + 0x570) = 0;
  *(undefined8 *)(param_1 + 0x578) = 0;
  *(undefined8 *)(param_1 + 0x580) = 0;
  *(undefined8 *)(param_1 + 0x588) = 0;
  *(undefined2 *)(param_1 + 0x592) = 0;
  *(byte *)(param_1 + 0x590) = *(byte *)(param_1 + 0x590) & 0xfe;
  FUN_038f8590(uVar17,param_1 + 0x568,plVar12,0x3c0,8,0);
  lVar26 = 0;
  iVar27 = 1;
  *(undefined2 *)(param_1 + 0x592) = 0;
  do {
    lVar15 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(param_1 + 0x580));
    lVar11 = 0;
    if (*(long *)(param_1 + 0x588) != 0) {
      lVar11 = *plVar2 - *(long *)(*(long *)(param_1 + 0x588) + 0x10);
    }
    *(undefined2 *)(lVar15 + lVar11 + lVar26) = 0;
    lVar15 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(param_1 + 0x580));
    lVar11 = 0;
    if (*(long *)(param_1 + 0x588) != 0) {
      lVar11 = *plVar2 - *(long *)(*(long *)(param_1 + 0x588) + 0x10);
    }
    sVar24 = 1;
    if ((int)lVar26 != 0xba) {
      sVar24 = (short)iVar27 + 1;
    }
    *(short *)(lVar15 + lVar11 + lVar26 + 2) = (short)iVar27;
    lVar15 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(param_1 + 0x580));
    lVar11 = 0;
    if (*(long *)(param_1 + 0x588) != 0) {
      lVar11 = *plVar2 - *(long *)(*(long *)(param_1 + 0x588) + 0x10);
    }
    lVar11 = lVar11 + lVar26;
    iVar27 = iVar27 + 1;
    lVar26 = lVar26 + 6;
    *(short *)(lVar15 + lVar11 + 4) = sVar24;
  } while (iVar27 != 0x21);
  iVar27 = 1;
  lVar26 = 0x60;
  sVar24 = 0;
  do {
    lVar11 = 0;
    sVar28 = 0;
    lVar15 = (long)(int)lVar26 * 2;
    do {
      lVar18 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(param_1 + 0x580));
      lVar22 = 0;
      if (*(long *)(param_1 + 0x588) != 0) {
        lVar22 = *plVar2 - *(long *)(*(long *)(param_1 + 0x588) + 0x10);
      }
      sVar5 = 0;
      if ((int)lVar11 != 0xba) {
        sVar5 = sVar28 + 1;
      }
      sVar7 = sVar24 + sVar28 + 1;
      *(short *)(lVar18 + lVar22 + lVar15 + lVar11 * 2) = sVar7;
      lVar18 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(param_1 + 0x580));
      lVar22 = 0;
      if (*(long *)(param_1 + 0x588) != 0) {
        lVar22 = *plVar2 - *(long *)(*(long *)(param_1 + 0x588) + 0x10);
      }
      sVar6 = sVar5 + ((ushort)(iVar27 << 5) | 1);
      *(short *)(lVar18 + lVar22 + lVar15 + lVar11 * 2 + 2) = sVar6;
      lVar18 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(param_1 + 0x580));
      lVar22 = 0;
      if (*(long *)(param_1 + 0x588) != 0) {
        lVar22 = *plVar2 - *(long *)(*(long *)(param_1 + 0x588) + 0x10);
      }
      *(short *)(lVar18 + lVar22 + lVar15 + lVar11 * 2 + 4) = sVar5 + (short)iVar27 * 0x20 + -0x1f;
      lVar18 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(param_1 + 0x580));
      lVar22 = 0;
      if (*(long *)(param_1 + 0x588) != 0) {
        lVar22 = *plVar2 - *(long *)(*(long *)(param_1 + 0x588) + 0x10);
      }
      *(short *)(lVar18 + lVar22 + lVar15 + lVar11 * 2 + 6) = sVar7;
      lVar18 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(param_1 + 0x580));
      lVar22 = 0;
      if (*(long *)(param_1 + 0x588) != 0) {
        lVar22 = *plVar2 - *(long *)(*(long *)(param_1 + 0x588) + 0x10);
      }
      *(short *)(lVar18 + lVar22 + lVar15 + lVar11 * 2 + 8) = sVar24 + sVar28 + 0x21;
      lVar18 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(param_1 + 0x580));
      lVar22 = 0;
      if (*(long *)(param_1 + 0x588) != 0) {
        lVar22 = *plVar2 - *(long *)(*(long *)(param_1 + 0x588) + 0x10);
      }
      sVar28 = sVar28 + 1;
      lVar1 = lVar11 * 2;
      lVar11 = lVar11 + 6;
      *(short *)(lVar18 + lVar22 + lVar15 + lVar1 + 10) = sVar6;
    } while ((int)lVar11 != 0xc0);
    bVar10 = iVar27 != 2;
    iVar27 = iVar27 + 1;
    sVar24 = sVar24 + 0x20;
    lVar26 = (int)lVar26 + lVar11;
  } while (bVar10);
  local_90 = *(long *)(param_1 + 0x580);
  local_98 = 0;
  if (*(long *)(param_1 + 0x588) != 0) {
    local_98 = *(int *)plVar2 - *(int *)(*(long *)(param_1 + 0x588) + 0x10);
  }
  if (local_90 == 0) {
    local_94 = 0;
  }
  else {
    local_94 = *(undefined4 *)(local_90 + 0x104);
  }
  lStack_88 = param_1 + 0x568;
  FUN_03901480(param_1 + 0x4c0,&local_98,1,*(ulong *)(param_1 + 0x578) >> 1);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x4cc) = 4;
  if ((int)param_3 < 1) goto LAB_03a67304;
  uVar29 = (ulong)param_3;
  lVar26 = *(long *)PTR_DAT_04bb2698;
  if (lVar26 == 0) {
    puVar19 = malloc((ulong)param_3 * 0x74);
joined_r0x03a6716c:
    if (puVar19 != (undefined8 *)0x0) {
      puVar23 = puVar19;
      do {
        *puVar23 = 0;
        puVar23[1] = 0x4120000000000000;
        *(undefined4 *)(puVar23 + 2) = 0x3e4ccccd;
        *(undefined1 *)((long)puVar23 + 0x54) = 1;
        *(undefined4 *)(puVar23 + 0xb) = 0;
        *(undefined1 *)((long)puVar23 + 0x5c) = 1;
        *(undefined4 *)(puVar23 + 0xe) = 8;
        *(undefined1 **)((long)puVar23 + 0x14) = &DAT_3f8000003f800000;
        *(undefined1 **)((long)puVar23 + 0x1c) = &DAT_3f8000003f800000;
        *(undefined1 **)((long)puVar23 + 0x24) = &DAT_3f8000003f800000;
        *(undefined1 **)((long)puVar23 + 0x2c) = &DAT_3f8000003f800000;
        *(undefined1 **)((long)puVar23 + 0x34) = &DAT_3f8000003f800000;
        *(undefined1 **)((long)puVar23 + 0x3c) = &DAT_3f8000003f800000;
        *(undefined1 **)((long)puVar23 + 0x44) = &DAT_3f8000003f800000;
        *(undefined8 *)((long)puVar23 + 0x4c) = 0x3f800000;
        puVar23[0xc] = 0x600000005;
        puVar23[0xd] = 0x3f00000000000001;
        puVar23 = (undefined8 *)((long)puVar23 + 0x74);
      } while (puVar23 != (undefined8 *)((long)puVar19 + uVar29 * 0x74));
      *(uint *)(param_1 + 0x18) = param_3;
      *(undefined8 **)(param_1 + 0x20) = puVar19;
    }
    lVar26 = *(long *)PTR_DAT_04bb2698;
    if (lVar26 == 0) goto LAB_03a67330;
    if (param_4 != (long *)0x0) {
LAB_03a6725c:
      pvVar16 = (void *)(**(code **)(*param_4 + 0x30))(param_4,uVar29 << 2,8);
      if (pvVar16 == (void *)0x0) goto LAB_03a67294;
      goto LAB_03a6727c;
    }
LAB_03a67230:
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar19 = (undefined8 *)(lVar26 + 8);
    if (lVar11 != 0) {
      puVar19 = (undefined8 *)(lVar11 + 0xa8);
    }
    param_4 = (long *)*puVar19;
    if (param_4 != (long *)0x0) goto LAB_03a6725c;
  }
  else {
    plVar12 = param_4;
    if (param_4 != (long *)0x0) {
LAB_03a67148:
      puVar19 = (undefined8 *)(**(code **)(*plVar12 + 0x30))(plVar12,(ulong)param_3 * 0x74,8);
      goto joined_r0x03a6716c;
    }
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar12 = (long *)(lVar26 + 8);
    if (lVar11 != 0) {
      plVar12 = (long *)(lVar11 + 0xa8);
    }
    plVar12 = (long *)*plVar12;
    if (plVar12 != (long *)0x0) goto LAB_03a67148;
    lVar26 = *(long *)PTR_DAT_04bb2698;
    if (lVar26 != 0) goto LAB_03a67230;
LAB_03a67330:
    pvVar16 = malloc(uVar29 << 2);
    if (pvVar16 != (void *)0x0) {
LAB_03a6727c:
      memset(pvVar16,0,uVar29 << 2);
      *(uint *)(param_1 + 8) = param_3;
      *(void **)(param_1 + 0x10) = pvVar16;
    }
  }
LAB_03a67294:
  if (param_3 == 1) {
    uVar20 = 0;
  }
  else {
    uVar20 = 0;
    do {
      uVar25 = uVar20;
      if (*(uint *)(param_1 + 8) <= uVar20) {
        uVar25 = 0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x10) + (ulong)uVar25 * 4) = 0xffffffff;
      uVar25 = 0;
      if (uVar20 + 1 < *(uint *)(param_1 + 8)) {
        uVar25 = uVar20 + 1;
      }
      uVar20 = uVar20 + 2;
      *(undefined4 *)(*(long *)(param_1 + 0x10) + (ulong)uVar25 * 4) = 0xffffffff;
    } while (uVar20 != (param_3 & 0xfffffffe));
  }
  if ((param_3 & 1) != 0) {
    if (*(uint *)(param_1 + 8) <= uVar20) {
      uVar20 = 0;
    }
    *(undefined4 *)(*(long *)(param_1 + 0x10) + (ulong)uVar20 * 4) = 0xffffffff;
  }
LAB_03a67304:
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

