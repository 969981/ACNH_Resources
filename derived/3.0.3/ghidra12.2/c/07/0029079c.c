
void FUN_0029079c(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  nn::os::SetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bccf58 + 0x88),param_1);
  uVar1 = DAT_04c60a0c;
  iVar2 = nn::os::GetCurrentCoreNumber();
  nn::os::SetTlsValue(uVar1,(long)(iVar2 + 1));
  *(int *)(param_1 + 200) = (int)*(undefined8 *)(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0xcc) = 1;
  FUN_00290f00(param_1);
  *(undefined4 *)(param_1 + 0xcc) = 3;
  return;
}

