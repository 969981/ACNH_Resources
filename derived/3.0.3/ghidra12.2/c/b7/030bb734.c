
void FUN_030bb734(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  void *pvVar6;
  
  FUN_03c5cce8(param_1,param_2,0);
  param_1[0x3e] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *param_1 = &PTR_FUN_04b90648;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  if (param_3 == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = *(char *)(param_3 + 0x28) != '\0';
  }
  *(bool *)(param_1 + 0x3f) = bVar4;
  lVar3 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    pvVar6 = malloc(0x18);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar2 = (undefined8 *)(lVar3 + 8);
    if (lVar5 != 0) {
      puVar2 = (undefined8 *)(lVar5 + 0xa8);
    }
    pvVar6 = (void *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x18,8);
  }
  *(undefined4 *)((long)pvVar6 + 0x10) = 0;
  *(void **)pvVar6 = pvVar6;
  *(void **)((long)pvVar6 + 8) = pvVar6;
  param_1[0x3b] = pvVar6;
  *(undefined4 *)((long)pvVar6 + 0x14) = 8;
  param_1[0x40] = 0;
  *param_1 = &PTR_FUN_04afca48;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  puVar1 = PTR_DAT_04bc6260 + 0x10;
  param_1[0x4a] = 0;
  param_1[0x4b] = puVar1;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}

