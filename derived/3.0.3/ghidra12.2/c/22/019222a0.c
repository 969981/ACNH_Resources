
void FUN_019222a0(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  long lVar6;
  long *plVar7;
  undefined1 *__src;
  undefined4 uVar8;
  undefined *local_b0;
  undefined1 *puStack_a8;
  int local_a0;
  undefined1 auStack_9c [31];
  undefined1 local_7d;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined8 *puStack_50;
  undefined4 local_48;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar4 = PTR_DAT_04bb60a0;
  lVar6 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar6;
  lVar6 = param_2[6];
  *param_1 = (long)(puVar4 + 0x10);
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar6;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  local_78 = PTR_DAT_04bb2020;
  local_48 = 0;
  *param_1 = (long)&PTR_LAB_049dbb80;
  puVar4 = PTR_PTR_04bb2238;
  local_78 = local_78 + 0x10;
  pcStack_70 = "mLabel";
  puStack_60 = &DAT_040dedc8;
  puStack_50 = &DAT_0407ebb1;
  local_a0 = 0x20;
  local_b0 = PTR_DAT_04bb2a08 + 0x10;
  local_7d = 0;
  puStack_a8 = auStack_9c;
  local_68 = local_78;
  local_58 = local_78;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  __src = *(undefined1 **)(puVar4 + 8);
  if (auStack_9c != __src) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4);
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(puVar4 + 8) + lVar6) == '\0') goto LAB_01922410;
      lVar1 = *(long *)(puVar4 + 8) + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01922410;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01922410;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01922410:
    iVar2 = (int)lVar6;
    if (local_a0 <= (int)lVar6) {
      iVar2 = local_a0 + -1;
    }
    memcpy(auStack_9c,__src,(long)iVar2);
    auStack_9c[iVar2] = 0;
  }
  local_b0 = PTR_DAT_04bb2028 + 0x10;
  FUN_008f0e20(param_1 + 6,&local_78,&local_b0,param_1);
  param_1[0x16] = 0;
  param_1[0x14] = (long)"mRotateXDeg";
  param_1[0x15] = 0;
  puVar4 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  plVar7 = param_1 + 0x13;
  *plVar7 = (long)(puVar4 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  uVar8 = 0xc2b3f4c0;
  if ((*(uint *)(param_1 + 0x17) & 0x800) != 0) {
    uVar8 = 0xbfc9034a;
  }
  puVar5 = (undefined4 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar5 = uVar8;
  uVar3 = *(uint *)(param_1 + 0x17);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x18] = 0;
    uVar8 = 0xc2b3f4c0;
    if ((uVar3 & 0x800) != 0) {
      uVar8 = 0xbfc9034a;
    }
    *(undefined4 *)(param_1 + 0x18) = uVar8;
  }
  *(uint *)(param_1 + 0x17) = uVar3 & 0xfeffffff;
  return;
}

