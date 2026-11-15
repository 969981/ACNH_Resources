
void FUN_020edee4(undefined1 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 local_80 [4];
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  local_80[0] = 0xff;
  local_7c = 0xfffe;
  FUN_0277d4ac(&local_7c);
  local_7c = *param_2;
  if (*(int *)(param_2 + 1) == 0) {
    local_5c = 0;
    local_74 = 0;
    local_6c = 0;
    local_64 = 0;
  }
  else {
    local_74 = param_2[1];
    local_6c = param_2[2];
    local_64 = param_2[3];
    local_5c = *(undefined4 *)(param_2 + 4);
  }
  if (*(int *)((long)param_2 + 0x24) == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    local_54 = 0;
    uStack_50 = 0;
    local_4c = 0;
    uStack_48 = 0;
    local_44 = 0;
  }
  else {
    uVar1 = *(undefined8 *)((long)param_2 + 0x24);
    uStack_58 = (undefined4)uVar1;
    local_54 = (undefined4)((ulong)uVar1 >> 0x20);
    uStack_50 = (undefined4)*(undefined8 *)((long)param_2 + 0x2c);
    local_4c = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0x2c) >> 0x20);
    uStack_40 = *(undefined4 *)((long)param_2 + 0x3c);
    uStack_48 = (undefined4)*(undefined8 *)((long)param_2 + 0x34);
    local_44 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0x34) >> 0x20);
  }
  local_3c = *(undefined4 *)(param_2 + 8);
  uStack_38 = *(undefined4 *)((long)param_2 + 0x44);
  local_18 = 0;
  local_34 = *(undefined1 *)(param_2 + 9);
  local_12 = 0;
  local_14 = 0xff00;
  if (-1 < DAT_053d0cb0) {
    local_80[0] = param_1;
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0cb0,&local_18,local_80,0x50,0);
  }
  return;
}

