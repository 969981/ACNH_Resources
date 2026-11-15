
void FUN_023e587c(long param_1)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined4 *puVar8;
  float *pfVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  if ((*(byte *)(param_1 + 0x17cf) >> 6 & 1) != 0) {
    uVar17 = *(undefined4 *)(param_1 + 0x191d);
    uVar18 = *(undefined4 *)(param_1 + 0x1923);
    lVar7 = FUN_0251e98c(1);
    puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar7 + 0x1380) + 0xf0))(lVar7 + 0x1380);
    local_58 = 0;
    puVar10 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_80 = (undefined *)(puVar10[0x4f] & 0xffffffff);
    local_78 = (char *)CONCAT44(local_78._4_4_,*(undefined4 *)(puVar10 + 0x50));
    local_5c = uVar17;
    local_54 = uVar18;
    fVar16 = (float)FUN_03eb4b60(*puVar8,0x41200000,0x3e4ccccc,&local_80,&local_5c);
    *(undefined4 *)(puVar10 + 0x4f) = (undefined4)local_80;
    *(undefined4 *)(puVar10 + 0x50) = (undefined4)local_78;
    uVar3 = *(ushort *)(param_1 + 0x18ef);
    lVar7 = FUN_0251e98c(1);
    pfVar9 = (float *)(**(code **)(*(long *)(lVar7 + 0x13b0) + 0xf0))(lVar7 + 0x13b0);
    fVar19 = *pfVar9;
    if (*(int *)(param_1 + 0x178) == 0) {
      local_5c = 10;
      local_80 = (undefined *)CONCAT44(local_80._4_4_,10);
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_023e59c8;
      bVar5 = true;
    }
    else {
LAB_023e59c8:
      iVar6 = (uint)uVar3 * 0x10000;
      plVar11 = &DAT_054e9a58;
      if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
        plVar11 = *(long **)(param_1 + 0x4c8);
      }
      lVar7 = (**(code **)(*plVar11 + 0x148))();
      iVar14 = iVar6 - *(int *)(lVar7 + 4);
      if (iVar14 + 0x5b05afU < 0xb60b5f) {
        bVar5 = true;
        iVar15 = iVar6;
      }
      else {
        iVar4 = 0x15555560;
        iVar15 = -0x15555560;
        iVar14 = (int)(fVar19 * (float)iVar14);
        if (iVar14 < 1) {
          iVar4 = -0x5b05b0;
        }
        else {
          iVar15 = 0x5b05b0;
        }
        iVar2 = iVar14;
        if (iVar4 <= iVar14) {
          iVar2 = iVar4;
        }
        if (iVar15 <= iVar14) {
          iVar15 = iVar2;
        }
        iVar15 = iVar15 + *(int *)(lVar7 + 4);
        bVar5 = iVar15 == iVar6;
      }
      *(int *)(lVar7 + 4) = iVar15;
    }
    bVar1 = false;
    if (fVar16 == 0.0) {
      bVar1 = bVar5;
    }
    if ((!bVar1) && (*(uint *)(param_1 + 0x1c04) < 0x15)) {
      return;
    }
    puVar10 = *(undefined8 **)(param_1 + 0x60);
    if (puVar10 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_052461c0);
        if (iVar6 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
        puVar10 = &DAT_05240280;
      }
      else {
        puVar10 = &DAT_05240280;
      }
    }
    local_80 = PTR_DAT_04bb2020 + 0x10;
    local_78 = "FtrPull";
    FUN_017029bc(puVar10,&local_80,6,0,0);
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xbfffffff;
  }
  if (*(int *)(param_1 + 0xb90) == 0) {
    puVar10 = *(undefined8 **)(param_1 + 0x60);
    local_70 = 0;
    local_68 = (long *)0x0;
    local_80 = (undefined *)0x0;
    local_78 = (char *)0x0;
    if (puVar10 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_052461c0);
        if (iVar6 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
        puVar10 = &DAT_05240280;
      }
      else {
        puVar10 = &DAT_05240280;
      }
    }
    local_5c = 0;
    if ((puVar10[0x227] != 0) &&
       (uVar12 = FUN_03850a90(puVar10[0x227],0,&local_80,0), (uVar12 & 1) != 0)) {
      if ((local_68 == (long *)0x0) || (lVar7 = *local_68, lVar7 == 0)) {
        uVar13 = 1;
      }
      else {
        fVar16 = *(float *)(lVar7 + 0x18);
        if (fVar16 < 0.0) {
          fVar16 = *(float *)(local_68[1] + 0xc);
        }
        uVar13 = (uint)(fVar16 - *(float *)(lVar7 + 0x14));
        if (uVar13 < 2) {
          uVar13 = 1;
        }
      }
      *(uint *)(param_1 + 0xb90) = uVar13;
      fVar19 = *(float *)(param_1 + 0x1931) - *(float *)(param_1 + 0x1927);
      fVar16 = *(float *)(param_1 + 0x1937) - *(float *)(param_1 + 0x192d);
      if ((((fVar19 < -1.1920929e-07) || (1.1920929e-07 < fVar19)) || (fVar16 < -1.1920929e-07)) ||
         (1.1920929e-07 < fVar16)) {
        *(float *)(param_1 + 0xb94) = fVar19;
        *(undefined4 *)(param_1 + 0xb98) = 0;
        *(byte *)(param_1 + 0xb84) = (byte)(uVar13 >> 0x1f);
        *(float *)(param_1 + 0xb9c) = fVar16;
        *(undefined4 *)(param_1 + 0xb78) = 0;
        *(uint *)(param_1 + 0xb7c) = uVar13 & (int)uVar13 >> 0x1f;
        *(uint *)(param_1 + 0xb80) = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
        *(undefined1 *)(param_1 + 0xb85) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0xb85) = 0;
        *(undefined4 *)(param_1 + 0xb78) = *(undefined4 *)(param_1 + 0xb7c);
        *(undefined8 *)(param_1 + 0xb90) = 0;
        *(undefined8 *)(param_1 + 0xb98) = 0;
      }
    }
  }
  if (*(char *)(param_1 + 0xb85) != '\0') {
    if (*(int *)(param_1 + 0xb78) < *(int *)(param_1 + 0xb80)) {
      plVar11 = *(long **)(param_1 + 0x68);
      fVar16 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xb90));
      fVar16 = 1.0 / fVar16;
      local_80 = (undefined *)
                 CONCAT44(fVar16 * 0.0 + *(float *)((long)plVar11 + 0x27c),
                          *(float *)(plVar11 + 0x4f) + *(float *)(param_1 + 0xb94) * fVar16);
      local_78 = (char *)CONCAT44(local_78._4_4_,
                                  *(float *)(param_1 + 0xb9c) * fVar16 + *(float *)(plVar11 + 0x50))
      ;
      (**(code **)(*plVar11 + 0x100))(plVar11,&local_80);
      uVar17 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
      lVar7 = (**(code **)(**(long **)(param_1 + 0x68) + 0xf8))();
      *(undefined4 *)(lVar7 + 4) = uVar17;
      if (*(char *)(param_1 + 0xb85) == '\0') goto LAB_023e5ba0;
    }
    uVar17 = (**(code **)(*(long *)(param_1 + 0xb70) + (ulong)*(byte *)(param_1 + 0xb84) * 8))
                       (param_1 + 0xb70);
    *(undefined4 *)(param_1 + 0xb78) = uVar17;
  }
