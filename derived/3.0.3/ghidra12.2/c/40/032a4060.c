
void FUN_032a4060(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  param_1[4] = 0;
  puVar1 = PTR_DAT_04bc8e60;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar2 = PTR_DAT_04bd0d40;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 100) = 0;
  *param_1 = &PTR_FUN_04b196b8;
  param_1[1] = 0;
  param_1[6] = puVar1 + 0x10;
  param_1[7] = 0;
  plVar7 = param_1 + 0x15;
  *plVar7 = (long)(puVar2 + 0x10);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  param_1[0x1d] = plVar7;
  param_1[0x1e] = puVar1;
  param_1[0x1f] = &DAT_0407ebb1;
  param_1[0x16] = 0;
  lVar4 = *(long *)PTR_DAT_04bb2698;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  if (lVar4 != 0) {
    lVar4 = FUN_038cb610(lVar4,plVar7);
    param_1[0x16] = lVar4;
    if (lVar4 != 0) {
      if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = lVar4 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
      }
      plVar6 = (long *)(lVar4 + 0x70);
      lVar5 = *plVar6;
      plVar7 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)plVar7);
      *plVar6 = (long)plVar7;
      *plVar7 = lVar5;
      plVar7[1] = (long)plVar6;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 8) = plVar7;
      }
      *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + 1;
      if (lVar8 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
      }
    }
  }
  puVar1 = PTR_DAT_04bb24a8;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  puVar2 = PTR_DAT_04bb24b0;
  param_1[0x24] = 0;
  *(undefined4 *)((long)param_1 + 300) = 0;
  param_1[0x15] = puVar1 + 0x10;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x20] = puVar2 + 0x10;
  param_1[0x21] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x100000000;
  puVar3 = PTR_DAT_04bb2120;
  puVar1 = PTR_DAT_04bc8e68 + 0x10;
  param_1[0x34] = PTR_DAT_04bb2120;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined4 *)((long)param_1 + 0x1bc) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)((long)param_1 + 0x1c4) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined8 *)((long)param_1 + 0x1cc) = 0;
  *(undefined8 *)((long)param_1 + 0x1d4) = 0;
  *(undefined4 *)((long)param_1 + 0x1dc) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = puVar1;
  param_1[0x2e] = puVar3;
  param_1[0x2f] = puVar1;
  param_1[0x30] = puVar3;
  param_1[0x31] = puVar1;
  param_1[0x32] = puVar3;
  param_1[0x33] = puVar1;
  param_1[0x35] = puVar1;
  param_1[0x36] = puVar3;
  puVar2 = PTR_DAT_04bc90b0 + 0x10;
  param_1[0x42] = puVar2;
  param_1[0x3c] = puVar2;
  param_1[0x3d] = 0;
  puVar2 = PTR_DAT_04bc90b8 + 0x10;
  param_1[0x43] = 0;
  param_1[0x49] = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)((long)param_1 + 0x2a4) = 0;
  param_1[0x56] = puVar3;
  param_1[0x55] = puVar1;
  param_1[0x48] = puVar2;
  param_1[0x4e] = puVar2;
  *(undefined1 *)(param_1 + 0x54) = 1;
  *(undefined2 *)(param_1 + 0x57) = 1;
  puVar1 = PTR_DAT_04bc90c8 + 0x10;
  param_1[0x59] = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  param_1[3] = param_1[2];
  param_1[0x58] = puVar1;
  if (((long *)param_1[1] != (long *)0x0) && (param_1[2] != 0)) {
    (**(code **)(*(long *)param_1[1] + 0x38))();
  }
  param_1[1] = 0;
  param_1[2] = param_1 + 0xd;
  param_1[3] = param_1 + 0xd;
  param_1[4] = 4;
  return;
}

