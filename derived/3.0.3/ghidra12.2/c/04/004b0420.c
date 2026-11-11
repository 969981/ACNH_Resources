
void FUN_004b0420(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  
  local_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  if ((param_2 & 1) == 0) {
    FUN_004ae4c0(*param_1,&DAT_0407ebb1);
  }
  uStack_58 = 0xffffff80ffffffd8;
  local_70 = (undefined1 *)register0x00000008;
  ppuStack_68 = &local_70;
  local_60 = auStack_a0;
  FUN_004af9c0(*param_1,param_3,&local_70);
  return;
}

