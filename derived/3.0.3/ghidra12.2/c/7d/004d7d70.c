
void FUN_004d7d70(long param_1,long *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  long local_40;
  byte *pbStack_38;
  
  puVar4 = PTR_DAT_048607b8;
  pbStack_38 = (byte *)param_2[1];
  bVar2 = *pbStack_38;
  while ((bVar2 & 1) == 0) {
    pbStack_38 = *(byte **)(pbStack_38 + 8);
    bVar2 = *pbStack_38;
  }
  local_40 = (long)*(int *)(param_1 + 0x1f8);
  lVar5 = FUN_004705d0(param_1 + 0x48,PTR_DAT_048607b8,&pbStack_38,&local_40);
  lVar5 = *(long *)(*(long *)(param_1 + 0x48) + ((lVar5 << 0x20) >> 0x1c) + 8);
  uVar11 = (uint)lVar5;
  if (*(uint *)(param_1 + 0x1f8) == uVar11) {
    uVar6 = uVar11;
    if ((*(uint *)(param_1 + 0x1fc) & 0x3fffffff) == uVar11) {
      FUN_00426990(puVar4,param_1 + 0x1f0,0x10);
      uVar6 = *(uint *)(param_1 + 0x1f8);
    }
    *(uint *)(param_1 + 0x1f8) = uVar6 + 1;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x1f0) + (long)(int)uVar6 * 0x10);
    *puVar1 = 0;
    puVar1[1] = 0x8000000000000000;
  }
  if (-1 < (int)uVar11) {
    piVar7 = (int *)(*(long *)(param_1 + 0x1f0) + ((lVar5 << 0x20) >> 0x1c) + 8);
    iVar3 = *piVar7;
    if (0 < iVar3) {
      plVar9 = *(long **)(*(long *)(param_1 + 0x1f0) + (long)(int)uVar11 * 0x10);
      lVar5 = 0;
      plVar8 = plVar9;
      do {
        if (*plVar8 == *param_2) {
          lVar10 = (long)iVar3 + -1;
          *piVar7 = (int)lVar10;
          if (iVar3 + -1 == (int)lVar5) {
            return;
          }
          plVar9 = plVar9 + lVar10 * 3;
          *plVar8 = *plVar9;
          plVar8[1] = plVar9[1];
          plVar8[2] = plVar9[2];
          return;
        }
        lVar5 = lVar5 + 1;
        plVar8 = plVar8 + 3;
      } while (lVar5 < iVar3);
    }
  }
  return;
}

