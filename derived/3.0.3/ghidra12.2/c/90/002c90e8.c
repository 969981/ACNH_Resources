
void FUN_002c90e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_c8 [128];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  
  lVar1 = FUN_002c5fd0(param_1 + 0x270);
  if (lVar1 == 0) {
    FUN_002b3fa8(auStack_c8);
    local_48 = 0;
    uStack_40 = 0;
    FUN_002b415c(auStack_c8,param_2);
    FUN_002282f0(&uStack_40);
    local_38 = 0;
    local_34 = 0;
    FUN_002c5edc(param_1 + 0x270,auStack_c8);
    FUN_002b4104(auStack_c8);
  }
  else {
    uVar2 = FUN_002b44c4(param_3);
    if ((uVar2 & 1) == 0) {
      FUN_002282f0(lVar1 + 0x80);
    }
    else {
      FUN_002282f0(lVar1 + 0x88);
      *(undefined4 *)(lVar1 + 0x90) = 0;
    }
  }
  FUN_002c37a0(*(undefined8 *)(param_1 + 0x1868),param_2,param_3,0,0);
  return;
}

