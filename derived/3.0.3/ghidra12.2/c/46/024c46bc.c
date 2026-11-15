
void FUN_024c46bc(long param_1)

{
  byte *pbVar1;
  uint *puVar2;
  short sVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte bVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  char *pcVar13;
  float fVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  undefined8 local_c0;
  float local_b8;
  float local_b4;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  float fStack_a4;
  float local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined4 local_8a;
  undefined8 local_80;
  float local_78;
  float fStack_74;
  float local_70;
  float local_6c;
  float fStack_68;
  float local_64;
  undefined4 local_38;
  undefined4 local_34;
  
  fStack_68 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  fStack_74 = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
  local_80 = 0xfffe;
  local_6c = (float)*(int *)(param_1 + 0x1900) * 0.001;
  local_64 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  local_78 = (float)*(int *)(param_1 + 0x190a) * 0.001;
  local_70 = (float)*(int *)(param_1 + 0x1910) * 0.001;
  FUN_0277d4ac(&local_80);
  puVar4 = PTR_DAT_04bb43c0;
  local_80 = *(undefined8 *)(param_1 + 0x1918);
  if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
    pcVar13 = PTR_DAT_04bc30f8 + (ulong)*(byte *)(param_1 + 0x1ee8) * 0x18 + 8;
  }
  else {
    pcVar13 = (char *)&DAT_054967ac;
    DAT_054967ac = 0;
  }
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar4 == 0) {
LAB_024c47f4:
    lVar11 = *(long *)PTR_DAT_04bbbc68;
    if (((lVar11 != 0) &&
        ((((*(long *)(lVar11 + 0xb0) != 0 && (*(long *)(*(long *)(lVar11 + 0xb0) + 8) != 0)) &&
          (*(long *)(lVar11 + 0x488) != 0)) &&
         ((*(long *)(*(long *)(lVar11 + 0x488) + 8) != 0 && (*(long *)(lVar11 + 0x2b0) != 0)))))) &&
       (*(long *)(*(long *)(lVar11 + 0x2b0) + 8) != 0)) {
      uVar6 = FUN_0277d6c4(&local_80);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) goto LAB_024c47e0;
    }
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_024c47f4;
LAB_024c47e0:
    FUN_023265c0(&local_c0,param_1,1);
  }
  FUN_0257d568(0x4120cccd,param_1 + 0x6f8,&local_6c,&local_78);
  puVar12 = *(undefined8 **)(param_1 + 0x60);
  if (puVar12 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar15 = __cxa_guard_acquire(&DAT_052461c0);
      puVar12 = &DAT_05240280;
      if (iVar15 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar12 = &DAT_05240280;
    }
  }
  *(undefined1 *)((long)puVar12 + 0x12b5) = 0;
  iVar15 = (int)local_6c;
  *(undefined4 *)(puVar12 + 0x255) = *(undefined4 *)((long)puVar12 + 0x12ac);
  bVar5 = local_6c < 0.0;
  fVar16 = (float)(int)local_64 / 5.0;
  fVar14 = (float)(int)((int)fVar16 - (uint)(local_64 < 0.0) & 0xfffffffe) * 5.0;
  fVar17 = fVar14 + 5.0;
  local_c0._4_4_ = (float)FUN_016e026c(0,&local_6c,0,0);
  local_c0._0_4_ = (float)(int)((int)((float)iVar15 / 5.0) - (uint)bVar5 & 0xfffffffe) * 5.0 + 5.0;
  local_b8 = fVar17;
  FUN_0231ece4(param_1,&local_78,&local_c0);
  puVar4 = PTR_DAT_04bb2020;
  if (*pcVar13 == '\0') {
    FUN_0232ba00(param_1);
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar15 = __cxa_guard_acquire(&DAT_052461c0);
        puVar12 = &DAT_05240280;
        if (iVar15 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    local_b8 = 1.6085714e-36;
  }
  else {
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar15 = __cxa_guard_acquire(&DAT_052461c0);
        puVar12 = &DAT_05240280;
        if (iVar15 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    local_b8 = 1.6004712e-36;
  }
  local_c0 = puVar4 + 0x10;
  local_b4 = 0.0;
  FUN_017081d0(puVar12,&local_c0,6,0,0);
  FUN_016dec40(param_1,&local_6c,0,0,0,0,0);
  local_c0._0_4_ = 2.8026e-45;
  *(uint *)(param_1 + 0x718) = *(uint *)(param_1 + 0x718) | 4;
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  if (*(int *)(param_1 + 0x178) != 0) goto LAB_024c4bac;
  local_c0._0_4_ = 9.18327e-41;
  local_c0._4_4_ = 0.0;
  FUN_0277d4ac(&local_c0);
  local_c0._0_4_ = (float)*(undefined8 *)(param_1 + 0x1918);
  local_c0._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x1918) >> 0x20);
  local_38 = 1;
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
LAB_024c4aa0:
    bVar9 = *pbVar1;
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    local_34 = CONCAT31(local_34._1_3_,bVar9);
    FUN_02669430(&local_34);
    uVar7 = FUN_025579bc(pbVar1,&local_c0,&local_38);
    uVar6 = *(uint *)(param_1 + 0x17cc);
    if ((uVar7 & 1) == 0) goto LAB_024c4adc;
    uVar6 = uVar6 | 0x40;
  }
  else {
    local_34 = 0x15;
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x15 & 1) == 0) goto LAB_024c4aa0;
    uVar6 = *(uint *)(param_1 + 0x17cc);
