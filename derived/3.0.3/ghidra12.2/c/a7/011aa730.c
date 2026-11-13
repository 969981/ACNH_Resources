
void FUN_011aa730(long param_1,long param_2,long *param_3)

{
  uint *puVar1;
  undefined *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  char *__dest;
  undefined *local_50;
  char *pcStack_48;
  
  *(short *)(param_1 + 0x284) = (short)*(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_2 + 0x20);
  FUN_011be644(param_1 + 0x288,*(undefined4 *)(param_2 + 0x1c));
  lVar10 = *(long *)(param_1 + 0x48);
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar8 = malloc(0x2d8);
  }
  else {
    plVar8 = param_3;
    if (param_3 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar11 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x0;
        goto LAB_011aa7d8;
      }
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x2d8,8);
  }
LAB_011aa7d8:
  FUN_00705c50(plVar8);
  puVar2 = PTR_DAT_04bb39e0;
  *(undefined1 *)(plVar8 + 0x55) = 0;
  puVar6 = PTR_DAT_04bdf1d8;
  __dest = (char *)plVar8[0xc];
  plVar8[0x56] = 0;
  plVar8[0x58] = 0;
  plVar8[0x59] = 0;
  plVar8[0x5a] = 0;
  *plVar8 = (long)(puVar2 + 0x10);
  plVar8[0x57] = (long)(puVar6 + 0x10);
  if (__dest != "XLink") {
    iVar3 = 5;
    if ((int)plVar8[0xd] < 6) {
      iVar3 = (int)plVar8[0xd] + -1;
    }
    memcpy(__dest,"XLink",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  if ((*(uint *)(lVar10 + 0x248) >> 0xc & 1) != 0) {
    puVar1 = (uint *)(lVar10 + 0x248);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 & 0xfffff7ff | 0x800;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    FUN_006f9fc0(lVar10,plVar8,0xffffffff);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 & 0xfffff7ff;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    (**(code **)(*plVar8 + 0x38))(plVar8,lVar10 + 0x158,*(undefined8 *)(lVar10 + 0x240));
  }
  lVar10 = param_1 + 0x2c8;
  FUN_03ebac90(lVar10,3,0,param_3,0);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cCountdownClock";
  local_50 = puVar2;
  FUN_03ebaf40(lVar10,0,&local_50);
  puVar9 = *(undefined8 **)(param_1 + 0x2f8);
  puVar9[2] = &LAB_011aaa04;
  puVar9[3] = 0;
  puVar9[4] = &LAB_011aac64;
  puVar9[5] = 0;
  *puVar9 = &PTR_LAB_04985120;
  puVar9[1] = param_1;
  puVar9[6] = &LAB_011ab000;
  puVar9[7] = 0;
  pcStack_48 = "State::cCountdown";
  local_50 = puVar2;
  FUN_03ebaf40(lVar10,1,&local_50);
  puVar9 = (undefined8 *)
           (*(long *)(param_1 + 0x2f8) + (ulong)(1 < *(uint *)(param_1 + 0x2f0)) * 0x40);
  puVar9[4] = &LAB_011ab81c;
  puVar9[5] = 0;
  *puVar9 = &PTR_LAB_04985120;
  puVar9[1] = param_1;
  puVar9[2] = &LAB_011ab27c;
  puVar9[3] = 0;
  puVar9[6] = &LAB_011ab8fc;
  puVar9[7] = 0;
  pcStack_48 = "State::cNewYear";
  local_50 = puVar2;
  FUN_03ebaf40(lVar10,2,&local_50);
  puVar9 = (undefined8 *)
           (*(long *)(param_1 + 0x2f8) + (ulong)(2 < *(uint *)(param_1 + 0x2f0)) * 0x80);
  *puVar9 = &PTR_LAB_04985120;
  puVar9[1] = param_1;
  puVar9[2] = &LAB_011abe4c;
  puVar9[3] = 0;
  puVar9[6] = &LAB_011ac41c;
  puVar9[7] = 0;
  puVar9[4] = &LAB_011ac418;
  puVar9[5] = 0;
  return;
}

