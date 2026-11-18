
void FUN_035be010(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  
  *param_1 = param_2;
  puVar4 = PTR_DAT_04bdf328;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  param_1[6] = 0;
  *(undefined8 *)((long)param_1 + 0x3e) = 0;
  uVar6 = *(undefined8 *)puVar4;
  *(undefined8 *)((long)param_1 + 0x46) = 0;
  *(undefined2 *)((long)param_1 + 0x4e) = 0;
  param_1[0x1e] = 0;
  param_1[0x10] = 2;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = uVar6;
  param_1[0x17] = 4;
  param_1[0xe] = 0;
  param_1[0xf] = uVar6;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)((long)param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((long)param_1 + 0x104) = 0;
  param_1[0x31] = 0;
  param_1[0x27] = 2;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = uVar6;
  param_1[0x2e] = 4;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = uVar6;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)((long)param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(undefined4 *)((long)param_1 + 0x1bc) = 0;
  param_1[0x41] = 0;
  param_1[0x48] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = uVar6;
  param_1[0x45] = 4;
  param_1[0x40] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x3e] = 2;
  param_1[0x3f] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = uVar6;
  *(undefined4 *)((long)param_1 + 0x26c) = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)((long)param_1 + 0x274) = 0;
  param_1[0x54] = uVar6;
  param_1[0x5b] = uVar6;
  param_1[0x58] = 0;
  param_1[0x55] = 2;
  param_1[0x56] = 0;
  param_1[0x5f] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5c] = 4;
  param_1[0x57] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  *(undefined4 *)((long)param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  *(undefined4 *)((long)param_1 + 0x32c) = 0;
  uVar6 = *(undefined8 *)puVar4;
  param_1[0x6f] = 0;
  param_1[0x6b] = uVar6;
  param_1[0x6c] = 2;
  param_1[0x6d] = 0;
  param_1[0x76] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = uVar6;
  param_1[0x73] = 4;
  param_1[0x6e] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)((long)param_1 + 0x3dc) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)((long)param_1 + 0x3e4) = 0;
  param_1[0x86] = 0;
  param_1[0x82] = uVar6;
  param_1[0x83] = 2;
  param_1[0x84] = 0;
  param_1[0x8d] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = uVar6;
  param_1[0x8a] = 4;
  param_1[0x85] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  *(undefined4 *)((long)param_1 + 0x494) = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  *(undefined4 *)((long)param_1 + 0x49c) = 0;
  param_1[0x9d] = 0;
  param_1[0x99] = uVar6;
  param_1[0x9a] = 2;
  param_1[0x9b] = 0;
  param_1[0xa4] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = uVar6;
  param_1[0xa1] = 4;
  param_1[0x9c] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa8] = 0;
  param_1[0xa7] = 0;
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  *(undefined4 *)((long)param_1 + 0x54c) = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0;
  *(undefined4 *)((long)param_1 + 0x554) = 0;
  param_1[0xb1] = 2;
  param_1[0xb4] = 0;
  param_1[0xb0] = uVar6;
  param_1[0xb2] = 0;
  param_1[0xbb] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = uVar6;
  param_1[0xb8] = 4;
  param_1[0xb3] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbf] = 0;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  param_1[0xbc] = 0;
  *(undefined4 *)((long)param_1 + 0x604) = 0;
  *(undefined4 *)(param_1 + 0xc1) = 0;
  *(undefined4 *)((long)param_1 + 0x60c) = 0;
  uVar6 = *(undefined8 *)puVar4;
  param_1[0xc9] = 0;
  param_1[200] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = uVar6;
  param_1[0xc6] = 8;
  param_1[199] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xd0),true,0);
  param_1[0xd4] = 0;
  nn::os::InitializeConditionVariable((ConditionVariableType *)(param_1 + 0xd5));
  nn::os::InitializeConditionVariable((ConditionVariableType *)(param_1 + 0xd6));
  uVar6 = *(undefined8 *)puVar4;
  param_1[0xd8] = 0;
  *(undefined1 *)(param_1 + 0xd9) = 1;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xd7] = 0xffffffffffffffff;
  param_1[0xdb] = 8;
  param_1[0xdc] = 0;
  param_1[0xda] = uVar6;
  param_1[0x125] = 0;
  *(undefined4 *)(param_1 + 0x126) = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  *(undefined4 *)(param_1 + 299) = 0;
  param_1[300] = 0xffffffffffffffff;
  param_1[0x12d] = 0xffffffffffffffff;
  param_1[0xdf] = &PTR_LAB_04bb1ba0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x12e),true,0);
  uVar6 = *(undefined8 *)puVar4;
  param_1[0x137] = 0;
  param_1[0x133] = uVar6;
  plVar7 = (long *)param_1[0x1e];
  param_1[0x136] = 0;
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  *(undefined1 *)(param_1 + 0x139) = 0;
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  param_1[0x1e] = 0;
  param_1[0x138] = &PTR_LAB_04bb1ae0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar7 = (long *)param_1[0x35];
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar7 = (long *)param_1[0x4c];
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x4c] = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar7 = (long *)param_1[99];
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[99] = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar7 = (long *)param_1[0x7a];
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x7a] = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar7 = (long *)param_1[0x91];
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x91] = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar7 = (long *)param_1[0xa8];
  param_1[0xa7] = 0;
  param_1[0xa6] = 0;
  param_1[0xa8] = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar7 = (long *)param_1[0xbf];
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  param_1[0xbf] = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}

