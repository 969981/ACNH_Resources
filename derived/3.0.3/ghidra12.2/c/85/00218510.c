
void FUN_00218510(undefined8 param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 local_48;
  int local_34 [4];
  undefined4 local_24;
  
  FUN_002aa97c(local_34);
  if (local_34[0] != 0) {
    FUN_002296c4(param_1,local_34);
    return;
  }
  bVar2 = FUN_002aaa44(param_2);
  if (bVar2 < 0x20) {
    *(undefined4 *)(param_2 + 0x50) = 0;
    *(undefined1 *)(param_2 + 0x55) = 0;
    local_48 = 0;
    FUN_002282f0(&local_48);
    uVar1 = local_48;
    *(undefined1 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    local_48 = local_48 & 0xffffffff00000000;
    *(ulong *)(param_2 + 0x58) = uVar1;
  }
  else {
    local_48 = CONCAT44(local_48._4_4_,0x10c08);
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_48 + 4),(Result *)&local_24);
  FUN_002296c4(param_1,&local_48);
  return;
}

