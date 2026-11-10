
void FUN_0023e02c(undefined8 param_1,long param_2,long param_3,int param_4,void *param_5,int param_6
                 )

{
  undefined4 *puVar1;
  undefined4 local_168;
  ErrorResultVariant aEStack_164 [12];
  undefined4 local_158;
  ErrorResultVariant aEStack_154 [132];
  undefined1 auStack_d0 [32];
  undefined *local_b0 [15];
  undefined4 local_34;
  
  if ((((param_6 == 0x10) && (param_3 != 0)) && (param_4 == 0x100)) && (param_5 != (void *)0x0)) {
    if (*(int *)(param_2 + 0x13a4) != 0) {
      local_b0[0] = PTR_DAT_04bccff8 + 0x10;
      FUN_0022c538(&local_158);
      FUN_0022c540(&local_158,local_b0,param_2 + 0x13a8,0x10);
      FUN_0022c710(&local_158,auStack_d0,param_3,0x100);
      memcpy(param_5,auStack_d0,0x10);
      local_168 = 0;
      local_34 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_164,(Result *)&local_34);
      puVar1 = &local_168;
      goto LAB_0023e10c;
    }
    local_158 = 0;
  }
  else {
    local_158 = 0x10c07;
  }
  local_b0[0] = (undefined *)((ulong)local_b0[0] & 0xffffffff00000000);
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_154,(Result *)local_b0);
  puVar1 = &local_158;
LAB_0023e10c:
  FUN_002296c4(param_1,puVar1);
  return;
}

