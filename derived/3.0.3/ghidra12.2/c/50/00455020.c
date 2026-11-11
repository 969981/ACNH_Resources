
int FUN_00455020(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  short *psVar8;
  undefined8 local_38;
  
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    uVar5 = FUN_00428440(param_1);
    if ((((uVar5 & 0x1f) == 8) &&
        (puVar6 = (undefined8 *)FUN_00426e90(param_1,1), puVar6 != (undefined8 *)0x0)) &&
       (iVar3 = (int)((ulong)*puVar6 >> 8), iVar3 != 0)) {
      FUN_00426d90(param_1);
      iVar4 = FUN_00426fc0();
      return iVar4 * iVar3;
    }
    if (((*(char *)(param_1 + 2) < '\0') &&
        (puVar6 = (undefined8 *)FUN_00426db0(param_1,0x800000), puVar6 != (undefined8 *)0x0)) &&
       ((psVar8 = (short *)*puVar6, psVar8 != (short *)0x0 && ((long)*psVar8 != 0)))) {
      local_38 = *(undefined8 *)(psVar8 + (long)*psVar8 * 4);
      iVar3 = FUN_00429050(&local_38);
      iVar4 = FUN_00426fc0(local_38);
      return iVar4 + iVar3;
    }
    if ((((*(byte *)(param_1 + 1) >> 6 & 1) != 0) &&
        (plVar7 = (long *)FUN_00426db0(param_1,0x4000), plVar7 != (long *)0x0)) &&
       (((undefined8 *)*plVar7 != (undefined8 *)0x0 &&
        (iVar3 = (int)*(undefined8 *)*plVar7, iVar3 != 0)))) break;
    uVar2 = FUN_004274f0(param_1);
    param_1 = *(long *)(param_1 + 8);
    if ((uVar2 >> 7 & 1) != 0) {
      if (param_1 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_00455020(param_1,param_2);
      }
      return ((param_2 + iVar3) - 1U & -param_2) + param_2;
    }
  }
  iVar4 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    iVar4 = FUN_00455020(*(long *)(param_1 + 8),param_2);
  }
  uVar5 = FUN_004274f0(param_1);
  iVar1 = 0;
  if ((uVar5 & 0x80) != 0) {
    iVar1 = param_2;
  }
  return ((param_2 + iVar4) - 1U & -param_2) + iVar3 * param_2 + iVar1;
}

