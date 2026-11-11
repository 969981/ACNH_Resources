
void FUN_0043cc30(long param_1,undefined8 *param_2,ulong param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  
  if ((param_3 & 1) == 0) {
    lVar9 = *(long *)(param_1 + 0x50);
    plVar11 = (long *)(*(long *)(lVar9 + 0x70) + (long)*(int *)(lVar9 + 0x90) * 0x38 + 0x20);
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x10);
    if (uVar4 == (*(uint *)(param_1 + 0x14) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,param_1 + 8,0x20);
      uVar4 = *(uint *)(param_1 + 0x10);
    }
    puVar7 = (undefined8 *)(*(long *)(param_1 + 8) + (long)(int)uVar4 * 0x20);
    uVar8 = *param_2;
    plVar11 = param_2 + 1;
    lVar9 = *plVar11;
    uVar13 = param_2[3];
    puVar7[2] = param_2[2];
    puVar7[3] = uVar13;
    *puVar7 = uVar8;
    puVar7[1] = lVar9;
    *(uint *)(param_1 + 0x10) = uVar4 + 1;
    lVar9 = *(long *)(param_1 + 0x50);
    lVar12 = *plVar11;
    if (lVar12 != 0) {
      piVar5 = (int *)(*(long *)(lVar9 + 0x70) + (long)*(int *)(lVar9 + 0x90) * 0x38 + 0x34);
      iVar6 = *piVar5;
      if (iVar6 == 0) {
        *(undefined4 *)(*(long *)(lVar9 + 0x70) + (long)*(int *)(lVar9 + 0x90) * 0x38 + 0x30) =
             *(undefined4 *)(lVar9 + 0x88);
        iVar6 = 1;
      }
      else {
        iVar6 = iVar6 + 1;
      }
      *piVar5 = iVar6;
      uVar4 = *(uint *)(lVar9 + 0x88);
      if (uVar4 == (*(uint *)(lVar9 + 0x8c) & 0x3fffffff)) {
        FUN_00426990(PTR_DAT_048607c0,lVar9 + 0x80,8);
        uVar4 = *(uint *)(lVar9 + 0x88);
      }
      *(long *)(*(long *)(lVar9 + 0x80) + (long)(int)uVar4 * 8) = lVar12;
      *(uint *)(lVar9 + 0x88) = uVar4 + 1;
      lVar9 = *(long *)(param_1 + 0x50);
    }
  }
  iVar6 = *(int *)((long)param_2 + 0x1c);
  puVar10 = (undefined1 *)param_2[2];
  if (iVar6 < 0) {
    iVar6 = 1;
  }
  if (puVar10 != (undefined1 *)0x0) {
    lVar12 = *plVar11;
    uVar13 = param_2[1];
    uVar1 = FUN_00426fc0(puVar10);
    uVar2 = FUN_00428370(puVar10);
    if ((uVar2 & 1) != 0) {
      FUN_0043dd30(uVar2 & 0xfffffffffffffffe);
    }
    if (((puVar10 != &DAT_04c161d0) && (lVar3 = thunk_FUN_00461a20(lVar9,puVar10), lVar3 != 0)) &&
       (*(int *)(lVar3 + 0x10) != 0)) {
      if ((uVar2 & 1) != 0) {
        FUN_0043dd30(uVar2 & 0xfffffffffffffffe);
      }
      uVar4 = *(uint *)(lVar9 + 0x78);
      if (uVar4 == (*(uint *)(lVar9 + 0x7c) & 0x3fffffff)) {
        FUN_00426990(PTR_DAT_048607c0,lVar9 + 0x70,0x38);
        uVar4 = *(uint *)(lVar9 + 0x78);
      }
      puVar7 = (undefined8 *)(*(long *)(lVar9 + 0x70) + (long)(int)uVar4 * 0x38);
      *puVar7 = uVar13;
      puVar7[1] = puVar10;
      *(int *)(puVar7 + 2) = iVar6;
      *(undefined4 *)((long)puVar7 + 0x14) = uVar1;
      puVar7[3] = uVar2;
      puVar7[4] = lVar12;
      puVar7[5] = lVar3;
      puVar7[6] = 0;
      *(uint *)(lVar9 + 0x78) = uVar4 + 1;
    }
    if ((uVar2 & 1) != 0) {
      FUN_0043dd50(uVar2 & 0xfffffffffffffffe);
      return;
    }
  }
  return;
}

