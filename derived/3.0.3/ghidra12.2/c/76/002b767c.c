
void FUN_002b767c(undefined8 param_1,long param_2,int *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_b90 [16];
  undefined8 local_b80;
  undefined1 local_b78;
  undefined1 local_b77;
  undefined4 local_b70;
  undefined4 local_5d0 [360];
  undefined1 auStack_28 [4];
  undefined4 local_24;
  
  if (*param_3 == 0) {
    local_5d0[0] = 0;
    local_b80 = (undefined *)CONCAT44(local_b80._4_4_,0x10c07);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_b80 + 4),(Result *)local_5d0);
    FUN_002296c4(param_1,&local_b80);
    return;
  }
  local_b70 = 0;
  local_b80 = PTR_DAT_04bce170 + 0x10;
  local_b77 = 0xff;
  local_b78 = param_4;
  FUN_002b72d8(auStack_b90,&local_b80,local_5d0,&local_24,0x5a0);
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  memcpy(auStack_28,param_3,4);
  FUN_002b1020(param_1,uVar1,auStack_28,local_5d0,local_24,0);
  return;
}

