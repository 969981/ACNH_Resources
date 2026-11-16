
void FUN_02949710(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  
  puVar3 = PTR_DAT_04bc3bd8;
  param_1[0x350] = 0;
  puVar2 = PTR_DAT_04bb31d0;
  param_1[0x34a] = 0;
  param_1[0x344] = 0;
  param_1[0x33e] = 0;
  param_1[0x338] = 0;
  param_1[0x332] = 0;
  puVar1 = puVar2 + 0x10;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[0x34b] = (long)puVar1;
  param_1[0x345] = (long)puVar1;
  param_1[0x33f] = (long)puVar1;
  param_1[0x339] = (long)puVar1;
  param_1[0x333] = (long)puVar1;
  param_1[0x32d] = (long)puVar1;
  param_1[0x327] = (long)puVar1;
  param_1[0x32c] = 0;
  param_1[0x321] = (long)puVar1;
  param_1[0x326] = 0;
  param_1[0x31b] = (long)puVar1;
  param_1[800] = 0;
  param_1[0x315] = (long)puVar1;
  param_1[0x31a] = 0;
  param_1[0x2a1] = (long)&PTR_LAB_04a93d68;
  if (0 < (int)param_1[0x2a8]) {
    lVar5 = 0;
    do {
      plVar4 = *(long **)(param_1[0x2a9] + lVar5 * 8);
      (**(code **)*plVar4)(plVar4);
      lVar5 = lVar5 + 1;
      *plVar4 = param_1[0x2aa];
      param_1[0x2aa] = (long)plVar4;
    } while (lVar5 < (int)param_1[0x2a8]);
  }
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  param_1[0x22d] = (long)&PTR_LAB_04a93ee8;
  if (0 < (int)param_1[0x234]) {
    lVar5 = 0;
    do {
      plVar4 = *(long **)(param_1[0x235] + lVar5 * 8);
      (**(code **)*plVar4)(plVar4);
      lVar5 = lVar5 + 1;
      *plVar4 = param_1[0x236];
      param_1[0x236] = (long)plVar4;
    } while (lVar5 < (int)param_1[0x234]);
  }
  *(undefined4 *)(param_1 + 0x234) = 0;
  param_1[0x1b9] = (long)&PTR_LAB_04a93d68;
  if (0 < (int)param_1[0x1c0]) {
    lVar5 = 0;
    do {
      plVar4 = *(long **)(param_1[0x1c1] + lVar5 * 8);
      (**(code **)*plVar4)(plVar4);
      lVar5 = lVar5 + 1;
      *plVar4 = param_1[0x1c2];
      param_1[0x1c2] = (long)plVar4;
    } while (lVar5 < (int)param_1[0x1c0]);
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  param_1[0x145] = (long)&PTR_LAB_04a93d68;
  if (0 < (int)param_1[0x14c]) {
    lVar5 = 0;
    do {
      plVar4 = *(long **)(param_1[0x14d] + lVar5 * 8);
      (**(code **)*plVar4)(plVar4);
      lVar5 = lVar5 + 1;
      *plVar4 = param_1[0x14e];
      param_1[0x14e] = (long)plVar4;
    } while (lVar5 < (int)param_1[0x14c]);
  }
  *(undefined4 *)(param_1 + 0x14c) = 0;
  param_1[0xd1] = (long)&PTR_LAB_04a93d68;
  if (0 < (int)param_1[0xd8]) {
    lVar5 = 0;
    do {
      plVar4 = *(long **)(param_1[0xd9] + lVar5 * 8);
      (**(code **)*plVar4)(plVar4);
      lVar5 = lVar5 + 1;
      *plVar4 = param_1[0xda];
      param_1[0xda] = (long)plVar4;
    } while (lVar5 < (int)param_1[0xd8]);
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  param_1[0x4e] = (long)&PTR_LAB_04a94068;
  if (0 < (int)param_1[0x55]) {
    lVar5 = 0;
    do {
      plVar4 = *(long **)(param_1[0x56] + lVar5 * 8);
      (**(code **)*plVar4)(plVar4);
      lVar5 = lVar5 + 1;
      *plVar4 = param_1[0x57];
      param_1[0x57] = (long)plVar4;
    } while (lVar5 < (int)param_1[0x55]);
  }
  puVar1 = PTR_DAT_04bb5a88;
  puVar2 = puVar2 + 0x10;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x4d] = 0;
  param_1[0x47] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = (long)puVar2;
  param_1[0x3b] = 0;
  param_1[0x3c] = (long)puVar2;
  param_1[0x18] = (long)puVar2;
  param_1[0x48] = (long)(puVar1 + 0x10);
  param_1[0x35] = 0;
  param_1[0x36] = (long)puVar2;
  param_1[0x2f] = 0;
  param_1[0x30] = (long)puVar2;
  param_1[0x29] = 0;
  param_1[0x2a] = (long)puVar2;
  param_1[0x23] = 0;
  param_1[0x24] = (long)puVar2;
  param_1[0x1d] = 0;
  param_1[0x1e] = (long)puVar2;
  return;
}

