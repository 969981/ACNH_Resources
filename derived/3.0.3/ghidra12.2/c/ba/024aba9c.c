
/* WARNING: Removing unreachable block (ram,0x024abd54) */

void FUN_024aba9c(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  uint *puVar11;
  int iVar12;
  long lVar13;
  uint *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  float fVar17;
  undefined4 uVar18;
  undefined *local_78;
  uint local_70;
  uint local_6c;
  uint *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_28;
  uint local_24;
  
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar5 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar8 + 0x278) * 999.99994);
    iVar6 = (int)(*(float *)(lVar8 + 0x27c) * 4.0);
    if (0x7ffe < iVar6) {
      iVar6 = 0x7fff;
    }
    if (iVar6 < -0x7fff) {
      iVar6 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar6;
    fVar17 = *(float *)(lVar8 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar17 * 999.99994);
    uVar5 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar5;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar15 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar15 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar18 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar15 + 0x2ec) = uVar18;
    *(undefined1 *)((long)puVar15 + 0x2e5) = 1;
  }
  if (*(int *)(param_1 + 0x178) == 1) {
    local_60._4_4_ = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
    puVar15 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar15 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_60._0_4_ = (float)*(int *)(param_1 + 0x18e5) * 0.001;
    local_58 = CONCAT44(local_58._4_4_,(float)*(int *)(param_1 + 0x18eb) * 0.001);
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar15 + 0x4f,&local_60);
    if (*(int *)(param_1 + 0x178) == 0) {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,10);
      local_60._0_4_ = 1.4013e-44;
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_024abcf4;
    }
    iVar6 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
    plVar16 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar16 = *(long **)(param_1 + 0x4c8);
    }
    lVar8 = (**(code **)(*plVar16 + 0x148))();
    iVar3 = iVar6 - *(int *)(lVar8 + 4);
    if (0xb60b5e < iVar3 + 0x5b05afU) {
      iVar12 = (int)((float)iVar3 * 0.1666667);
      iVar3 = 0x10000000;
      if (iVar12 < 1) {
        iVar3 = -0x5b05b0;
      }
      iVar6 = -0x10000000;
      if (0 < iVar12) {
        iVar6 = 0x5b05b0;
      }
      iVar1 = iVar12;
      if (iVar3 <= iVar12) {
        iVar1 = iVar3;
      }
      if (iVar6 <= iVar12) {
        iVar6 = iVar1;
      }
      iVar6 = iVar6 + *(int *)(lVar8 + 4);
    }
    *(int *)(lVar8 + 4) = iVar6;
  }
