
undefined4 FUN_004b9a20(long param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  undefined8 local_38;
  
  uVar3 = *(undefined4 *)(param_1 + 0x2e8);
  plVar1 = (long *)(param_1 + 1000);
  local_38 = param_2;
  uVar5 = FUN_004b7450(plVar1,&local_38);
  if (*(uint *)(param_1 + 0x3f0) == uVar5) {
    uVar8 = uVar5;
    if ((*(uint *)(param_1 + 0x3f4) & 0x3fffffff) == uVar5) {
      FUN_00426990(PTR_DAT_048607b8,plVar1,0x10);
      uVar8 = *(uint *)(param_1 + 0x3f0);
    }
    puVar9 = (undefined8 *)(*(long *)(param_1 + 1000) + (long)(int)uVar8 * 0x10);
    *puVar9 = local_38;
    *(undefined4 *)(puVar9 + 1) = uVar3;
    lVar12 = *(long *)(param_1 + 1000);
    *(uint *)(param_1 + 0x3f0) = uVar8 + 1;
    iVar4 = *(int *)(lVar12 + ((long)((ulong)uVar5 << 0x20) >> 0x1c) + 8);
    uVar7 = *(uint *)(param_1 + 0x2e8);
    uVar8 = uVar7;
    if ((int)uVar7 <= iVar4 + 1) {
      uVar8 = iVar4 + 1;
    }
    if ((int)(*(uint *)(param_1 + 0x2ec) & 0x3fffffff) < (int)uVar8) {
      uVar6 = FUN_00426720(PTR_DAT_048607b8,uVar8,0x18,*(undefined8 *)(param_1 + 0x2e0),uVar7,
                           param_1 + 0x2ec);
      uVar7 = *(uint *)(param_1 + 0x2e8);
      *(undefined8 *)(param_1 + 0x2e0) = uVar6;
    }
    if (uVar8 - uVar7 == 0 || (int)uVar8 < (int)uVar7) {
      if ((int)uVar8 < (int)uVar7) {
        *(uint *)(param_1 + 0x2e8) = uVar8;
      }
    }
    else {
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x2e0) + (long)(int)uVar7 * 0x18);
      uVar2 = uVar8 - uVar7 & 3;
      *(uint *)(param_1 + 0x2e8) = uVar8;
      if (2 < uVar8 + ~uVar7) {
        iVar11 = (uVar7 + uVar2) - uVar8;
        puVar10 = puVar9;
        do {
          puVar9 = puVar10 + 0xc;
          *(undefined4 *)((long)puVar10 + 0x14) = 0;
          *(undefined1 *)(puVar10 + 2) = 0;
          *puVar10 = 0;
          puVar10[1] = 0;
          iVar11 = iVar11 + 4;
          *(undefined4 *)((long)puVar10 + 0x2c) = 0;
          *(undefined1 *)(puVar10 + 5) = 0;
          *(undefined4 *)((long)puVar10 + 0x44) = 0;
          *(undefined1 *)(puVar10 + 8) = 0;
          *(undefined4 *)((long)puVar10 + 0x5c) = 0;
          *(undefined1 *)(puVar10 + 0xb) = 0;
          puVar10[3] = 0;
          puVar10[4] = 0;
          puVar10[6] = 0;
          puVar10[7] = 0;
          puVar10[9] = 0;
          puVar10[10] = 0;
          puVar10 = puVar9;
        } while (iVar11 != 0);
      }
      if (uVar2 != 0) {
        iVar11 = -uVar2;
        do {
          *(undefined4 *)((long)puVar9 + 0x14) = 0;
          *(undefined1 *)(puVar9 + 2) = 0;
          iVar11 = iVar11 + 1;
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9 = puVar9 + 3;
        } while (iVar11 != 0);
      }
    }
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0x2e0) + (long)iVar4 * 0x18);
    uVar6 = **(undefined8 **)(param_1 + 0x2d0);
    *(undefined1 *)(puVar9 + 2) = 0;
    *puVar9 = 0;
    puVar9[1] = uVar6;
    *(undefined4 *)((long)puVar9 + 0x14) = 0;
  }
  else {
    lVar12 = *plVar1;
  }
  return *(undefined4 *)(lVar12 + (long)(int)uVar5 * 0x10 + 8);
}

