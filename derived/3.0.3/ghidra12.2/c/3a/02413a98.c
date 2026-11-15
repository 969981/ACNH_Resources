
void FUN_02413a98(long param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  int iVar3;
  byte *pbVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  float *pfVar11;
  undefined4 *puVar12;
  long lVar13;
  byte bVar14;
  byte bVar15;
  undefined1 uVar16;
  uint uVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_80;
  char *local_78;
  undefined1 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  float local_5c [3];
  
  if (((*(byte *)(param_1 + 0x17d7) >> 1 & 1) != 0) && (*(int *)(param_1 + 0x178) == 0)) {
    pbVar1 = (byte *)(param_1 + 0x1ee8);
    lVar13 = *(long *)PTR_DAT_04bb39b0;
    if ((lVar13 != 0) && (*(int *)(lVar13 + 0x15c) != 0)) {
      pbVar4 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar13 + 0x15c) != 0) {
        pbVar4 = (byte *)(lVar13 + 0x158);
      }
      bVar15 = *pbVar1;
      bVar14 = *pbVar4;
      if (7 < bVar14) {
        bVar14 = 0xff;
      }
      if (7 < bVar15) {
        bVar15 = 0xff;
      }
      if (bVar14 != bVar15) goto LAB_02413c3c;
    }
    iVar7 = FUN_00a74b78(pbVar1);
    local_80 = (undefined *)CONCAT44(local_80._4_4_,iVar7);
    if (iVar7 != 4) {
      iVar7 = FUN_00a74b78(pbVar1);
      puVar2 = PTR_DAT_04bb6270;
      local_80 = (undefined *)CONCAT44(local_80._4_4_,iVar7);
      if ((((iVar7 == 0x13) && (*(long *)PTR_DAT_04bb6270 != 0)) &&
          (uVar8 = FUN_00a738a0(pbVar1,0), (uVar8 & 1) == 0)) &&
         (((uVar8 = FUN_02553884(6,pbVar1,0,1), (uVar8 & 1) != 0 &&
           (uVar8 = FUN_0255403c(6,pbVar1,0), (uVar8 & 1) != 0)) &&
          (uVar8 = FUN_00a71bb8(*(undefined8 *)puVar2,pbVar1,0xffffffffffffffff,4), (uVar8 & 1) != 0
          )))) {
        *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) & 0xfdffffff;
        if (*(int *)(PTR_DAT_04bc3a78 + 0x38) != 0x41c7d05) {
          return;
        }
        puVar2 = PTR_DAT_04bb2020 + 0x10;
        local_78 = "WHEREAREN_ResortPlannerFromNPC";
        local_80 = puVar2;
        uVar9 = FUN_02753180(pbVar1,&local_80);
        if ((int)uVar9 == 0) {
          return;
        }
        local_78 = "ResortPlannerCancel";
        local_80 = puVar2;
        iVar7 = FUN_02757a80(uVar9,&local_80);
        if (iVar7 == 0) {
          return;
        }
        FUN_00a77c2c(pbVar1);
        return;
      }
    }
  }
