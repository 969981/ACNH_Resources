
void * FUN_01497e08(undefined8 param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  
  uVar2 = FUN_01512630();
  lVar1 = DAT_05ae7600;
  if ((uVar2 & 1) == 0) {
    if (DAT_05ae7600 == 0) {
      pvVar4 = malloc(0xc0288);
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_2 = (long *)(lVar1 + 8);
        if (lVar3 != 0) {
          param_2 = (long *)(lVar3 + 0xa8);
        }
        param_2 = (long *)*param_2;
      }
      pvVar4 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0xc0288,8);
    }
    FUN_01498a70();
  }
  else {
    if (DAT_05ae7600 == 0) {
      pvVar4 = malloc(0x18010);
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_2 = (long *)(lVar1 + 8);
        if (lVar3 != 0) {
          param_2 = (long *)(lVar3 + 0xa8);
        }
        param_2 = (long *)*param_2;
      }
      pvVar4 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0x18010,8);
    }
    FUN_014a2160();
  }
  return pvVar4;
}

