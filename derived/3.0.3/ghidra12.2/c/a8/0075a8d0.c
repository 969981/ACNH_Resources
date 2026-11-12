
undefined8 * FUN_0075a8d0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR_DAT_04bb2698;
  if (lVar3 == 0) {
    puVar2 = malloc(0x278);
  }
  else {
    lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar2 = (undefined8 *)(lVar3 + 8);
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)(lVar1 + 0xa8);
    }
    puVar2 = (undefined8 *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x278,8);
  }
  FUN_006f94c0(puVar2,param_1,param_2);
  *puVar2 = &PTR_LAB_04906700;
  return puVar2;
}

