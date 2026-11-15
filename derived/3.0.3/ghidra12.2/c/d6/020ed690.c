
void FUN_020ed690(undefined1 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 local_60 [4];
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 uStack_38;
  uint3 local_34;
  undefined1 uStack_31;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  local_60[0] = 0xff;
  local_5c = 0xfffe;
  FUN_0277d4ac(&local_5c);
  local_5c = *param_2;
  if (*(int *)(param_2 + 1) == 0) {
    uVar1 = 0;
    local_54 = 0;
    local_4c = 0;
    local_44 = 0;
  }
  else {
    local_54 = param_2[1];
    local_4c = param_2[2];
    local_44 = param_2[3];
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  local_18 = 0;
  local_12 = 0;
  _local_3c = CONCAT44(*(undefined4 *)((long)param_2 + 0x24),uVar1);
  _local_34 = CONCAT13(*(undefined1 *)((long)param_2 + 0x2b),(uint3)*(ushort *)(param_2 + 5));
  local_14 = 0xff00;
  if (-1 < DAT_053d0bc0) {
    local_60[0] = param_1;
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0bc0,&local_18,local_60,0x30,0);
  }
  return;
}