LAB_024abcf4:
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  local_58 = 0;
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  if (puVar15[0x227] == 0) {
    local_28 = 0;
    goto LAB_024ac014;
  }
  local_28 = *(uint *)(puVar15 + 0x2d3) >> 1 & 1;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,0x26);
  uVar9 = FUN_03850a90(puVar15[0x227],0x26,&local_60,local_28);
  puVar4 = PTR_DAT_04bb43c0;
  if ((uVar9 & 1) == 0) goto LAB_024ac014;
  if (*(long *)(param_1 + 0x298) == 0) {
    puVar11 = (uint *)PTR_DAT_04bb37e0;
  }
  else {
    lVar8 = *(long *)(*(long *)(param_1 + 0x298) + 0x1480);
    puVar11 = (uint *)(lVar8 + ((ulong)*(uint *)(lVar8 + 0x10) & 1) * 0x20 + 0x14);
  }
  local_28 = *puVar11;
  local_24 = puVar11[1];
  if ((short)*puVar11 == -2) goto LAB_024ac014;
  local_78 = PTR_DAT_04bc0510 + 0x10;
  local_68 = (uint *)0x0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  local_70 = *puVar11;
  local_6c = local_24;
  uVar5 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar4 == 0) goto LAB_024ac014;
  lVar8 = *(long *)(lVar8 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
  if ((*(uint *)(lVar8 + 0x1d8) <= uVar5) ||
     (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_024ac014;
  lVar8 = *(long *)PTR_DAT_04bc0428;
  uVar5 = FUN_0277d6c4(&local_28);
  puVar4 = PTR_DAT_04bb27c0;
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
  if ((*(uint *)(lVar8 + 0x1d8) <= uVar5) ||
     (((puVar11 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8),
       puVar11 == (uint *)0x0 || (uVar5 = *puVar11, local_68 = puVar11, uVar5 == 0)) ||
      (puVar11 == (uint *)(ulong)uVar5)))) goto LAB_024ac014;
  puVar14 = (uint *)((long)puVar11 - (long)(ulong)uVar5);
  if (((*puVar14 == 0) || (uVar5 = puVar14[1], uVar5 == 0)) || ((ulong)(ushort)puVar14[2] == 0))
  goto LAB_024ac014;
  lVar8 = 0xc;
  if (*(char *)((long)puVar14 + 10) != '\0') {
    lVar8 = 0x1c;
  }
  lVar8 = (long)puVar14 + lVar8 + (ulong)(ushort)puVar14[2] * 8;
  if (lVar8 == 0) goto LAB_024ac014;
  uVar2 = 0;
  if ((ulong)uVar5 != 0) {
    uVar2 = (uint)((ulong)((long)puVar11 - lVar8) / (ulong)uVar5);
  }
  if (*puVar14 <= uVar2) {
    uVar2 = 0xffffffff;
  }
  if (((*(uint *)PTR_DAT_04bc00c8 <= uVar2) ||
      (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2) != 0x2f)) ||
     (lVar8 = *(long *)PTR_DAT_04bb27c0, lVar8 == 0)) goto LAB_024ac014;
  lVar13 = *(long *)(*(long *)(param_1 + 0x60) + 0x1480);
  uVar5 = *(uint *)(lVar13 + ((ulong)*(uint *)(lVar13 + 0x10) & 1) * 0x20 + 0x28);
  if ((((uVar5 == 0) ||
       (plVar16 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar5 >> 0x11) & 0x7ff8)), plVar16 == (long *)0x0)) ||
      ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar16 + 0x46) != uVar5)) {
    plVar16 = (long *)0x0;
  }
  if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
    plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar4;
    iVar6 = (**(code **)(*plVar10 + 0x60))();
    if (iVar6 < 0x11) {
      uVar5 = 1;
    }
    else {
      if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_024abfb4;
      uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_024abfb4:
    uVar5 = 0;
  }
  if (plVar16 != (long *)0x0) {
    lVar8 = plVar16[0x2a];
    uVar2 = *(uint *)(plVar16 + 0x49);
    if (((*PTR_DAT_04bbe2b8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bbe2b8), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bbe2b0 = PTR_DAT_04bbe250 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe2b8);
    }
    uVar7 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bbe2b0);
    if ((((uVar7 & uVar5) == 1) && ((int)lVar8 == 1)) && ((uVar2 >> 4 & 1) != 0)) {
      *(undefined4 *)(plVar16 + 0x75) = 0x40a00000;
    }
  }
LAB_024ac014:
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  if (puVar15[0x227] == 0) {
    uVar5 = 0;
  }
  else {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    uVar5 = *(uint *)(puVar15 + 0x2d3) >> 1 & 1;
  }
  uVar9 = FUN_0170a6d0(puVar15,uVar5);
  if ((uVar9 & 1) != 0) {
    if (*(int *)(param_1 + 0x178) == 0) {
      uVar9 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
      if ((uVar9 & 1) == 0) {
        local_70 = 0;
        local_78 = (undefined *)CONCAT35(local_78._5_3_,0x100000006);
        FUN_02374e74(param_1,&local_78);
      }
    }
    else {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
      FUN_023164ec(param_1,6);
    }
  }
  return;
}

