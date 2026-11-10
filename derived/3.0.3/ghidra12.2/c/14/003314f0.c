
void FUN_003314f0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_04bcee78;
  (**(code **)(*param_1 + 0x18))(param_1,*(undefined8 *)PTR_DAT_04bcee78);
  puVar1 = PTR_DAT_04bcee58;
  (**(code **)(*param_1 + 0x18))(param_1,*(undefined8 *)PTR_DAT_04bcee58);
  *(undefined8 *)puVar2 = 0;
  *(undefined8 *)puVar1 = 0;
  return;
}

