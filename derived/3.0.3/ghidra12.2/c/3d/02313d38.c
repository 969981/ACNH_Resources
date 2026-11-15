
void FUN_02313d38(long param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  uint *puVar9;
  float *pfVar10;
  long lVar11;
  uint *puVar12;
  byte bVar13;
  undefined8 *puVar14;
  long *plVar15;
  bool bVar16;
  ushort uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined *local_90;
  int local_88;
  int iStack_84;
  undefined8 local_80;
  float local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_60;
  float local_58;
  undefined *local_50;
  float local_48;
  
  if ((*(long *)(param_1 + 0xa0) == 0) || ((*(byte *)(*(long *)(param_1 + 0xa0) + 0x178) & 1) == 0))
  goto LAB_02313e0c;
  if ((*(byte *)(param_1 + 0x17cd) & 1) == 0) {
    uVar6 = FUN_0231910c(param_1);
    local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar6);
    if (7 < uVar6) goto LAB_02313e04;
    uVar5 = 1 << (ulong)(uVar6 & 0x1f);
    if ((uVar5 & 0xe2) == 0) {
      if (((uVar5 & 0x18) != 0) || (uVar6 != 2)) goto LAB_02313e04;
      if (0.0 < *(float *)(param_1 + 0x1828)) {
        puVar14 = &DAT_054e9a58;
        if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
          puVar14 = *(undefined8 **)(param_1 + 0x4c8);
        }
        *(float *)((long)puVar14 + 0x27c) =
             *(float *)(param_1 + 0x1828) + *(float *)(puVar14 + 0x51);
      }
    }
    else {
      puVar14 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar14 = *(undefined8 **)(param_1 + 0x4c8);
      }
      *(undefined4 *)((long)puVar14 + 0x27c) = *(undefined4 *)(param_1 + 0x1bfc);
      FUN_0231910c(param_1);
    }
  }
  else {
LAB_02313e04:
    FUN_0231d944(param_1);
  }
