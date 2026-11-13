
void FUN_013b9890(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  
  param_1[0x1bf] = 0;
  puVar3 = PTR_DAT_04bbc910;
  param_1[0x1b9] = 0;
  puVar2 = PTR_DAT_04bb31d0;
  param_1[0x1b3] = 0;
  param_1[0x1ad] = 0;
  puVar1 = puVar2 + 0x10;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[0x1ba] = (long)puVar1;
  param_1[0x1b4] = (long)puVar1;
  param_1[0x1ae] = (long)puVar1;
  param_1[0x1a8] = (long)puVar1;
  puVar3 = PTR_DAT_04bb54f8;
  puVar1 = PTR_DAT_04bb54f8 + 0x10;
  param_1[0x17a] = (long)puVar1;
  if (0 < (int)param_1[0x181]) {
    lVar5 = 0;
    do {
      plVar4 = *(long **)(param_1[0x182] + lVar5 * 8);
      (**(code **)*plVar4)(plVar4);
      lVar5 = lVar5 + 1;
      *plVar4 = param_1[0x183];
      param_1[0x183] = (long)plVar4;
    } while (lVar5 < (int)param_1[0x181]);
  }
  *(undefined4 *)(param_1 + 0x181) = 0;
  param_1[0x14c] = (long)puVar1;
  if (0 < (int)param_1[0x153]) {
    lVar5 = 0;
    do {
      plVar4 = *(long **)(param_1[0x154] + lVar5 * 8);
      (**(code **)*plVar4)(plVar4);
      lVar5 = lVar5 + 1;
      *plVar4 = param_1[0x155];
      param_1[0x155] = (long)plVar4;
    } while (lVar5 < (int)param_1[0x153]);
  }
  *(undefined4 *)(param_1 + 0x153) = 0;
  param_1[0x11e] = (long)(puVar3 + 0x10);
  if (0 < (int)param_1[0x125]) {
    lVar5 = 0;
    do {
      plVar4 = *(long **)(param_1[0x126] + lVar5 * 8);
      (**(code **)*plVar4)(plVar4);
      lVar5 = lVar5 + 1;
      *plVar4 = param_1[0x127];
      param_1[0x127] = (long)plVar4;
    } while (lVar5 < (int)param_1[0x125]);
  }
  *(undefined4 *)(param_1 + 0x125) = 0;
  param_1[0xd4] = (long)&PTR_LAB_04994468;
  if (0 < (int)param_1[0xdb]) {
    lVar5 = 0;
    do {
      plVar4 = *(long **)(param_1[0xdc] + lVar5 * 8);
      (**(code **)*plVar4)(plVar4);
      lVar5 = lVar5 + 1;
      *plVar4 = param_1[0xdd];
      param_1[0xdd] = (long)plVar4;
    } while (lVar5 < (int)param_1[0xdb]);
  }
  *(undefined4 *)(param_1 + 0xdb) = 0;
  param_1[0x8a] = (long)&PTR_LAB_04994468;
  if (0 < (int)param_1[0x91]) {
    lVar5 = 0;
    do {
      plVar4 = *(long **)(param_1[0x92] + lVar5 * 8);
      (**(code **)*plVar4)(plVar4);
      lVar5 = lVar5 + 1;
      *plVar4 = param_1[0x93];
      param_1[0x93] = (long)plVar4;
    } while (lVar5 < (int)param_1[0x91]);
  }
  puVar2 = puVar2 + 0x10;
  *(undefined4 *)(param_1 + 0x91) = 0;
  param_1[0x89] = 0;
  param_1[0x84] = (long)puVar2;
  param_1[0x7e] = (long)puVar2;
  param_1[0x83] = 0;
  param_1[0x78] = (long)puVar2;
  param_1[0x7d] = 0;
  param_1[0x72] = (long)puVar2;
  param_1[0x77] = 0;
  param_1[0x6c] = (long)puVar2;
  param_1[0x71] = 0;
  param_1[0x66] = (long)puVar2;
  param_1[0x6b] = 0;
  param_1[0x60] = (long)puVar2;
  param_1[0x65] = 0;
  param_1[0x5a] = (long)puVar2;
  param_1[0x5f] = 0;
  param_1[0x54] = (long)puVar2;
  param_1[0x59] = 0;
  param_1[0x4e] = (long)puVar2;
  param_1[0x53] = 0;
  param_1[0x48] = (long)puVar2;
  param_1[0x4d] = 0;
  param_1[0x42] = (long)puVar2;
  param_1[0x47] = 0;
  param_1[0x41] = 0;
  param_1[0x18] = (long)puVar2;
  param_1[0x3b] = 0;
  param_1[0x3c] = (long)puVar2;
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

