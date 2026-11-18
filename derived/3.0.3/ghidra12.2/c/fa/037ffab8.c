
undefined8 * FUN_037ffab8(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar3 = malloc(0x30);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar1 + 8);
      if (lVar2 != 0) {
        param_2 = (long *)(lVar2 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        return (undefined8 *)0x0;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x30,8);
  }
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_LAB_04b57a38;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 1) = 0xffffffff;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined1 *)((long)puVar3 + 0x1c) = 0xff;
    puVar3[4] = 0;
    puVar3[5] = 0;
  }
  return puVar3;
}

