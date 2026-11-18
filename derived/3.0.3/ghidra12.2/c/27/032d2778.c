
void FUN_032d2778(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR_DAT_04bb2698;
  if (lVar3 == 0) {
    puVar2 = malloc(0x10);
  }
  else {
    lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar2 = (undefined8 *)(lVar3 + 8);
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)(lVar1 + 0xa8);
    }
    puVar2 = (undefined8 *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x10,8);
  }
  *puVar2 = &DAT_04b1b6a0;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  return;
}

