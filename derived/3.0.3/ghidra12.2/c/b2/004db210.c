
/* WARNING: Removing unreachable block (ram,0x004db31c) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_004db210(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  byte **ppbVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  byte *pbVar17;
  byte *pbVar18;
  long *plVar19;
  byte *local_360;
  byte *pbStack_358;
  ulong local_350;
  byte *local_348;
  undefined8 *puStack_340;
  undefined *local_298;
  undefined *puStack_290;
  undefined *local_218;
  undefined *local_200;
  undefined *local_1d0;
  undefined *local_1c0;
  long local_c0;
  byte *local_b8;
  byte *pbStack_b0;
  ulong local_a8;
  int local_a0;
  byte *local_78;
  byte *local_70 [2];
  
  uVar16 = 0x80040200;
  if (*(int *)(*(long *)(param_1 + 0x2b0) + (long)param_2 * 4) != 0) {
    return 0x80040200;
  }
  if (*(char *)(param_1 + 0x3a8) != '\0') {
    return 0x80040200;
  }
  lVar12 = *(long *)(param_1 + 0x238);
  pbVar18 = (byte *)(long)param_2;
  puVar9 = (undefined8 *)(lVar12 + (long)pbVar18 * 0x20);
  uVar2 = *puVar9;
  pbVar17 = (byte *)puVar9[1];
  uVar14 = puVar9[2];
  if ((uVar14 & 1) == 0) {
    uVar8 = uVar14;
    if ((uVar14 & 1) == 0) goto LAB_004db3b8;
LAB_004db274:
    FUN_0043dd30(uVar8 & 0xfffffffffffffffe);
    iVar3 = *(int *)(lVar12 + (long)pbVar18 * 0x20 + 0x18);
    iVar1 = -iVar3;
    if (-1 < iVar3) {
      iVar1 = iVar3;
    }
    FUN_0043dd50(uVar8 & 0xfffffffffffffffe);
  }
  else {
    uVar8 = uVar14 & 0xfffffffffffffffe;
    FUN_0043dd30(uVar8);
    FUN_0043dd30(uVar8);
    FUN_0043dd50(uVar8);
    lVar12 = *(long *)(param_1 + 0x238);
    uVar8 = *(ulong *)(lVar12 + (long)pbVar18 * 0x20 + 0x10);
    if ((uVar8 & 1) != 0) goto LAB_004db274;
LAB_004db3b8:
    iVar3 = *(int *)(lVar12 + (long)pbVar18 * 0x20 + 0x18);
    iVar1 = -iVar3;
    if (-1 < iVar3) {
      iVar1 = iVar3;
    }
  }
  if (pbVar17 == (byte *)0x0) {
    uVar16 = 0;
    goto joined_r0x004db3d0;
  }
  ppbVar13 = &local_78;
  local_78 = pbVar17;
  while ((*pbVar17 & 1) == 0) {
    FUN_00451ea0(&local_348);
    FUN_004522c0(&local_348,pbVar17,0xffffffff);
    iVar3 = FUN_004535f0(&local_348,param_1 + 0x68,local_70);
    pbVar10 = local_70[0];
    if (iVar3 < 0) {
      if (DAT_04c71d80 == '\0') {
        FUN_00451fa0(&local_348);
      }
      else {
        FUN_00444bc0(&local_b8,&DAT_04c71d30,1);
        lVar12 = FUN_004446b0(&local_b8,"Failed to allocate type from builder",PTR_DAT_04bd4920);
        *(char **)(lVar12 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Compat/Version/hkCompatPatcher.cpp"
        ;
        *(undefined8 *)(lVar12 + 0x30) = 0x550;
        FUN_00444c00(&local_b8);
        FUN_00451fa0(&local_348);
      }
      goto joined_r0x004db3d0;
    }
    *ppbVar13 = local_70[0];
    pbVar17 = *(byte **)(pbVar17 + 8);
    ppbVar13 = (byte **)(pbVar10 + 8);
    FUN_00451fa0(&local_348);
  }
  uVar8 = FUN_00428440(pbVar17);
  if ((pbVar17 == (byte *)0x0) || ((uVar8 & 0x1f) != 7)) {
    uVar8 = FUN_00428440(pbVar17);
    if ((pbVar17 == (byte *)0x0) || ((uVar8 & 0x1f) != 6)) {
      uVar8 = FUN_00428440(pbVar17);
      pbVar10 = local_78;
      if ((pbVar17 != (byte *)0x0) && ((uVar8 & 0x1f) == 3)) {
        pbVar10 = (byte *)(**(code **)(*(long *)(param_1 + 0x68) + 0x10))
                                    ((long *)(param_1 + 0x68),0x38,0);
        uVar8 = FUN_00428440(pbVar17);
        uVar15 = FUN_00427270(pbVar17);
        FUN_00453fd0(pbVar10,8,8,param_1 + 0x1d8,uVar15,uVar8 >> 7 & 1,0);
        *ppbVar13 = pbVar10;
        pbVar10 = local_78;
      }
    }
    else {
      plVar19 = (long *)(param_1 + 0x68);
      pbVar10 = (byte *)(**(code **)(*plVar19 + 0x10))(plVar19,0x70,0);
      lVar12 = FUN_00426d90(pbVar17);
      uVar15 = FUN_00427270(pbVar17);
      uVar8 = FUN_00428440(lVar12);
      if (((lVar12 != 0) && ((uVar8 & 0x1f) == 7)) &&
         (uVar4 = FUN_004274f0(lVar12), (uVar4 >> 5 & 1) == 0)) {
        local_348 = (byte *)&DAT_0407ebb1;
        puStack_340 = &DAT_0407ebb1;
        plVar19 = (long *)FUN_004c51d0(plVar19,&local_348,0,lVar12);
        if (plVar19 != (long *)0x0) {
          lVar12 = *plVar19;
        }
      }
      FUN_00453c80(pbVar10,lVar12,uVar15,0);
      *(undefined8 *)(pbVar10 + 0x20) = *(undefined8 *)(param_1 + 0x60);
      *ppbVar13 = pbVar10;
      pbVar10 = local_78;
    }
joined_r0x004db574:
    local_78 = pbVar10;
    if (pbVar10 != (byte *)0x0) {
      local_b8 = pbVar10;
      iVar3 = FUN_00470770(param_1 + 0x48,&local_b8,&local_348);
      if (iVar3 < 0) {
        local_b8 = (byte *)(long)*(int *)(param_1 + 0x1f8);
        uVar15 = *(undefined8 *)PTR_PTR_04bd4d20;
        local_348 = pbVar10;
        FUN_00470440(param_1 + 0x48,uVar15,&local_348,&local_b8);
        uVar4 = *(uint *)(param_1 + 0x1f8);
        if (uVar4 == (*(uint *)(param_1 + 0x1fc) & 0x3fffffff)) {
          FUN_00426990(uVar15,param_1 + 0x1f0,0x10);
          uVar4 = *(uint *)(param_1 + 0x1f8);
        }
        *(uint *)(param_1 + 0x1f8) = uVar4 + 1;
        puVar9 = (undefined8 *)(*(long *)(param_1 + 0x1f0) + (long)(int)uVar4 * 0x10);
        *puVar9 = 0;
        puVar9[1] = 0x8000000000000000;
      }
      lVar12 = FUN_00461bf0(param_1 + 0x2d8,pbVar17,pbVar10);
      if (lVar12 != 0) {
        iVar3 = FUN_00426fc0(pbVar10);
        iVar3 = iVar3 * iVar1;
        pbVar11 = (byte *)(**(code **)(*(long *)(param_1 + 0x248) + 0x10))
                                    (param_1 + 0x248,(long)iVar3,0);
        FUN_0043a4d0(pbVar11,0,iVar3);
        FUN_00466aa0(&local_348);
        local_298 = PTR_FUN_04bd5ac8;
        puStack_290 = PTR_LAB_04bd5af0;
        local_200 = PTR_LAB_04bd5ae8;
        local_218 = PTR_LAB_04bd5ad0;
        local_1c0 = PTR_LAB_04bd5ae0;
        local_1d0 = PTR_LAB_04bd5af8;
        local_c0 = param_1;
        if (iVar1 != 0) {
          iVar5 = FUN_00426fc0(pbVar17);
          uVar6 = FUN_00426fc0(pbVar10);
          uVar7 = FUN_00426fc0(pbVar17);
          FUN_004dcdd0(&local_348,lVar12,pbVar11,iVar3,uVar2,iVar5 * iVar1,uVar6,uVar7,iVar1);
        }
        local_360 = pbVar11;
        pbStack_358 = pbVar10;
        local_350 = FUN_00428370(pbVar10);
        if ((local_350 & 1) != 0) {
          FUN_0043dd30(local_350 & 0xfffffffffffffffe);
        }
        uVar6 = FUN_00426fc0(pbVar10);
        FUN_004d9dc0(param_1,&local_360,iVar1,uVar6,0xffffffff,param_2);
        if ((local_350 & 1) != 0) {
          FUN_0043dd50(local_350 & 0xfffffffffffffffe);
        }
        *(undefined4 *)(*(long *)(param_1 + 0x2b0) + (long)pbVar18 * 4) = 1;
        local_b8 = pbVar11;
        pbStack_b0 = pbVar10;
        local_a8 = FUN_00428370(pbVar10);
        local_a0 = iVar1;
        if ((local_a8 & 1) == 0) {
          FUN_004dae00(param_1 + 0x210,param_2,&local_b8);
        }
        else {
          uVar8 = local_a8 & 0xfffffffffffffffe;
          FUN_0043dd30(uVar8);
          FUN_004dae00(param_1 + 0x210,param_2,&local_b8);
          FUN_0043dd50(uVar8);
        }
        local_b8 = pbVar11;
        local_70[0] = pbVar18;
        FUN_00470440(param_1 + 0x2c8,*(undefined8 *)PTR_PTR_04bd4d20,&local_b8,local_70);
        uVar16 = 0;
        goto joined_r0x004db3d0;
      }
    }
  }
  else {
    uVar4 = FUN_004274f0(pbVar17);
    pbVar10 = local_78;
    if ((uVar4 >> 5 & 1) != 0) goto joined_r0x004db574;
    local_348 = (byte *)&DAT_0407ebb1;
    puStack_340 = &DAT_0407ebb1;
    puVar9 = (undefined8 *)FUN_004c51d0(param_1 + 0x68,&local_348,0,pbVar17);
    if (puVar9 != (undefined8 *)0x0) {
      *ppbVar13 = (byte *)*puVar9;
      pbVar10 = local_78;
      goto joined_r0x004db574;
    }
  }
  FUN_004dccf0(param_1,param_2);
joined_r0x004db3d0:
  if ((uVar14 & 1) != 0) {
    FUN_0043dd50(uVar14 & 0xfffffffffffffffe);
  }
  return uVar16;
}

