
void FUN_004228d0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(uint *)((long)param_1 + 0xc) & 0x3fffffff) == 0) {
    uVar2 = FUN_00426720(PTR_DAT_048607c0,1,1,*param_1,*(undefined4 *)(param_1 + 1));
    *param_1 = uVar2;
    iVar1 = *(int *)(param_1 + 1);
  }
  else {
    iVar1 = *(int *)(param_1 + 1);
  }
  if (iVar1 != 1) {
    *(undefined4 *)(param_1 + 1) = 1;
  }
  *(undefined1 *)*param_1 = 0;
  return;
}

