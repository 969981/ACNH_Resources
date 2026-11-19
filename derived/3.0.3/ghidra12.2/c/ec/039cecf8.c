
void FUN_039cecf8(undefined8 *param_1)

{
  undefined *puVar1;
  short *psVar2;
  long lVar3;
  short sVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  *param_1 = &PTR_FUN_04b6afe0;
  puVar7 = PTR_DAT_04bc1010;
  psVar2 = (short *)((long)param_1 + 0x2052);
  if (*psVar2 != -1) {
    lVar8 = *(long *)PTR_DAT_04bc1010;
    nn::os::LockMutex((MutexType *)(lVar8 + 0x580));
    uVar5 = (int)*psVar2 - (uint)*(ushort *)(lVar8 + 0x5c0);
    if (*(uint *)(lVar8 + 0x5a0) <= uVar5) {
      uVar5 = 0;
    }
    lVar3 = *(long *)(lVar8 + 0x5a8) + (long)(int)uVar5 * 0x80;
    sVar4 = *(short *)(lVar3 + 0x76) + -1;
    *(short *)(lVar3 + 0x76) = sVar4;
    if (sVar4 == 0) {
      *(short *)(lVar8 + 0x5c4) = *(short *)(lVar8 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x580));
    *psVar2 = -1;
  }
  FUN_038fd0e0(param_1 + 0x3f9);
  if (*(short *)((long)param_1 + 0x1f72) != -1) {
    lVar8 = *(long *)puVar7;
    nn::os::LockMutex((MutexType *)(lVar8 + 0x580));
    uVar5 = (int)*(short *)((long)param_1 + 0x1f72) - (uint)*(ushort *)(lVar8 + 0x5c0);
    if (*(uint *)(lVar8 + 0x5a0) <= uVar5) {
      uVar5 = 0;
    }
    lVar3 = *(long *)(lVar8 + 0x5a8) + (long)(int)uVar5 * 0x80;
    sVar4 = *(short *)(lVar3 + 0x76) + -1;
    *(short *)(lVar3 + 0x76) = sVar4;
    if (sVar4 == 0) {
      *(short *)(lVar8 + 0x5c4) = *(short *)(lVar8 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x580));
    *(undefined2 *)((long)param_1 + 0x1f72) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x3dd);
  if (*(short *)((long)param_1 + 0x1e8a) != -1) {
    lVar8 = *(long *)puVar7;
    nn::os::LockMutex((MutexType *)(lVar8 + 0x580));
    uVar5 = (int)*(short *)((long)param_1 + 0x1e8a) - (uint)*(ushort *)(lVar8 + 0x5c0);
    if (*(uint *)(lVar8 + 0x5a0) <= uVar5) {
      uVar5 = 0;
    }
    lVar3 = *(long *)(lVar8 + 0x5a8) + (long)(int)uVar5 * 0x80;
    sVar4 = *(short *)(lVar3 + 0x76) + -1;
    *(short *)(lVar3 + 0x76) = sVar4;
    if (sVar4 == 0) {
      *(short *)(lVar8 + 0x5c4) = *(short *)(lVar8 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x580));
    *(undefined2 *)((long)param_1 + 0x1e8a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x3c0);
  if (*(short *)((long)param_1 + 0x1da2) != -1) {
    lVar8 = *(long *)puVar7;
    nn::os::LockMutex((MutexType *)(lVar8 + 0x580));
    uVar5 = (int)*(short *)((long)param_1 + 0x1da2) - (uint)*(ushort *)(lVar8 + 0x5c0);
    if (*(uint *)(lVar8 + 0x5a0) <= uVar5) {
      uVar5 = 0;
    }
    lVar3 = *(long *)(lVar8 + 0x5a8) + (long)(int)uVar5 * 0x80;
    sVar4 = *(short *)(lVar3 + 0x76) + -1;
    *(short *)(lVar3 + 0x76) = sVar4;
    if (sVar4 == 0) {
      *(short *)(lVar8 + 0x5c4) = *(short *)(lVar8 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x580));
    *(undefined2 *)((long)param_1 + 0x1da2) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x3a3);
  if (*(short *)((long)param_1 + 0x1cba) != -1) {
    lVar8 = *(long *)puVar7;
    nn::os::LockMutex((MutexType *)(lVar8 + 0x580));
    uVar5 = (int)*(short *)((long)param_1 + 0x1cba) - (uint)*(ushort *)(lVar8 + 0x5c0);
    if (*(uint *)(lVar8 + 0x5a0) <= uVar5) {
      uVar5 = 0;
    }
    lVar3 = *(long *)(lVar8 + 0x5a8) + (long)(int)uVar5 * 0x80;
    sVar4 = *(short *)(lVar3 + 0x76) + -1;
    *(short *)(lVar3 + 0x76) = sVar4;
    if (sVar4 == 0) {
      *(short *)(lVar8 + 0x5c4) = *(short *)(lVar8 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x580));
    *(undefined2 *)((long)param_1 + 0x1cba) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x386);
  if (*(short *)((long)param_1 + 0x1bd2) != -1) {
    lVar8 = *(long *)puVar7;
    nn::os::LockMutex((MutexType *)(lVar8 + 0x580));
    uVar5 = (int)*(short *)((long)param_1 + 0x1bd2) - (uint)*(ushort *)(lVar8 + 0x5c0);
    if (*(uint *)(lVar8 + 0x5a0) <= uVar5) {
      uVar5 = 0;
    }
    lVar3 = *(long *)(lVar8 + 0x5a8) + (long)(int)uVar5 * 0x80;
    sVar4 = *(short *)(lVar3 + 0x76) + -1;
    *(short *)(lVar3 + 0x76) = sVar4;
    if (sVar4 == 0) {
      *(short *)(lVar8 + 0x5c4) = *(short *)(lVar8 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x580));
    *(undefined2 *)((long)param_1 + 0x1bd2) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x369);
  if (*(short *)((long)param_1 + 0x1aea) != -1) {
    lVar8 = *(long *)puVar7;
    nn::os::LockMutex((MutexType *)(lVar8 + 0x580));
    uVar5 = (int)*(short *)((long)param_1 + 0x1aea) - (uint)*(ushort *)(lVar8 + 0x5c0);
    if (*(uint *)(lVar8 + 0x5a0) <= uVar5) {
      uVar5 = 0;
    }
    lVar3 = *(long *)(lVar8 + 0x5a8) + (long)(int)uVar5 * 0x80;
    sVar4 = *(short *)(lVar3 + 0x76) + -1;
    *(short *)(lVar3 + 0x76) = sVar4;
    if (sVar4 == 0) {
      *(short *)(lVar8 + 0x5c4) = *(short *)(lVar8 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x580));
    *(undefined2 *)((long)param_1 + 0x1aea) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x34c);
  param_1[0x324] = &PTR_LAB_049a8af0;
  FUN_038fd0e0(param_1 + 0x32f);
  param_1[0x304] = &PTR_LAB_049a8af0;
  FUN_038fd0e0(param_1 + 0x30f);
  param_1[0x2e4] = &PTR_LAB_049a8af0;
  FUN_038fd0e0(param_1 + 0x2ef);
  param_1[0x2c4] = &PTR_LAB_049a8af0;
  FUN_038fd0e0(param_1 + 0x2cf);
  param_1[0x2a4] = &PTR_LAB_049a8af0;
  FUN_038fd0e0(param_1 + 0x2af);
  param_1[0x284] = &PTR_LAB_049a8af0;
  FUN_038fd0e0(param_1 + 0x28f);
  puVar6 = PTR_DAT_04bbd500;
  puVar1 = PTR_DAT_04bbd500 + 0x10;
  param_1[0x25f] = puVar1;
  FUN_038fd0e0(param_1 + 0x26a);
  param_1[0x243] = &PTR_LAB_049a8af0;
  FUN_038fd0e0(param_1 + 0x24e);
  param_1[0x227] = &PTR_LAB_049a8af0;
  FUN_038fd0e0(param_1 + 0x232);
  param_1[0x218] = PTR_DAT_04bd11b8 + 0x10;
  FUN_0390d560(param_1 + 0x218);
  param_1[0x1fb] = &PTR_LAB_049a8af0;
  FUN_038fd0e0(param_1 + 0x206);
  param_1[0x1db] = &PTR_LAB_049a8af0;
  FUN_038fd0e0(param_1 + 0x1e6);
  param_1[0x1bb] = &PTR_LAB_049a8af0;
  FUN_038fd0e0(param_1 + 0x1c6);
  param_1[0x19b] = &PTR_LAB_049a8af0;
  FUN_038fd0e0(param_1 + 0x1a6);
  param_1[0x17b] = &PTR_LAB_049a8af0;
  FUN_038fd0e0(param_1 + 0x186);
  param_1[0x15c] = puVar1;
  FUN_038fd0e0(param_1 + 0x167);
  if (*(short *)((long)param_1 + 0xa6a) != -1) {
    lVar8 = *(long *)puVar7;
    nn::os::LockMutex((MutexType *)(lVar8 + 0x580));
    uVar5 = (int)*(short *)((long)param_1 + 0xa6a) - (uint)*(ushort *)(lVar8 + 0x5c0);
    if (*(uint *)(lVar8 + 0x5a0) <= uVar5) {
      uVar5 = 0;
    }
    lVar3 = *(long *)(lVar8 + 0x5a8) + (long)(int)uVar5 * 0x80;
    sVar4 = *(short *)(lVar3 + 0x76) + -1;
    *(short *)(lVar3 + 0x76) = sVar4;
    if (sVar4 == 0) {
      *(short *)(lVar8 + 0x5c4) = *(short *)(lVar8 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x580));
    *(undefined2 *)((long)param_1 + 0xa6a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x13c);
  if (*(short *)((long)param_1 + 0x982) != -1) {
    lVar8 = *(long *)puVar7;
    nn::os::LockMutex((MutexType *)(lVar8 + 0x580));
    uVar5 = (int)*(short *)((long)param_1 + 0x982) - (uint)*(ushort *)(lVar8 + 0x5c0);
    if (*(uint *)(lVar8 + 0x5a0) <= uVar5) {
      uVar5 = 0;
    }
    lVar3 = *(long *)(lVar8 + 0x5a8) + (long)(int)uVar5 * 0x80;
    sVar4 = *(short *)(lVar3 + 0x76) + -1;
    *(short *)(lVar3 + 0x76) = sVar4;
    if (sVar4 == 0) {
      *(short *)(lVar8 + 0x5c4) = *(short *)(lVar8 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x580));
    *(undefined2 *)((long)param_1 + 0x982) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x11f);
  if (*(short *)((long)param_1 + 0x89a) != -1) {
    lVar8 = *(long *)puVar7;
    nn::os::LockMutex((MutexType *)(lVar8 + 0x580));
    uVar5 = (int)*(short *)((long)param_1 + 0x89a) - (uint)*(ushort *)(lVar8 + 0x5c0);
    if (*(uint *)(lVar8 + 0x5a0) <= uVar5) {
      uVar5 = 0;
    }
    lVar3 = *(long *)(lVar8 + 0x5a8) + (long)(int)uVar5 * 0x80;
    sVar4 = *(short *)(lVar3 + 0x76) + -1;
    *(short *)(lVar3 + 0x76) = sVar4;
    if (sVar4 == 0) {
      *(short *)(lVar8 + 0x5c4) = *(short *)(lVar8 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x580));
    *(undefined2 *)((long)param_1 + 0x89a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x102);
  if (*(short *)((long)param_1 + 0x7b2) != -1) {
    lVar8 = *(long *)puVar7;
    nn::os::LockMutex((MutexType *)(lVar8 + 0x580));
    uVar5 = (int)*(short *)((long)param_1 + 0x7b2) - (uint)*(ushort *)(lVar8 + 0x5c0);
    if (*(uint *)(lVar8 + 0x5a0) <= uVar5) {
      uVar5 = 0;
    }
    lVar3 = *(long *)(lVar8 + 0x5a8) + (long)(int)uVar5 * 0x80;
    sVar4 = *(short *)(lVar3 + 0x76) + -1;
    *(short *)(lVar3 + 0x76) = sVar4;
    if (sVar4 == 0) {
      *(short *)(lVar8 + 0x5c4) = *(short *)(lVar8 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x580));
    *(undefined2 *)((long)param_1 + 0x7b2) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0xe5);
  if (*(short *)((long)param_1 + 0x6ca) != -1) {
    lVar8 = *(long *)puVar7;
    nn::os::LockMutex((MutexType *)(lVar8 + 0x580));
    uVar5 = (int)*(short *)((long)param_1 + 0x6ca) - (uint)*(ushort *)(lVar8 + 0x5c0);
    if (*(uint *)(lVar8 + 0x5a0) <= uVar5) {
      uVar5 = 0;
    }
    lVar3 = *(long *)(lVar8 + 0x5a8) + (long)(int)uVar5 * 0x80;
    sVar4 = *(short *)(lVar3 + 0x76) + -1;
    *(short *)(lVar3 + 0x76) = sVar4;
    if (sVar4 == 0) {
      *(short *)(lVar8 + 0x5c4) = *(short *)(lVar8 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x580));
    *(undefined2 *)((long)param_1 + 0x6ca) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 200);
  param_1[0xa1] = puVar6 + 0x10;
  FUN_038fd0e0(param_1 + 0xac);
  if (*(short *)((long)param_1 + 0x492) != -1) {
    lVar8 = *(long *)puVar7;
    nn::os::LockMutex((MutexType *)(lVar8 + 0x580));
    uVar5 = (int)*(short *)((long)param_1 + 0x492) - (uint)*(ushort *)(lVar8 + 0x5c0);
    if (*(uint *)(lVar8 + 0x5a0) <= uVar5) {
      uVar5 = 0;
    }
    lVar3 = *(long *)(lVar8 + 0x5a8) + (long)(int)uVar5 * 0x80;
    sVar4 = *(short *)(lVar3 + 0x76) + -1;
    *(short *)(lVar3 + 0x76) = sVar4;
    if (sVar4 == 0) {
      *(short *)(lVar8 + 0x5c4) = *(short *)(lVar8 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x580));
    *(undefined2 *)((long)param_1 + 0x492) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x81);
  if (*(short *)((long)param_1 + 0x3aa) != -1) {
    lVar8 = *(long *)puVar7;
    nn::os::LockMutex((MutexType *)(lVar8 + 0x580));
    uVar5 = (int)*(short *)((long)param_1 + 0x3aa) - (uint)*(ushort *)(lVar8 + 0x5c0);
    if (*(uint *)(lVar8 + 0x5a0) <= uVar5) {
      uVar5 = 0;
    }
    lVar3 = *(long *)(lVar8 + 0x5a8) + (long)(int)uVar5 * 0x80;
    sVar4 = *(short *)(lVar3 + 0x76) + -1;
    *(short *)(lVar3 + 0x76) = sVar4;
    if (sVar4 == 0) {
      *(short *)(lVar8 + 0x5c4) = *(short *)(lVar8 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x580));
    *(undefined2 *)((long)param_1 + 0x3aa) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 100);
  if (*(short *)((long)param_1 + 0x2c2) != -1) {
    lVar8 = *(long *)puVar7;
    nn::os::LockMutex((MutexType *)(lVar8 + 0x580));
    uVar5 = (int)*(short *)((long)param_1 + 0x2c2) - (uint)*(ushort *)(lVar8 + 0x5c0);
    if (*(uint *)(lVar8 + 0x5a0) <= uVar5) {
      uVar5 = 0;
    }
    lVar3 = *(long *)(lVar8 + 0x5a8) + (long)(int)uVar5 * 0x80;
    sVar4 = *(short *)(lVar3 + 0x76) + -1;
    *(short *)(lVar3 + 0x76) = sVar4;
    if (sVar4 == 0) {
      *(short *)(lVar8 + 0x5c4) = *(short *)(lVar8 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x580));
    *(undefined2 *)((long)param_1 + 0x2c2) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x47);
  if (*(short *)((long)param_1 + 0x1da) != -1) {
    lVar8 = *(long *)puVar7;
    nn::os::LockMutex((MutexType *)(lVar8 + 0x580));
    uVar5 = (int)*(short *)((long)param_1 + 0x1da) - (uint)*(ushort *)(lVar8 + 0x5c0);
    if (*(uint *)(lVar8 + 0x5a0) <= uVar5) {
      uVar5 = 0;
    }
    lVar3 = *(long *)(lVar8 + 0x5a8) + (long)(int)uVar5 * 0x80;
    sVar4 = *(short *)(lVar3 + 0x76) + -1;
    *(short *)(lVar3 + 0x76) = sVar4;
    if (sVar4 == 0) {
      *(short *)(lVar8 + 0x5c4) = *(short *)(lVar8 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x580));
    *(undefined2 *)((long)param_1 + 0x1da) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x2a);
  if (*(short *)((long)param_1 + 0xf2) != -1) {
    lVar8 = *(long *)puVar7;
    nn::os::LockMutex((MutexType *)(lVar8 + 0x580));
    uVar5 = (int)*(short *)((long)param_1 + 0xf2) - (uint)*(ushort *)(lVar8 + 0x5c0);
    if (*(uint *)(lVar8 + 0x5a0) <= uVar5) {
      uVar5 = 0;
    }
    lVar3 = *(long *)(lVar8 + 0x5a8) + (long)(int)uVar5 * 0x80;
    sVar4 = *(short *)(lVar3 + 0x76) + -1;
    *(short *)(lVar3 + 0x76) = sVar4;
    if (sVar4 == 0) {
      *(short *)(lVar8 + 0x5c4) = *(short *)(lVar8 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x580));
    *(undefined2 *)((long)param_1 + 0xf2) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0xd);
  return;
}