LAB_02413c3c:
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar17 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar13 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar13 + 0x278) * 999.99994);
    iVar7 = (int)(*(float *)(lVar13 + 0x27c) * 4.0);
    if (0x7ffe < iVar7) {
      iVar7 = 0x7fff;
    }
    if (iVar7 < -0x7fff) {
      iVar7 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar7;
    fVar22 = *(float *)(lVar13 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar22 * 999.99994);
    uVar17 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar17;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar19 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar19 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar20 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar19 + 0x2ec) = uVar20;
    *(undefined1 *)((long)puVar19 + 0x2e5) = 1;
  }
  pbVar1 = (byte *)(param_1 + 0x18f4);
  local_5c[0] = 1.4013e-45;
  local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
  if ((*pbVar1 >> 1 & 1) == 0) {
    local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
    FUN_0244d1b8(0x3f800000,param_1);
    puVar19 = *(undefined8 **)(param_1 + 0x60);
    if (puVar19 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_052461c0);
        puVar19 = &DAT_05240280;
        if (iVar7 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar19 = &DAT_05240280;
      }
    }
    local_80 = (undefined *)CONCAT35(local_80._5_3_,0x100000006);
    local_70 = 1;
    local_62 = 0;
    local_6c = *(undefined2 *)PTR_DAT_04bb37e0;
    local_6a = PTR_DAT_04bb37e0[2];
    local_64 = 0x101;
    local_69 = PTR_DAT_04bb37e0[3];
    local_68 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_78 = *(char **)PTR_DAT_04bb37e0;
    FUN_0170f380(puVar19,&local_80);
  }
  local_5c[0] = 4.2039e-45;
  local_80._0_4_ = 4.2039e-45;
  if (((*pbVar1 >> 3 & 1) == 0) || (*(char *)(param_1 + 0x1902) != '\0')) {
    local_80._0_4_ = 4.2039e-45;
    iVar7 = *(int *)(param_1 + 0x178);
  }
  else {
    FUN_0231b68c(param_1,6);
    iVar7 = *(int *)(param_1 + 0x178);
  }
  if (iVar7 != 0) {
    puVar19 = *(undefined8 **)(param_1 + 0x60);
    if (puVar19 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_052461c0);
        puVar19 = &DAT_05240280;
        if (iVar7 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar19 = &DAT_05240280;
      }
    }
    if (((puVar19[0x227] != 0) && (lVar13 = *(long *)(puVar19[0x227] + 0x78), lVar13 != 0)) &&
       (plVar10 = *(long **)(lVar13 + 0x48), plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x28))(plVar10,&DAT_054bd650,0);
    }
    uVar5 = *(ushort *)(param_1 + 0x18ef);
    lVar13 = FUN_0251e98c(1);
    pfVar11 = (float *)(**(code **)(*(long *)(lVar13 + 0x13b0) + 0xf0))(lVar13 + 0x13b0);
    fVar22 = *pfVar11;
    if (*(int *)(param_1 + 0x178) == 0) {
      local_5c[0] = 1.4013e-44;
      local_80._0_4_ = 1.4013e-44;
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_02413f9c;
    }
    iVar7 = (uint)uVar5 * 0x10000;
    plVar10 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar10 = *(long **)(param_1 + 0x4c8);
    }
    lVar13 = (**(code **)(*plVar10 + 0x148))();
    iVar18 = iVar7 - *(int *)(lVar13 + 4);
    if (0xb60b5e < iVar18 + 0x5b05afU) {
      iVar6 = 0x15555560;
      iVar7 = -0x15555560;
      iVar18 = (int)(fVar22 * (float)iVar18);
      if (iVar18 < 1) {
        iVar6 = -0x5b05b0;
      }
      else {
        iVar7 = 0x5b05b0;
      }
      iVar3 = iVar18;
      if (iVar6 <= iVar18) {
        iVar3 = iVar6;
      }
      if (iVar7 <= iVar18) {
        iVar7 = iVar3;
      }
      iVar7 = iVar7 + *(int *)(lVar13 + 4);
    }
    *(int *)(lVar13 + 4) = iVar7;
