
void FUN_002911b0(undefined8 param_1)

{
  undefined8 local_38;
  char *pcStack_30;
  undefined4 local_24;
  
  FUN_00293820();
  if (DAT_04c60f40 == '\x01') {
    local_38 = (undefined *)CONCAT44(local_38._4_4_,0x10c02);
  }
  else {
    local_38 = PTR_DAT_04bccec0 + 0x10;
    pcStack_30 = "pia session heap";
    FUN_0021f320(0x15,0,&local_38);
    DAT_04c60f40 = '\x01';
    FUN_0022957c(&local_38,0x15);
    local_38 = (undefined *)((ulong)local_38 & 0xffffffff00000000);
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_38 + 4),(Result *)&local_24);
  FUN_002296c4(param_1,&local_38);
  return;
}