LAB_02313e0c:
  if ((*(long *)(param_1 + 0x298) != 0) && (*(char *)(*(long *)(param_1 + 0x298) + 0xc207) != '\0'))
  {
    puVar14 = *(undefined8 **)(param_1 + 0x60);
    if (puVar14 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_052461c0);
        puVar14 = &DAT_05240280;
        if (iVar7 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar14 = &DAT_05240280;
      }
    }
    FUN_016ff8c0(puVar14,1,&local_80);
    puVar14 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar14 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar18 = FUN_016e026c(0,&local_80,0,0);
    *(undefined4 *)((long)puVar14 + 0x27c) = uVar18;
  }
  if ((((*(long *)(param_1 + 0xa0) == 0) || (*(char *)(*(long *)(param_1 + 0xa0) + 0x5074) == '\0'))
      || (*(int *)(param_1 + 0x178) != 0)) || ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) != 1))
  goto LAB_02314944;
  plVar15 = *(long **)(param_1 + 0x60);
  if (plVar15 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      plVar15 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar15 = &DAT_05240280;
    }
  }
  uVar8 = (**(code **)(*plVar15 + 0x100))(plVar15);
  if ((uVar8 & 1) == 0) {
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_054f0960);
        puVar14 = &DAT_054f0958;
        if (iVar7 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar14 = &DAT_054f0958;
      }
    }
    else {
      puVar14 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
      if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
        puVar14 = puVar14 + *(byte *)(param_1 + 0x1ee8);
      }
    }
    local_80 = (undefined *)CONCAT44(local_80._4_4_,0x2f);
    if ((*(uint *)((long)puVar14 + 4) >> 0xf & 1) == 0) goto LAB_02314944;
  }
  local_80 = (undefined *)CONCAT44(local_80._4_4_,4);
  uVar6 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar5 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
    uVar6 = 0;
    if (uVar5 < 0x149) {
      uVar6 = uVar5;
    }
  }
  local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar6);
  if (uVar6 == 4) goto LAB_02314944;
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 == -1) {
    uVar6 = 0;
  }
  else {
    local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
    puVar9 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar9 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar6 = *puVar9 >> 1 & 1;
  }
  puVar9 = (uint *)FUN_02374304(param_1);
  uVar5 = *puVar9;
  uVar17 = 0;
  if ((uVar5 != 0) && (puVar9 != (uint *)(ulong)uVar5)) {
    puVar12 = (uint *)((long)puVar9 - (long)(ulong)uVar5);
    if ((*puVar12 != 0) && ((uVar5 = puVar12[1], uVar5 != 0 && ((ulong)(ushort)puVar12[2] != 0)))) {
      lVar11 = 0xc;
      if (*(char *)((long)puVar12 + 10) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar12 + lVar11 + (ulong)(ushort)puVar12[2] * 8;
      if (lVar11 != 0) {
        uVar3 = 0;
        if ((ulong)uVar5 != 0) {
          uVar3 = (uint)((ulong)((long)puVar9 - lVar11) / (ulong)uVar5);
        }
        if (*puVar12 <= uVar3) {
          uVar3 = 0xffffffff;
        }
        if ((uVar3 < *(uint *)PTR_DAT_04bc2ff0) &&
           (uVar17 = *(ushort *)(*(long *)(PTR_DAT_04bc2ff0 + 8) + (long)(int)uVar3 * 2), uVar17 < 9
           )) goto LAB_02314064;
      }
    }
    uVar17 = 0;
  }
LAB_02314064:
  pbVar2 = (byte *)(param_1 + 0x1ee8);
  iVar7 = FUN_00a74b78(pbVar2);
  local_80 = (undefined *)CONCAT44(local_80._4_4_,iVar7);
  if (iVar7 != 0x13) {
    iVar7 = FUN_00a74b78(pbVar2);
    local_80 = (undefined *)CONCAT44(local_80._4_4_,iVar7);
    if ((uVar17 != 0) && (iVar7 != 9)) goto LAB_02314944;
  }
  lVar11 = *(long *)(param_1 + 0x68);
  local_50 = *(undefined **)(lVar11 + 0x278);
  local_48 = *(float *)(lVar11 + 0x280);
  local_58 = *(float *)(lVar11 + 0x28c);
  local_60 = *(undefined **)(lVar11 + 0x284);
  fVar19 = (float)FUN_016e026c(0,&local_60,0,0);
  fVar20 = (float)FUN_016e5890(&local_60);
  if (fVar19 <= fVar20) {
    fVar19 = fVar20;
  }
  if (1.0 <= local_60._4_4_ - fVar19) goto LAB_02314944;
  if (uVar6 == 0) {
LAB_02314200:
    local_80 = local_50;
    local_6c = 0x408;
    local_78 = local_48;
    local_74 = 0x3f80000000000000;
    iVar7 = FUN_016ed290(&local_80,0,0,0);
    if (iVar7 != 0) {
      local_80 = local_60;
      local_78 = local_58;
      iVar7 = FUN_016ed290(&local_80,0,0,0);
      if (iVar7 != 0) goto LAB_02314260;
LAB_02314374:
      (**(code **)(**(long **)(param_1 + 0x68) + 0x100))(*(long **)(param_1 + 0x68),&local_60);
      if (uVar6 == 0) goto LAB_02314944;
      goto LAB_02314538;
    }
LAB_02314260:
    uVar8 = FUN_016e6984();
    if (((((uVar8 & 1) != 0) ||
         ((uVar8 = FUN_016e4ef8(), (uVar8 & 1) != 0 && (uVar8 = FUN_016e63c4(), (uVar8 & 1) != 0))))
        && (fVar19 = (float)FUN_016e026c(0,&local_50,0,0), 44.5 < fVar19)) &&
       ((fVar19 = (float)FUN_016e026c(0,&local_60,0,0), fVar19 < 44.5 &&
        (uVar8 = FUN_0255594c(pbVar2,*(undefined4 *)(param_1 + 0x230),1), (uVar8 & 1) != 0))))
    goto LAB_02314374;
    fVar20 = (float)FUN_016e026c(0,&local_60,0,0);
    fVar19 = (float)FUN_016e026c(0,&local_50,0,0);
    fVar20 = fVar20 - fVar19;
    fVar19 = 10.0;
    if (uVar6 == 0) {
      fVar19 = 4.0;
    }
    fVar21 = 1.0;
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x122957f5) {
      fVar21 = fVar19;
    }
    fVar19 = -fVar20;
    if (0.0 <= fVar20) {
      fVar19 = fVar20;
    }
    if ((fVar21 < fVar19) &&
       ((uVar8 = FUN_0255594c(pbVar2,*(undefined4 *)(param_1 + 0x230),1), (uVar8 & 1) != 0 ||
        ((*(long *)PTR_DAT_04bb7ff8 != 0 && (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) != 0))))))
    goto LAB_02314374;
    if (uVar6 != 0) {
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      local_78 = (float)((int)((float)(int)(float)local_60 / 5.0) - (uint)((float)local_60 < 0.0));
      local_74 = CONCAT44(local_74._4_4_,(int)((float)(int)local_58 / 5.0) - (uint)(local_58 < 0.0))
      ;
      local_88 = (int)((float)(int)local_50._0_4_ / 5.0) - (uint)(local_50._0_4_ < 0.0);
      iStack_84 = (int)((float)(int)local_48 / 5.0) - (uint)(local_48 < 0.0);
      local_90 = puVar1;
      local_80 = puVar1;
      uVar8 = FUN_00976320(&local_90);
      if (((((uVar8 & 1) != 0) && (uVar8 = FUN_00976320(&local_80), (uVar8 & 1) == 0)) &&
          (uVar8 = FUN_0252f708(pbVar2,1,0), (uVar8 & 1) == 0)) &&
         (uVar8 = FUN_0252fa14(pbVar2), (uVar8 & 1) == 0)) {
LAB_02314524:
        (**(code **)(**(long **)(param_1 + 0x68) + 0x100))(*(long **)(param_1 + 0x68),&local_60);
        goto LAB_02314538;
      }
      local_78 = (float)((int)((float)(int)(float)local_60 / 5.0) - (uint)((float)local_60 < 0.0));
      local_74 = CONCAT44(local_74._4_4_,(int)((float)(int)local_58 / 5.0) - (uint)(local_58 < 0.0))
      ;
      local_88 = (int)((float)(int)local_50._0_4_ / 5.0) - (uint)(local_50._0_4_ < 0.0);
      iStack_84 = (int)((float)(int)local_48 / 5.0) - (uint)(local_48 < 0.0);
      local_90 = puVar1;
      local_80 = puVar1;
      uVar8 = FUN_00976d20(&local_90);
      if (((uVar8 & 1) != 0) && (uVar8 = FUN_00976d20(&local_80), (uVar8 & 1) == 0))
      goto LAB_02314524;
      bVar16 = false;
      lVar11 = *(long *)(param_1 + 0x298);
      goto joined_r0x0231451c;
    }
    if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) != 1) {
LAB_02314784:
      local_90 = PTR_DAT_04bb2010 + 0x10;
      local_78 = (float)((int)((float)(int)(float)local_60 / 5.0) - (uint)((float)local_60 < 0.0));
      local_74 = CONCAT44(local_74._4_4_,(int)((float)(int)local_58 / 5.0) - (uint)(local_58 < 0.0))
      ;
      local_88 = (int)((float)(int)local_50._0_4_ / 5.0) - (uint)(local_50._0_4_ < 0.0);
      iStack_84 = (int)((float)(int)local_48 / 5.0) - (uint)(local_48 < 0.0);
      local_80 = local_90;
      uVar8 = FUN_00978b40(&local_90);
      if (((uVar8 & 1) != 0) && (uVar8 = FUN_00978b40(&local_80), (uVar8 & 1) == 0))
      goto LAB_02314930;
      goto LAB_0231483c;
    }
    fVar20 = *(float *)(param_1 + 0x1bf0);
    lVar11 = FUN_0251e98c(1);
    pfVar10 = (float *)(**(code **)(*(long *)(lVar11 + 0x2a0) + 0xf0))(lVar11 + 0x2a0);
    fVar20 = fVar20 - *pfVar10;
    fVar19 = -fVar20;
    if (0.0 <= fVar20) {
      fVar19 = fVar20;
    }
    if (((fVar19 <= 1.1920929e-07) ||
        (fVar20 = *(float *)(param_1 + 0x1bf0), fVar19 = (float)FUN_0231dcc0(param_1),
        fVar20 == fVar19)) ||
       ((uVar8 = FUN_016efcc0(*(float *)(param_1 + 0x1bf0) * 0.9,&local_50,1), (uVar8 & 1) == 0 ||
        (uVar8 = FUN_016efcc0(0,&local_60,1), (uVar8 & 1) != 0)))) goto LAB_02314784;
    bVar13 = *pbVar2;
    local_78 = *(float *)(param_1 + 0x230);
    local_80 = (undefined *)CONCAT44(1,(undefined4)local_80);
    local_74 = 1;
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar13);
    uVar8 = FUN_02530cec(&local_80);
    if ((uVar8 & 1) == 0) goto LAB_02314784;
  }
  else {
    uVar8 = FUN_016ebc50(0,&local_50);
    if ((((uVar8 & 1) != 0) && (uVar8 = FUN_016ec07c(0,&local_50,7), (uVar8 & 1) == 0)) &&
       (uVar8 = FUN_016ebc50(0,&local_60), (uVar8 & 1) == 0)) {
      (**(code **)(**(long **)(param_1 + 0x68) + 0x100))(*(long **)(param_1 + 0x68),&local_60);
      bVar16 = true;
      lVar11 = *(long *)(param_1 + 0x298);
      if (lVar11 != 0) goto LAB_02314134;
LAB_023141d4:
      uVar8 = FUN_016ec07c(0,&local_50,7);
      if (((uVar8 & 1) == 0) || (uVar8 = FUN_016ec07c(0,&local_60,7), (uVar8 & 1) != 0))
      goto LAB_023141fc;
      goto LAB_02314524;
    }
    bVar16 = false;
    lVar11 = *(long *)(param_1 + 0x298);
    if (lVar11 == 0) goto LAB_023141d4;
LAB_02314134:
    if (*(long *)(lVar11 + 0xbde8) == 0) goto LAB_023141d4;
    plVar15 = (long *)FUN_01732248(*(long *)(lVar11 + 0xbde8),1);
    local_90 = (undefined *)*plVar15;
    uVar8 = FUN_0277d9a8(&local_90);
    if ((uVar8 & 1) == 0) goto LAB_023141d4;
    FUN_01ad5d04(&local_80,&local_90);
    iVar7 = FUN_01ad78cc(&local_80);
    if (iVar7 != 7) goto LAB_023141d4;
LAB_023141fc:
    if (!bVar16) goto LAB_02314200;
LAB_02314538:
    bVar16 = true;
    lVar11 = *(long *)(param_1 + 0x298);
joined_r0x0231451c:
    if ((lVar11 != 0) && (*(long *)(lVar11 + 0xbde8) != 0)) {
      puVar14 = (undefined8 *)FUN_01732248(*(long *)(lVar11 + 0xbde8),1);
      local_90 = (undefined *)*puVar14;
      uVar8 = FUN_0277d9a8(&local_90);
      if ((uVar8 & 1) != 0) {
        FUN_01ad5d04(&local_80,&local_90);
        iVar7 = FUN_01ad78cc(&local_80);
        if (((iVar7 == 7) && (uVar8 = FUN_016ec07c(0,&local_50,4), (uVar8 & 1) != 0)) &&
           (uVar8 = FUN_016ec07c(0,&local_60,4), (uVar8 & 1) == 0)) {
          (**(code **)(**(long **)(param_1 + 0x68) + 0x100))(*(long **)(param_1 + 0x68),&local_60);
          bVar16 = true;
        }
      }
    }
    local_90 = PTR_DAT_04bb2010 + 0x10;
    local_78 = (float)((int)((float)(int)(float)local_60 / 5.0) - (uint)((float)local_60 < 0.0));
    local_74 = CONCAT44(local_74._4_4_,(int)((float)(int)local_58 / 5.0) - (uint)(local_58 < 0.0));
    local_88 = (int)((float)(int)local_50._0_4_ / 5.0) - (uint)(local_50._0_4_ < 0.0);
    iStack_84 = (int)((float)(int)local_48 / 5.0) - (uint)(local_48 < 0.0);
    local_80 = local_90;
    uVar8 = FUN_00976be0(&local_90);
    if ((((uVar8 & 1) == 0) || (uVar8 = FUN_02b60610(&local_50), (uVar8 & 1) != 0)) ||
       (uVar8 = FUN_00976be0(&local_80), (uVar8 & 1) != 0)) {
      if (bVar16) goto LAB_02314944;
LAB_0231483c:
      iVar7 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
      if (((iVar7 != -0x169521c) && (iVar7 != 0x6148bcad)) && (iVar7 != 0x3fce6459))
      goto LAB_02314944;
      local_90 = PTR_DAT_04bb2010 + 0x10;
      local_78 = (float)((int)((float)(int)(float)local_60 / 5.0) - (uint)((float)local_60 < 0.0));
      local_74 = CONCAT44(local_74._4_4_,(int)((float)(int)local_58 / 5.0) - (uint)(local_58 < 0.0))
      ;
      local_88 = (int)((float)(int)local_50._0_4_ / 5.0) - (uint)(local_50._0_4_ < 0.0);
      iStack_84 = (int)((float)(int)local_48 / 5.0) - (uint)(local_48 < 0.0);
      local_80 = local_90;
      uVar8 = FUN_00977050(&local_90);
      if (((uVar8 & 1) == 0) || (uVar8 = FUN_00977050(&local_80), (uVar8 & 1) != 0))
      goto LAB_02314944;
    }
  }
LAB_02314930:
  (**(code **)(**(long **)(param_1 + 0x68) + 0x100))(*(long **)(param_1 + 0x68),&local_60);
LAB_02314944:
  FUN_0230f780(param_1,0);
  local_80._4_4_ = (uint)((ulong)local_80 >> 0x20) & 0xffffff00;
  local_80 = (undefined *)CONCAT44(local_80._4_4_,0x1010101);
  FUN_0235b0e0(param_1,&local_80);
  return;
}

