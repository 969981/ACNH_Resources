
void FUN_0047f660(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  
  *param_1 = &PTR_LAB_04865838;
  iVar3 = *(int *)(param_1 + 7);
  if (iVar3 == 2) {
    plVar1 = (long *)param_1[3];
    uVar2 = param_1[4];
    *(undefined4 *)(plVar1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)plVar1 + 0xc)) && (*plVar1 != 0)) {
      FUN_00421f90(uVar2,*plVar1,1,*(uint *)((long)plVar1 + 0xc) & 0x3fffffff);
    }
    *plVar1 = 0;
    *(undefined4 *)((long)plVar1 + 0xc) = 0x80000000;
    if (param_1[3] != 0) {
      FUN_00438870(param_1[3],0x10);
    }
    iVar3 = *(int *)(param_1 + 7);
  }
  if ((iVar3 == 0) && (param_1[3] != 0)) {
    FUN_00438870(param_1[3],0x10);
  }
  FUN_0046fc10(param_1);
  return;
}

