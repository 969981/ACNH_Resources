
void FUN_020ed39c(undefined1 param_1,undefined1 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined2 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  undefined4 uStack_40;
  uint3 local_3c;
  undefined1 uStack_39;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  local_68 = 0xff;
  local_64 = 0xfffe;
  FUN_0277d4ac(&local_64);
  local_64 = *param_3;
  local_68 = CONCAT11(param_2,param_1);
  if (*(int *)(param_3 + 1) == 0) {
    uVar1 = 0;
    local_5c = 0;
    local_54 = 0;
    local_4c = 0;
  }
  else {
    local_5c = param_3[1];
    local_54 = param_3[2];
    local_4c = param_3[3];
    uVar1 = *(undefined4 *)(param_3 + 4);
  }
  local_38 = 0;
  local_32 = 0;
  _local_44 = CONCAT44(*(undefined4 *)((long)param_3 + 0x24),uVar1);
  _local_3c = CONCAT13(*(undefined1 *)((long)param_3 + 0x2b),(uint3)*(ushort *)(param_3 + 5));
  local_34 = 0xff00;
  if (-1 < DAT_053d0b90) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0b90,&local_38,&local_68,0x30,0);
  }
  return;
}

