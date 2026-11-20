
void FUN_03d5b4a0(long param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar7 == 0) {
    uVar5 = nn::os::GetCurrentCoreNumber();
  }
  else {
    uVar5 = (int)lVar7 - 1;
  }
  puVar1 = (uint *)(param_1 + 0x850);
  lVar7 = *(long *)PTR_DAT_04bb29d0;
  do {
    while( true ) {
      uVar2 = *puVar1;
      uVar8 = uVar2 >> 0x10 & 0xf;
      if (uVar8 == 0xf) break;
      if (uVar8 == (uVar5 & 0xff)) {
        if (((DAT_05af7f10 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05af7f10), iVar6 != 0)) {
          DAT_05af7f08 = lVar7 / 1000000;
          __cxa_guard_release(&DAT_05af7f10);
        }
        nn::os::ConvertToTimeSpan(DAT_05af7f08);
        nn::os::SleepThread();
      }
    }
    uVar8 = uVar2 & 0xffff | (uVar2 >> 0x10 & 0xfff0 | uVar5 & 0xf) << 0x10;
    while (uVar2 == *puVar1) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        *(undefined8 *)(param_1 + (ulong)(uVar2 + (uVar2 >> 8) & 0xff) * 8 + 0x50) = param_2;
        DataMemoryBarrier(2,3);
        do {
          if (uVar8 != *puVar1) {
            return;
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = (uVar2 & 0xfff00000) + 0x1f0000 | uVar2 + 0x100 & 0xff00 | uVar2 & 0xff;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        return;
      }
    }
  } while( true );
}

