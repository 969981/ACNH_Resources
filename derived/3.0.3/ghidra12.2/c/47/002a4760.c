
void FUN_002a4760(void)

{
  undefined4 local_30 [4];
  undefined4 local_20;
  ErrorResultVariant aEStack_1c [12];
  
  local_20 = 0;
  local_30[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_1c,(Result *)local_30);
  if (DAT_04c60f58 == '\x01') {
    if (DAT_04c60f59 == '\x01') {
      FUN_002a4800(local_30);
      FUN_00229780(&local_20,local_30);
    }
    if (DAT_04c61168 != 0) {
      FUN_002b95d0();
    }
    FUN_0021f39c(0xe);
    DAT_04c60f58 = '\0';
    FUN_0022962c(local_30,0xe);
    FUN_00229780(&local_20,local_30);
  }
  return;
}

