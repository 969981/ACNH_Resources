
void FUN_030c5f3c(undefined8 *param_1,undefined8 param_2,long param_3)

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
  *param_1 = &PTR_LAB_04afd6e8;
  *(undefined1 *)((long)param_1 + 0x24c) = 0;
  param_1[0x40] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x48] = (undefined1 *)((long)param_1 + 0x24c);
  *(undefined4 *)(param_1 + 0x49) = 0x40;
  *(undefined1 *)((long)param_1 + 0x28b) = 0;
  param_1[0x47] = &PTR_LAB_048fb9f8;
  memset(param_1 + 0x54,0,0x1a8);
  *(undefined4 *)(param_1 + 0x54) = 0x40;
  param_1[0x52] = &PTR_LAB_048fb9f8;
  *(undefined1 *)((long)param_1 + 0x2a4) = 0;
  param_1[0x53] = (undefined1 *)((long)param_1 + 0x2a4);
  *(undefined4 *)(param_1 + 0x5f) = 0x40;
  *(undefined1 *)((long)param_1 + 0x2fc) = 0;
  param_1[0x5e] = (undefined1 *)((long)param_1 + 0x2fc);
  param_1[0x5d] = &PTR_LAB_048fb9f8;
  *(undefined1 *)((long)param_1 + 0x3ac) = 0;
  param_1[0x74] = (undefined1 *)((long)param_1 + 0x3ac);
  *(undefined4 *)(param_1 + 0x6a) = 0x40;
  *(undefined1 *)((long)param_1 + 0x404) = 0;
  *(undefined1 *)((long)param_1 + 0x354) = 0;
  param_1[0x7f] = (undefined1 *)((long)param_1 + 0x404);
  param_1[0x69] = (undefined1 *)((long)param_1 + 0x354);
  param_1[0x68] = &PTR_LAB_048fb9f8;
  *(undefined4 *)(param_1 + 0x75) = 0x40;
  param_1[0x73] = &PTR_LAB_048fb9f8;
  *(undefined4 *)(param_1 + 0x80) = 0x40;
  param_1[0x7e] = &PTR_LAB_048fb9f8;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0xffffffff00000000;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  puVar1 = PTR_DAT_04bc77b8 + 0x10;
  param_1[0x8c] = puVar1;
  param_1[0x90] = puVar1;
  param_1[0x94] = puVar1;
  param_1[0x98] = puVar1;
  param_1[0x9c] = puVar1;
  *(undefined4 *)(param_1 + 0xa0) = 0xfffffffe;
  *(undefined2 *)((long)param_1 + 0x504) = 0x101;
  *(undefined1 *)((long)param_1 + 0x506) = 0;
  param_1[0xa1] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  return;
}

