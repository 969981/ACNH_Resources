
void FUN_030c32a4(undefined8 *param_1,undefined8 param_2,long param_3)

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
  *param_1 = &PTR_FUN_04afd5e0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined4 *)((long)param_1 + 0x21c) = 0xffffffff;
  memset(param_1 + 0x44,0,0x238);
  *(undefined2 *)((long)param_1 + 0x242) = 0;
  puVar1 = PTR_DAT_04bc8e10;
  param_1[0x47] = 0xffffffffffffffff;
  puVar1 = puVar1 + 0x10;
  param_1[0x4c] = 0xffffffffffffffff;
  param_1[0x51] = 0xffffffffffffffff;
  param_1[0x56] = 0xffffffffffffffff;
  param_1[0x5b] = 0xffffffffffffffff;
  param_1[0x60] = 0xffffffffffffffff;
  param_1[0x65] = 0xffffffffffffffff;
  param_1[0x6a] = 0xffffffffffffffff;
  param_1[0x6f] = 0xffffffffffffffff;
  param_1[0x74] = 0xffffffffffffffff;
  param_1[0x79] = 0xffffffffffffffff;
  param_1[0x7e] = 0xffffffffffffffff;
  param_1[0x83] = 0xffffffffffffffff;
  param_1[0x46] = puVar1;
  param_1[0x4b] = puVar1;
  param_1[0x50] = puVar1;
  param_1[0x55] = puVar1;
  param_1[0x5a] = puVar1;
  param_1[0x5f] = puVar1;
  param_1[100] = puVar1;
  param_1[0x69] = puVar1;
  param_1[0x6e] = puVar1;
  param_1[0x73] = puVar1;
  param_1[0x78] = puVar1;
  param_1[0x7d] = puVar1;
  param_1[0x82] = puVar1;
  param_1[0x87] = puVar1;
  param_1[0x88] = 0xffffffffffffffff;
  param_1[0x91] = (long)param_1 + 0x494;
  *(undefined4 *)(param_1 + 0x4a) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x255) = 0;
  *(undefined2 *)((long)param_1 + 0x26a) = 0;
  param_1[0x4f] = 0;
  *(undefined2 *)((long)param_1 + 0x292) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x2a5) = 0;
  *(undefined2 *)((long)param_1 + 0x2ba) = 0;
  param_1[0x59] = 0;
  *(undefined2 *)((long)param_1 + 0x2e2) = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x2f5) = 0;
  *(undefined2 *)((long)param_1 + 0x30a) = 0;
  param_1[99] = 0;
  *(undefined2 *)((long)param_1 + 0x332) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x345) = 0;
  *(undefined2 *)((long)param_1 + 0x35a) = 0;
  param_1[0x6d] = 0;
  *(undefined2 *)((long)param_1 + 0x382) = 0;
  *(undefined4 *)(param_1 + 0x72) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x395) = 0;
  *(undefined2 *)((long)param_1 + 0x3aa) = 0;
  param_1[0x77] = 0;
  *(undefined2 *)((long)param_1 + 0x3d2) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x3e5) = 0;
  *(undefined2 *)((long)param_1 + 0x3fa) = 0;
  param_1[0x81] = 0;
  *(undefined2 *)((long)param_1 + 0x422) = 0;
  *(undefined4 *)(param_1 + 0x86) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x434) = 0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0x40;
  *(undefined1 *)((long)param_1 + 0x4d3) = 0;
  *(undefined1 *)((long)param_1 + 0x494) = 0;
  param_1[0x90] = &PTR_LAB_048fb9f8;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  param_1[0x9b] = 0;
  *(undefined2 *)((long)param_1 + 0x4e2) = *(undefined2 *)PTR_DAT_04bb3170;
  *(undefined1 *)((long)param_1 + 0x4e4) = 0;
  return;
}

