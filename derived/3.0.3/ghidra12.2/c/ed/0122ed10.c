
void FUN_0122ed10(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_04987280;
  param_1[0x10f5] = 0;
  param_1[0x10fb] = 0;
  puVar1 = PTR_DAT_04bb31d0;
  piVar3 = (int *)(param_1 + 0xfc3);
  param_1[0x1071] = 0;
  param_1[0x1072] = &PTR_LAB_04987688;
  puVar1 = puVar1 + 0x10;
  param_1[0x10f6] = puVar1;
  param_1[0x10ef] = 0;
  param_1[0x10f0] = puVar1;
  param_1[0x10d2] = puVar1;
  param_1[0x10e9] = 0;
  param_1[0x10ea] = puVar1;
  param_1[0x10ad] = 0;
  param_1[0x108a] = puVar1;
  param_1[0x10d1] = 0;
  param_1[0x10ae] = puVar1;
  param_1[0x106c] = puVar1;
  param_1[0x10e3] = 0;
  param_1[0x10e4] = puVar1;
  param_1[0x10dd] = 0;
  param_1[0x10de] = puVar1;
  param_1[0x10d7] = 0;
  param_1[0x10d8] = puVar1;
  param_1[0x10cb] = 0;
  param_1[0x10cc] = puVar1;
  param_1[0x10c5] = 0;
  param_1[0x10c6] = puVar1;
  param_1[0x10bf] = 0;
  param_1[0x10c0] = puVar1;
  param_1[0x10b9] = 0;
  param_1[0x10ba] = puVar1;
  param_1[0x10b3] = 0;
  param_1[0x10b4] = puVar1;
  param_1[0x1054] = &PTR_LAB_04987518;
  param_1[0xfa4] = &PTR_LAB_04987958;
  param_1[0xfbc] = &PTR_LAB_04987c48;
  param_1[0x10a7] = 0;
  param_1[0x10a8] = puVar1;
  param_1[0x10a1] = 0;
  param_1[0x10a2] = puVar1;
  param_1[0x109b] = 0;
  param_1[0x109c] = puVar1;
  param_1[0x1095] = 0;
  param_1[0x1096] = puVar1;
  param_1[0x108f] = 0;
  param_1[0x1090] = puVar1;
  if (0 < *piVar3) {
    lVar5 = 0;
    do {
      puVar4 = *(undefined8 **)(param_1[0xfc4] + lVar5 * 8);
      (**(code **)*puVar4)(puVar4);
      lVar5 = lVar5 + 1;
      *puVar4 = param_1[0xfc5];
      param_1[0xfc5] = puVar4;
    } while (lVar5 < *piVar3);
  }
  *piVar3 = 0;
  FUN_038e1a84(param_1 + 0x43);
  param_1[0x42] = 0;
  param_1[1] = &PTR_LAB_049873a8;
  param_1[0x3c] = 0;
  param_1[0x3d] = puVar1;
  param_1[0x36] = 0;
  param_1[0x37] = puVar1;
  param_1[0x30] = 0;
  param_1[0x31] = puVar1;
  param_1[0x2a] = 0;
  param_1[0x2b] = puVar1;
  puVar2 = PTR_DAT_04bb3380 + 0x10;
  param_1[0x19] = puVar2;
  param_1[0x24] = 0;
  param_1[0x25] = puVar1;
  param_1[0x1e] = 0;
  param_1[0x1f] = puVar2;
  return;
}

