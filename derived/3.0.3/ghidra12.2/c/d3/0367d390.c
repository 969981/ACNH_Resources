
undefined8 FUN_0367d390(long param_1)

{
  long lVar1;
  undefined8 local_18;
  
  if (*(long *)(param_1 + 0x288) == 0) {
    local_18 = *(undefined8 *)(param_1 + 0x280);
    FUN_04002450(&local_18,3);
  }
  lVar1 = DAT_05694df8;
  if (DAT_05694df8 != 0) {
    *(undefined4 *)(DAT_05694df8 + 0x10) = 2;
    lVar1 = *(long *)(lVar1 + 8);
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x338) = 0x1e;
      *(undefined4 *)(lVar1 + 800) = 0x1e;
      *(undefined4 *)(lVar1 + 0x33c) = *(undefined4 *)(lVar1 + 0x324);
      *(undefined4 *)(lVar1 + 0x344) = *(undefined4 *)(lVar1 + 0x32c);
      *(undefined4 *)(lVar1 + 0x348) = *(undefined4 *)(lVar1 + 0x330);
      *(undefined4 *)(lVar1 + 0x340) = *(undefined4 *)(lVar1 + 0x328);
      *(undefined2 *)(lVar1 + 0x34c) = *(undefined2 *)(lVar1 + 0x334);
    }
  }
  return 0;
}

