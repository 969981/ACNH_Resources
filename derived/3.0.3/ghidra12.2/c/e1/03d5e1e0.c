
void FUN_03d5e1e0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04bb2698;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    pvVar5 = calloc(1,0x54);
    *(void **)(param_1 + 0x240) = pvVar5;
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar3 = (long *)(lVar6 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    puVar4 = (undefined8 *)0x0;
    if (plVar3 != (long *)0x0) {
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x54,8);
    }
    lVar6 = *(long *)puVar1;
    *(undefined4 *)(puVar4 + 10) = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    *(undefined8 **)(param_1 + 0x240) = puVar4;
    if (lVar6 != 0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar4 = (undefined8 *)(lVar6 + 8);
      if (lVar2 != 0) {
        puVar4 = (undefined8 *)(lVar2 + 0xa8);
      }
      puVar4 = (undefined8 *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,0xc,8);
      goto LAB_03d5e2b8;
    }
  }
  puVar4 = malloc(0xc);
LAB_03d5e2b8:
  *puVar4 = 0x3f00000040000000;
  *(undefined4 *)(puVar4 + 1) = 0x3f733333;
  *(undefined8 **)(param_1 + 0x248) = puVar4;
  return;
}

