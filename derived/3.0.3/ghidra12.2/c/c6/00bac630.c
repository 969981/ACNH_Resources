
void FUN_00bac630(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar3 = malloc(0x10);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar1 + 8);
      if (lVar2 != 0) {
        param_2 = (long *)(lVar2 + 0xa8);
      }
      param_2 = (long *)*param_2;
    }
    puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x10,8);
  }
  *puVar3 = &PTR_FUN_0493bc18;
  return;
}

