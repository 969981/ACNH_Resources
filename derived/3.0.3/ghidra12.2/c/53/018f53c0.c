
void FUN_018f53c0(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long *plVar8;
  undefined1 *__src;
  undefined4 uVar9;
  undefined *local_c0;
  undefined1 *puStack_b8;
  int local_b0;
  undefined1 auStack_ac [31];
  undefined1 local_8d;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined4 local_58;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_DAT_04bb60a0;
  lVar7 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar7;
  lVar7 = param_2[6];
  *param_1 = (long)(puVar1 + 0x10);
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar7;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  local_88 = PTR_DAT_04bb2020;
  local_58 = 0;
  *param_1 = (long)&PTR_FUN_049d46d0;
  puVar1 = PTR_PTR_04bb2238;
  local_88 = local_88 + 0x10;
  pcStack_80 = "mLabel";
  puStack_70 = &DAT_0408730e;
  puStack_60 = &DAT_0407ebb1;
  local_b0 = 0x20;
  local_c0 = PTR_DAT_04bb2a08 + 0x10;
  local_8d = 0;
  puStack_b8 = auStack_ac;
  local_78 = local_88;
  local_68 = local_88;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  __src = *(undefined1 **)(puVar1 + 8);
  if (auStack_ac != __src) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
    lVar7 = 0;
    do {
      if (*(char *)(*(long *)(puVar1 + 8) + lVar7) == '\0') goto LAB_018f5530;
      lVar2 = *(long *)(puVar1 + 8) + lVar7;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_018f5530;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_018f5530;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_018f5530:
    iVar3 = (int)lVar7;
    if (local_b0 <= (int)lVar7) {
      iVar3 = local_b0 + -1;
    }
    memcpy(auStack_ac,__src,(long)iVar3);
    auStack_ac[iVar3] = 0;
  }
  local_c0 = PTR_DAT_04bb2028 + 0x10;
  FUN_008f0e20(param_1 + 6,&local_88,&local_c0,param_1);
  param_1[0x16] = 0;
  param_1[0x14] = (long)"mSpeedH";
  param_1[0x15] = 0;
  puVar5 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  puVar1 = puVar5 + 0x10;
  param_1[0x18] = 0;
  plVar8 = param_1 + 0x13;
  *plVar8 = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar8);
  uVar9 = 0x3e800000;
  if ((*(uint *)(param_1 + 0x17) & 0x800) != 0) {
    uVar9 = 0x3b8efa35;
  }
  puVar6 = (undefined4 *)(**(code **)(*plVar8 + 0xf0))(plVar8);
  *puVar6 = uVar9;
  uVar4 = *(uint *)(param_1 + 0x17);
  if ((uVar4 >> 7 & 1) == 0) {
    param_1[0x18] = 0;
    uVar9 = 0x3e800000;
    if ((uVar4 & 0x800) != 0) {
      uVar9 = 0x3b8efa35;
    }
    *(undefined4 *)(param_1 + 0x18) = uVar9;
  }
  param_1[0x1c] = 0;
  *(uint *)(param_1 + 0x17) = uVar4 & 0xfeffffff;
  param_1[0x1a] = (long)"mBaseSpeedV";
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  plVar8 = param_1 + 0x19;
  *plVar8 = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar8);
  uVar9 = 0x3fc80000;
  if ((*(uint *)(param_1 + 0x1d) & 0x800) != 0) {
    uVar9 = 0x3cdf66f3;
  }
  puVar6 = (undefined4 *)(**(code **)(*plVar8 + 0xf0))(plVar8);
  *puVar6 = uVar9;
  uVar4 = *(uint *)(param_1 + 0x1d);
  if ((uVar4 >> 7 & 1) == 0) {
    param_1[0x1e] = 0;
    uVar9 = 0x3fc80000;
    if ((uVar4 & 0x800) != 0) {
      uVar9 = 0x3cdf66f3;
    }
    *(undefined4 *)(param_1 + 0x1e) = uVar9;
  }
  param_1[0x22] = 0;
  *(uint *)(param_1 + 0x1d) = uVar4 & 0xfeffffff;
  plVar8 = param_1 + 0x1f;
  *plVar8 = (long)(puVar5 + 0x10);
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x20] = (long)"mRandomSpeedV";
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar8);
  uVar9 = 0x3f200000;
  if ((*(uint *)(param_1 + 0x23) & 0x800) != 0) {
    uVar9 = 0x3c32b8c2;
  }
  puVar6 = (undefined4 *)(**(code **)(*plVar8 + 0xf0))(plVar8);
  *puVar6 = uVar9;
  uVar4 = *(uint *)(param_1 + 0x23);
  if ((uVar4 >> 7 & 1) == 0) {
    param_1[0x24] = 0;
    uVar9 = 0x3f200000;
    if ((uVar4 & 0x800) != 0) {
      uVar9 = 0x3c32b8c2;
    }
    *(undefined4 *)(param_1 + 0x24) = uVar9;
  }
  *(uint *)(param_1 + 0x23) = uVar4 & 0xfeffffff;
  return;
}

