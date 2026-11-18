
undefined8 FUN_036afd70(long param_1,ushort param_2)

{
  undefined8 uVar1;
  undefined4 local_4;
  
  if (param_2 < 0x15) {
    local_4 = FUN_006bd550(*(undefined8 *)(PTR_DAT_04bc2558 + (ulong)param_2 * 8 + 0x150),0);
    uVar1 = FUN_036c67d0(param_1 + 0x800,&local_4);
    return uVar1;
  }
  return 0;
}

