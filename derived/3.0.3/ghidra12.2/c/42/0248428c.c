
void FUN_0248428c(long param_1)

{
  int iVar1;
  long *plVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined4 uVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  float fVar15;
  undefined8 local_70;
  undefined4 local_68;
  undefined2 local_64;
  float local_5c;
  undefined4 local_58;
  float local_54;
  
  uVar3 = *(ushort *)(param_1 + 0x1903);
  lVar5 = FUN_0251e98c(1);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x13b0) + 0xf0))(lVar5 + 0x13b0);
  fVar15 = *pfVar6;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_5c = 1.4013e-44;
    local_70 = CONCAT44(local_70._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_02484338;
  }
  else {
LAB_02484338:
    iVar14 = (uint)uVar3 * 0x10000;
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar5 = (**(code **)(*plVar2 + 0x148))();
    iVar12 = iVar14 - *(int *)(lVar5 + 4);
    if (0xb60b5e < iVar12 + 0x5b05afU) {
      iVar4 = 0x15555560;
      iVar14 = -0x15555560;
      iVar12 = (int)(fVar15 * (float)iVar12);
      if (iVar12 < 1) {
        iVar4 = -0x5b05b0;
      }
      else {
        iVar14 = 0x5b05b0;
      }
      iVar1 = iVar12;
      if (iVar4 <= iVar12) {
        iVar1 = iVar4;
      }
      if (iVar14 <= iVar12) {
        iVar14 = iVar1;
      }
      iVar14 = iVar14 + *(int *)(lVar5 + 4);
    }
    *(int *)(lVar5 + 4) = iVar14;
    if (*(int *)(param_1 + 0x178) != 0) {
      iVar14 = *(int *)(param_1 + 0x18e5);
      iVar12 = *(int *)(param_1 + 0x18eb);
      lVar5 = FUN_0251e98c(1);
      puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x1380) + 0xf0))(lVar5 + 0x1380);
      local_58 = 0;
      puVar8 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar8 = *(undefined8 **)(param_1 + 0x4c8);
      }
      local_68 = *(undefined4 *)(puVar8 + 0x50);
      local_70 = puVar8[0x4f] & 0xffffffff;
      local_5c = (float)iVar14 * 0.001;
      local_54 = (float)iVar12 * 0.001;
      FUN_03eb4b60(*puVar7,0x41200000,0x3e4ccccc,&local_70,&local_5c);
      *(undefined4 *)(puVar8 + 0x4f) = (undefined4)local_70;
      *(undefined4 *)(puVar8 + 0x50) = local_68;
    }
  }
  if ((*(int *)(param_1 + 0x1c04) != 2) || ((*(uint *)(param_1 + 0x17d0) >> 9 & 1) == 0))
  goto LAB_024844fc;
  if (*(long *)PTR_DAT_04bb4718 == 0) {
LAB_024844c4:
    if (*(int *)(param_1 + 0x20b0) < 0) goto LAB_024844fc;
    bVar11 = *(byte *)(param_1 + 0x1ee8);
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    local_70 = CONCAT71(local_70._1_7_,bVar11);
    FUN_02f08ba8(&local_70);
    *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) | 0x400;
    uVar10 = 0x23;
  }
  else {
    bVar11 = *(byte *)(param_1 + 0x1ee8);
    if ((7 < (ulong)bVar11) ||
       (*(int *)(*(long *)PTR_DAT_04bb4718 + (ulong)bVar11 * 8 + 0xf04) == 0)) goto LAB_024844c4;
    local_70 = CONCAT71(local_70._1_7_,bVar11);
    *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffff9ff;
    FUN_02f08d18(&local_70);
    uVar10 = 0;
  }
  *(undefined4 *)(param_1 + 0x20b4) = uVar10;
LAB_024844fc:
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  puVar8 = *(undefined8 **)(param_1 + 0x60);
  if (puVar8 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar14 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar8 = &DAT_05240280;
      lVar5 = DAT_052413b8;
    }
    else {
      puVar8 = &DAT_05240280;
      lVar5 = DAT_052413b8;
    }
  }
  else {
    lVar5 = puVar8[0x227];
  }
  if (lVar5 == 0) {
    uVar9 = FUN_0170a6d0(puVar8,0);
  }
  else {
    local_70._4_4_ = (undefined4)(local_70 >> 0x20);
    local_70 = CONCAT44(local_70._4_4_,1);
    uVar9 = FUN_0170a6d0(puVar8,*(uint *)(puVar8 + 0x2d3) >> 1 & 1);
  }
  if ((uVar9 & 1) != 0) {
    local_64 = 0;
    uVar13 = (uint)*(byte *)(param_1 + 0x1902);
    if (7 < uVar13) {
      uVar13 = 0;
    }
    local_70 = CONCAT44(uVar13,(int)*(char *)(param_1 + 0x1900));
    local_68 = 1;
    FUN_024834e0(param_1,&local_70);
  }
  return;
}

