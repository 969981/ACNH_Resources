
uint FUN_023d5ec0(long param_1,byte *param_2,undefined4 param_3)

{
  uint uVar1;
  float local_3c [3];
  undefined4 local_30;
  byte local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined2 local_1c;
  undefined1 local_1a;
  undefined8 local_18;
  
  local_1c = 0x101;
  local_18 = 0x1000000000000;
  local_30 = 0x40800000;
  local_2c = *param_2;
  if (7 < local_2c) {
    local_2c = 0xff;
  }
  local_3c[1] = 0.0;
  local_1a = 0;
  local_24 = 0xbf80000000000004;
  local_3c[0] = ((float)*(int *)(param_1 + 0x10) * 5.0 + (float)*(int *)(param_1 + 0x20) * 5.0 + 5.0
                ) * 0.5;
  local_3c[2] = ((float)*(int *)(param_1 + 0x14) * 5.0 + (float)*(int *)(param_1 + 0x24) * 5.0 + 5.0
                ) * 0.5;
  local_28 = param_3;
  uVar1 = FUN_0251fad0(local_3c,0);
  return uVar1 & 1;
}

