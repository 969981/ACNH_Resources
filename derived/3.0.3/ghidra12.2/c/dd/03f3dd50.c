
bool FUN_03f3dd50(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  
  puVar5 = PTR_DAT_04bb4458;
  puVar10 = *(undefined8 **)(param_1 + 0x30);
  if (((*PTR_DAT_04bb4458 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4458), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bb4450 = PTR_DAT_04bb2870 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4458);
  }
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    uVar7 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bb4450);
    if ((uVar7 & 1) == 0) {
      puVar10 = (undefined8 *)0x0;
    }
  }
  if (*(int *)(param_1 + 0x10) == 0xe) {
    return true;
  }
  if (((puVar10 == (undefined8 *)0x0) && (*(int *)(param_1 + 0x10) == 8)) &&
     (*(long *)(param_1 + 0x30) != 0)) {
    return true;
  }
  piVar1 = (int *)(param_1 + 0x2d0);
  do {
    iVar6 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (0 < iVar6) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f8));
    return *(int *)(param_1 + 0x10) != 0xc && *(int *)(param_1 + 0x10) != 0xf;
  }
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
  plVar11 = *(long **)(param_1 + 0x30);
  if (plVar11 == (long *)0x0) {
LAB_03f3df3c:
    *(undefined4 *)(param_1 + 0x10) = 0xc;
    goto LAB_03f3df44;
  }
  if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4458), iVar6 != 0)) {
    *(undefined **)PTR_DAT_04bb4450 = PTR_DAT_04bb2870 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4458);
  }
  puVar4 = PTR_DAT_04bb4450;
  uVar7 = (**(code **)*plVar11)(plVar11,PTR_DAT_04bb4450);
  if ((uVar7 & 1) == 0) goto LAB_03f3df64;
  if (*(int *)(param_1 + 0x10) == 8) {
    uVar8 = *(undefined8 *)(param_1 + 0x3f8);
    *(undefined4 *)(param_1 + 0x10) = 10;
    if (param_2 != 0) {
      plVar11[4] = param_2;
    }
    uVar7 = (**(code **)(*plVar11 + 0x30))(plVar11,plVar11[1],(int)plVar11[2],uVar8);
    if ((uVar7 & 1) == 0) {
      FUN_03f3e038(param_1);
      if ((*(byte *)(param_1 + 0xe) >> 3 & 1) != 0) {
        piVar1 = (int *)(param_1 + 0x90);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfff7ffff;
        *(undefined4 *)(param_1 + 0x10) = 0xc;
        goto LAB_03f3df44;
      }
      goto LAB_03f3df3c;
    }
  }
  plVar11 = *(long **)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x10) = 0xd;
  if (plVar11 == (long *)0x0) {
LAB_03f3def8:
    FUN_03f3e038(param_1);
    if ((*(byte *)(param_1 + 0xe) >> 3 & 1) != 0) {
      piVar1 = (int *)(param_1 + 0x90);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfff7ffff;
    }
LAB_03f3df44:
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2f8));
    return false;
  }
  if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4458), iVar6 != 0)) {
    *(undefined **)puVar4 = PTR_DAT_04bb2870 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4458);
  }
  uVar7 = (**(code **)*plVar11)(plVar11,PTR_DAT_04bb4450);
  if ((uVar7 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xe;
  }
  else {
    if (param_2 != 0) {
      plVar11[4] = param_2;
    }
    uVar7 = (**(code **)(*plVar11 + 0x40))(plVar11);
    plVar11[4] = 0;
    uVar9 = 0xe;
    if ((uVar7 & 1) == 0) {
      uVar9 = 0xf;
    }
    *(undefined4 *)(param_1 + 0x10) = uVar9;
    if ((uVar7 & 1) == 0) goto LAB_03f3def8;
  }
  FUN_03f3e038(param_1);
LAB_03f3df64:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2f8));
  return true;
}

