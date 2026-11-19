
void FUN_03b05b60(long *param_1,long param_2)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  puVar5 = PTR_DAT_04bb3508;
  lVar7 = *param_1;
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x50) == -1) {
      lVar7 = -1;
    }
    else {
      lVar8 = *(long *)PTR_DAT_04bc1010;
      uVar4 = *(int *)(lVar7 + 0x50) - (uint)*(ushort *)(lVar8 + 0x3da);
      if (*(uint *)(lVar8 + 0x368) <= uVar4) {
        uVar4 = 0;
      }
      puVar1 = (uint *)(*(long *)(lVar8 + 0x370) + (long)(int)uVar4 * 0x20 + 4);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 & 0xfffffffb | 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar7 = (long)*(int *)(lVar7 + 0x50);
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (lVar8 == 0) {
      iVar6 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar6 = (int)lVar8 + -1;
    }
    if (iVar6 < *(int *)(param_2 + 0x1c0)) {
      *(long *)(*(long *)(param_2 + 0x1c8) + (long)iVar6 * 0x7d8 + 0x7a8) = lVar7;
    }
  }
  lVar7 = param_1[1];
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x50) == -1) {
      lVar7 = -1;
    }
    else {
      lVar8 = *(long *)PTR_DAT_04bc1010;
      uVar4 = *(int *)(lVar7 + 0x50) - (uint)*(ushort *)(lVar8 + 0x3da);
      if (*(uint *)(lVar8 + 0x368) <= uVar4) {
        uVar4 = 0;
      }
      puVar1 = (uint *)(*(long *)(lVar8 + 0x370) + (long)(int)uVar4 * 0x20 + 4);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 & 0xfffffffb | 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar7 = (long)*(int *)(lVar7 + 0x50);
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (lVar8 == 0) {
      iVar6 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar6 = (int)lVar8 + -1;
    }
    if (iVar6 < *(int *)(param_2 + 0x1c0)) {
      *(long *)(*(long *)(param_2 + 0x1c8) + (long)iVar6 * 0x7d8 + 0x7b0) = lVar7;
    }
  }
  return;
}

