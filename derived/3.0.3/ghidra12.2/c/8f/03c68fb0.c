
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_03c68fb0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *local_40;
  undefined8 *puStack_38;
  
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    plVar6 = malloc(0x138);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar6 = (long *)(lVar9 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x138,8);
    }
  }
  puVar1 = PTR_DAT_04bd46a8;
  plVar6[2] = (long)(plVar6 + 2);
  plVar6[3] = (long)(plVar6 + 2);
  plVar6[6] = (long)(plVar6 + 5);
  plVar6[7] = 0;
  plVar6[4] = 0;
  plVar6[5] = (long)(plVar6 + 5);
  plVar6[0x10] = 0x800000000;
  plVar6[0x16] = 0;
  *(undefined1 *)(plVar6 + 0x17) = 0;
  plVar6[0x14] = 0;
  plVar6[0x15] = 0;
  *plVar6 = (long)(puVar1 + 0x10);
  plVar6[1] = (long)plVar6;
  plVar6[8] = (long)(plVar6 + 8);
  plVar6[9] = (long)(plVar6 + 8);
  plVar6[0xc] = (long)(plVar6 + 0xb);
  plVar6[0xd] = 0x800000000;
  plVar6[10] = 0x1000000000;
  plVar6[0xb] = (long)(plVar6 + 0xb);
  uVar2 = _UNK_04102208;
  uVar8 = _DAT_04102200;
  plVar6[0xe] = (long)(plVar6 + 0xe);
  plVar6[0xf] = (long)(plVar6 + 0xe);
  plVar6[0x11] = (long)(plVar6 + 0x11);
  plVar6[0x12] = (long)(plVar6 + 0x11);
  *(undefined4 *)(plVar6 + 0x13) = 0;
  *(undefined4 *)((long)plVar6 + 0x9c) = 8;
  *(undefined2 *)((long)plVar6 + 0xb9) = 0x101;
  puVar1 = PTR_DAT_04bd46b0 + 0x10;
  plVar6[0x1e] = 0;
  plVar6[0x1f] = (long)puVar1;
  plVar6[0x23] = (long)(PTR_DAT_04bd46b8 + 0x10);
  *(undefined8 *)((long)plVar6 + 0xc4) = uVar2;
  *(undefined8 *)((long)plVar6 + 0xbc) = uVar8;
  uVar8 = _DAT_04102880;
  *(undefined8 *)((long)plVar6 + 0xd4) = _UNK_04102888;
  *(undefined8 *)((long)plVar6 + 0xcc) = uVar8;
  uVar8 = _DAT_041023d0;
  *(undefined8 *)((long)plVar6 + 0xe4) = _UNK_041023d8;
  *(undefined8 *)((long)plVar6 + 0xdc) = uVar8;
  lVar9 = *(long *)(param_1 + 0x18);
  lVar5 = *(long *)(lVar9 + 400);
  plVar7 = (long *)((long)*(int *)(lVar9 + 0x1a4) + (long)plVar6);
  *(long **)(lVar9 + 400) = plVar7;
  *plVar7 = lVar5;
  plVar7[1] = lVar9 + 400;
  if (lVar5 != 0) {
    *(long **)(lVar5 + 8) = plVar7;
  }
  lVar5 = *(long *)puVar3;
  *(int *)(lVar9 + 0x1a0) = *(int *)(lVar9 + 0x1a0) + 1;
  if (lVar5 == 0) {
    plVar7 = malloc(0x30);
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    plVar7 = (long *)(lVar5 + 8);
    if (lVar9 != 0) {
      plVar7 = (long *)(lVar9 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x30,0xfffffffc);
    }
  }
  *plVar7 = (long)plVar6;
  plVar7[1] = param_1;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  *(long **)(param_1 + 0x28) = plVar7;
  *(undefined8 *)(*plVar7 + 0xb0) = *(undefined8 *)(plVar7[1] + 0x18);
  local_40 = PTR_DAT_04bb2020 + 0x10;
  puStack_38 = &DAT_0407ebb1;
  uVar8 = FUN_03c688b0(plVar7[1],&local_40);
  *(undefined8 *)(*plVar7 + 0xf0) = uVar8;
  return plVar7;
}

