
void FUN_03955650(long *param_1)

{
  void *__dest;
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  byte *pbVar9;
  undefined1 *__dest_00;
  void *__src;
  undefined *local_50;
  byte *local_48;
  
  puVar2 = PTR_DAT_04bd1070;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = 0;
  puVar4 = PTR_DAT_04bd1140;
  puVar2 = PTR_PTR_04bb2238;
  lVar5 = 0;
  if (*(long *)PTR_DAT_04bd1140 != 0) {
    lVar5 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,PTR_PTR_04bb2238);
  }
  lVar7 = *(long *)puVar2;
  param_1[8] = lVar5;
  (**(code **)(lVar7 + 0x18))(puVar2);
  pbVar9 = *(byte **)(puVar2 + 8);
  uVar6 = (uint)*pbVar9;
  if (*pbVar9 != 0) {
    uVar8 = 0xffffffff;
    do {
      pbVar9 = pbVar9 + 1;
      uVar8 = crc32b(uVar8,uVar6,0x4c11db7);
      uVar6 = (uint)*pbVar9;
    } while (uVar6 != 0);
    uVar6 = ~uVar8;
  }
  *(uint *)(param_1 + 5) = uVar6;
  *param_1 = (long)&PTR_LAB_04b680f8;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x40;
  __dest = (void *)((long)param_1 + 0xc4);
  *(undefined1 *)((long)param_1 + 0x9b) = 0;
  param_1[9] = (long)(PTR_DAT_04bb2bc0 + 0x10);
  param_1[10] = (long)param_1 + 0x5c;
  *(undefined4 *)(param_1 + 0x18) = 0x100;
  puVar3 = PTR_DAT_04bb4520;
  param_1[0x17] = (long)__dest;
  *(undefined1 *)((long)param_1 + 0x1c3) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = (long)(puVar3 + 0x10);
  (**(code **)(*(long *)puVar2 + 0x18))(puVar2);
  __src = *(void **)(puVar2 + 8);
  if (__dest != __src) {
    (**(code **)(*(long *)puVar2 + 0x18))(puVar2);
    lVar5 = 0;
    do {
      if (*(char *)(*(long *)(puVar2 + 8) + lVar5) == '\0') goto LAB_039557bc;
      lVar7 = *(long *)(puVar2 + 8) + lVar5;
      if (*(char *)(lVar7 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_039557bc;
      }
      if (*(char *)(lVar7 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_039557bc;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_039557bc:
    iVar1 = (int)lVar5;
    if ((int)param_1[0x18] <= (int)lVar5) {
      iVar1 = (int)param_1[0x18] + -1;
    }
    memcpy(__dest,__src,(long)iVar1);
    *(undefined1 *)((long)__dest + (long)iVar1) = 0;
  }
  puVar2 = PTR_DAT_04bb21f8;
  __dest_00 = (undefined1 *)param_1[10];
  param_1[0x39] = 0x200000000;
  param_1[0x16] = (long)(puVar2 + 0x10);
  if (__dest_00 != &DAT_040cc339) {
    iVar1 = 3;
    if ((int)param_1[0xb] < 4) {
      iVar1 = (int)param_1[0xb] + -1;
    }
    memcpy(__dest_00,&DAT_040cc339,(long)iVar1);
    __dest_00[iVar1] = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_50 = PTR_DAT_04bb2020 + 0x10;
  local_48 = (byte *)0x41b3b74;
  lVar5 = 0;
  if (*(long *)puVar4 != 0) {
    lVar5 = FUN_03954f70(*(long *)puVar4,&local_50);
  }
  param_1[8] = lVar5;
  (**(code **)(local_50 + 0x18))(&local_50);
  uVar6 = (uint)*local_48;
  if (*local_48 != 0) {
    uVar8 = 0xffffffff;
    do {
      local_48 = local_48 + 1;
      uVar8 = crc32b(uVar8,uVar6,0x4c11db7);
      uVar6 = (uint)*local_48;
    } while (uVar6 != 0);
    uVar6 = ~uVar8;
  }
  *(uint *)(param_1 + 5) = uVar6;
  return;
}

