
void FUN_020f1e2c(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,float *param_6,undefined8 *param_7)

{
  undefined8 local_64;
  undefined2 local_5c;
  undefined8 local_58;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  local_5c = 0;
  local_58 = 0xfffe;
  local_64 = 0xffff00ffff;
  FUN_0277d4ac(&local_58);
  local_58 = *param_7;
  local_38 = 0;
  local_32 = 0;
  local_34 = 0xff00;
  local_64 = CONCAT26((short)(int)*param_6,
                      CONCAT15((char)(int)param_6[1],
                               CONCAT14(param_5,CONCAT13(param_4,CONCAT12(param_3,CONCAT11(param_2,
                                                  param_1))))));
  local_5c = (undefined2)(int)param_6[2];
  if (-1 < DAT_053d1610) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d1610,&local_38,&local_64,0x14,0);
  }
  return;
}

