
bool FUN_02ff4e54(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  
  plVar1 = (long *)(param_1 + 0x998);
  plVar2 = plVar1 + *(uint *)(param_1 + 0x8f8);
  if (0x12 < *(uint *)(param_1 + 0x8f8)) {
    plVar2 = plVar1;
  }
  lVar9 = *plVar2;
  if (lVar9 != 0) {
    plVar2 = (long *)(param_1 + 0x900);
    plVar3 = plVar2 + *(uint *)(param_1 + 0x8f8);
    if (0x12 < *(uint *)(param_1 + 0x8f8)) {
      plVar3 = plVar2;
    }
    if ((long *)*plVar3 != (long *)0x0) {
      (**(code **)(*(long *)*plVar3 + 0x18))();
    }
    plVar3 = plVar1 + *(uint *)(param_1 + 0x8f8);
    if (0x12 < *(uint *)(param_1 + 0x8f8)) {
      plVar3 = plVar1;
    }
    piVar7 = (int *)*plVar3;
    iVar4 = *piVar7;
    if (0 < iVar4) {
      iVar6 = 0;
      if (iVar4 != 0) {
        iVar6 = (piVar7[4] + 1) / iVar4;
      }
      piVar7[4] = (piVar7[4] + 1) - iVar6 * iVar4;
    }
    uVar5 = *(uint *)(param_1 + 0x8f8);
    plVar3 = plVar1 + uVar5;
    if (0x12 < uVar5) {
      plVar3 = plVar1;
    }
    puVar8 = (uint *)*plVar3;
    uVar10 = puVar8[4];
    if (*puVar8 <= uVar10) {
      uVar10 = 0;
    }
    uVar10 = *(uint *)(*(long *)(puVar8 + 2) + (long)(int)uVar10 * 4);
    if (uVar10 != 0xffffffff) {
      uVar11 = (ulong)uVar10;
      if (0x12 < uVar10) {
        uVar11 = 0;
      }
      if (plVar1[uVar11] != 0) {
        uVar11 = (ulong)uVar10;
        if (0x12 < uVar10) {
          uVar11 = 0;
        }
        puVar8 = (uint *)plVar1[uVar11];
        uVar10 = puVar8[4];
        if (*puVar8 <= uVar10) {
          uVar10 = 0;
        }
        uVar10 = *(uint *)(*(long *)(puVar8 + 2) + (long)(int)uVar10 * 4);
      }
      *(uint *)(param_1 + 0x8fc) = uVar5;
      plVar1 = plVar2 + *(uint *)(param_1 + 0x8fc);
      if (0x12 < *(uint *)(param_1 + 0x8fc)) {
        plVar1 = plVar2;
      }
      if ((long *)*plVar1 != (long *)0x0) {
        (**(code **)(*(long *)*plVar1 + 0x28))();
      }
      *(uint *)(param_1 + 0x8f8) = uVar10;
    }
  }
  return lVar9 != 0;
}

