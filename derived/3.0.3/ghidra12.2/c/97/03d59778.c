
void FUN_03d59778(long param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  lVar7 = DAT_05ae7600;
  pvVar5 = *(void **)(param_1 + 0x210);
  if (pvVar5 == (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      pvVar5 = malloc(0xa8);
    }
    else {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar3 = (undefined8 *)(lVar7 + 8);
      if (lVar6 != 0) {
        puVar3 = (undefined8 *)(lVar6 + 0xa8);
      }
      pvVar5 = (void *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0xa8,8);
    }
    puVar1 = PTR_DAT_04bb2718;
    *(void **)pvVar5 = pvVar5;
    *(void **)((long)pvVar5 + 8) = pvVar5;
    *(undefined4 *)((long)pvVar5 + 0x40) = 0;
    lVar7 = *(long *)puVar1;
    *(undefined8 *)((long)pvVar5 + 0x44) = 0;
    *(undefined8 *)((long)pvVar5 + 0x4c) = 0;
    *(undefined1 *)((long)pvVar5 + 0x54) = 0;
    *(long *)((long)pvVar5 + 0x20) = (long)pvVar5 + 0x18;
    *(undefined8 *)((long)pvVar5 + 0x28) = 0;
    *(undefined8 *)((long)pvVar5 + 0x10) = 0x800000000;
    *(long *)((long)pvVar5 + 0x18) = (long)pvVar5 + 0x18;
    *(long *)((long)pvVar5 + 0x30) = (long)pvVar5 + 0x30;
    *(long *)((long)pvVar5 + 0x38) = (long)pvVar5 + 0x30;
    puVar1 = PTR_DAT_04bcb568 + 0x10;
    uVar4 = *(undefined4 *)(*(long *)(lVar7 + 0x418) + 0x14);
    *(undefined8 *)((long)pvVar5 + 0x5c) = 0x50000001e;
    *(undefined **)((long)pvVar5 + 0x68) = puVar1;
    *(undefined **)((long)pvVar5 + 0x88) = puVar1;
    *(undefined1 *)((long)pvVar5 + 100) = 0;
    *(undefined4 *)((long)pvVar5 + 0x58) = uVar4;
    *(undefined4 *)((long)pvVar5 + 0x50) = 0xffffffff;
    *(void **)(param_1 + 0x210) = pvVar5;
  }
  *(undefined4 *)(param_4 + 0x10) = param_2;
  *(undefined4 *)(param_4 + 0x14) = param_3;
  plVar8 = (long *)((long)pvVar5 + 0x30);
  lVar7 = *plVar8;
  plVar2 = (long *)(*(int *)((long)pvVar5 + 0x44) + param_4);
  *plVar8 = (long)plVar2;
  *plVar2 = lVar7;
  plVar2[1] = (long)plVar8;
  if (lVar7 != 0) {
    *(long **)(lVar7 + 8) = plVar2;
  }
  *(int *)((long)pvVar5 + 0x40) = *(int *)((long)pvVar5 + 0x40) + 1;
  return;
}

