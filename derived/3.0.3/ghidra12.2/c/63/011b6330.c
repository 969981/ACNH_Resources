
void FUN_011b6330(long param_1,long param_2,long *param_3)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  char *__dest;
  
  *(short *)(param_1 + 0x284) = (short)*(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_2 + 0x20);
  FUN_011be644(param_1 + 0x288,*(undefined4 *)(param_2 + 0x1c));
  lVar10 = *(long *)(param_1 + 0x48);
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar9 = malloc(0x2d8);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar3 = (undefined8 *)(lVar11 + 8);
      if (lVar8 != 0) {
        puVar3 = (undefined8 *)(lVar8 + 0xa8);
      }
      param_3 = (long *)*puVar3;
      plVar9 = (long *)0x0;
      if (param_3 == (long *)0x0) goto LAB_011b63d0;
    }
    plVar9 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x2d8,8);
  }
LAB_011b63d0:
  FUN_00705c50(plVar9);
  puVar6 = PTR_DAT_04bb39e0;
  *(undefined1 *)(plVar9 + 0x55) = 0;
  puVar7 = PTR_DAT_04bdf1d8;
  __dest = (char *)plVar9[0xc];
  plVar9[0x56] = 0;
  plVar9[0x58] = 0;
  plVar9[0x59] = 0;
  plVar9[0x5a] = 0;
  *plVar9 = (long)(puVar6 + 0x10);
  plVar9[0x57] = (long)(puVar7 + 0x10);
  if (__dest != "XLink") {
    iVar2 = 5;
    if ((int)plVar9[0xd] < 6) {
      iVar2 = (int)plVar9[0xd] + -1;
    }
    memcpy(__dest,"XLink",(long)iVar2);
    __dest[iVar2] = '\0';
  }
  if ((*(uint *)(lVar10 + 0x248) >> 0xc & 1) == 0) {
    return;
  }
  puVar1 = (uint *)(lVar10 + 0x248);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = *puVar1 & 0xfffff7ff | 0x800;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_006f9fc0(lVar10,plVar9,0xffffffff);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = *puVar1 & 0xfffff7ff;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  (**(code **)(*plVar9 + 0x38))(plVar9,lVar10 + 0x158,*(undefined8 *)(lVar10 + 0x240));
  return;
}

