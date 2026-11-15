
undefined4
FUN_0226955c(byte *param_1,int *param_2,undefined8 *param_3,undefined4 *param_4,undefined1 param_5,
            undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte local_48 [4];
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined4 local_14;
  
  local_48[0] = *param_1;
  local_44 = *param_3;
  local_3c = *(undefined4 *)(param_3 + 1);
  if (7 < local_48[0]) {
    local_48[0] = 0xff;
  }
  uStack_38 = *param_4;
  local_34 = param_5;
  uVar1 = FUN_02269600(local_48);
  uVar2 = DAT_04c9a0c8;
  if (*param_2 == 0) {
    local_14 = 1;
    uVar2 = FUN_02269600(local_48,&local_14);
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = uVar2;
  }
  return uVar1;
}

