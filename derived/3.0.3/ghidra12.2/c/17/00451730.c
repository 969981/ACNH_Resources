
int FUN_00451730(long *param_1,long param_2,undefined1 *param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  short *psVar8;
  short *psVar9;
  long local_58;
  undefined1 auStack_44 [4];
  
  *param_3 = 0;
  if (param_2 == 0) {
    return 0;
  }
  local_58 = param_2;
  lVar5 = FUN_00451a60(param_1,&local_58);
  if ((lVar5 != 0) &&
     (iVar3 = *(int *)(*param_1 + (long)*(int *)(lVar5 + 4) * 0x10 + 8), iVar3 != 0)) {
    return iVar3;
  }
  if (((*(char *)(local_58 + 2) < '\0') &&
      (puVar6 = (undefined8 *)FUN_00426db0(local_58,0x800000), puVar6 != (undefined8 *)0x0)) &&
     (psVar9 = (short *)*puVar6, psVar9 != (short *)0x0)) {
    if (*psVar9 < psVar9[2]) {
      lVar5 = (long)(int)*psVar9;
      psVar8 = psVar9 + lVar5 * 4;
      iVar3 = 0;
      do {
        psVar8 = psVar8 + 4;
        uVar7 = FUN_00427b40(psVar8);
        iVar2 = FUN_0043a2d0();
        iVar3 = FUN_00451c50(iVar3,uVar7,(long)iVar2);
        lVar5 = lVar5 + 1;
      } while (lVar5 < psVar9[2]);
      goto LAB_00451824;
    }
  }
  else if (*(long *)(local_58 + 8) != 0) {
    iVar3 = FUN_00451730(param_1,*(long *)(local_58 + 8),auStack_44);
    goto LAB_00451824;
  }
  iVar3 = 0;
LAB_00451824:
  uVar4 = FUN_00451b00(param_1,&local_58);
  if (*(uint *)(param_1 + 1) == uVar4) {
    if ((*(uint *)((long)param_1 + 0xc) & 0x3fffffff) == uVar4) {
      FUN_00426990(PTR_DAT_048607b8,param_1,0x10);
      uVar4 = *(uint *)(param_1 + 1);
    }
    plVar1 = (long *)(*param_1 + (long)(int)uVar4 * 0x10);
    *plVar1 = local_58;
    *(int *)(plVar1 + 1) = iVar3;
    *(uint *)(param_1 + 1) = uVar4 + 1;
  }
  else {
    *(int *)(*param_1 + ((long)((ulong)uVar4 << 0x20) >> 0x1c) + 8) = iVar3;
  }
  *param_3 = 1;
  return iVar3;
}

