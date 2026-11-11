
int FUN_004da210(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long local_80;
  long lStack_78;
  ulong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  
  iVar10 = *(int *)(param_1 + 0x230);
  if (0 < iVar10) {
    lVar11 = 0;
    lVar13 = 0;
    iVar12 = iVar10;
    do {
      plVar1 = (long *)(*(long *)(param_1 + 0x228) + lVar11);
      lVar2 = *plVar1;
      lVar3 = plVar1[1];
      if (lVar3 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_00428370(lVar3);
        if ((uVar5 & 1) != 0) {
          FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
        }
      }
      if ((param_2[1] == lVar3) && (lVar2 == *param_2)) {
        bVar4 = true;
        iVar12 = (int)lVar13;
      }
      else {
        bVar4 = false;
      }
      if ((uVar5 & 1) != 0) {
        FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
      }
      if (bVar4) {
        return iVar12;
      }
      iVar10 = *(int *)(param_1 + 0x230);
      lVar13 = lVar13 + 1;
      lVar11 = lVar11 + 0x18;
    } while (lVar13 < iVar10);
  }
  local_58 = local_58 & 0xffffff00;
  local_68 = 0;
  uStack_60 = 0;
  iVar12 = iVar10 + 1;
  if (iVar10 < (int)(*(uint *)(param_1 + 0x234) & 0x3fffffff)) {
    lVar13 = *(long *)(param_1 + 0x228);
    iVar9 = iVar10;
  }
  else {
    lVar13 = FUN_00426720(PTR_DAT_048607b8,iVar12,0x18,*(undefined8 *)(param_1 + 0x228),iVar10,
                          param_1 + 0x234);
    iVar9 = *(int *)(param_1 + 0x230);
    *(long *)(param_1 + 0x228) = lVar13;
    if (iVar10 < iVar9) {
      if (iVar12 < iVar9) {
        *(int *)(param_1 + 0x230) = iVar12;
      }
      goto LAB_004da3f0;
    }
  }
  *(int *)(param_1 + 0x230) = iVar12;
  if (iVar9 <= iVar10) {
    puVar7 = (undefined8 *)(lVar13 + (long)iVar9 * 0x18);
    uVar6 = (iVar10 + 1) - iVar9 & 3;
    if (2 < (uint)(iVar10 - iVar9)) {
      iVar12 = (iVar9 + uVar6 + -1) - iVar10;
      puVar8 = puVar7;
      do {
        *puVar8 = local_68;
        puVar8[1] = uStack_60;
        *(uint *)(puVar8 + 2) = local_58;
        *(undefined4 *)((long)puVar8 + 0x14) = 0;
        puVar8[3] = local_68;
        puVar8[4] = uStack_60;
        *(uint *)(puVar8 + 5) = local_58;
        *(undefined4 *)((long)puVar8 + 0x2c) = 0;
        puVar8[6] = local_68;
        puVar8[7] = uStack_60;
        *(uint *)(puVar8 + 8) = local_58;
        *(undefined4 *)((long)puVar8 + 0x44) = 0;
        puVar7 = puVar8 + 0xc;
        puVar8[9] = local_68;
        puVar8[10] = uStack_60;
        *(uint *)(puVar8 + 0xb) = local_58;
        *(undefined4 *)((long)puVar8 + 0x5c) = 0;
        iVar12 = iVar12 + 4;
        puVar8 = puVar7;
      } while (iVar12 != 0);
    }
    if (uVar6 != 0) {
      iVar12 = -uVar6;
      do {
        *puVar7 = local_68;
        puVar7[1] = uStack_60;
        *(uint *)(puVar7 + 2) = local_58;
        *(undefined4 *)((long)puVar7 + 0x14) = 0;
        iVar12 = iVar12 + 1;
        puVar7 = puVar7 + 3;
      } while (iVar12 != 0);
    }
    lVar13 = *(long *)(param_1 + 0x228);
  }
LAB_004da3f0:
  *(long *)(lVar13 + (long)iVar10 * 0x18) = *param_2;
  *(long *)(*(long *)(param_1 + 0x228) + (long)iVar10 * 0x18 + 8) = param_2[1];
  uVar6 = *(uint *)(param_1 + 0x2a8);
  if (uVar6 == (*(uint *)(param_1 + 0x2ac) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,param_1 + 0x2a0,4);
    uVar6 = *(uint *)(param_1 + 0x2a8);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x2a0) + (long)(int)uVar6 * 4) = 1;
  *(uint *)(param_1 + 0x2a8) = uVar6 + 1;
  local_80 = *param_2;
  lStack_78 = param_2[1];
  local_70 = param_2[2];
  if ((local_70 & 1) != 0) {
    FUN_0043dd30(local_70 & 0xfffffffffffffffe);
  }
  FUN_004d9dc0(param_1,&local_80,1,0,iVar10,0xffffffff);
  if ((local_70 & 1) != 0) {
    FUN_0043dd50(local_70 & 0xfffffffffffffffe);
  }
  return iVar10;
}

