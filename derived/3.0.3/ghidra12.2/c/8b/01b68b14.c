
undefined8 FUN_01b68b14(undefined8 param_1,byte *param_2)

{
  undefined8 uVar1;
  long lVar2;
  char local_2c [4];
  long local_28;
  
  lVar2 = *(long *)PTR_DAT_04bb32e8;
  local_28 = *(long *)(lVar2 + 0x20) / 1000000000 + *(long *)(lVar2 + 8) +
             (((*(long *)(lVar2 + 0x10) + (long)*(int *)(lVar2 + 0x38)) - *(long *)(lVar2 + 8)) *
             1000000000) / 1000000000;
  local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
  uVar1 = FUN_02811460(param_1,&local_28,local_2c);
  if ((local_2c[0] != '\0') && (*param_2 < 8)) {
    local_28 = CONCAT71(local_28._1_7_,*param_2);
    FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_28,1);
    FUN_01b675a0();
  }
  return uVar1;
}

