
void FUN_00493530(undefined8 *param_1,long param_2,byte param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_FUN_04866a20;
  param_1[1] = 0;
  param_1[2] = 0x8000000000000000;
  FUN_0049a8f0(param_1 + 3);
  param_1[0x2c] = 0;
  param_1[0x2d] = 0x8000000000000000;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0x8000000000000000;
  param_1[0x30] = 0;
  param_1[0x31] = 0x8000000000000000;
  param_1[0x32] = 0;
  param_1[0x33] = 0x8000000000000000;
  param_1[0x34] = 0;
  param_1[0x35] = 0x8000000000000000;
  FUN_0043d3a0(param_1 + 0x36);
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x39] = 0;
  *(undefined8 *)((long)param_1 + 500) = 0x80000000;
  FUN_0049be30(param_1 + 0x40,0,0);
  param_1[0x41] = param_1 + 3;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x43] = param_2;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 8;
    iVar3 = 0x10;
    if ((param_3 & 1) == 0) {
      iVar3 = 0;
    }
  }
  else {
    uVar2 = FUN_004a05c0(param_2);
    *(undefined4 *)(param_1 + 0x44) = uVar2;
    if ((param_3 & 1) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004a05d0(param_2);
      iVar3 = iVar3 << 2;
    }
  }
  puVar1 = param_1 + 0x45;
  *(int *)((long)param_1 + 0x224) = iVar3;
  FUN_00461750(puVar1);
  if ((param_4 & 1) == 0) {
    param_2 = 0;
  }
  *(byte *)(param_1 + 0x52) = param_3 & 1;
  *(undefined1 *)((long)param_1 + 0x291) = 0;
  param_1[0x53] = param_2;
  FUN_00450fe0(param_1 + 0x54,0xffffffffffffffff);
  FUN_004516a0(param_1 + 0x59);
  param_1[0x5d] = 0;
  param_1[0x5e] = 0x8000000000000000;
  FUN_0043d3a0(param_1 + 0x5f);
  FUN_004547b0(param_1 + 0x61,PTR_DAT_048607b8,0x4000);
  param_1[0x6c] = 0;
  param_1[0x6d] = 0xffffffff;
  FUN_00460560(puVar1);
  uVar4 = FUN_00438810(8);
  FUN_00460ee0();
  FUN_004619b0(puVar1,uVar4);
  *(undefined2 *)(param_1 + 0x45) = 0x100;
  *(undefined1 *)((long)param_1 + 0x22d) = 0;
  return;
}