LAB_02413f9c:
    local_5c[0] = 1.54143e-44;
    if ((*(byte *)(param_1 + 0x18f5) >> 3 & 1) == 0) {
      local_80 = (undefined *)CONCAT44(local_80._4_4_,0xb);
      iVar7 = *(int *)(param_1 + 0x18e5);
      iVar18 = *(int *)(param_1 + 0x18eb);
      lVar13 = FUN_0251e98c(1);
      puVar12 = (undefined4 *)(**(code **)(*(long *)(lVar13 + 0x1380) + 0xf0))(lVar13 + 0x1380);
      local_5c[1] = 0.0;
      puVar19 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar19 = *(undefined8 **)(param_1 + 0x4c8);
      }
      local_80 = (undefined *)(puVar19[0x4f] & 0xffffffff);
      local_78 = (char *)CONCAT44(local_78._4_4_,*(undefined4 *)(puVar19 + 0x50));
      local_5c[0] = (float)iVar7 * 0.001;
      local_5c[2] = (float)iVar18 * 0.001;
      FUN_03eb4b60(*puVar12,0x41200000,0x3e4ccccc,&local_80,local_5c);
      *(float *)(puVar19 + 0x4f) = (float)local_80;
      *(undefined4 *)(puVar19 + 0x50) = local_78._0_4_;
    }
    return;
  }
  lVar13 = *(long *)PTR_DAT_04bb2230;
  if (*(char *)(lVar13 + 0x270) != '\0') {
    uVar16 = 1;
    if (*(char *)(param_1 + 0x8a0) != '\0') {
      *(undefined1 *)(param_1 + 0x8ac) = 1;
      uVar16 = *(undefined1 *)(lVar13 + 0x270);
    }
    *(undefined1 *)(param_1 + 0x8a0) = uVar16;
    *(undefined4 *)(param_1 + 0x8a4) = *(undefined4 *)(lVar13 + 0x274);
    *(undefined4 *)(param_1 + 0x8a8) = *(undefined4 *)(lVar13 + 0x278);
  }
  if (*(char *)(param_1 + 0x8ac) == '\0') {
    puVar19 = *(undefined8 **)(param_1 + 0x60);
    if (puVar19 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_052461c0);
        puVar19 = &DAT_05240280;
        if (iVar7 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar19 = &DAT_05240280;
      }
    }
    if (puVar19[0x227] == 0) {
      return;
    }
    lVar13 = *(long *)(puVar19[0x227] + 0x78);
    if (lVar13 == 0) {
      return;
    }
    plVar10 = *(long **)(lVar13 + 0x48);
    if (plVar10 == (long *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x024141ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar10 + 0x28))(plVar10,&DAT_054bd650,0);
    return;
  }
  fVar22 = 0.0;
  if (*(long *)PTR_DAT_04bb2200 == 0) {
    fVar23 = 0.0;
    puVar19 = *(undefined8 **)(param_1 + 0x60);
    fVar22 = 0.0;
  }
  else {
    uVar8 = FUN_01664334(*(long *)PTR_DAT_04bb2200,&local_80,*(long *)(param_1 + 0x68) + 0x278,0);
    fVar23 = 0.0;
    if ((uVar8 & 1) != 0) {
      fVar22 = *(float *)(param_1 + 0x8a4) - (float)local_80;
      fVar23 = *(float *)(param_1 + 0x8a8) - local_80._4_4_;
    }
    puVar19 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar19 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar19 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar19 = &DAT_05240280;
    }
  }
  if (((puVar19[0x227] != 0) && (lVar13 = *(long *)(puVar19[0x227] + 0x78), lVar13 != 0)) &&
     (plVar10 = *(long **)(lVar13 + 0x48), plVar10 != (long *)0x0)) {
    (**(code **)(*plVar10 + 0x28))(plVar10,&DAT_054bd650,1);
  }
  puVar19 = *(undefined8 **)(param_1 + 0x60);
  if (puVar19 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar19 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar19 = &DAT_05240280;
    }
  }
  local_80 = PTR_DAT_04bb2020 + 0x10;
  local_78 = "BodyToCamera";
  if (((puVar19[0x227] == 0) || (lVar13 = *(long *)(puVar19[0x227] + 0x78), lVar13 == 0)) ||
     (plVar10 = *(long **)(lVar13 + 0x48), plVar10 == (long *)0x0)) {
    fVar21 = -fVar22;
    puVar19 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    iVar7 = (**(code **)(*plVar10 + 0xf8))(plVar10,&local_80);
    fVar21 = -fVar22;
    if (iVar7 != 0) {
      fVar21 = fVar22;
    }
    puVar19 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar19 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(fVar21,&DAT_052461c0);
      lVar13 = DAT_052413b8;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        lVar13 = DAT_052413b8;
      }
      goto joined_r0x024142a4;
    }
    puVar19 = &DAT_05240280;
  }
  lVar13 = puVar19[0x227];
joined_r0x024142a4:
  if (((lVar13 != 0) && (*(long *)(lVar13 + 0x78) != 0)) &&
     (plVar10 = *(long **)(*(long *)(lVar13 + 0x78) + 0x48), plVar10 != (long *)0x0)) {
    (**(code **)(*plVar10 + 0x30))(fVar21,plVar10,&DAT_054bd660);
  }
  puVar19 = *(undefined8 **)(param_1 + 0x60);
  if (puVar19 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar19 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar19 = &DAT_05240280;
    }
  }
  if (((puVar19[0x227] != 0) && (lVar13 = *(long *)(puVar19[0x227] + 0x78), lVar13 != 0)) &&
     (plVar10 = *(long **)(lVar13 + 0x48), plVar10 != (long *)0x0)) {
    (**(code **)(*plVar10 + 0x30))(fVar23,plVar10,&DAT_054bd670);
  }
  local_5c[0] = 4.2039e-45;
  local_80 = (undefined *)CONCAT44(local_80._4_4_,3);
  if ((*pbVar1 >> 3 & 1) == 0) {
    return;
  }
  FUN_0231b68c(param_1,*(undefined1 *)(param_1 + 0x1901));
  return;
}

