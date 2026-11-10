
int FUN_0018aff4(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 local_18;
  
  if (*(int *)(param_1 + 0xc) == -1) {
    return -1;
  }
  if (*PTR_DAT_04bcbca8 == '\0') {
    FUN_0018cb8c(&local_18);
  }
  else {
    FUN_0018c9b0(&local_18,0);
  }
  *(undefined8 *)PTR_DAT_04bcbcb0 = local_18;
  uVar2 = (int)local_18 - *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x18) = uVar2;
  iVar1 = 0;
  if (uVar2 <= *(uint *)(param_1 + 0xc)) {
    iVar1 = *(uint *)(param_1 + 0xc) - uVar2;
  }
  return iVar1;
}

