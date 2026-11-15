
void FUN_023e40cc(long param_1)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  ushort uVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined4 *puVar9;
  float *pfVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined8 local_70;
  char *local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  if ((*(byte *)(param_1 + 0x17cf) >> 6 & 1) == 0) goto LAB_023e4324;
  uVar16 = *(undefined4 *)(param_1 + 0x191d);
  uVar17 = *(undefined4 *)(param_1 + 0x1923);
  lVar8 = FUN_0251e98c(1);
  puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar8 + 0x1380) + 0xf0))(lVar8 + 0x1380);
  local_58 = 0;
  puVar11 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar11 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_70 = (undefined *)(puVar11[0x4f] & 0xffffffff);
  local_68 = (char *)CONCAT44(local_68._4_4_,*(undefined4 *)(puVar11 + 0x50));
  local_5c = uVar16;
  local_54 = uVar17;
  fVar15 = (float)FUN_03eb4b60(*puVar9,0x41200000,0x3e4ccccc,&local_70,&local_5c);
  *(undefined4 *)(puVar11 + 0x4f) = (undefined4)local_70;
  *(undefined4 *)(puVar11 + 0x50) = local_68._0_4_;
  uVar4 = *(ushort *)(param_1 + 0x18ef);
  lVar8 = FUN_0251e98c(1);
  pfVar10 = (float *)(**(code **)(*(long *)(lVar8 + 0x13b0) + 0xf0))(lVar8 + 0x13b0);
  fVar18 = *pfVar10;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_5c = 10;
    local_70 = (undefined *)CONCAT44(local_70._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_023e4218;
    bVar6 = true;
  }
  else {
LAB_023e4218:
    iVar7 = (uint)uVar4 * 0x10000;
    plVar3 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x4c8);
    }
    lVar8 = (**(code **)(*plVar3 + 0x148))();
    iVar13 = iVar7 - *(int *)(lVar8 + 4);
    if (iVar13 + 0x5b05afU < 0xb60b5f) {
      bVar6 = true;
      iVar14 = iVar7;
    }
    else {
      iVar5 = 0x15555560;
      iVar14 = -0x15555560;
      iVar13 = (int)(fVar18 * (float)iVar13);
      if (iVar13 < 1) {
        iVar5 = -0x5b05b0;
      }
      else {
        iVar14 = 0x5b05b0;
      }
      iVar2 = iVar13;
      if (iVar5 <= iVar13) {
        iVar2 = iVar5;
      }
      if (iVar14 <= iVar13) {
        iVar14 = iVar2;
      }
      iVar14 = iVar14 + *(int *)(lVar8 + 4);
      bVar6 = iVar14 == iVar7;
    }
    *(int *)(lVar8 + 4) = iVar14;
  }
  bVar1 = false;
  if (fVar15 == 0.0) {
    bVar1 = bVar6;
  }
  if ((!bVar1) && (*(uint *)(param_1 + 0x1c04) < 0x15)) {
    return;
  }
  puVar11 = *(undefined8 **)(param_1 + 0x60);
  if (puVar11 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar11 = &DAT_05240280;
    }
    else {
      puVar11 = &DAT_05240280;
    }
  }
  local_70 = PTR_DAT_04bb2020 + 0x10;
  local_68 = "FtrPush";
  FUN_017029bc(puVar11,&local_70,6,0,0);
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xbfffffff;
LAB_023e4324:
  puVar11 = *(undefined8 **)(param_1 + 0x60);
  if (puVar11 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar11 = &DAT_05240280;
    }
    else {
      puVar11 = &DAT_05240280;
    }
  }
  uVar12 = FUN_0170a6d0(puVar11,0);
  if (((uVar12 & 1) != 0) && (*(int *)(param_1 + 0x178) == 0)) {
    if ((*(char *)(param_1 + 0x17ac) == '\0') &&
       (local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000),
       (*(uint *)(param_1 + 0xec8) & 1) != 0)) {
      local_70 = (undefined *)
                 CONCAT44((float)(int)*(short *)(param_1 + 0x192b) * 0.25,
                          *(undefined4 *)(param_1 + 0x1927));
      local_68 = (char *)CONCAT44(local_68._4_4_,*(undefined4 *)(param_1 + 0x192d));
      uVar16 = FUN_016e026c(0,&local_70,0,0);
      local_70 = (undefined *)CONCAT44(uVar16,(undefined4)local_70);
      (**(code **)(**(long **)(param_1 + 0x68) + 0x100))(*(long **)(param_1 + 0x68),&local_70);
      FUN_023e19a8(param_1,&local_70,*(long *)(param_1 + 0x68) + 0x2b4);
    }
    else {
      uVar12 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
      if ((uVar12 & 1) == 0) {
        local_68 = (char *)((ulong)local_68 & 0xffffffff00000000);
        local_70 = (undefined *)CONCAT35(local_70._5_3_,0x100000006);
        FUN_02374e74(param_1,&local_70);
      }
    }
  }
  return;
}

