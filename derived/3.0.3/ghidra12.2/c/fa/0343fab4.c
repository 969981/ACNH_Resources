
void FUN_0343fab4(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *local_40;
  char *pcStack_38;
  
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  puVar1 = PTR_DAT_04bd4738;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 100;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if (lVar9 == 0) {
    plVar7 = malloc(0x88);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar6 = (long *)(lVar9 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    plVar7 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      plVar7 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x88,8);
    }
  }
  puVar4 = PTR_DAT_04bdf1d8;
  puVar3 = PTR_DAT_04bc9900;
  puVar1 = PTR_LAB_04bc98f0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[8] = 0;
  plVar7[9] = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  *(undefined1 *)(plVar7 + 0x10) = 0;
  plVar7[2] = (long)puVar1;
  plVar7[3] = 0;
  *plVar7 = (long)(puVar3 + 0x10);
  plVar7[1] = (long)plVar7;
  plVar7[4] = (long)(puVar4 + 0x10);
  plVar7[5] = 0;
  plVar7[0xc] = 0;
  plVar7[0xd] = 0;
  plVar7[0xe] = 0;
  plVar7[0xf] = 0;
  param_1[0xd] = (long)plVar7;
  FUN_03ebac90(param_1,3,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "State::cIdle";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,0,&local_40);
  puVar8 = (undefined8 *)param_1[6];
  puVar8[2] = &LAB_0343ffc8;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_04b2a8d8;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_0343ffcc;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_38 = "State::cCapture";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,1,&local_40);
  puVar8 = (undefined8 *)(param_1[6] + (ulong)(1 < *(uint *)(param_1 + 5)) * 0x40);
  puVar8[2] = &LAB_0343ffd0;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_04b2a8d8;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_03440034;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_38 = "State::cEncode";
  local_40 = puVar1;
  FUN_03ebaf40(param_1,2,&local_40);
  puVar8 = (undefined8 *)(param_1[6] + (ulong)(2 < *(uint *)(param_1 + 5)) * 0x80);
  puVar8[2] = &LAB_034400c4;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_04b2a8d8;
  puVar8[1] = param_1;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[4] = &LAB_034401a8;
  puVar8[5] = 0;
  *(undefined1 *)((long)param_1 + 0x21) = 1;
  uVar2 = *(uint *)(param_1 + 3);
  *(int *)(param_1 + 2) = (int)param_1[1];
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_1 + 0xc);
  *(uint *)(param_1 + 1) = uVar2;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  if (uVar2 != 0xffffffff) {
    if (*(uint *)(param_1 + 5) <= uVar2) {
      uVar2 = 0;
    }
    puVar8 = *(undefined8 **)(param_1[6] + (long)(int)uVar2 * 0x40);
    if (puVar8 != (undefined8 *)0x0) {
      (*(code *)*puVar8)();
    }
  }
  return;
}

