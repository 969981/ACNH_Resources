
void FUN_03af0010(long param_1,long param_2,ulong param_3,long param_4)

{
  uint *puVar1;
  char cVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long local_58;
  long local_38;
  
  if (param_4 != 0) {
    if (*(int *)(param_4 + 0x50) == -1) {
      lVar9 = -1;
    }
    else {
      uVar6 = *(int *)(param_4 + 0x50) - (uint)*(ushort *)(DAT_05ae78f0 + 0x3da);
      if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar6) {
        uVar6 = 0;
      }
      puVar1 = (uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar6 * 0x20 + 4);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 | 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar9 = (long)*(int *)(param_4 + 0x50);
    }
    puVar1 = (uint *)(param_4 + 0xd4);
    do {
      uVar6 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar6 | 0x80000000;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar6 & 0x7fffffff) != 0) {
      if ((int)uVar6 < 0) {
        if ((int)*puVar1 < 0) {
          lVar8 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar8 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_0390d37c(param_4);
      }
    }
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    sVar3 = *(short *)(param_4 + 0xda);
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar8 == 0) {
      iVar7 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar7 = (int)lVar8 + -1;
    }
    lVar8 = *(long *)(*(long *)(param_2 + 0x1c8) + (long)iVar7 * 0x7d8 + 0x7b8);
    if (lVar8 != 0) {
      lVar8 = lVar8 + (param_3 & 0xffffffff);
      cVar4 = *(char *)(lVar8 + 0x16);
      cVar2 = *(char *)(lVar8 + 0x53);
      local_58 = (long)sVar3;
      local_38 = lVar9;
      if (cVar4 != -1) {
        FUN_00348c64(param_1 + 8,(long)cVar4,0,&local_38,&local_58);
      }
      iVar7 = (int)cVar2;
      if (iVar7 != -1) {
        FUN_00348c64(param_1 + 8,iVar7,4,&local_38,&local_58);
      }
    }
  }
  return;
}

