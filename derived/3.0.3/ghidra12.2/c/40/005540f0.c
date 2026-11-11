
void FUN_005540f0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar2 = 0;
  do {
    lVar1 = param_1 + lVar2;
    uStack_38 = 0;
    local_40 = 0;
    FUN_004d4650(lVar1,&local_40);
    uStack_38 = 0;
    local_40 = 0;
    FUN_004d4650(lVar1 + 0x80,&local_40);
    uStack_38 = 0;
    local_40 = 0;
    FUN_004d4650(lVar1 + 0x100,&local_40);
    uStack_38 = 0;
    local_40 = 0;
    FUN_004d4650(lVar1 + 0x180,&local_40);
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x80);
  return;
}

