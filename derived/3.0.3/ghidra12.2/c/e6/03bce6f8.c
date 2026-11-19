
void FUN_03bce6f8(undefined8 *param_1,size_t param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  
  FUN_003e51f4();
  *param_1 = &PTR_FUN_04b7b0c0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  lVar4 = DAT_05ae7600;
  if (param_3 == (long *)0x0) {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    param_3 = (long *)(lVar4 + 8);
    if (lVar2 != 0) {
      param_3 = (long *)(lVar2 + 0xa8);
    }
    param_3 = (long *)*param_3;
    if (param_2 != 0) goto LAB_03bce73c;
LAB_03bce7c0:
    lVar4 = (**(code **)(*param_3 + 0x80))(param_3,0x1000);
    param_2 = lVar4 - 0x1000;
    if (DAT_05ae7600 == 0) {
LAB_03bce7e0:
      pvVar3 = malloc(param_2);
      goto LAB_03bce7ec;
    }
  }
  else {
    if (param_2 == 0) goto LAB_03bce7c0;
LAB_03bce73c:
    if (DAT_05ae7600 == 0) goto LAB_03bce7e0;
  }
  lVar4 = DAT_05ae7600;
  if (param_3 == (long *)0x0) {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar1 = (undefined8 *)(lVar4 + 8);
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(lVar2 + 0xa8);
    }
    param_3 = (long *)*puVar1;
    if (param_3 == (long *)0x0) {
      pvVar3 = (void *)0x0;
      goto LAB_03bce7ec;
    }
  }
  pvVar3 = (void *)(**(code **)(*param_3 + 0x30))(param_3,param_2,0x1000);
LAB_03bce7ec:
  param_1[10] = pvVar3;
  FUN_003e5344(param_1,pvVar3,param_2);
  return;
}

