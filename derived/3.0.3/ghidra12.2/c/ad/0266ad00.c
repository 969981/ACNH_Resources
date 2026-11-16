
byte FUN_0266ad00(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  byte local_24 [4];
  
  if ((((*param_1 < 8) && (uVar2 = FUN_02582d8c(param_1,1), uVar2 < 8)) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0')) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d6) != '\0')) {
    local_24[0] = *param_1;
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
    lVar3 = FUN_02583354(DAT_055021a0,local_24,1);
    if (lVar3 != 0) {
      lVar5 = lVar3 + 0x194b0;
      if (*(long *)(lVar3 + 0x194b8) == 0) {
        lVar5 = *(long *)(DAT_05574040 + 0x20);
      }
      if ((*(long **)(lVar5 + 0x2c558) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar5 + 0x2c558), puVar4 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar4)();
        uVar2 = uVar2 ^ 1;
      }
      bVar1 = *(byte *)(*(long *)(lVar5 + 0x2c540) + *(long *)(lVar5 + 0x2c538)) & 1;
      if ((uVar2 & 1) != 0) {
        return bVar1;
      }
      if (*(long *)(lVar5 + 0x2c558) == 0) {
        return bVar1;
      }
      puVar4 = *(undefined8 **)(*(long *)(lVar5 + 0x2c558) + 8);
      if (puVar4 == (undefined8 *)0x0) {
        return bVar1;
      }
      (**(code **)*puVar4)();
      return bVar1;
    }
  }
  return 0;
}

