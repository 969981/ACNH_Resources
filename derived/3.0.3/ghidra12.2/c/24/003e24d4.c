
ulong FUN_003e24d4(int param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_8;
  
  local_8 = FUN_003cd670();
  lVar2 = FUN_003c0150(&local_8);
  lVar1 = 0x11d40;
  if (lVar2 != 0) {
    lVar1 = lVar2 * 2 + 0x11d70;
  }
  return lVar1 * param_1 + 0x3fU & 0xffffffffffffffc0;
}

