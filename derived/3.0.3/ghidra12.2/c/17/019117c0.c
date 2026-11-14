
void FUN_019117c0(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_DAT_04bb60a0;
  lVar5 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar5;
  lVar5 = param_2[6];
  *param_1 = (long)(puVar1 + 0x10);
  *(int *)(param_1 + 4) = (int)lVar5;
  plVar6 = param_1 + 5;
  *plVar6 = 0;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  puVar1 = PTR_DAT_04bb31d0;
  *param_1 = (long)&PTR_LAB_049d9898;
  param_1[6] = (long)&PTR_FUN_049d9a10;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = (long)"mWidth";
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[7] = (long)(puVar1 + 0x10);
  lVar5 = param_1[5];
  if (param_1[5] != 0) {
    do {
      lVar4 = lVar5;
      lVar5 = *(long *)(lVar4 + 0x10);
    } while (lVar5 != 0);
    plVar6 = (long *)(lVar4 + 0x10);
  }
  *plVar6 = (long)(param_1 + 7);
  param_1[10] = (long)param_1;
  uVar7 = 0x41a00000;
  if ((*(uint *)(param_1 + 0xb) & 0x800) != 0) {
    uVar7 = 0x3eb2b8c2;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[7] + 0xf0))();
  *puVar3 = uVar7;
  uVar2 = *(uint *)(param_1 + 0xb);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0xc] = 0;
    uVar7 = 0x41a00000;
    if ((uVar2 & 0x800) != 0) {
      uVar7 = 0x3eb2b8c2;
    }
    *(undefined4 *)(param_1 + 0xc) = uVar7;
  }
  puVar1 = puVar1 + 0x10;
  param_1[0x10] = 0;
  *(uint *)(param_1 + 0xb) = uVar2 & 0xfeffffff;
  param_1[0xe] = (long)"mHeight";
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  plVar6 = param_1 + 0xd;
  *plVar6 = (long)puVar1;
  param_1[0x12] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar6);
  uVar7 = 0x41a00000;
  if ((*(uint *)(param_1 + 0x11) & 0x800) != 0) {
    uVar7 = 0x3eb2b8c2;
  }
  puVar3 = (undefined4 *)(**(code **)(*plVar6 + 0xf0))(plVar6);
  *puVar3 = uVar7;
  uVar2 = *(uint *)(param_1 + 0x11);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x12] = 0;
    uVar7 = 0x41a00000;
    if ((uVar2 & 0x800) != 0) {
      uVar7 = 0x3eb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x12) = uVar7;
  }
  param_1[0x16] = 0;
  *(uint *)(param_1 + 0x11) = uVar2 & 0xfeffffff;
  param_1[0x14] = (long)"mDepth";
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  plVar6 = param_1 + 0x13;
  *plVar6 = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar6);
  uVar7 = 0x41a00000;
  if ((*(uint *)(param_1 + 0x17) & 0x800) != 0) {
    uVar7 = 0x3eb2b8c2;
  }
  puVar3 = (undefined4 *)(**(code **)(*plVar6 + 0xf0))(plVar6);
  *puVar3 = uVar7;
  uVar2 = *(uint *)(param_1 + 0x17);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x18] = 0;
    uVar7 = 0x41a00000;
    if ((uVar2 & 0x800) != 0) {
      uVar7 = 0x3eb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x18) = uVar7;
  }
  *(uint *)(param_1 + 0x17) = uVar2 & 0xfeffffff;
  return;
}

