
void * FUN_008aa190(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0x38040);
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar1 = (undefined8 *)(lVar4 + 8);
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(lVar2 + 0xa8);
    }
    pvVar3 = (void *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x38040,8);
  }
  FUN_008aa240(pvVar3,param_1,param_2);
  return pvVar3;
}

