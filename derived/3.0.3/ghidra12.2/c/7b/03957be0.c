
void FUN_03957be0(undefined8 *param_1)

{
  int *piVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  puVar8 = PTR_DAT_04bd1170;
  puVar6 = PTR_DAT_04bc1010;
  *param_1 = &PTR_FUN_04b68190;
  param_1[0x62f] = puVar8 + 0x10;
  puVar7 = PTR_DAT_04bc8e38;
  if (param_1[0x632] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)PTR_DAT_04bc8e38)(param_1 + 0x635);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x631) = 0;
    param_1[0x634] = 0;
    param_1[0x632] = 0;
    param_1[0x633] = 0;
  }
  param_1[0x623] = puVar8 + 0x10;
  if (param_1[0x626] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x629);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x625) = 0;
    param_1[0x628] = 0;
    param_1[0x626] = 0;
    param_1[0x627] = 0;
  }
  param_1[0x617] = puVar8 + 0x10;
  if (param_1[0x61a] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x61d);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x619) = 0;
    param_1[0x61c] = 0;
    param_1[0x61a] = 0;
    param_1[0x61b] = 0;
  }
  param_1[0x60b] = puVar8 + 0x10;
  if (param_1[0x60e] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x611);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x60d) = 0;
    param_1[0x610] = 0;
    param_1[0x60e] = 0;
    param_1[0x60f] = 0;
  }
  param_1[0x5ff] = puVar8 + 0x10;
  if (param_1[0x602] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x605);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x601) = 0;
    param_1[0x604] = 0;
    param_1[0x602] = 0;
    param_1[0x603] = 0;
  }
  param_1[0x5f3] = puVar8 + 0x10;
  if (param_1[0x5f6] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x5f9);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x5f5) = 0;
    param_1[0x5f8] = 0;
    param_1[0x5f6] = 0;
    param_1[0x5f7] = 0;
  }
  param_1[0x5cf] = PTR_DAT_04bd11c0 + 0x10;
  if (param_1[0x5ef] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x5d0);
    piVar1 = (int *)(lVar9 + 0x650);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined1 *)(param_1 + 0x5d7) = 0;
    *(undefined1 *)((long)param_1 + 0x2ec4) = 0;
    *(undefined1 *)(param_1 + 0x5da) = 0;
    *(undefined1 *)((long)param_1 + 0x2edc) = 0;
    *(undefined1 *)(param_1 + 0x5dd) = 0;
    *(undefined1 *)((long)param_1 + 0x2ef4) = 0;
    *(undefined1 *)(param_1 + 0x5e0) = 0;
    *(undefined1 *)((long)param_1 + 0x2f0c) = 0;
    *(undefined1 *)(param_1 + 0x5e3) = 0;
    *(undefined1 *)((long)param_1 + 0x2f24) = 0;
    *(undefined1 *)(param_1 + 0x5e6) = 0;
    *(undefined1 *)((long)param_1 + 0x2f3c) = 0;
    *(undefined1 *)(param_1 + 0x5e9) = 0;
    *(undefined1 *)((long)param_1 + 0x2f54) = 0;
    *(undefined1 *)(param_1 + 0x5ec) = 0;
    *(undefined1 *)((long)param_1 + 0x2f6c) = 0;
    *(undefined4 *)(param_1 + 0x5ee) = 0;
    param_1[0x5f1] = 0;
    *(undefined4 *)(param_1 + 0x5f2) = 0;
    param_1[0x5ef] = 0;
    param_1[0x5f0] = 0;
  }
  puVar5 = PTR_DAT_04bbd550;
  puVar2 = PTR_DAT_04bbd550 + 0x10;
  param_1[0x5c8] = puVar2;
  FUN_038f4940(param_1 + 0x5c8);
  param_1[0x5c1] = puVar2;
  FUN_038f4940(param_1 + 0x5c1);
  param_1[0x5ba] = puVar2;
  FUN_038f4940(param_1 + 0x5ba);
  param_1[0x5b3] = puVar2;
  FUN_038f4940(param_1 + 0x5b3);
  param_1[0x5ac] = puVar2;
  FUN_038f4940(param_1 + 0x5ac);
  param_1[0x5a5] = puVar2;
  FUN_038f4940(param_1 + 0x5a5);
  param_1[0x59e] = &PTR_LAB_04b681d0;
  FUN_038f4940(param_1 + 0x59e);
  param_1[0x592] = puVar8 + 0x10;
  if (param_1[0x595] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x598);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x594) = 0;
    param_1[0x597] = 0;
    param_1[0x595] = 0;
    param_1[0x596] = 0;
  }
  param_1[0x586] = puVar8 + 0x10;
  if (param_1[0x589] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x58c);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x588) = 0;
    param_1[0x58b] = 0;
    param_1[0x589] = 0;
    param_1[0x58a] = 0;
  }
  param_1[0x57a] = puVar8 + 0x10;
  if (param_1[0x57d] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x580);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x57c) = 0;
    param_1[0x57f] = 0;
    param_1[0x57d] = 0;
    param_1[0x57e] = 0;
  }
  param_1[0x56e] = puVar8 + 0x10;
  if (param_1[0x571] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x574);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x570) = 0;
    param_1[0x573] = 0;
    param_1[0x571] = 0;
    param_1[0x572] = 0;
  }
  param_1[0x562] = puVar8 + 0x10;
  if (param_1[0x565] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x568);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x564) = 0;
    param_1[0x567] = 0;
    param_1[0x565] = 0;
    param_1[0x566] = 0;
  }
  param_1[0x556] = puVar8 + 0x10;
  if (param_1[0x559] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x55c);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x558) = 0;
    param_1[0x55b] = 0;
    param_1[0x559] = 0;
    param_1[0x55a] = 0;
  }
  param_1[0x532] = PTR_DAT_04bd11c0 + 0x10;
  if (param_1[0x552] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x533);
    piVar1 = (int *)(lVar9 + 0x650);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined1 *)(param_1 + 0x53a) = 0;
    *(undefined1 *)((long)param_1 + 0x29dc) = 0;
    *(undefined1 *)(param_1 + 0x53d) = 0;
    *(undefined1 *)((long)param_1 + 0x29f4) = 0;
    *(undefined1 *)(param_1 + 0x540) = 0;
    *(undefined1 *)((long)param_1 + 0x2a0c) = 0;
    *(undefined1 *)(param_1 + 0x543) = 0;
    *(undefined1 *)((long)param_1 + 0x2a24) = 0;
    *(undefined1 *)(param_1 + 0x546) = 0;
    *(undefined1 *)((long)param_1 + 0x2a3c) = 0;
    *(undefined1 *)(param_1 + 0x549) = 0;
    *(undefined1 *)((long)param_1 + 0x2a54) = 0;
    *(undefined1 *)(param_1 + 0x54c) = 0;
    *(undefined1 *)((long)param_1 + 0x2a6c) = 0;
    *(undefined1 *)(param_1 + 0x54f) = 0;
    *(undefined1 *)((long)param_1 + 0x2a84) = 0;
    *(undefined4 *)(param_1 + 0x551) = 0;
    param_1[0x554] = 0;
    *(undefined4 *)(param_1 + 0x555) = 0;
    param_1[0x552] = 0;
    param_1[0x553] = 0;
  }
  puVar2 = puVar5 + 0x10;
  param_1[0x52b] = puVar2;
  FUN_038f4940(param_1 + 0x52b);
  param_1[0x524] = puVar2;
  FUN_038f4940(param_1 + 0x524);
  param_1[0x51d] = puVar2;
  FUN_038f4940(param_1 + 0x51d);
  param_1[0x516] = puVar2;
  FUN_038f4940(param_1 + 0x516);
  param_1[0x50f] = puVar2;
  FUN_038f4940(param_1 + 0x50f);
  param_1[0x508] = puVar2;
  FUN_038f4940(param_1 + 0x508);
  param_1[0x501] = &PTR_LAB_04b681d0;
  FUN_038f4940(param_1 + 0x501);
  param_1[0x4f5] = puVar8 + 0x10;
  if (param_1[0x4f8] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x4fb);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x4f7) = 0;
    param_1[0x4fa] = 0;
    param_1[0x4f8] = 0;
    param_1[0x4f9] = 0;
  }
  param_1[0x4e9] = puVar8 + 0x10;
  if (param_1[0x4ec] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x4ef);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x4eb) = 0;
    param_1[0x4ee] = 0;
    param_1[0x4ec] = 0;
    param_1[0x4ed] = 0;
  }
  param_1[0x4dd] = puVar8 + 0x10;
  if (param_1[0x4e0] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x4e3);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x4df) = 0;
    param_1[0x4e2] = 0;
    param_1[0x4e0] = 0;
    param_1[0x4e1] = 0;
  }
  param_1[0x4d1] = puVar8 + 0x10;
  if (param_1[0x4d4] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x4d7);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x4d3) = 0;
    param_1[0x4d6] = 0;
    param_1[0x4d4] = 0;
    param_1[0x4d5] = 0;
  }
  param_1[0x4c5] = puVar8 + 0x10;
  if (param_1[0x4c8] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x4cb);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x4c7) = 0;
    param_1[0x4ca] = 0;
    param_1[0x4c8] = 0;
    param_1[0x4c9] = 0;
  }
  param_1[0x4b9] = puVar8 + 0x10;
  if (param_1[0x4bc] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x4bf);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x4bb) = 0;
    param_1[0x4be] = 0;
    param_1[0x4bc] = 0;
    param_1[0x4bd] = 0;
  }
  param_1[0x495] = PTR_DAT_04bd11c0 + 0x10;
  if (param_1[0x4b5] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x496);
    piVar1 = (int *)(lVar9 + 0x650);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined1 *)(param_1 + 0x49d) = 0;
    *(undefined1 *)((long)param_1 + 0x24f4) = 0;
    *(undefined1 *)(param_1 + 0x4a0) = 0;
    *(undefined1 *)((long)param_1 + 0x250c) = 0;
    *(undefined1 *)(param_1 + 0x4a3) = 0;
    *(undefined1 *)((long)param_1 + 0x2524) = 0;
    *(undefined1 *)(param_1 + 0x4a6) = 0;
    *(undefined1 *)((long)param_1 + 0x253c) = 0;
    *(undefined1 *)(param_1 + 0x4a9) = 0;
    *(undefined1 *)((long)param_1 + 0x2554) = 0;
    *(undefined1 *)(param_1 + 0x4ac) = 0;
    *(undefined1 *)((long)param_1 + 0x256c) = 0;
    *(undefined1 *)(param_1 + 0x4af) = 0;
    *(undefined1 *)((long)param_1 + 0x2584) = 0;
    *(undefined1 *)(param_1 + 0x4b2) = 0;
    *(undefined1 *)((long)param_1 + 0x259c) = 0;
    *(undefined4 *)(param_1 + 0x4b4) = 0;
    param_1[0x4b7] = 0;
    *(undefined4 *)(param_1 + 0x4b8) = 0;
    param_1[0x4b5] = 0;
    param_1[0x4b6] = 0;
  }
  puVar2 = puVar5 + 0x10;
  param_1[0x48e] = puVar2;
  FUN_038f4940(param_1 + 0x48e);
  param_1[0x487] = puVar2;
  FUN_038f4940(param_1 + 0x487);
  param_1[0x480] = puVar2;
  FUN_038f4940(param_1 + 0x480);
  param_1[0x479] = puVar2;
  FUN_038f4940(param_1 + 0x479);
  param_1[0x472] = puVar2;
  FUN_038f4940(param_1 + 0x472);
  param_1[0x46b] = puVar2;
  FUN_038f4940(param_1 + 0x46b);
  param_1[0x464] = &PTR_LAB_04b681d0;
  FUN_038f4940(param_1 + 0x464);
  param_1[0x458] = puVar8 + 0x10;
  if (param_1[0x45b] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x45e);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x45a) = 0;
    param_1[0x45d] = 0;
    param_1[0x45b] = 0;
    param_1[0x45c] = 0;
  }
  param_1[0x44c] = puVar8 + 0x10;
  if (param_1[0x44f] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x452);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x44e) = 0;
    param_1[0x451] = 0;
    param_1[0x44f] = 0;
    param_1[0x450] = 0;
  }
  param_1[0x440] = puVar8 + 0x10;
  if (param_1[0x443] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x446);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x442) = 0;
    param_1[0x445] = 0;
    param_1[0x443] = 0;
    param_1[0x444] = 0;
  }
  param_1[0x434] = puVar8 + 0x10;
  if (param_1[0x437] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x43a);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x436) = 0;
    param_1[0x439] = 0;
    param_1[0x437] = 0;
    param_1[0x438] = 0;
  }
  param_1[0x428] = puVar8 + 0x10;
  if (param_1[0x42b] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x42e);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x42a) = 0;
    param_1[0x42d] = 0;
    param_1[0x42b] = 0;
    param_1[0x42c] = 0;
  }
  param_1[0x41c] = puVar8 + 0x10;
  if (param_1[0x41f] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x422);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x41e) = 0;
    param_1[0x421] = 0;
    param_1[0x41f] = 0;
    param_1[0x420] = 0;
  }
  param_1[0x3f8] = PTR_DAT_04bd11c0 + 0x10;
  if (param_1[0x418] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x3f9);
    piVar1 = (int *)(lVar9 + 0x650);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined1 *)(param_1 + 0x400) = 0;
    *(undefined1 *)((long)param_1 + 0x200c) = 0;
    *(undefined1 *)(param_1 + 0x403) = 0;
    *(undefined1 *)((long)param_1 + 0x2024) = 0;
    *(undefined1 *)(param_1 + 0x406) = 0;
    *(undefined1 *)((long)param_1 + 0x203c) = 0;
    *(undefined1 *)(param_1 + 0x409) = 0;
    *(undefined1 *)((long)param_1 + 0x2054) = 0;
    *(undefined1 *)(param_1 + 0x40c) = 0;
    *(undefined1 *)((long)param_1 + 0x206c) = 0;
    *(undefined1 *)(param_1 + 0x40f) = 0;
    *(undefined1 *)((long)param_1 + 0x2084) = 0;
    *(undefined1 *)(param_1 + 0x412) = 0;
    *(undefined1 *)((long)param_1 + 0x209c) = 0;
    *(undefined1 *)(param_1 + 0x415) = 0;
    *(undefined1 *)((long)param_1 + 0x20b4) = 0;
    *(undefined4 *)(param_1 + 0x417) = 0;
    param_1[0x41a] = 0;
    *(undefined4 *)(param_1 + 0x41b) = 0;
    param_1[0x418] = 0;
    param_1[0x419] = 0;
  }
  puVar2 = puVar5 + 0x10;
  param_1[0x3f1] = puVar2;
  FUN_038f4940(param_1 + 0x3f1);
  param_1[0x3ea] = puVar2;
  FUN_038f4940(param_1 + 0x3ea);
  param_1[0x3e3] = puVar2;
  FUN_038f4940(param_1 + 0x3e3);
  param_1[0x3dc] = puVar2;
  FUN_038f4940(param_1 + 0x3dc);
  param_1[0x3d5] = puVar2;
  FUN_038f4940(param_1 + 0x3d5);
  param_1[0x3ce] = puVar2;
  FUN_038f4940(param_1 + 0x3ce);
  param_1[0x3c7] = &PTR_LAB_04b681d0;
  FUN_038f4940(param_1 + 0x3c7);
  param_1[0x3bb] = puVar8 + 0x10;
  if (param_1[0x3be] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x3c1);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x3bd) = 0;
    param_1[0x3c0] = 0;
    param_1[0x3be] = 0;
    param_1[0x3bf] = 0;
  }
  param_1[0x3af] = puVar8 + 0x10;
  if (param_1[0x3b2] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x3b5);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x3b1) = 0;
    param_1[0x3b4] = 0;
    param_1[0x3b2] = 0;
    param_1[0x3b3] = 0;
  }
  param_1[0x3a3] = puVar8 + 0x10;
  if (param_1[0x3a6] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x3a9);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x3a5) = 0;
    param_1[0x3a8] = 0;
    param_1[0x3a6] = 0;
    param_1[0x3a7] = 0;
  }
  param_1[0x397] = puVar8 + 0x10;
  if (param_1[0x39a] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x39d);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x399) = 0;
    param_1[0x39c] = 0;
    param_1[0x39a] = 0;
    param_1[0x39b] = 0;
  }
  param_1[0x38b] = puVar8 + 0x10;
  if (param_1[0x38e] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x391);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x38d) = 0;
    param_1[0x390] = 0;
    param_1[0x38e] = 0;
    param_1[0x38f] = 0;
  }
  param_1[0x37f] = puVar8 + 0x10;
  if (param_1[0x382] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x385);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x381) = 0;
    param_1[900] = 0;
    param_1[0x382] = 0;
    param_1[899] = 0;
  }
  param_1[0x373] = puVar8 + 0x10;
  if (param_1[0x376] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x379);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x375) = 0;
    param_1[0x378] = 0;
    param_1[0x376] = 0;
    param_1[0x377] = 0;
  }
  param_1[0x367] = puVar8 + 0x10;
  if (param_1[0x36a] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x36d);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x369) = 0;
    param_1[0x36c] = 0;
    param_1[0x36a] = 0;
    param_1[0x36b] = 0;
  }
  param_1[0x35b] = puVar8 + 0x10;
  if (param_1[0x35e] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x361);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x35d) = 0;
    param_1[0x360] = 0;
    param_1[0x35e] = 0;
    param_1[0x35f] = 0;
  }
  param_1[0x337] = PTR_DAT_04bd11c0 + 0x10;
  if (param_1[0x357] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x338);
    piVar1 = (int *)(lVar9 + 0x650);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined1 *)(param_1 + 0x33f) = 0;
    *(undefined1 *)((long)param_1 + 0x1a04) = 0;
    *(undefined1 *)(param_1 + 0x342) = 0;
    *(undefined1 *)((long)param_1 + 0x1a1c) = 0;
    *(undefined1 *)(param_1 + 0x345) = 0;
    *(undefined1 *)((long)param_1 + 0x1a34) = 0;
    *(undefined1 *)(param_1 + 0x348) = 0;
    *(undefined1 *)((long)param_1 + 0x1a4c) = 0;
    *(undefined1 *)(param_1 + 0x34b) = 0;
    *(undefined1 *)((long)param_1 + 0x1a64) = 0;
    *(undefined1 *)(param_1 + 0x34e) = 0;
    *(undefined1 *)((long)param_1 + 0x1a7c) = 0;
    *(undefined1 *)(param_1 + 0x351) = 0;
    *(undefined1 *)((long)param_1 + 0x1a94) = 0;
    *(undefined1 *)(param_1 + 0x354) = 0;
    *(undefined1 *)((long)param_1 + 0x1aac) = 0;
    *(undefined4 *)(param_1 + 0x356) = 0;
    param_1[0x359] = 0;
    *(undefined4 *)(param_1 + 0x35a) = 0;
    param_1[0x357] = 0;
    param_1[0x358] = 0;
  }
  puVar2 = puVar5 + 0x10;
  param_1[0x330] = puVar2;
  FUN_038f4940(param_1 + 0x330);
  param_1[0x329] = puVar2;
  FUN_038f4940(param_1 + 0x329);
  param_1[0x322] = puVar2;
  FUN_038f4940(param_1 + 0x322);
  param_1[0x31b] = puVar2;
  FUN_038f4940(param_1 + 0x31b);
  param_1[0x314] = puVar2;
  FUN_038f4940(param_1 + 0x314);
  param_1[0x30d] = puVar2;
  FUN_038f4940(param_1 + 0x30d);
  param_1[0x306] = puVar2;
  FUN_038f4940(param_1 + 0x306);
  param_1[0x2ff] = puVar2;
  FUN_038f4940(param_1 + 0x2ff);
  param_1[0x2f8] = puVar2;
  FUN_038f4940(param_1 + 0x2f8);
  param_1[0x2f1] = &PTR_LAB_04b681d0;
  FUN_038f4940(param_1 + 0x2f1);
  param_1[0x2e5] = puVar8 + 0x10;
  if (param_1[0x2e8] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x2eb);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x2e7) = 0;
    param_1[0x2ea] = 0;
    param_1[0x2e8] = 0;
    param_1[0x2e9] = 0;
  }
  param_1[0x2d9] = puVar8 + 0x10;
  if (param_1[0x2dc] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x2df);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x2db) = 0;
    param_1[0x2de] = 0;
    param_1[0x2dc] = 0;
    param_1[0x2dd] = 0;
  }
  param_1[0x2cd] = puVar8 + 0x10;
  if (param_1[0x2d0] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x2d3);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x2cf) = 0;
    param_1[0x2d2] = 0;
    param_1[0x2d0] = 0;
    param_1[0x2d1] = 0;
  }
  param_1[0x2c1] = puVar8 + 0x10;
  if (param_1[0x2c4] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x2c7);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x2c3) = 0;
    param_1[0x2c6] = 0;
    param_1[0x2c4] = 0;
    param_1[0x2c5] = 0;
  }
  param_1[0x2b5] = puVar8 + 0x10;
  if (param_1[0x2b8] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 699);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x2b7) = 0;
    param_1[0x2ba] = 0;
    param_1[0x2b8] = 0;
    param_1[0x2b9] = 0;
  }
  param_1[0x2a9] = puVar8 + 0x10;
  if (param_1[0x2ac] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x2af);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x2ab) = 0;
    param_1[0x2ae] = 0;
    param_1[0x2ac] = 0;
    param_1[0x2ad] = 0;
  }
  param_1[0x29d] = puVar8 + 0x10;
  if (param_1[0x2a0] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x2a3);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x29f) = 0;
    param_1[0x2a2] = 0;
    param_1[0x2a0] = 0;
    param_1[0x2a1] = 0;
  }
  param_1[0x291] = puVar8 + 0x10;
  if (param_1[0x294] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x297);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x293) = 0;
    param_1[0x296] = 0;
    param_1[0x294] = 0;
    param_1[0x295] = 0;
  }
  param_1[0x285] = puVar8 + 0x10;
  if (param_1[0x288] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x28b);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x287) = 0;
    param_1[0x28a] = 0;
    param_1[0x288] = 0;
    param_1[0x289] = 0;
  }
  param_1[0x261] = PTR_DAT_04bd11c0 + 0x10;
  if (param_1[0x281] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x262);
    piVar1 = (int *)(lVar9 + 0x650);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined1 *)(param_1 + 0x269) = 0;
    *(undefined1 *)((long)param_1 + 0x1354) = 0;
    *(undefined1 *)(param_1 + 0x26c) = 0;
    *(undefined1 *)((long)param_1 + 0x136c) = 0;
    *(undefined1 *)(param_1 + 0x26f) = 0;
    *(undefined1 *)((long)param_1 + 0x1384) = 0;
    *(undefined1 *)(param_1 + 0x272) = 0;
    *(undefined1 *)((long)param_1 + 0x139c) = 0;
    *(undefined1 *)(param_1 + 0x275) = 0;
    *(undefined1 *)((long)param_1 + 0x13b4) = 0;
    *(undefined1 *)(param_1 + 0x278) = 0;
    *(undefined1 *)((long)param_1 + 0x13cc) = 0;
    *(undefined1 *)(param_1 + 0x27b) = 0;
    *(undefined1 *)((long)param_1 + 0x13e4) = 0;
    *(undefined1 *)(param_1 + 0x27e) = 0;
    *(undefined1 *)((long)param_1 + 0x13fc) = 0;
    *(undefined4 *)(param_1 + 0x280) = 0;
    param_1[0x283] = 0;
    *(undefined4 *)(param_1 + 0x284) = 0;
    param_1[0x281] = 0;
    param_1[0x282] = 0;
  }
  puVar2 = puVar5 + 0x10;
  param_1[0x25a] = puVar2;
  FUN_038f4940(param_1 + 0x25a);
  param_1[0x253] = puVar2;
  FUN_038f4940(param_1 + 0x253);
  param_1[0x24c] = puVar2;
  FUN_038f4940(param_1 + 0x24c);
  param_1[0x245] = puVar2;
  FUN_038f4940(param_1 + 0x245);
  param_1[0x23e] = puVar2;
  FUN_038f4940(param_1 + 0x23e);
  param_1[0x237] = puVar2;
  FUN_038f4940(param_1 + 0x237);
  param_1[0x230] = puVar2;
  FUN_038f4940(param_1 + 0x230);
  param_1[0x229] = puVar2;
  FUN_038f4940(param_1 + 0x229);
  param_1[0x222] = puVar2;
  FUN_038f4940(param_1 + 0x222);
  param_1[0x21b] = &PTR_LAB_04b681d0;
  FUN_038f4940(param_1 + 0x21b);
  param_1[0x20f] = puVar8 + 0x10;
  if (param_1[0x212] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x215);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x211) = 0;
    param_1[0x214] = 0;
    param_1[0x212] = 0;
    param_1[0x213] = 0;
  }
  param_1[0x203] = puVar8 + 0x10;
  if (param_1[0x206] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x209);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x205) = 0;
    param_1[0x208] = 0;
    param_1[0x206] = 0;
    param_1[0x207] = 0;
  }
  param_1[0x1f7] = puVar8 + 0x10;
  if (param_1[0x1fa] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x1fd);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x1f9) = 0;
    param_1[0x1fc] = 0;
    param_1[0x1fa] = 0;
    param_1[0x1fb] = 0;
  }
  param_1[0x1eb] = puVar8 + 0x10;
  if (param_1[0x1ee] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x1f1);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x1ed) = 0;
    param_1[0x1f0] = 0;
    param_1[0x1ee] = 0;
    param_1[0x1ef] = 0;
  }
  param_1[0x1df] = puVar8 + 0x10;
  if (param_1[0x1e2] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x1e5);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x1e1) = 0;
    param_1[0x1e4] = 0;
    param_1[0x1e2] = 0;
    param_1[0x1e3] = 0;
  }
  param_1[0x1d3] = puVar8 + 0x10;
  if (param_1[0x1d6] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x1d9);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x1d5) = 0;
    param_1[0x1d8] = 0;
    param_1[0x1d6] = 0;
    param_1[0x1d7] = 0;
  }
  param_1[0x1c7] = puVar8 + 0x10;
  if (param_1[0x1ca] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x1cd);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x1c9) = 0;
    param_1[0x1cc] = 0;
    param_1[0x1ca] = 0;
    param_1[0x1cb] = 0;
  }
  param_1[0x1bb] = puVar8 + 0x10;
  if (param_1[0x1be] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x1c1);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x1bd) = 0;
    param_1[0x1c0] = 0;
    param_1[0x1be] = 0;
    param_1[0x1bf] = 0;
  }
  param_1[0x1af] = puVar8 + 0x10;
  if (param_1[0x1b2] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x1b5);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x1b1) = 0;
    param_1[0x1b4] = 0;
    param_1[0x1b2] = 0;
    param_1[0x1b3] = 0;
  }
  param_1[0x18b] = PTR_DAT_04bd11c0 + 0x10;
  if (param_1[0x1ab] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x18c);
    piVar1 = (int *)(lVar9 + 0x650);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined1 *)(param_1 + 0x193) = 0;
    *(undefined1 *)((long)param_1 + 0xca4) = 0;
    *(undefined1 *)(param_1 + 0x196) = 0;
    *(undefined1 *)((long)param_1 + 0xcbc) = 0;
    *(undefined1 *)(param_1 + 0x199) = 0;
    *(undefined1 *)((long)param_1 + 0xcd4) = 0;
    *(undefined1 *)(param_1 + 0x19c) = 0;
    *(undefined1 *)((long)param_1 + 0xcec) = 0;
    *(undefined1 *)(param_1 + 0x19f) = 0;
    *(undefined1 *)((long)param_1 + 0xd04) = 0;
    *(undefined1 *)(param_1 + 0x1a2) = 0;
    *(undefined1 *)((long)param_1 + 0xd1c) = 0;
    *(undefined1 *)(param_1 + 0x1a5) = 0;
    *(undefined1 *)((long)param_1 + 0xd34) = 0;
    *(undefined1 *)(param_1 + 0x1a8) = 0;
    *(undefined1 *)((long)param_1 + 0xd4c) = 0;
    *(undefined4 *)(param_1 + 0x1aa) = 0;
    param_1[0x1ad] = 0;
    *(undefined4 *)(param_1 + 0x1ae) = 0;
    param_1[0x1ab] = 0;
    param_1[0x1ac] = 0;
  }
  puVar2 = puVar5 + 0x10;
  param_1[0x184] = puVar2;
  FUN_038f4940(param_1 + 0x184);
  param_1[0x17d] = puVar2;
  FUN_038f4940(param_1 + 0x17d);
  param_1[0x176] = puVar2;
  FUN_038f4940(param_1 + 0x176);
  param_1[0x16f] = puVar2;
  FUN_038f4940(param_1 + 0x16f);
  param_1[0x168] = puVar2;
  FUN_038f4940(param_1 + 0x168);
  param_1[0x161] = puVar2;
  FUN_038f4940(param_1 + 0x161);
  param_1[0x15a] = puVar2;
  FUN_038f4940(param_1 + 0x15a);
  param_1[0x153] = puVar2;
  FUN_038f4940(param_1 + 0x153);
  param_1[0x14c] = puVar2;
  FUN_038f4940(param_1 + 0x14c);
  param_1[0x145] = &PTR_LAB_04b681d0;
  FUN_038f4940(param_1 + 0x145);
  param_1[0x139] = puVar8 + 0x10;
  if (param_1[0x13c] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x13f);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x13b) = 0;
    param_1[0x13e] = 0;
    param_1[0x13c] = 0;
    param_1[0x13d] = 0;
  }
  param_1[0x12d] = puVar8 + 0x10;
  if (param_1[0x130] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x133);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x12f) = 0;
    param_1[0x132] = 0;
    param_1[0x130] = 0;
    param_1[0x131] = 0;
  }
  param_1[0x109] = PTR_DAT_04bd11c0 + 0x10;
  if (param_1[0x129] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x10a);
    piVar1 = (int *)(lVar9 + 0x650);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined1 *)(param_1 + 0x111) = 0;
    *(undefined1 *)((long)param_1 + 0x894) = 0;
    *(undefined1 *)(param_1 + 0x114) = 0;
    *(undefined1 *)((long)param_1 + 0x8ac) = 0;
    *(undefined1 *)(param_1 + 0x117) = 0;
    *(undefined1 *)((long)param_1 + 0x8c4) = 0;
    *(undefined1 *)(param_1 + 0x11a) = 0;
    *(undefined1 *)((long)param_1 + 0x8dc) = 0;
    *(undefined1 *)(param_1 + 0x11d) = 0;
    *(undefined1 *)((long)param_1 + 0x8f4) = 0;
    *(undefined1 *)(param_1 + 0x120) = 0;
    *(undefined1 *)((long)param_1 + 0x90c) = 0;
    *(undefined1 *)(param_1 + 0x123) = 0;
    *(undefined1 *)((long)param_1 + 0x924) = 0;
    *(undefined1 *)(param_1 + 0x126) = 0;
    *(undefined1 *)((long)param_1 + 0x93c) = 0;
    *(undefined4 *)(param_1 + 0x128) = 0;
    param_1[299] = 0;
    *(undefined4 *)(param_1 + 300) = 0;
    param_1[0x129] = 0;
    param_1[0x12a] = 0;
  }
  param_1[0x102] = puVar5 + 0x10;
  FUN_038f4940(param_1 + 0x102);
  param_1[0xfb] = puVar5 + 0x10;
  FUN_038f4940(param_1 + 0xfb);
  param_1[0xf4] = &PTR_LAB_04b681d0;
  FUN_038f4940(param_1 + 0xf4);
  param_1[0xe8] = puVar8 + 0x10;
  if (param_1[0xeb] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0xee);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0xea) = 0;
    param_1[0xed] = 0;
    param_1[0xeb] = 0;
    param_1[0xec] = 0;
  }
  param_1[0xdc] = puVar8 + 0x10;
  if (param_1[0xdf] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0xe2);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0xde) = 0;
    param_1[0xe1] = 0;
    param_1[0xdf] = 0;
    param_1[0xe0] = 0;
  }
  param_1[0xb8] = PTR_DAT_04bd11c0 + 0x10;
  if (param_1[0xd8] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0xb9);
    piVar1 = (int *)(lVar9 + 0x650);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined1 *)(param_1 + 0xc0) = 0;
    *(undefined1 *)((long)param_1 + 0x60c) = 0;
    *(undefined1 *)(param_1 + 0xc3) = 0;
    *(undefined1 *)((long)param_1 + 0x624) = 0;
    *(undefined1 *)(param_1 + 0xc6) = 0;
    *(undefined1 *)((long)param_1 + 0x63c) = 0;
    *(undefined1 *)(param_1 + 0xc9) = 0;
    *(undefined1 *)((long)param_1 + 0x654) = 0;
    *(undefined1 *)(param_1 + 0xcc) = 0;
    *(undefined1 *)((long)param_1 + 0x66c) = 0;
    *(undefined1 *)(param_1 + 0xcf) = 0;
    *(undefined1 *)((long)param_1 + 0x684) = 0;
    *(undefined1 *)(param_1 + 0xd2) = 0;
    *(undefined1 *)((long)param_1 + 0x69c) = 0;
    *(undefined1 *)(param_1 + 0xd5) = 0;
    *(undefined1 *)((long)param_1 + 0x6b4) = 0;
    *(undefined4 *)(param_1 + 0xd7) = 0;
    param_1[0xda] = 0;
    *(undefined4 *)(param_1 + 0xdb) = 0;
    param_1[0xd8] = 0;
    param_1[0xd9] = 0;
  }
  param_1[0xb1] = puVar5 + 0x10;
  FUN_038f4940(param_1 + 0xb1);
  param_1[0xaa] = puVar5 + 0x10;
  FUN_038f4940(param_1 + 0xaa);
  param_1[0xa3] = &PTR_LAB_04b681d0;
  FUN_038f4940(param_1 + 0xa3);
  param_1[0x97] = puVar8 + 0x10;
  if (param_1[0x9a] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x9d);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x99) = 0;
    param_1[0x9c] = 0;
    param_1[0x9a] = 0;
    param_1[0x9b] = 0;
  }
  param_1[0x8b] = puVar8 + 0x10;
  if (param_1[0x8e] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x91);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x8d) = 0;
    param_1[0x90] = 0;
    param_1[0x8e] = 0;
    param_1[0x8f] = 0;
  }
  param_1[0x67] = PTR_DAT_04bd11c0 + 0x10;
  if (param_1[0x87] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x68);
    piVar1 = (int *)(lVar9 + 0x650);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined1 *)(param_1 + 0x6f) = 0;
    *(undefined1 *)((long)param_1 + 900) = 0;
    *(undefined1 *)(param_1 + 0x72) = 0;
    *(undefined1 *)((long)param_1 + 0x39c) = 0;
    *(undefined1 *)(param_1 + 0x75) = 0;
    *(undefined1 *)((long)param_1 + 0x3b4) = 0;
    *(undefined1 *)(param_1 + 0x78) = 0;
    *(undefined1 *)((long)param_1 + 0x3cc) = 0;
    *(undefined1 *)(param_1 + 0x7b) = 0;
    *(undefined1 *)((long)param_1 + 0x3e4) = 0;
    *(undefined1 *)(param_1 + 0x7e) = 0;
    *(undefined1 *)((long)param_1 + 0x3fc) = 0;
    *(undefined1 *)(param_1 + 0x81) = 0;
    *(undefined1 *)((long)param_1 + 0x414) = 0;
    *(undefined1 *)(param_1 + 0x84) = 0;
    *(undefined1 *)((long)param_1 + 0x42c) = 0;
    *(undefined4 *)(param_1 + 0x86) = 0;
    param_1[0x89] = 0;
    *(undefined4 *)(param_1 + 0x8a) = 0;
    param_1[0x87] = 0;
    param_1[0x88] = 0;
  }
  param_1[0x60] = puVar5 + 0x10;
  FUN_038f4940(param_1 + 0x60);
  param_1[0x59] = puVar5 + 0x10;
  FUN_038f4940(param_1 + 0x59);
  param_1[0x52] = &PTR_LAB_04b681d0;
  FUN_038f4940(param_1 + 0x52);
  param_1[0x46] = puVar8 + 0x10;
  if (param_1[0x49] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x4c);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x48) = 0;
    param_1[0x4b] = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
  }
  param_1[0x3a] = puVar8 + 0x10;
  if (param_1[0x3d] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x40);
    piVar1 = (int *)(lVar9 + 0x65c);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined4 *)(param_1 + 0x3c) = 0;
    param_1[0x3f] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
  }
  param_1[0x16] = PTR_DAT_04bd11c0 + 0x10;
  if (param_1[0x36] != 0) {
    lVar9 = *(long *)puVar6;
    (**(code **)puVar7)(param_1 + 0x17);
    piVar1 = (int *)(lVar9 + 0x650);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined1 *)(param_1 + 0x1e) = 0;
    *(undefined1 *)((long)param_1 + 0xfc) = 0;
    *(undefined1 *)(param_1 + 0x21) = 0;
    *(undefined1 *)((long)param_1 + 0x114) = 0;
    *(undefined1 *)(param_1 + 0x24) = 0;
    *(undefined1 *)((long)param_1 + 300) = 0;
    *(undefined1 *)(param_1 + 0x27) = 0;
    *(undefined1 *)((long)param_1 + 0x144) = 0;
    *(undefined1 *)(param_1 + 0x2a) = 0;
    *(undefined1 *)((long)param_1 + 0x15c) = 0;
    *(undefined1 *)(param_1 + 0x2d) = 0;
    *(undefined1 *)((long)param_1 + 0x174) = 0;
    *(undefined1 *)(param_1 + 0x30) = 0;
    *(undefined1 *)((long)param_1 + 0x18c) = 0;
    *(undefined1 *)(param_1 + 0x33) = 0;
    *(undefined1 *)((long)param_1 + 0x1a4) = 0;
    *(undefined4 *)(param_1 + 0x35) = 0;
    param_1[0x38] = 0;
    *(undefined4 *)(param_1 + 0x39) = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
  }
  param_1[0xf] = puVar5 + 0x10;
  FUN_038f4940();
  param_1[8] = puVar5 + 0x10;
  FUN_038f4940();
  param_1[1] = &PTR_LAB_04b681d0;
  FUN_038f4940(param_1 + 1);
  return;
}

