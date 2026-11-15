
void FUN_01fa096c(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_03738270(*(undefined8 *)PTR_DAT_04bb4e28);
  if (iVar1 == *(int *)PTR_DAT_04bb3238) {
    FUN_02085a50(*(undefined8 *)(param_1 + 0x18),0,0);
    return;
  }
  FUN_02085e20(*(undefined8 *)(param_1 + 0x18),0,iVar1,PTR_DAT_04bb6928,0);
  return;
}

