
void FUN_03ec1c40(undefined8 *param_1)

{
  long lVar1;
  
  param_1[2] = param_1 + 4;
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = 0;
  while( true ) {
    *(long *)((long)param_1 + lVar1 + 0x20) = (long)param_1 + lVar1 + 0x40;
    if (lVar1 == 0xfc0) break;
    *(long *)((long)param_1 + lVar1 + 0x40) = (long)param_1 + lVar1 + 0x60;
    lVar1 = lVar1 + 0x40;
  }
  param_1[0x200] = 0;
  param_1[3] = param_1 + 4;
  if (param_1 + 0x204 != (undefined8 *)0x0) {
    *param_1 = 0x8000000000;
    param_1[1] = param_1 + 0x204;
  }
  param_1[0x285] = 0;
  param_1[0x284] = 0;
  param_1[0x288] = param_1 + 0x289;
  param_1[0x286] = param_1 + 0x288;
  param_1[0x2c7] = 0;
  param_1[0x287] = param_1 + 0x288;
  param_1[0x289] = param_1 + 0x28a;
  param_1[0x28a] = param_1 + 0x28b;
  param_1[0x28b] = param_1 + 0x28c;
  param_1[0x28c] = param_1 + 0x28d;
  param_1[0x28d] = param_1 + 0x28e;
  param_1[0x28e] = param_1 + 0x28f;
  param_1[0x28f] = param_1 + 0x290;
  param_1[0x290] = param_1 + 0x291;
  param_1[0x291] = param_1 + 0x292;
  param_1[0x292] = param_1 + 0x293;
  param_1[0x293] = param_1 + 0x294;
  param_1[0x294] = param_1 + 0x295;
  param_1[0x295] = param_1 + 0x296;
  param_1[0x296] = param_1 + 0x297;
  param_1[0x297] = param_1 + 0x298;
  param_1[0x298] = param_1 + 0x299;
  param_1[0x299] = param_1 + 0x29a;
  param_1[0x29a] = param_1 + 0x29b;
  param_1[0x29b] = param_1 + 0x29c;
  param_1[0x29c] = param_1 + 0x29d;
  param_1[0x29d] = param_1 + 0x29e;
  param_1[0x29e] = param_1 + 0x29f;
  param_1[0x29f] = param_1 + 0x2a0;
  param_1[0x2a0] = param_1 + 0x2a1;
  param_1[0x2a1] = param_1 + 0x2a2;
  param_1[0x2a2] = param_1 + 0x2a3;
  param_1[0x2a3] = param_1 + 0x2a4;
  param_1[0x2a4] = param_1 + 0x2a5;
  param_1[0x2a5] = param_1 + 0x2a6;
  param_1[0x2a6] = param_1 + 0x2a7;
  param_1[0x2a7] = param_1 + 0x2a8;
  param_1[0x2a8] = param_1 + 0x2a9;
  param_1[0x2a9] = param_1 + 0x2aa;
  param_1[0x2aa] = param_1 + 0x2ab;
  param_1[0x2ab] = param_1 + 0x2ac;
  param_1[0x2ac] = param_1 + 0x2ad;
  param_1[0x2ad] = param_1 + 0x2ae;
  param_1[0x2ae] = param_1 + 0x2af;
  param_1[0x2af] = param_1 + 0x2b0;
  param_1[0x2b0] = param_1 + 0x2b1;
  param_1[0x2b1] = param_1 + 0x2b2;
  param_1[0x2b2] = param_1 + 0x2b3;
  param_1[0x2b3] = param_1 + 0x2b4;
  param_1[0x2b4] = param_1 + 0x2b5;
  param_1[0x2b5] = param_1 + 0x2b6;
  param_1[0x2b6] = param_1 + 0x2b7;
  param_1[0x2b7] = param_1 + 0x2b8;
  param_1[0x2b8] = param_1 + 0x2b9;
  param_1[0x2b9] = param_1 + 0x2ba;
  param_1[0x2ba] = param_1 + 699;
  param_1[699] = param_1 + 700;
  param_1[700] = param_1 + 0x2bd;
  param_1[0x2bd] = param_1 + 0x2be;
  param_1[0x2be] = param_1 + 0x2bf;
  param_1[0x2bf] = param_1 + 0x2c0;
  param_1[0x2c0] = param_1 + 0x2c1;
  param_1[0x2c1] = param_1 + 0x2c2;
  param_1[0x2c2] = param_1 + 0x2c3;
  param_1[0x2c3] = param_1 + 0x2c4;
  param_1[0x2c4] = param_1 + 0x2c5;
  param_1[0x2c5] = param_1 + 0x2c6;
  param_1[0x2c6] = param_1 + 0x2c7;
  if (param_1 + 0x2c8 != (undefined8 *)0x0) {
    param_1[0x285] = param_1 + 0x2c8;
    param_1[0x284] = 0x4000000000;
  }
  param_1[0x309] = 0;
  param_1[0x308] = 0;
  param_1[0x30c] = param_1 + 0x30f;
  param_1[0x30a] = param_1 + 0x30c;
  param_1[0x369] = 0;
  param_1[0x30b] = param_1 + 0x30c;
  param_1[0x30f] = param_1 + 0x312;
  param_1[0x312] = param_1 + 0x315;
  param_1[0x315] = param_1 + 0x318;
  param_1[0x318] = param_1 + 0x31b;
  param_1[0x31b] = param_1 + 0x31e;
  param_1[0x31e] = param_1 + 0x321;
  param_1[0x321] = param_1 + 0x324;
  param_1[0x324] = param_1 + 0x327;
  param_1[0x327] = param_1 + 0x32a;
  param_1[0x32a] = param_1 + 0x32d;
  param_1[0x32d] = param_1 + 0x330;
  param_1[0x330] = param_1 + 0x333;
  param_1[0x333] = param_1 + 0x336;
  param_1[0x336] = param_1 + 0x339;
  param_1[0x339] = param_1 + 0x33c;
  param_1[0x33c] = param_1 + 0x33f;
  param_1[0x33f] = param_1 + 0x342;
  param_1[0x342] = param_1 + 0x345;
  param_1[0x345] = param_1 + 0x348;
  param_1[0x348] = param_1 + 0x34b;
  param_1[0x34b] = param_1 + 0x34e;
  param_1[0x34e] = param_1 + 0x351;
  param_1[0x351] = param_1 + 0x354;
  param_1[0x354] = param_1 + 0x357;
  param_1[0x357] = param_1 + 0x35a;
  param_1[0x35a] = param_1 + 0x35d;
  param_1[0x35d] = param_1 + 0x360;
  param_1[0x360] = param_1 + 0x363;
  param_1[0x363] = param_1 + 0x366;
  param_1[0x366] = param_1 + 0x369;
  if (param_1 + 0x36c != (undefined8 *)0x0) {
    param_1[0x309] = param_1 + 0x36c;
    param_1[0x308] = 0x2000000000;
  }
  *(undefined2 *)(param_1 + 0x38c) = 0;
  return;
}

