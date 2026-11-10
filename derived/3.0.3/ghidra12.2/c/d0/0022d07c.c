
void FUN_0022d07c(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_40 [4];
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  
  uVar1 = FUN_0022cc50();
  if ((uVar1 & 1) == 0) {
    local_30 = 0x10c0c;
  }
  else {
    uVar1 = FUN_0022cd00();
    if ((uVar1 & 1) == 0) {
      local_30 = 0x10c08;
    }
    else if (DAT_04c603a0 == (undefined8 *)0x0) {
      uVar2 = FUN_0021f454();
      puVar3 = (undefined8 *)FUN_00285d60(0x40,uVar2,8);
      if (puVar3 == (undefined8 *)0x0) {
        local_30 = 0x10c01;
        DAT_04c603a8 = 0;
      }
      else {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        *(undefined8 **)PTR_DAT_04bcd090 = puVar3;
        FUN_0022d204();
        local_30 = 0;
        local_40[0] = 0;
        DAT_04c603a0 = puVar3;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)local_40);
        FUN_002296c4(local_40,&local_30);
        local_30 = 0;
      }
    }
    else {
      local_30 = 0x10c0f;
    }
  }
  local_40[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)local_40);
  FUN_002296c4(param_1,&local_30);
  return;
}

