
void FUN_015b8bb0(long *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  *param_1 = (long)&PTR_LAB_049aef08;
  FUN_038e1a84(param_1 + 0xd5);
  lVar7 = param_1[0x8f];
  param_1[0x8e] = (long)(PTR_DAT_04bd0d40 + 0x10);
  if (lVar7 == 0) {
LAB_015b8c60:
    param_1[0x8f] = 1;
  }
  else if (lVar7 != 1) {
    if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar7 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
    }
    plVar2 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x84) + 0x470);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
    if (lVar8 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
    }
    goto LAB_015b8c60;
  }
  if ((*(byte *)(param_1 + 0x76) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) & 0xf8 | 4;
    if (param_1[0x7a] == 0) {
      if (param_1[0x77] == 0) goto LAB_015b8cc0;
    }
    else {
      FUN_03f45838(param_1 + 0x78);
      if (param_1[0x77] == 0) {
        *(undefined4 *)((long)param_1 + 0x3b4) = 0xe;
        goto LAB_015b8cc0;
      }
    }
    if (*(long *)PTR_DAT_04bb49b8 != 0) {
      FUN_03f350f4(*(long *)PTR_DAT_04bb49b8,param_1 + 0x75);
    }
  }
LAB_015b8cc0:
  FUN_03f457c4(param_1 + 0x78);
  puVar5 = PTR_DAT_04bc1010;
  param_1[0x67] = (long)(PTR_DAT_04bd1170 + 0x10);
  puVar6 = PTR_DAT_04bc8e38;
  if (param_1[0x6a] != 0) {
    lVar7 = *(long *)puVar5;
    (**(code **)PTR_DAT_04bc8e38)(param_1 + 0x6d);
    piVar1 = (int *)(lVar7 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x69) = 0;
    param_1[0x6c] = 0;
    param_1[0x6a] = 0;
    param_1[0x6b] = 0;
  }
  FUN_0390e230(param_1 + 0x2b);
  param_1[7] = (long)(PTR_DAT_04bd11c0 + 0x10);
  if (param_1[0x27] != 0) {
    lVar7 = *(long *)puVar5;
    (**(code **)puVar6)(param_1 + 8);
    piVar1 = (int *)(lVar7 + 0x650);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined1 *)((long)param_1 + 0x84) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined1 *)((long)param_1 + 0x9c) = 0;
    *(undefined1 *)(param_1 + 0x15) = 0;
    *(undefined1 *)((long)param_1 + 0xb4) = 0;
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(undefined1 *)((long)param_1 + 0xcc) = 0;
    *(undefined1 *)(param_1 + 0x1b) = 0;
    *(undefined1 *)((long)param_1 + 0xe4) = 0;
    *(undefined1 *)(param_1 + 0x1e) = 0;
    *(undefined1 *)((long)param_1 + 0xfc) = 0;
    *(undefined1 *)(param_1 + 0x21) = 0;
    *(undefined1 *)((long)param_1 + 0x114) = 0;
    *(undefined1 *)(param_1 + 0x24) = 0;
    *(undefined1 *)((long)param_1 + 300) = 0;
    *(undefined4 *)(param_1 + 0x26) = 0;
    param_1[0x29] = 0;
    *(undefined4 *)(param_1 + 0x2a) = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
  }
  *param_1 = (long)(PTR_DAT_04bbdcd0 + 0x10);
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x18))();
  }
  param_1[1] = 0;
  return;
}

