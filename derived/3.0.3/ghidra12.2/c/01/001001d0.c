
undefined8 FUN_001001d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if ((param_3 != 0) &&
     (uVar4 = ((long)PTR_DAT_04bb1e60 - (long)PTR_DAT_04bb1e58 >> 3) * -0x5555555555555555,
     DAT_04c57a00 < uVar4)) {
    do {
      uVar3 = DAT_04c57a00;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x4c57a00,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_04c57a00 = DAT_04c57a00 + 1;
      }
    } while (cVar1 != '\0');
    if (uVar3 < uVar4) {
      puVar5 = (undefined8 *)(PTR_DAT_04bb1e58 + uVar3 * 0x18);
      puVar5[2] = param_3;
      *puVar5 = param_1;
      puVar5[1] = param_2;
      return 0;
    }
  }
  return 0xffffffff;
}

