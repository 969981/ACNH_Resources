
long FUN_0396fb50(long param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  byte bVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar6 == 0) {
    iVar4 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar4 = (int)lVar6 + -1;
  }
  lVar6 = *(long *)(param_1 + 0x108);
  if (*(uint *)(param_1 + 0x100) <= param_2) {
    param_2 = 0;
  }
  lVar10 = lVar6 + (long)(int)param_2 * 0x398;
  uVar11 = *(undefined8 *)(*(long *)(lVar10 + 0x30) + 0xb8);
  uVar7 = (*DAT_04c62820)(uVar11);
  *(undefined8 *)(lVar10 + 0x250) = uVar7;
  uVar5 = (**(code **)PTR_DAT_04bcfce8)(uVar11);
  *(undefined4 *)(lVar10 + 0x24c) = uVar5;
  lVar8 = (**(code **)PTR_DAT_04bcfcd0)(uVar11);
  if ((lVar8 == 0) && (*(int *)(lVar10 + 0x24c) == 0)) {
    bVar9 = *(byte *)(lVar10 + 600) & 0xfe;
  }
  else {
    bVar9 = *(byte *)(lVar10 + 600) | 1;
  }
  *(byte *)(lVar10 + 600) = bVar9;
  *(int *)(lVar10 + 0x24) = (int)lVar8;
  lVar8 = *(long *)PTR_DAT_04bc1010;
  (*DAT_04c627a8)(uVar11);
  piVar1 = (int *)(lVar8 + 0x644);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  param_1 = param_1 + (long)iVar4 * 0x28;
  *(byte *)(lVar10 + 600) = *(byte *)(lVar10 + 600) & 0xfb | 2;
  *(uint *)(param_1 + 0x98) = *(int *)(lVar10 + 0x24) + *(int *)(param_1 + 0x98) + 3U & 0xfffffffc;
  *(uint *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + *(int *)(lVar10 + 0x24c) + 7U & 0xfffffff8;
  uVar7 = nn::os::GetSystemTick();
  *(undefined8 *)(lVar6 + (long)(int)param_2 * 0x398 + 0x270) = uVar7;
  return lVar10;
}

