
void FUN_002a4690(undefined8 param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 local_30;
  char *pcStack_28;
  undefined4 local_14;
  
  FUN_002a6dc0();
  uVar1 = FUN_0021ee90();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0x10c08;
  }
  else {
    if (DAT_04c60f58 != '\x01') {
      local_30 = PTR_DAT_04bccec0 + 0x10;
      pcStack_28 = "pia transport heap";
      FUN_0021f320(0xe,0,&local_30);
      DAT_04c60f58 = '\x01';
      FUN_0022957c(&local_30,0xe);
      local_30 = (undefined *)((ulong)local_30 & 0xffffffff00000000);
      goto LAB_002a472c;
    }
    uVar2 = 0x10c02;
  }
  local_30 = (undefined *)CONCAT44(local_30._4_4_,uVar2);
LAB_002a472c:
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_30 + 4),(Result *)&local_14);
  FUN_002296c4(param_1,&local_30);
  return;
}

