
void FUN_015bba90(undefined8 *param_1)

{
  undefined *puVar1;
  int *piVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  short sVar6;
  uint uVar7;
  undefined *puVar8;
  long lVar9;
  
  *param_1 = &PTR_FUN_049af178;
  puVar1 = PTR_DAT_04bd11b8 + 0x10;
  param_1[0x18d] = puVar1;
  FUN_0390d560(param_1 + 0x18d);
  param_1[0x14a] = puVar1;
  FUN_0390d560(param_1 + 0x14a);
  puVar8 = PTR_DAT_04bc1010;
  if (*(short *)((long)param_1 + 0xa4a) != -1) {
    lVar9 = *(long *)PTR_DAT_04bc1010;
    nn::os::LockMutex((MutexType *)(lVar9 + 0x580));
    uVar7 = (int)*(short *)((long)param_1 + 0xa4a) - (uint)*(ushort *)(lVar9 + 0x5c0);
    if (*(uint *)(lVar9 + 0x5a0) <= uVar7) {
      uVar7 = 0;
    }
    lVar3 = *(long *)(lVar9 + 0x5a8) + (long)(int)uVar7 * 0x80;
    sVar6 = *(short *)(lVar3 + 0x76) + -1;
    *(short *)(lVar3 + 0x76) = sVar6;
    if (sVar6 == 0) {
      *(short *)(lVar9 + 0x5c4) = *(short *)(lVar9 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar9 + 0x580));
    *(undefined2 *)((long)param_1 + 0xa4a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x138);
  FUN_038fd0e0(param_1 + 0x124);
  param_1[0x10b] = puVar1;
  FUN_0390d560(param_1 + 0x10b);
  if (*(short *)((long)param_1 + 0x81a) != -1) {
    lVar9 = *(long *)puVar8;
    nn::os::LockMutex((MutexType *)(lVar9 + 0x580));
    uVar7 = (int)*(short *)((long)param_1 + 0x81a) - (uint)*(ushort *)(lVar9 + 0x5c0);
    if (*(uint *)(lVar9 + 0x5a0) <= uVar7) {
      uVar7 = 0;
    }
    lVar3 = *(long *)(lVar9 + 0x5a8) + (long)(int)uVar7 * 0x80;
    sVar6 = *(short *)(lVar3 + 0x76) + -1;
    *(short *)(lVar3 + 0x76) = sVar6;
    if (sVar6 == 0) {
      *(short *)(lVar9 + 0x5c4) = *(short *)(lVar9 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar9 + 0x580));
    *(undefined2 *)((long)param_1 + 0x81a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0xf2);
  FUN_038fd0e0(param_1 + 0xde);
  param_1[0xb6] = PTR_DAT_04bd1170 + 0x10;
  puVar1 = PTR_DAT_04bc8e38;
  if (param_1[0xb9] != 0) {
    lVar9 = *(long *)puVar8;
    (**(code **)PTR_DAT_04bc8e38)(param_1 + 0xbc);
    piVar2 = (int *)(lVar9 + 0x65c);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(undefined4 *)(param_1 + 0xb8) = 0;
    param_1[0xbb] = 0;
    param_1[0xb9] = 0;
    param_1[0xba] = 0;
  }
  FUN_0390e230(param_1 + 0x7a);
  param_1[0x56] = PTR_DAT_04bd11c0 + 0x10;
  if (param_1[0x76] != 0) {
    lVar9 = *(long *)puVar8;
    (**(code **)puVar1)(param_1 + 0x57);
    piVar2 = (int *)(lVar9 + 0x650);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(undefined1 *)(param_1 + 0x5e) = 0;
    *(undefined1 *)((long)param_1 + 0x2fc) = 0;
    *(undefined1 *)(param_1 + 0x61) = 0;
    *(undefined1 *)((long)param_1 + 0x314) = 0;
    *(undefined1 *)(param_1 + 100) = 0;
    *(undefined1 *)((long)param_1 + 0x32c) = 0;
    *(undefined1 *)(param_1 + 0x67) = 0;
    *(undefined1 *)((long)param_1 + 0x344) = 0;
    *(undefined1 *)(param_1 + 0x6a) = 0;
    *(undefined1 *)((long)param_1 + 0x35c) = 0;
    *(undefined1 *)(param_1 + 0x6d) = 0;
    *(undefined1 *)((long)param_1 + 0x374) = 0;
    *(undefined1 *)(param_1 + 0x70) = 0;
    *(undefined1 *)((long)param_1 + 0x38c) = 0;
    *(undefined1 *)(param_1 + 0x73) = 0;
    *(undefined1 *)((long)param_1 + 0x3a4) = 0;
    *(undefined4 *)(param_1 + 0x75) = 0;
    param_1[0x78] = 0;
    *(undefined4 *)(param_1 + 0x79) = 0;
    param_1[0x76] = 0;
    param_1[0x77] = 0;
  }
  FUN_01629448(param_1);
  return;
}

