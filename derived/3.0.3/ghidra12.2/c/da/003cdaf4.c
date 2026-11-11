
uint FUN_003cdaf4(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  char *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  long lStack_58;
  
  if (*(char *)(param_1 + 0x219) != '\0') {
    *(undefined1 *)(param_1 + 0x218) = 1;
    FUN_003c98bc();
    FUN_003c9e00();
    thunk_FUN_003cb0a4(param_1 + 8);
    FUN_003cb18c(param_1 + 8);
    *(undefined1 *)(param_1 + 0x219) = 0;
  }
  *(undefined1 *)(param_1 + 0x218) = 0;
  FUN_003cb0ac(&local_88);
  local_88 = "nn::atk::detail::TaskThread";
  local_60 = 0;
  local_80 = param_3;
  uStack_78 = param_4;
  local_70 = param_5;
  uStack_6c = param_6;
  local_68 = param_2;
  uStack_64 = param_7;
  lStack_58 = param_1;
  uVar1 = FUN_003cb0d8(param_1 + 8,&local_88);
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x21c) = param_7;
    *(undefined1 *)(param_1 + 0x219) = 1;
  }
  return uVar1 & 1;
}

