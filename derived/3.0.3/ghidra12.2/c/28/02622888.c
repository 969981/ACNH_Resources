
undefined8 FUN_02622888(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_28;
  
  local_28 = 0xfffe;
  FUN_0277d4ac(&local_28);
  FUN_02621c70(param_1,&local_28,param_2);
  iVar1 = FUN_0277d6c4(&local_28);
  if ((iVar1 == 0x1c2b) || (iVar1 = FUN_0277d6c4(&local_28), iVar1 == 0x142e)) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_0277d6c4(&local_28);
    if (iVar1 < 0x3904) {
      if ((iVar1 - 0x37e4U < 0x1e) && ((1 << (ulong)(iVar1 - 0x37e4U & 0x1f) & 0x23414025U) != 0)) {
        return 1;
      }
      if ((iVar1 - 0x3647U < 8) && ((1 << (ulong)(iVar1 - 0x3647U & 0x1f) & 0xcdU) != 0)) {
        return 1;
      }
      if (iVar1 == 0x3189) {
        return 1;
      }
    }
    else if (iVar1 - 0x3904U < 7) {
      return 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}

