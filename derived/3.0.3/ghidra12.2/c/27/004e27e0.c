
undefined8 FUN_004e27e0(long param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  bool bVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 *local_330;
  undefined8 *puStack_328;
  ulong local_320;
  undefined8 *local_318;
  undefined8 *puStack_310;
  undefined *local_268;
  undefined *puStack_260;
  undefined *local_1e8;
  undefined *local_1d0;
  undefined *local_1a0;
  undefined *local_190;
  long local_90;
  long local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  uint local_70;
  
  uVar15 = 0x80040200;
  if (*(int *)(*(long *)(param_1 + 0x2a0) + (long)param_2 * 4) != 0) {
    return 0x80040200;
  }
  if (*(char *)(param_1 + 0x3a8) != '\0') {
    return 0x80040200;
  }
  lVar18 = (long)param_2;
  puVar12 = (undefined8 *)(*(long *)(param_1 + 0x228) + lVar18 * 0x18);
  uVar2 = *puVar12;
  lVar3 = puVar12[1];
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_00428370(lVar3);
    if ((uVar6 & 1) != 0) {
      FUN_0043dd30(uVar6 & 0xfffffffffffffffe);
    }
  }
  local_318 = &DAT_0407ebb1;
  puStack_310 = &DAT_0407ebb1;
  puVar12 = (undefined8 *)FUN_004c51d0(param_1 + 0x68,&local_318,0,lVar3);
  if (puVar12 != (undefined8 *)0x0) {
    puVar12 = (undefined8 *)*puVar12;
    local_80 = puVar12;
    iVar4 = FUN_00470770(param_1 + 0x48,&local_80,&local_318);
    if (iVar4 < 0) {
      local_80 = (undefined8 *)(long)*(int *)(param_1 + 0x1f8);
      uVar17 = *(undefined8 *)PTR_PTR_04bd4d20;
      local_318 = puVar12;
      FUN_00470440(param_1 + 0x48,uVar17,&local_318,&local_80);
      uVar11 = *(uint *)(param_1 + 0x1f8);
      if (uVar11 == (*(uint *)(param_1 + 0x1fc) & 0x3fffffff)) {
        FUN_00426990(uVar17,param_1 + 0x1f0,0x10);
        uVar11 = *(uint *)(param_1 + 0x1f8);
      }
      *(uint *)(param_1 + 0x1f8) = uVar11 + 1;
      puVar8 = (undefined8 *)(*(long *)(param_1 + 0x1f0) + (long)(int)uVar11 * 0x10);
      *puVar8 = 0;
      puVar8[1] = 0x8000000000000000;
    }
    lVar7 = FUN_00461bf0(param_1 + 0x2d8,lVar3,puVar12);
    if (lVar7 != 0) {
      iVar4 = FUN_00426fc0(puVar12);
      puVar8 = (undefined8 *)
               (**(code **)(*(long *)(param_1 + 0x248) + 0x10))(param_1 + 0x248,(long)iVar4,0);
      FUN_0043a4d0(puVar8,0,iVar4);
      FUN_00466aa0(&local_318);
      local_268 = PTR_FUN_04bd5ac8;
      puStack_260 = PTR_LAB_04bd5af0;
      local_1d0 = PTR_LAB_04bd5ae8;
      local_1e8 = PTR_LAB_04bd5ad0;
      local_1a0 = PTR_LAB_04bd5af8;
      local_190 = PTR_LAB_04bd5ae0;
      local_90 = param_1;
      uVar5 = FUN_00426fc0(lVar3);
      FUN_004dcdd0(&local_318,lVar7,puVar8,iVar4,uVar2,uVar5,uVar5,iVar4,1);
      local_330 = puVar8;
      puStack_328 = puVar12;
      if (puVar12 == (undefined8 *)0x0) {
        local_320 = 0;
      }
      else {
        local_320 = FUN_00428370(puVar12);
        if ((local_320 & 1) != 0) {
          FUN_0043dd30(local_320 & 0xfffffffffffffffe);
        }
      }
      bVar16 = true;
      FUN_004d9dc0(param_1,&local_330,1,0,param_2,0xffffffff);
      if ((local_320 & 1) != 0) {
        FUN_0043dd50(local_320 & 0xfffffffffffffffe);
      }
      *(undefined4 *)(*(long *)(param_1 + 0x2a0) + lVar18 * 4) = 1;
      if (puVar12 == (undefined8 *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_00428370(puVar12);
        if ((uVar9 & 1) == 0) {
          bVar16 = true;
        }
        else {
          FUN_0043dd30(uVar9 & 0xfffffffffffffffe);
          bVar16 = false;
        }
      }
      local_70 = local_70 & 0xffffff00;
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      uVar10 = *(uint *)(param_1 + 0x230);
      uVar11 = uVar10;
      if ((int)uVar10 < param_2 + 1) {
        uVar11 = param_2 + 1;
      }
      if ((int)(*(uint *)(param_1 + 0x234) & 0x3fffffff) < (int)uVar11) {
        uVar15 = FUN_00426720(*(undefined8 *)PTR_PTR_04bd4d20,uVar11,0x18,
                              *(undefined8 *)(param_1 + 0x228),uVar10,param_1 + 0x234);
        uVar10 = *(uint *)(param_1 + 0x230);
        *(undefined8 *)(param_1 + 0x228) = uVar15;
      }
      if (uVar11 - uVar10 == 0 || (int)uVar11 < (int)uVar10) {
        if ((int)uVar11 < (int)uVar10) {
          *(uint *)(param_1 + 0x230) = uVar11;
        }
      }
      else {
        puVar13 = (undefined8 *)(*(long *)(param_1 + 0x228) + (long)(int)uVar10 * 0x18);
        uVar1 = uVar11 - uVar10 & 3;
        *(uint *)(param_1 + 0x230) = uVar11;
        if (2 < uVar11 + ~uVar10) {
          iVar4 = (uVar10 + uVar1) - uVar11;
          puVar14 = puVar13;
          do {
            *puVar14 = local_80;
            puVar14[1] = uStack_78;
            *(uint *)(puVar14 + 2) = local_70;
            *(undefined4 *)((long)puVar14 + 0x14) = 0;
            puVar14[3] = local_80;
            puVar14[4] = uStack_78;
            *(uint *)(puVar14 + 5) = local_70;
            *(undefined4 *)((long)puVar14 + 0x2c) = 0;
            puVar14[6] = local_80;
            puVar14[7] = uStack_78;
            *(uint *)(puVar14 + 8) = local_70;
            *(undefined4 *)((long)puVar14 + 0x44) = 0;
            puVar13 = puVar14 + 0xc;
            puVar14[9] = local_80;
            puVar14[10] = uStack_78;
            *(uint *)(puVar14 + 0xb) = local_70;
            *(undefined4 *)((long)puVar14 + 0x5c) = 0;
            iVar4 = iVar4 + 4;
            puVar14 = puVar13;
          } while (iVar4 != 0);
        }
        if (uVar1 != 0) {
          iVar4 = -uVar1;
          do {
            *puVar13 = local_80;
            puVar13[1] = uStack_78;
            *(uint *)(puVar13 + 2) = local_70;
            *(undefined4 *)((long)puVar13 + 0x14) = 0;
            iVar4 = iVar4 + 1;
            puVar13 = puVar13 + 3;
          } while (iVar4 != 0);
        }
      }
      *(undefined8 **)(*(long *)(param_1 + 0x228) + lVar18 * 0x18) = puVar8;
      *(undefined8 **)(*(long *)(param_1 + 0x228) + lVar18 * 0x18 + 8) = puVar12;
      if (!bVar16) {
        FUN_0043dd50(uVar9 & 0xfffffffffffffffe);
      }
      local_88 = lVar18;
      local_80 = puVar8;
      FUN_00470440(param_1 + 0x2c8,*(undefined8 *)PTR_PTR_04bd4d20,&local_80,&local_88);
      uVar15 = 0;
      goto joined_r0x004e2a54;
    }
  }
  FUN_004e25f0(param_1,param_2);
joined_r0x004e2a54:
  if ((uVar6 & 1) != 0) {
    FUN_0043dd50(uVar6 & 0xfffffffffffffffe);
  }
  return uVar15;
}