LAB_024c4adc:
    uVar6 = uVar6 & 0xffffffbf;
  }
  *(uint *)(param_1 + 0x17cc) = uVar6;
  if (*(int *)(param_1 + 0x178) == 0) {
    if ((*(uint *)(param_1 + 0x1da8) & 0xfffffffd) == 4) {
      puVar12 = *(undefined8 **)(param_1 + 0x1dc0);
      *(undefined4 *)(param_1 + 0x1da8) = 0;
      *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffffd;
      if (puVar12 != &DAT_0407ebb1) {
        iVar15 = 0;
        if (*(int *)(param_1 + 0x1dc8) < 1) {
          iVar15 = *(int *)(param_1 + 0x1dc8) + -1;
        }
        memset(puVar12,0,(long)iVar15);
        *(undefined1 *)((long)puVar12 + (long)iVar15) = 0;
      }
      puVar12 = *(undefined8 **)(param_1 + 0x1e18);
      if (puVar12 != &DAT_0407ebb1) {
        iVar15 = 0;
        if (*(int *)(param_1 + 0x1e20) < 1) {
          iVar15 = *(int *)(param_1 + 0x1e20) + -1;
        }
        memset(puVar12,0,(long)iVar15);
        *(undefined1 *)((long)puVar12 + (long)iVar15) = 0;
      }
      *(undefined8 *)(param_1 + 0x1e68) = 0;
      *(undefined8 *)(param_1 + 0x1e78) = 0;
      *(undefined2 *)(param_1 + 0x1e70) = 0xff;
      uVar6 = *(uint *)(param_1 + 0x17cc);
    }
    uVar10 = *(uint *)(param_1 + 0x17d0) & 0xfffffffb;
  }
  else {
    uVar10 = *(uint *)(param_1 + 0x17d0);
  }
  *(uint *)(param_1 + 0x17d0) = uVar10 & 0xff800000 | uVar10 & 0x3fffff | (uVar6 >> 6 & 1) << 0x16;
LAB_024c4bac:
  if (pcVar13[1] != '\0') {
    uVar8 = FUN_0251e98c(1);
    local_a8 = FUN_02366a5c(uVar8,&local_80);
    lVar11 = *(long *)(param_1 + 0x68);
    local_90 = 0x3f800000;
    local_8b = 1;
    local_ac = 0;
    local_8a = 0x1000000;
    local_98 = *(undefined4 *)(lVar11 + 0x27c);
    uStack_94 = *(undefined4 *)(lVar11 + 0x280);
    local_b8 = 4.2039e-45;
    local_b4 = 0.0;
    local_b0 = local_b0 & 0xffffff00;
    local_8c = 1;
    uStack_9c = *(undefined4 *)(lVar11 + 0x278);
    local_c0._0_4_ = (float)(undefined4)local_80;
    local_c0._4_4_ = (float)local_80._4_4_;
    fStack_a4 = fVar14;
    local_a0 = fVar16;
    FUN_0236b830(param_1,&local_c0);
    *(uint *)(param_1 + 0x718) = *(uint *)(param_1 + 0x718) & 0xfffffffb;
    local_34 = 3;
    *(uint *)(param_1 + 0x718) = *(uint *)(param_1 + 0x718) | 8;
    *(undefined4 *)(param_1 + 0x1bf8) = 3;
  }
  bVar9 = *pbVar1;
  *(undefined2 *)(param_1 + 0x3a4) = 0x100;
  *(undefined4 *)(param_1 + 0x3a0) = 6;
  *(undefined8 *)(param_1 + 0x398) = 0;
  local_b4 = local_64;
  local_c0._4_4_ = local_6c;
  local_b8 = fStack_68;
  *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffcffff;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  local_c0._0_4_ = (float)CONCAT31(local_c0._1_3_,bVar9);
  local_b0 = 0x3e99999a;
  local_ac = CONCAT31(local_ac._1_3_,1);
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),&local_c0,*(undefined4 *)(param_1 + 0x230),1);
  return;
}

