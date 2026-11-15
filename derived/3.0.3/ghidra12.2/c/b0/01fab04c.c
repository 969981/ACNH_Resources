
void FUN_01fab04c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  int *piVar3;
  long *plVar4;
  undefined *local_58;
  undefined *puStack_50;
  int local_48;
  int iStack_44;
  undefined *local_40;
  int local_38;
  int iStack_34;
  
  puVar1 = PTR_DAT_04bb2010;
  local_58 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_50 = PTR_DAT_04bb2010 + 0x10;
  local_38 = *(int *)(param_2 + 8);
  iStack_34 = *(int *)(param_2 + 0xc);
  local_48 = local_38 + -1;
  iStack_44 = iStack_34 + -1;
  local_40 = puStack_50;
  uVar2 = FUN_01faa820(*param_1,&local_58);
  if (((uVar2 & 1) != 0) && (piVar3 = (int *)param_1[1], *piVar3 < piVar3[1])) {
    plVar4 = *(long **)(piVar3 + 4);
    if (plVar4 != (long *)0x0) {
      *(long *)(piVar3 + 4) = *plVar4;
    }
    *plVar4 = (long)(PTR_DAT_04bb2e18 + 0x10);
    *(undefined4 *)(plVar4 + 1) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((long)plVar4 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *plVar4 = (long)(puVar1 + 0x10);
    if (*piVar3 < piVar3[1]) {
      *(long **)(*(long *)(piVar3 + 2) + (long)*piVar3 * 8) = plVar4;
      *piVar3 = *piVar3 + 1;
    }
  }
  return;
}

