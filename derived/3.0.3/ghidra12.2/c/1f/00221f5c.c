
void FUN_00221f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                 void *param_5,uint param_6,int *param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_2b0;
  ErrorResultVariant aEStack_2ac [12];
  undefined4 local_2a0;
  ErrorResultVariant aEStack_29c [172];
  undefined4 local_1f0 [2];
  undefined4 *local_1e8;
  undefined *puStack_1e0;
  undefined4 local_64;
  
  if (*param_7 != 1) {
    if (*param_7 == 0) {
      local_2a0 = 0;
    }
    else {
      local_2a0 = 0x10c07;
    }
LAB_00222064:
    local_2b0 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_29c,(Result *)&local_2b0);
    FUN_002296c4(param_1,&local_2a0);
    return;
  }
  local_1f0[0] = 0;
  if (param_7[8] == 0x10) {
    uVar2 = *(undefined8 *)(param_7 + 2);
    iVar1 = param_7[4];
    FUN_00222150(&local_2a0,*(undefined8 *)(param_7 + 6),0x10,1);
    puStack_1e0 = PTR_LAB_04bccf38;
    local_1e8 = &local_2a0;
    FUN_00222d68(local_1f0);
    local_1f0[0] = 1;
    FUN_00222790(local_1f0,uVar2,iVar1);
    if ((param_4 & 0xf) == 0) {
      FUN_00222bb0(local_1f0,param_2,param_4,param_3,param_4);
      if ((param_5 != (void *)0x0) && (param_6 < 0x11)) {
        FUN_00222cb8(local_1f0,&local_2b0,0x10);
        iVar1 = memcmp(param_5,&local_2b0,(ulong)param_6);
        if (iVar1 != 0) {
          local_2b0 = 0x2c03;
          goto LAB_00222024;
        }
      }
      FUN_00222778(local_1f0);
      FUN_00222140(&local_2a0);
      local_2a0 = 0;
      goto LAB_00222064;
    }
  }
  local_2b0 = 0x10c07;
LAB_00222024:
  local_64 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2ac,(Result *)&local_64);
  FUN_002296c4(param_1,&local_2b0);
  FUN_00222778(local_1f0);
  FUN_00222140(&local_2a0);
  return;
}

