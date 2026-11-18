
void FUN_032947a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0xaa0) = 1;
  puVar1 = PTR_DAT_04bc94d0;
  iVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bc94d0);
  nn::os::SetTlsValue(*(undefined4 *)puVar1,1);
  FUN_03294fcc(param_1 + 0xb8,param_2);
  FUN_03295148(param_1);
  FUN_03295370(param_1);
  FUN_03295890(param_1);
  FUN_032959f0(param_1);
  FUN_03295b70(param_1);
  FUN_03295fdc(param_1);
  FUN_03296400(param_1);
  FUN_032966bc(param_1);
  nn::os::GetTlsValue(*(undefined4 *)puVar1);
  nn::os::SetTlsValue(*(undefined4 *)puVar1,(long)iVar2);
  return;
}

