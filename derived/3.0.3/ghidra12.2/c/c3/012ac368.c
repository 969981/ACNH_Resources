
void FUN_012ac368(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar2 = malloc(0x10);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar4 + 8);
      if (lVar1 != 0) {
        param_2 = (long *)(lVar1 + 0xa8);
      }
      param_2 = (long *)*param_2;
    }
    puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x10,8);
  }
  *puVar2 = &DAT_0498b938;
  uVar3 = *(undefined8 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_0498b910;
  puVar2[1] = uVar3;
  return;
}

