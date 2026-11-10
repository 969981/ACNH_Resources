
void FUN_0028a330(ulong param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar5 = DAT_04c60f30;
  puVar4 = PTR_DAT_04bcd020;
  if (DAT_04c60f30 == 0) {
    return;
  }
  if (*(long *)(DAT_04c60f30 + 0x80) != 0) {
    puVar1 = (ulong *)(*(long *)(DAT_04c60f30 + 0x80) + 0xb0);
    lVar6 = *(long *)PTR_DAT_04bcd020;
    uVar7 = *puVar1;
    while( true ) {
      while (uVar7 != param_1) {
        if ((uVar7 & 0xfffffffe) != param_1) goto LAB_0028a3bc;
        FUN_00290904(lVar6 / 100000);
        uVar7 = *puVar1;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') break;
      uVar7 = *puVar1;
    }
  }
LAB_0028a3bc:
  lVar6 = lVar5 + 0x40;
  FUN_00290438(lVar6);
  lVar8 = *(long *)(lVar5 + 0x30);
  if (lVar8 != lVar5 + 0x28) {
    lVar9 = *(long *)puVar4;
    do {
      puVar1 = (ulong *)(*(long *)(lVar8 + 0x10) + 0xb0);
      do {
        if (*puVar1 != param_1) {
          if ((*puVar1 & 0xfffffffe) == param_1) {
            FUN_00290440(lVar6);
            FUN_00290904(lVar9 / 100000);
            FUN_00290438(lVar6);
            lVar8 = *(long *)(lVar5 + 0x30);
            goto joined_r0x0028a44c;
          }
          break;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar8 = *(long *)(lVar8 + 8);
joined_r0x0028a44c:
    } while (lVar8 != lVar5 + 0x28);
  }
  FUN_00290440(lVar6);
  return;
}

