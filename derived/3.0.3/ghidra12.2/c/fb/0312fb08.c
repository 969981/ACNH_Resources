
void FUN_0312fb08(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  void *pvVar5;
  
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
    bVar3 = false;
  }
  else {
    bVar3 = *(char *)(param_3 + 0x28) != '\0';
  }
  *(bool *)(param_1 + 0x3f) = bVar3;
  lVar2 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    pvVar5 = malloc(0x18);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar1 = (undefined8 *)(lVar2 + 8);
    if (lVar4 != 0) {
      puVar1 = (undefined8 *)(lVar4 + 0xa8);
    }
    pvVar5 = (void *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x18,8);
  }
  *(undefined4 *)((long)pvVar5 + 0x10) = 0;
  *(void **)pvVar5 = pvVar5;
  *(void **)((long)pvVar5 + 8) = pvVar5;
  param_1[0x3b] = pvVar5;
  *(undefined4 *)((long)pvVar5 + 0x14) = 8;
  param_1[0x40] = 0;
  *param_1 = &PTR_LAB_04b02da8;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  return;
}

