
void FUN_03d59360(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  long lVar8;
  
  puVar4 = PTR_DAT_04bb2698;
  pvVar7 = *(void **)(param_1 + 0x210);
  if (pvVar7 == (void *)0x0) {
    lVar8 = *(long *)PTR_DAT_04bb2698;
    if (lVar8 == 0) {
      pvVar7 = malloc(0xa8);
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar2 = (undefined8 *)(lVar8 + 8);
      if (lVar5 != 0) {
        puVar2 = (undefined8 *)(lVar5 + 0xa8);
      }
      pvVar7 = (void *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0xa8,8);
    }
    puVar1 = PTR_DAT_04bb2718;
    *(void **)pvVar7 = pvVar7;
    *(void **)((long)pvVar7 + 8) = pvVar7;
    *(undefined4 *)((long)pvVar7 + 0x40) = 0;
    *(undefined8 *)((long)pvVar7 + 0x44) = 0;
    lVar8 = *(long *)puVar1;
    *(undefined8 *)((long)pvVar7 + 0x4c) = 0;
    *(undefined1 *)((long)pvVar7 + 0x54) = 0;
    *(long *)((long)pvVar7 + 0x20) = (long)pvVar7 + 0x18;
    *(undefined8 *)((long)pvVar7 + 0x28) = 0;
    *(undefined8 *)((long)pvVar7 + 0x10) = 0x800000000;
    *(long *)((long)pvVar7 + 0x18) = (long)pvVar7 + 0x18;
    *(long *)((long)pvVar7 + 0x30) = (long)pvVar7 + 0x30;
    *(long *)((long)pvVar7 + 0x38) = (long)pvVar7 + 0x30;
    puVar1 = PTR_DAT_04bcb568 + 0x10;
    uVar3 = *(undefined4 *)(*(long *)(lVar8 + 0x418) + 0x14);
    *(undefined8 *)((long)pvVar7 + 0x5c) = 0x50000001e;
    *(undefined **)((long)pvVar7 + 0x68) = puVar1;
    *(undefined **)((long)pvVar7 + 0x88) = puVar1;
    *(undefined1 *)((long)pvVar7 + 100) = 0;
    *(undefined4 *)((long)pvVar7 + 0x58) = uVar3;
    *(undefined4 *)((long)pvVar7 + 0x50) = 0xffffffff;
    *(void **)(param_1 + 0x210) = pvVar7;
    lVar8 = *(long *)puVar4;
  }
  else {
    lVar8 = *(long *)PTR_DAT_04bb2698;
  }
  if (lVar8 == 0) {
    pvVar6 = malloc(0x50);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar2 = (undefined8 *)(lVar8 + 8);
    if (lVar5 != 0) {
      puVar2 = (undefined8 *)(lVar5 + 0xa8);
    }
    pvVar6 = (void *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x50,8);
  }
  *(void **)((long)pvVar6 + 8) = pvVar6;
  *(undefined8 *)((long)pvVar6 + 0x10) = 0x800000000;
  *(undefined8 *)((long)pvVar6 + 0x20) = 0;
  *(undefined8 *)((long)pvVar6 + 0x28) = 0xc3b40000c4200000;
  *(void **)pvVar6 = pvVar6;
  *(undefined8 *)((long)pvVar6 + 0x30) = 0x43b4000044200000;
  *(undefined4 *)((long)pvVar6 + 0x18) = 0;
  *(undefined4 *)((long)pvVar6 + 0x48) = 1;
  *(undefined8 *)((long)pvVar6 + 0x38) = 0x3efb03863f5f1f93;
  *(undefined8 *)((long)pvVar6 + 0x40) = 0;
  *(void **)((long)pvVar7 + 0x48) = pvVar6;
  FUN_03d48690(pvVar6,param_2);
  return;
}

