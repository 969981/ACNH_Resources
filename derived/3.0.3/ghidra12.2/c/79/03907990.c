
byte FUN_03907990(long param_1,ulong param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  
  if ((param_2 & 1) == 0) {
    puVar1 = (uint *)(*(long *)(*(long *)(param_1 + 8) + 0x18) + 0x10);
    do {
      uVar4 = *puVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar4 | 0x80000000;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((uVar4 & 0x7fffffff) != 0) {
      if ((int)uVar4 < 0) {
        if ((int)*puVar1 < 0) {
          lVar8 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar8 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80();
      }
    }
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = 0;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  else {
    FUN_039071d0();
  }
  lVar8 = *(long *)(param_1 + 8);
  if (((*(byte *)(*(long *)(lVar8 + 0x18) + 0x1c) >> 1 & 1) == 0) ||
     (iVar2 = *(int *)(lVar8 + 0x20), iVar2 == 0)) {
    bVar7 = 1;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x28);
    iVar10 = 0;
    if ((param_2 & 1) == 0) {
      lVar9 = *(long *)PTR_DAT_04bb29d0;
      do {
        puVar1 = (uint *)(lVar8 + (long)iVar10 * 0x150 + 0x10);
        do {
          uVar4 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar4 | 0x80000000;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar4 & 0x7fffffff) != 0) {
          if ((int)uVar4 < 0) {
            while ((int)*puVar1 < 0) {
              nn::os::ConvertToTimeSpan(lVar9 / 1000000);
              nn::os::SleepThread();
            }
          }
          else {
            FUN_03907b80(lVar8 + (long)iVar10 * 0x150);
          }
        }
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar3 = *(byte *)(lVar8 + (long)iVar10 * 0x150 + 0x1c);
        bVar7 = bVar3 >> 1 & 1;
      } while (((bVar3 >> 1 & 1) != 0) && (iVar10 = iVar10 + 1, iVar2 != iVar10));
    }
    else {
      do {
        lVar9 = lVar8 + (long)iVar10 * 0x150;
        FUN_039071d0(lVar9);
        bVar3 = *(byte *)(lVar9 + 0x1c);
        bVar7 = bVar3 >> 1 & 1;
        if ((bVar3 >> 1 & 1) == 0) {
          return bVar7;
        }
        iVar10 = iVar10 + 1;
      } while (iVar2 != iVar10);
    }
  }
  return bVar7;
}

