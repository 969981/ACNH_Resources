
void FUN_02b568dc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_04bbc1a0;
  *param_1 = &PTR_FUN_04aa4850;
  param_1[0x4d55] = puVar3 + 0x10;
  FUN_038e1a84(param_1 + 0x4d3e);
  if (*(char *)(param_1 + 0x4d3c) != '\0') {
    *(undefined1 *)(param_1 + 0x4d3c) = 0;
  }
  if (*(char *)((long)param_1 + 0x269bc) != '\0') {
    *(undefined1 *)((long)param_1 + 0x269bc) = 0;
  }
  puVar1 = puVar3 + 0x10;
  param_1[0x4d2e] = puVar1;
  puVar2 = PTR_DAT_04bc2fb8;
  param_1[0x4d25] = puVar1;
  param_1[0x4d1c] = puVar1;
  puVar2 = puVar2 + 0x10;
  param_1[0x4d2a] = puVar2;
  param_1[0x4d21] = puVar2;
  param_1[0x4d18] = puVar2;
  if (*(char *)(param_1 + 0x4d17) != '\0') {
    (**(code **)param_1[0x4d15])(param_1 + 0x4d15);
    *(undefined1 *)(param_1 + 0x4d17) = 0;
  }
  if (*(char *)(param_1 + 0x4d14) != '\0') {
    (**(code **)param_1[0x4d0f])(param_1 + 0x4d0f);
    *(undefined1 *)(param_1 + 0x4d14) = 0;
  }
  if (*(char *)((long)param_1 + 0x26864) != '\0') {
    *(undefined1 *)((long)param_1 + 0x26864) = 0;
  }
  if (*(char *)(param_1 + 0x4d09) != '\0') {
    *(undefined1 *)(param_1 + 0x4d09) = 0;
    param_1[0x4d01] = puVar3 + 0x10;
  }
  if (*(char *)(param_1 + 0x4d00) != '\0') {
    *(undefined1 *)(param_1 + 0x4d00) = 0;
    param_1[0x4cf9] = puVar3 + 0x10;
  }
  FUN_038e1a84(param_1 + 0x4ce4);
  FUN_02b30820(param_1 + 0x4b57);
  FUN_02ad9110(param_1 + 0x208c);
  param_1[0x4dd] = PTR_DAT_04bc4a00 + 0x10;
  FUN_009391e0(param_1 + 0x2077);
  FUN_009391e0(param_1 + 0x2062);
  FUN_009391e0(param_1 + 0x204d);
  puVar3 = PTR_DAT_04bc49f8 + 0x10;
  param_1[0x1296] = puVar3;
  FUN_02b39080(param_1 + 0x1297);
  param_1[0x4df] = puVar3;
  FUN_02b39080(param_1 + 0x4e0);
  puVar1 = PTR_DAT_04bbc310;
  puVar3 = PTR_DAT_04bbc2c8;
  param_1[0x45b] = PTR_DAT_04bc48f8 + 0x10;
  param_1[0x471] = puVar1 + 0x10;
  param_1[0x4ad] = puVar3 + 0x10;
  FUN_03f457c4(param_1 + 0x4c8);
  puVar3 = PTR_DAT_04bc4548 + 0x10;
  param_1[0x4a8] = PTR_DAT_04bbc5d8 + 0x10;
  param_1[0x3c1] = puVar3;
  FUN_02a92638(param_1 + 3);
  return;
}

