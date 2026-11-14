
void FUN_01609e50(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined *local_100;
  undefined1 *puStack_f8;
  int local_f0;
  undefined1 auStack_ec [127];
  undefined1 local_6d;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
  lVar4 = *(long *)(param_2 + 8);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  puVar1 = PTR_DAT_04bb60a0 + 0x10;
  plVar6 = param_1 + 5;
  *plVar6 = 0;
  *param_1 = (long)puVar1;
  param_1[1] = lVar4;
  if (param_4 != (long *)0x0) {
    (**(code **)(*param_4 + 0x140))(param_4,param_1);
  }
  *(undefined1 *)((long)param_1 + 0x143) = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  puVar1 = PTR_DAT_04bb21f8;
  *(undefined4 *)(param_1 + 8) = 0x100;
  *param_1 = (long)&PTR_LAB_049b3018;
  param_1[0x2c] = (long)"mFlag";
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[6] = (long)(puVar1 + 0x10);
  param_1[7] = (long)param_1 + 0x44;
  puVar1 = PTR_DAT_04bb33a8 + 0x10;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  param_1[0x2a] = (long)param_1;
  param_1[0x2b] = (long)puVar1;
  lVar4 = param_1[5];
  if (param_1[5] != 0) {
    do {
      lVar5 = lVar4;
      lVar4 = *(long *)(lVar5 + 0x10);
    } while (lVar4 != 0);
    plVar6 = (long *)(lVar5 + 0x10);
  }
  *plVar6 = (long)(param_1 + 0x2b);
  param_1[0x2e] = (long)param_1;
  puVar3 = (undefined1 *)(**(code **)(param_1[0x2b] + 0xf0))();
  *puVar3 = 0;
  if ((*(uint *)(param_1 + 0x2f) >> 7 & 1) == 0) {
    param_1[0x30] = 0;
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  local_68 = PTR_DAT_04bb2020;
  *(uint *)(param_1 + 0x2f) = *(uint *)(param_1 + 0x2f) & 0xfeffffff;
  puVar1 = PTR_PTR_04bb2238;
  local_68 = local_68 + 0x10;
  puStack_50 = &DAT_040a61b9;
  pcStack_60 = "mName";
  puStack_40 = &DAT_0407ebb1;
  local_38 = 8;
  local_f0 = 0x80;
  local_6d = 0;
  local_100 = PTR_DAT_04bb2e90 + 0x10;
  puStack_f8 = auStack_ec;
  local_58 = local_68;
  local_48 = local_68;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  puVar3 = *(undefined1 **)(puVar1 + 8);
  if (auStack_ec != puVar3) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
    lVar4 = 0;
    do {
      if (*(char *)(*(long *)(puVar1 + 8) + lVar4) == '\0') goto LAB_0160a02c;
      lVar5 = *(long *)(puVar1 + 8) + lVar4;
      if (*(char *)(lVar5 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0160a02c;
      }
      if (*(char *)(lVar5 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0160a02c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0160a02c:
    iVar2 = (int)lVar4;
    if (local_f0 <= (int)lVar4) {
      iVar2 = local_f0 + -1;
    }
    memcpy(auStack_ec,puVar3,(long)iVar2);
    auStack_ec[iVar2] = 0;
  }
  local_100 = PTR_DAT_04bb2d88 + 0x10;
  FUN_0072a900(param_1 + 0x31,&local_68,&local_100,param_1);
  return;
}

