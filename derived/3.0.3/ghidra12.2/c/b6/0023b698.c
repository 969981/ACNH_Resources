
void FUN_0023b698(undefined8 param_1,long param_2,void *param_3,int param_4,void *param_5,
                 int param_6)

{
  undefined4 *puVar1;
  undefined4 local_180;
  ErrorResultVariant aEStack_17c [12];
  undefined4 local_170;
  ErrorResultVariant aEStack_16c [132];
  undefined1 auStack_e8 [32];
  undefined *local_c8 [15];
  undefined1 auStack_50 [31];
  char local_31;
  undefined4 local_24;
  
  puVar1 = &local_180;
  if ((((param_6 == 0x10) && (param_3 != (void *)0x0)) && (param_4 == 0x20)) &&
     (param_5 != (void *)0x0)) {
    if (*(char *)(param_2 + 0x13a0) == '\0') {
      local_170 = 0x10c08;
    }
    else {
      if (*(int *)(param_2 + 0x13a4) != 0) {
        memcpy(auStack_50,param_3,0x20);
        local_31 = local_31 + '\x01';
        local_c8[0] = PTR_DAT_04bccff8 + 0x10;
        FUN_0022c538(&local_170);
        FUN_0022c540(&local_170,local_c8,param_2 + 0x13a8,0x10);
        FUN_0022c710(&local_170,auStack_e8,auStack_50,0x20);
        memcpy(param_5,auStack_e8,0x10);
        local_180 = 0;
        local_24 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_17c,(Result *)&local_24);
        goto LAB_0023b7a0;
      }
      local_170 = 0;
    }
  }
  else {
    local_170 = 0x10c07;
  }
  local_c8[0] = (undefined *)((ulong)local_c8[0] & 0xffffffff00000000);
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_16c,(Result *)local_c8);
  puVar1 = &local_170;
LAB_0023b7a0:
  FUN_002296c4(param_1,puVar1);
  return;
}

