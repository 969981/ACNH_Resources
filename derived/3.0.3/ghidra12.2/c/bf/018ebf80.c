
void FUN_018ebf80(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *__src;
  undefined *local_a0;
  undefined1 *puStack_98;
  int local_90;
  undefined1 auStack_8c [31];
  undefined1 local_6d;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar3 = PTR_DAT_04bb60a0;
  lVar4 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar4;
  lVar4 = param_2[6];
  *param_1 = (long)(puVar3 + 0x10);
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar4;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  local_68 = PTR_DAT_04bb2020;
  *param_1 = (long)&PTR_FUN_049d2cb0;
  puVar3 = PTR_PTR_04bb2238;
  local_68 = local_68 + 0x10;
  puStack_50 = &DAT_0408730e;
  pcStack_60 = "mLabel";
  puStack_40 = &DAT_0407ebb1;
  local_90 = 0x20;
  local_a0 = PTR_DAT_04bb2a08 + 0x10;
  local_38 = 0;
  local_6d = 0;
  puStack_98 = auStack_8c;
  local_58 = local_68;
  local_48 = local_68;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  __src = *(undefined1 **)(puVar3 + 8);
  if (auStack_8c != __src) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    lVar4 = 0;
    do {
      if (*(char *)(*(long *)(puVar3 + 8) + lVar4) == '\0') goto LAB_018ec0ec;
      lVar1 = *(long *)(puVar3 + 8) + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_018ec0ec;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_018ec0ec;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_018ec0ec:
    iVar2 = (int)lVar4;
    if (local_90 <= (int)lVar4) {
      iVar2 = local_90 + -1;
    }
    memcpy(auStack_8c,__src,(long)iVar2);
    auStack_8c[iVar2] = 0;
  }
  local_a0 = PTR_DAT_04bb2028 + 0x10;
  FUN_008f0e20(param_1 + 6,&local_68,&local_a0,param_1);
  return;
}

