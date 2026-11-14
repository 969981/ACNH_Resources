
void FUN_0158dc00(long *param_1,long param_2,long *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined **local_c0;
  undefined1 *puStack_b8;
  int local_b0;
  undefined1 auStack_ac [63];
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
  puVar2 = PTR_DAT_04bb60a0;
  plVar6 = param_1 + 5;
  *plVar6 = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = lVar4;
  if (param_4 != (long *)0x0) {
    (**(code **)(*param_4 + 0x140))(param_4,param_1);
  }
  *(undefined1 *)((long)param_1 + 0x143) = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  puVar2 = PTR_DAT_04bb21f8;
  *(undefined4 *)(param_1 + 8) = 0x100;
  *param_1 = (long)&PTR_FUN_049acce0;
  param_1[0x2c] = (long)"mIsEnable";
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[6] = (long)(puVar2 + 0x10);
  param_1[7] = (long)param_1 + 0x44;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  param_1[0x2a] = (long)param_1;
  param_1[0x2b] = (long)&PTR_LAB_04902ff8;
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
  *puVar3 = 1;
  if ((*(uint *)(param_1 + 0x2f) >> 7 & 1) == 0) {
    param_1[0x30] = 0;
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  local_68 = PTR_DAT_04bb2020;
  *(uint *)(param_1 + 0x2f) = *(uint *)(param_1 + 0x2f) & 0xfeffffff;
  local_68 = local_68 + 0x10;
  pcStack_60 = "mName";
  puStack_50 = &DAT_040ca03d;
  puStack_40 = &DAT_0407ebb1;
  local_b0 = 0x40;
  local_38 = 0;
  local_6d = 0;
  local_c0 = &PTR_LAB_048fd2d8;
  puStack_b8 = auStack_ac;
  local_58 = local_68;
  local_48 = local_68;
  (**(code **)(*param_3 + 0x18))(param_3);
  puVar3 = (undefined1 *)param_3[1];
  if (auStack_ac != puVar3) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar4 = 0;
    do {
      if (*(char *)(param_3[1] + lVar4) == '\0') goto LAB_0158dddc;
      lVar5 = param_3[1] + lVar4;
      if (*(char *)(lVar5 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0158dddc;
      }
      if (*(char *)(lVar5 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0158dddc;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0158dddc:
    iVar1 = (int)lVar4;
    if (local_b0 <= (int)lVar4) {
      iVar1 = local_b0 + -1;
    }
    memcpy(auStack_ac,puVar3,(long)iVar1);
    auStack_ac[iVar1] = 0;
  }
  local_c0 = (undefined **)(PTR_DAT_04bb2bc0 + 0x10);
  FUN_00744dd0(param_1 + 0x31,&local_68,&local_c0,param_1);
  param_1[0x42] = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10000;
  (**(code **)(param_1[0x31] + 0xf0))(param_1 + 0x31);
  return;
}