LAB_023e5ba0:
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar10 = &DAT_05240280;
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  uVar12 = FUN_0170a6d0(puVar10,0);
  if (((uVar12 & 1) != 0) && (*(int *)(param_1 + 0x178) == 0)) {
    local_80._0_4_ = *(undefined4 *)(param_1 + 0x1931);
    local_80._4_4_ = (float)(int)*(short *)(param_1 + 0x1935) * 0.25;
    local_78._0_4_ = *(undefined4 *)(param_1 + 0x1937);
    (**(code **)(**(long **)(param_1 + 0x68) + 0x100))(*(long **)(param_1 + 0x68),&local_80);
    uVar17 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    lVar7 = (**(code **)(**(long **)(param_1 + 0x68) + 0xf8))();
    *(undefined4 *)(lVar7 + 4) = uVar17;
    if ((*(char *)(param_1 + 0x17ac) == '\0') &&
       (local_80._0_4_ = 0, (*(uint *)(param_1 + 0xec8) & 1) != 0)) {
      FUN_023e19a8(param_1,*(long *)(param_1 + 0x68) + 0x278,*(long *)(param_1 + 0x68) + 0x2b4);
    }
    else {
      uVar12 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
      if ((uVar12 & 1) == 0) {
        local_78 = (char *)((ulong)local_78._4_4_ << 0x20);
        local_80 = (undefined *)CONCAT35(local_80._5_3_,0x100000006);
        FUN_02374e74(param_1,&local_80);
      }
    }
  }
  return;
}

