
undefined8 FUN_03ca6178(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  
  lVar2 = DAT_05ae7600;
  plVar5 = *(long **)(param_1 + 0x10);
  lVar3 = *plVar5;
  if (lVar3 == 0) {
    lVar3 = **(long **)(param_1 + 8);
    if (lVar3 == 0 || lVar3 == param_2) {
      **(long **)(param_1 + 8) = param_2;
      return 0;
    }
    if (DAT_05ae7600 == 0) {
      pvVar4 = malloc(0x18);
    }
    else {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar1 = (undefined8 *)(lVar2 + 8);
      if (lVar3 != 0) {
        puVar1 = (undefined8 *)(lVar3 + 0xa8);
      }
      pvVar4 = (void *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x18,8);
    }
    *(void **)((long)pvVar4 + 8) = pvVar4;
    *(undefined8 *)((long)pvVar4 + 0x10) = 0;
    *(void **)pvVar4 = pvVar4;
    *plVar5 = (long)pvVar4;
    FUN_03d17c30(**(undefined8 **)(param_1 + 0x10),**(undefined8 **)(param_1 + 8));
    lVar3 = **(long **)(param_1 + 0x10);
  }
  FUN_03d17c30(lVar3,param_2);
  return 0;
}

