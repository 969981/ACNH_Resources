
int FUN_004dc640(long param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  long lVar14;
  undefined8 local_98;
  long lStack_90;
  ulong local_88;
  undefined8 local_80;
  long lStack_78;
  ulong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  
  iVar3 = FUN_004c8350(param_1 + 0x3d0);
  if (iVar3 == -1) {
    iVar3 = -1;
  }
  else {
    plVar5 = (long *)FUN_004c5150(param_1 + 0x68,param_2,iVar3);
    lVar14 = *plVar5;
    uVar6 = FUN_00428440(lVar14);
    if ((uVar6 & 0x1f) != 7) {
      lVar14 = 0;
    }
    iVar3 = FUN_00426fc0(lVar14);
    uVar7 = (**(code **)(*(long *)(param_1 + 0x248) + 0x10))(param_1 + 0x248,(long)iVar3,0);
    uVar4 = FUN_00426fc0(lVar14);
    FUN_0043a4d0(uVar7,0,uVar4);
    local_80 = uVar7;
    lStack_78 = lVar14;
    if (lVar14 == 0) {
      local_70 = 0;
    }
    else {
      local_70 = FUN_00428370(lVar14);
      if ((local_70 & 1) != 0) {
        FUN_0043dd30(local_70 & 0xfffffffffffffffe);
      }
    }
    FUN_00440bc0(&local_80);
    iVar3 = *(int *)(param_1 + 0x230);
    if (lVar14 == 0) {
      uVar6 = 0;
      bVar2 = true;
    }
    else {
      uVar6 = FUN_00428370(lVar14);
      if ((uVar6 & 1) == 0) {
        bVar2 = true;
      }
      else {
        FUN_0043dd30(uVar6 & 0xfffffffffffffffe);
        bVar2 = false;
      }
    }
    local_58 = local_58 & 0xffffff00;
    local_68 = 0;
    uStack_60 = 0;
    uVar9 = *(uint *)(param_1 + 0x230);
    uVar10 = uVar9;
    if ((int)uVar9 < iVar3 + 1) {
      uVar10 = iVar3 + 1;
    }
    if ((int)(*(uint *)(param_1 + 0x234) & 0x3fffffff) < (int)uVar10) {
      uVar8 = FUN_00426720(PTR_DAT_048607b8,uVar10,0x18,*(undefined8 *)(param_1 + 0x228),uVar9,
                           param_1 + 0x234);
      uVar9 = *(uint *)(param_1 + 0x230);
      *(undefined8 *)(param_1 + 0x228) = uVar8;
    }
    if (uVar10 - uVar9 == 0 || (int)uVar10 < (int)uVar9) {
      if ((int)uVar10 < (int)uVar9) {
        *(uint *)(param_1 + 0x230) = uVar10;
      }
    }
    else {
      puVar11 = (undefined8 *)(*(long *)(param_1 + 0x228) + (long)(int)uVar9 * 0x18);
      uVar1 = uVar10 - uVar9 & 3;
      *(uint *)(param_1 + 0x230) = uVar10;
      if (2 < uVar10 + ~uVar9) {
        iVar13 = (uVar9 + uVar1) - uVar10;
        puVar12 = puVar11;
        do {
          *puVar12 = local_68;
          puVar12[1] = uStack_60;
          *(uint *)(puVar12 + 2) = local_58;
          *(undefined4 *)((long)puVar12 + 0x14) = 0;
          puVar12[3] = local_68;
          puVar12[4] = uStack_60;
          *(uint *)(puVar12 + 5) = local_58;
          *(undefined4 *)((long)puVar12 + 0x2c) = 0;
          puVar12[6] = local_68;
          puVar12[7] = uStack_60;
          *(uint *)(puVar12 + 8) = local_58;
          *(undefined4 *)((long)puVar12 + 0x44) = 0;
          puVar11 = puVar12 + 0xc;
          puVar12[9] = local_68;
          puVar12[10] = uStack_60;
          *(uint *)(puVar12 + 0xb) = local_58;
          *(undefined4 *)((long)puVar12 + 0x5c) = 0;
          iVar13 = iVar13 + 4;
          puVar12 = puVar11;
        } while (iVar13 != 0);
      }
      if (uVar1 != 0) {
        iVar13 = -uVar1;
        do {
          *puVar11 = local_68;
          puVar11[1] = uStack_60;
          *(uint *)(puVar11 + 2) = local_58;
          *(undefined4 *)((long)puVar11 + 0x14) = 0;
          iVar13 = iVar13 + 1;
          puVar11 = puVar11 + 3;
        } while (iVar13 != 0);
      }
    }
    *(undefined8 *)(*(long *)(param_1 + 0x228) + (long)iVar3 * 0x18) = uVar7;
    *(long *)(*(long *)(param_1 + 0x228) + (long)iVar3 * 0x18 + 8) = lVar14;
    uVar10 = *(uint *)(param_1 + 0x2a8);
    if (uVar10 == (*(uint *)(param_1 + 0x2ac) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,param_1 + 0x2a0,4);
      uVar10 = *(uint *)(param_1 + 0x2a8);
    }
    *(undefined4 *)(*(long *)(param_1 + 0x2a0) + (long)(int)uVar10 * 4) = 1;
    *(uint *)(param_1 + 0x2a8) = uVar10 + 1;
    local_98 = uVar7;
    lStack_90 = lVar14;
    local_88 = uVar6;
    if (!bVar2) {
      FUN_0043dd30(uVar6 & 0xfffffffffffffffe);
    }
    FUN_004d9dc0(param_1,&local_98,1,0,iVar3,0xffffffff);
    if ((local_88 & 1) != 0) {
      FUN_0043dd50(local_88 & 0xfffffffffffffffe);
    }
    if (!bVar2) {
      FUN_0043dd50(uVar6 & 0xfffffffffffffffe);
    }
    if ((local_70 & 1) != 0) {
      FUN_0043dd50(local_70 & 0xfffffffffffffffe);
    }
  }
  return iVar3;
}

