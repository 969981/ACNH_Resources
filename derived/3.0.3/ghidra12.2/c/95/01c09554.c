
void FUN_01c09554(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x18);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      param_2 = (long *)(lVar4 + 8);
      if (lVar2 != 0) {
        param_2 = (long *)(lVar2 + 0xa8);
      }
      param_2 = (long *)*param_2;
    }
    puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x18,8);
  }
  puVar1 = PTR_DAT_04bb8610 + 0x10;
  *puVar3 = &PTR_FUN_04a3f818;
  puVar3[1] = puVar1;
  puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  return;
}

