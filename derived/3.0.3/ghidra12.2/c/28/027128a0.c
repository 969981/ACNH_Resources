
void FUN_027128a0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &DAT_04a882a8;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar4 = *(long *)(param_2 + 0x18);
    *(undefined8 **)(param_2 + 0x18) = param_1;
    if (lVar4 != 0) {
      param_1[4] = lVar4;
    }
  }
  *param_1 = &PTR_LAB_04a8d0c0;
  FUN_02712be4(param_1 + 7,param_1,param_1[2]);
  FUN_02712f60(param_1 + 0x7e,param_1,param_1[2] + 0x6400);
  lVar4 = param_1[3];
  param_1[0x3ce] = 0;
  param_1[0x3d0] = 0;
  param_1[0x3d1] = 0;
  param_1[0x3d2] = 0;
  *(undefined1 *)(param_1 + 0x3d3) = 0;
  param_1[3] = param_1 + 0x3cd;
  param_1[0x3cf] = param_1[2] + 0x65a0;
  if (lVar4 != 0) {
    param_1[0x3d1] = lVar4;
  }
  param_1[0x3cd] = &DAT_04a8cd90;
  FUN_0270fcb4(param_1 + 0x3d4,param_1,param_1[2] + 0x65a4);
  lVar1 = param_1[2];
  lVar2 = param_1[3];
  param_1[0x3d4] = &PTR_LAB_04a8c770;
  param_1[0x41b] = 0;
  param_1[0x41e] = 0;
  param_1[0x41f] = 0;
  lVar4 = lVar1 + 0x65c8;
  param_1[0x41c] = lVar4;
  *(undefined1 *)(param_1 + 0x420) = 0;
  param_1[3] = param_1 + 0x41a;
  if (lVar2 != 0) {
    param_1[0x41e] = lVar2;
  }
  param_1[0x43b] = 0;
  param_1[0x43a] = 0;
  param_1[0x439] = 0;
  param_1[0x438] = 0;
  param_1[0x437] = 0;
  param_1[0x436] = 0;
  param_1[0x434] = 0;
  param_1[0x433] = 0;
  param_1[0x432] = 0;
  param_1[0x431] = 0;
  param_1[0x430] = 0;
  param_1[0x42f] = 0;
  param_1[0x42d] = 0;
  param_1[0x42c] = 0;
  param_1[0x42b] = 0;
  param_1[0x42a] = 0;
  param_1[0x429] = 0;
  param_1[0x428] = 0;
  param_1[0x43c] = 0;
  param_1[0x435] = 0;
  param_1[0x42e] = 0;
  param_1[0x427] = 0;
  *(undefined1 *)(param_1 + 0x427) = 0;
  param_1[0x426] = 0;
  param_1[0x425] = 0;
  param_1[0x423] = 0;
  param_1[0x422] = 0;
  param_1[0x429] = 0;
  param_1[0x42a] = 0;
  param_1[0x42b] = 0;
  param_1[0x42c] = 0;
  param_1[0x42d] = 0;
  *(undefined1 *)(param_1 + 0x42e) = 0;
  puVar3 = PTR_DAT_04bbc0b8;
  param_1[0x424] = param_1 + 0x428;
  *(undefined1 *)(param_1 + 0x435) = 0;
  *(undefined1 *)(param_1 + 0x43c) = 0;
  param_1[0x428] = puVar3 + 0x10;
  param_1[0x421] = &PTR_LAB_04a8d210;
  param_1[0x430] = 0;
  param_1[0x431] = 0;
  param_1[0x432] = 0;
  param_1[0x433] = 0;
  param_1[0x434] = 0;
  param_1[0x43b] = 0;
  param_1[0x43a] = 0;
  param_1[0x439] = 0;
  param_1[0x438] = 0;
  param_1[0x437] = 0;
  param_1[0x432] = param_1 + 0x436;
  param_1[0x436] = puVar3 + 0x10;
  param_1[0x42f] = &PTR_LAB_04a8d210;
  param_1[0x41a] = &PTR_LAB_04a8d1e0;
  param_1[0x41d] = param_1 + 0x421;
  param_1[0x423] = lVar4;
  FUN_026400e0();
  lVar4 = param_1[0x41d];
  param_1[0x41d] = param_1 + 0x42f;
  if (lVar4 != 0) {
    param_1[0x433] = lVar4;
  }
  param_1[0x431] = param_1[0x431] + lVar1 + 0x68e8;
  FUN_026400e0(param_1 + 0x42f);
  lVar4 = param_1[3];
  param_1[0x43e] = 0;
  param_1[0x440] = 0;
  param_1[0x441] = 0;
  param_1[0x442] = 0;
  *(undefined1 *)(param_1 + 0x443) = 0;
  param_1[3] = param_1 + 0x43d;
  param_1[0x43f] = param_1[2] + 0x6c08;
  if (lVar4 != 0) {
    param_1[0x441] = lVar4;
  }
  param_1[0x43d] = &DAT_04a8d240;
  FUN_027136b8(param_1 + 0x444,param_1,param_1[2] + 0x6c10);
  param_1[0x444] = &PTR_LAB_04a8d270;
  return;
}

