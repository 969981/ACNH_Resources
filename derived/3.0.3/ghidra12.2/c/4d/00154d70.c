
undefined8 FUN_00154d70(undefined8 param_1,undefined1 *param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  int extraout_w1;
  ulong uVar4;
  undefined1 *puVar5;
  uint local_64;
  
  if (param_3 == 0) {
    return 0x2b;
  }
  do {
    local_64 = 0;
    uVar1 = param_3;
    if (3 < param_3) {
      uVar1 = 4;
    }
    uVar3 = thunk_FUN_001446d4(param_1,&local_64,4);
    if ((int)uVar3 != 0) {
      if ((int)uVar3 != 4) {
        return uVar3;
      }
      if (DAT_04c57cb4 != '\x01') {
        iVar2 = FUN_00147178();
        FUN_0014d430(param_1,"WARNING: Using weak random seed\n");
        DAT_04c57cb0 = (extraout_w1 + iVar2 + DAT_04c57cb0) * -0x7f82434b + 0xa70427df;
        DAT_04c57cb4 = '\x01';
      }
      DAT_04c57cb0 = DAT_04c57cb0 * 0x41c64e6d + 0x3039;
      local_64 = DAT_04c57cb0 >> 0x10 | DAT_04c57cb0 * 0x10000;
    }
    uVar4 = uVar1;
    puVar5 = param_2;
    do {
      param_2 = puVar5 + 1;
      *puVar5 = (char)local_64;
      uVar4 = uVar4 - 1;
      local_64 = local_64 >> 8;
      puVar5 = param_2;
    } while (uVar4 != 0);
    param_3 = param_3 - uVar1;
  } while (param_3 != 0);
  return 0;
}

