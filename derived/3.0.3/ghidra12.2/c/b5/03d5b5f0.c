
long FUN_03d5b5f0(long param_1)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar8 == 0) {
    uVar6 = nn::os::GetCurrentCoreNumber();
  }
  else {
    uVar6 = (int)lVar8 - 1;
  }
  uVar13 = *(uint *)(param_1 + 0x850);
  uVar12 = uVar13 >> 8 & 0xff;
  if (uVar12 != 0) {
    lVar8 = 0;
    uVar11 = 0;
    puVar1 = (uint *)(param_1 + 0x850);
    lVar5 = DAT_05ae7888 / 1000000;
    do {
      lVar10 = *(long *)(param_1 + 0x50 + (ulong)(uVar13 & 0xff) * 8);
      if ((lVar10 == lVar8) && (uVar13 >> 0x14 == uVar11)) {
        return 0;
      }
      uVar4 = uVar13 >> 0x10 & 0xf;
      if (uVar4 == 0xf) {
        uVar4 = uVar13 & 0xffff | (uVar13 >> 0x10 & 0xfff0 | uVar6 & 0xf) << 0x10;
        do {
          if (uVar13 != *puVar1) goto LAB_03d5b6a4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar9 = FUN_03d5a9e0(lVar10);
        if ((uVar9 & 1) == 0) {
          *(long *)(param_1 + 0x50 + (ulong)(uVar13 + (uVar13 >> 8) & 0xff) * 8) = lVar10;
          DataMemoryBarrier(2,3);
          do {
            if (uVar4 != *puVar1) break;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar13 & 0xfff00000 | uVar12 << 8 | uVar13 + 1 & 0xff | 0xf0000;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        else {
          do {
            if (uVar4 != *puVar1) break;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = (uVar13 & 0xfff00000 | uVar13 + 0xff00 & 0xff00 | uVar13 + 1 & 0xff) +
                        0x1f0000;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if ((uVar9 & 1) != 0) {
          return lVar10;
        }
        if (lVar8 == 0 || uVar13 >> 0x14 != uVar11) {
          lVar8 = lVar10;
          uVar11 = uVar13 >> 0x14;
        }
      }
      else if (uVar4 == (uVar6 & 0xffff)) {
        if (((DAT_05af7f20 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_05af7f20), iVar7 != 0)) {
          DAT_05af7f18 = lVar5;
          __cxa_guard_release(&DAT_05af7f20);
        }
        nn::os::ConvertToTimeSpan(DAT_05af7f18);
        nn::os::SleepThread();
      }
LAB_03d5b6a4:
      uVar13 = *puVar1;
      uVar12 = uVar13 >> 8 & 0xff;
    } while (uVar12 != 0);
  }
  return 0;
}

