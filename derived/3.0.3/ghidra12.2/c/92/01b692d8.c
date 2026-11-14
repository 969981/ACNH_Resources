
undefined8 FUN_01b692d8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  char local_24 [4];
  long local_8;
  
  lVar2 = *(long *)PTR_DAT_04bb32e8;
  local_8 = *(long *)(lVar2 + 0x20) / 1000000000 + *(long *)(lVar2 + 8) +
            (((*(long *)(lVar2 + 0x10) + (long)*(int *)(lVar2 + 0x38)) - *(long *)(lVar2 + 8)) *
            1000000000) / 1000000000;
  local_8 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_8);
  uVar1 = FUN_0280f530(param_1,&local_8,local_24);
  if (local_24[0] != '\0') {
    FUN_0266f010(uVar1,&local_8);
  }
  return uVar1;
}

