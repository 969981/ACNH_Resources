
void FUN_01435300(long *param_1)

{
  uint uVar1;
  long lVar2;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  byte local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  if ((*(char *)((long)param_1 + 0x309) != (char)param_1[0x61]) &&
     (uVar1 = (**(code **)(*param_1 + 0x198))(), 1 < uVar1)) {
    lVar2 = param_1[0x5d];
    local_8 = *(undefined4 *)(lVar2 + 0x2d0);
    local_3c = DAT_04c487d4;
    local_3a = (undefined1)local_8;
    local_38 = (undefined2)*(undefined4 *)(lVar2 + 0x2c8);
    local_36 = (undefined2)*(undefined4 *)(lVar2 + 0x2cc);
    FUN_01476a50(&local_8);
    local_34 = local_8;
    uStack_30 = uStack_4;
    local_2c = 1;
    local_24 = (**(code **)(*param_1 + 0x1a0))(param_1,1);
    local_24 = local_24 & 1;
    FUN_0150b318(&local_3c);
  }
  return;
}

