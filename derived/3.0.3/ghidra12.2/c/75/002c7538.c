
void FUN_002c7538(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_188 [128];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined2 local_f4;
  int local_f0 [4];
  undefined *local_e0;
  undefined1 auStack_d8 [152];
  
  FUN_002cb2e8(&local_e0);
  FUN_002c6d60(local_f0,param_1,&local_e0);
  if (local_f0[0] == 0) {
    lVar1 = FUN_002c5fd0(param_1 + 0x270,param_2);
    if (lVar1 == 0) {
      FUN_002b3fa8(auStack_188);
      local_108 = 0;
      uStack_100 = 0;
      FUN_002b415c(auStack_188,param_2);
      FUN_002282f0(&uStack_100);
      local_f8 = 0;
      local_f4 = 0;
      FUN_002c5edc(param_1 + 0x270,auStack_188);
      FUN_002b4104(auStack_188);
    }
    else {
      FUN_002282f0(lVar1 + 0x88);
      *(undefined4 *)(lVar1 + 0x90) = 0;
    }
    FUN_002c7400(param_1,param_2,0);
  }
  local_e0 = PTR_DAT_04bce278 + 0x10;
  FUN_002b4104(auStack_d8);
  return;
}

