
void FUN_01802228(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined8 *param_5,undefined2 *param_6,undefined2 *param_7,uint param_8,
                 uint param_9,undefined8 *param_10,undefined2 *param_11,byte param_12,
                 undefined4 param_13,undefined2 param_14,undefined1 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,uint param_19)

{
  uint uVar1;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined2 local_9c;
  undefined2 local_9a;
  undefined2 local_98;
  undefined4 local_94;
  undefined2 local_90;
  undefined1 local_8e;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  local_b0 = 0;
  local_b8 = 0xfffe00000000;
  local_7c = param_9;
  FUN_0277d4ac((long)&local_b8 + 4);
  local_ac = 0xfffe;
  FUN_0277d4ac(&local_ac);
  local_a4 = 0xfffe;
  FUN_0277d4ac(&local_a4);
  local_b0 = param_4[1];
  local_94 = param_13;
  local_90 = param_14;
  local_ac = *param_5;
  local_a4 = *param_10;
  local_9c = *param_6;
  local_98 = *param_7;
  local_9a = *param_11;
  local_8e = param_15;
  local_88 = param_16;
  uStack_84 = param_17;
  local_80 = param_18;
  local_68 = 0;
  local_62 = 0;
  uVar1 = 0x400;
  if ((param_8 & 1) == 0) {
    uVar1 = 0;
  }
  local_b8 = CONCAT44(*param_4,uVar1 | (param_19 & 0xffff) << 0xb |
                               (uint)param_12 | (local_7c & 3) << 8);
  local_64 = 0xff00;
  if (-1 < DAT_05295d98) {
    local_bc = param_3;
    local_8c = param_1;
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_05295d98,&local_68,&local_bc,0x40,0);
  }
  return;
}

