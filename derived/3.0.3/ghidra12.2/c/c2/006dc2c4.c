
void FUN_006dc2c4(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar5 = *(undefined8 *)(param_2 + 200);
  uVar2 = *(undefined4 *)(param_2 + 0xd8);
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    pvVar4 = malloc(0x20);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar1 = (undefined8 *)(lVar6 + 8);
    if (lVar3 != 0) {
      puVar1 = (undefined8 *)(lVar3 + 0xa8);
    }
    pvVar4 = (void *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x20,8);
  }
  FUN_006db9d4(pvVar4,uVar5,uVar2,0);
  *(void **)(param_1 + 0x50) = pvVar4;
  return;
}

