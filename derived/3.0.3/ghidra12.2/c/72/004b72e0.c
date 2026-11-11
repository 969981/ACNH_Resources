
undefined4 FUN_004b72e0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined8 local_48;
  
  uVar3 = *(undefined4 *)(param_1 + 0xa8);
  plVar2 = (long *)(param_1 + 0xa0);
  local_48 = param_2;
  uVar6 = FUN_0047d820(plVar2,&local_48);
  if (*(uint *)(param_1 + 0xa8) == uVar6) {
    uVar9 = uVar6;
    if ((*(uint *)(param_1 + 0xac) & 0x3fffffff) == uVar6) {
      FUN_00426990(PTR_DAT_048607b8,plVar2,0x10);
      uVar9 = *(uint *)(param_1 + 0xa8);
    }
    uVar5 = local_48;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0xa0) + (long)(int)uVar9 * 0x10);
    *puVar1 = local_48;
    *(undefined4 *)(puVar1 + 1) = uVar3;
    *(uint *)(param_1 + 0xa8) = uVar9 + 1;
    lVar10 = *(long *)(param_1 + 0xa0);
    iVar4 = *(int *)(lVar10 + ((long)((ulong)uVar6 << 0x20) >> 0x1c) + 8);
    uVar8 = *(uint *)(param_1 + 0x10);
    uVar9 = uVar8;
    if ((int)uVar8 <= iVar4 + 1) {
      uVar9 = iVar4 + 1;
    }
    if ((int)(*(uint *)(param_1 + 0x14) & 0x3fffffff) < (int)uVar9) {
      uVar7 = FUN_00426720(PTR_DAT_048607b8,uVar9,8,*(undefined8 *)(param_1 + 8));
      uVar8 = *(uint *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 8) = uVar7;
    }
    if ((int)uVar8 < (int)uVar9) {
      *(uint *)(param_1 + 0x10) = uVar9;
      memset((void *)(*(long *)(param_1 + 8) + (long)(int)uVar8 * 8),0,
             (ulong)(uVar9 + ~uVar8) * 8 + 8);
    }
    else if ((int)uVar9 < (int)uVar8) {
      *(uint *)(param_1 + 0x10) = uVar9;
    }
    *(undefined8 *)(*(long *)(param_1 + 8) + (long)iVar4 * 8) = uVar5;
    FUN_004acdb0(param_1 + 0x70,iVar4,uVar5);
  }
  else {
    lVar10 = *plVar2;
  }
  return *(undefined4 *)(lVar10 + (long)(int)uVar6 * 0x10 + 8);
}

