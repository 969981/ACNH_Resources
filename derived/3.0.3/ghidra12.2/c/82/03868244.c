
void FUN_03868244(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_LAB_04b5fc00;
  param_1[10] = param_1 + 10;
  param_1[0xb] = param_1 + 10;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xe] = param_1 + 0xd;
  param_1[0xf] = 0x3800000000;
  param_1[0xc] = 0x2800000000;
  param_1[0xd] = param_1 + 0xd;
  param_1[0x10] = &PTR_LAB_048f9770;
  *(undefined1 *)((long)param_1 + 0x96) = 0;
  param_1[0x11] = &DAT_0419b684;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_03c5a110(param_1 + 0x10,param_2,0xffffffff,0);
  plVar6 = param_1 + 0x1f;
  *plVar6 = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  puVar1 = PTR_DAT_04bb2d80 + 0x10;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined4 *)((long)param_1 + 0xf4) = 0;
  param_1[0x23] = 1;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *plVar6 = (long)puVar1;
  param_1[0x20] = 0;
  plVar8 = param_1 + 0x18;
  *plVar8 = (long)puVar1;
  param_1[0x25] = param_1 + 0x25;
  param_1[0x26] = param_1 + 0x25;
  iVar2 = DAT_05ae6230;
  DAT_05ae6230 = DAT_05ae6230 + 1;
  param_1[0x29] = param_1 + 0x28;
  param_1[0x2a] = 0;
  puVar1 = PTR_DAT_04bb2718;
  *(int *)(param_1 + 0x2b) = iVar2;
  *(undefined4 *)((long)param_1 + 0x15c) = 1;
  param_1[0x27] = 0;
  param_1[0x28] = param_1 + 0x28;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(*(long *)(*(long *)puVar1 + 0x418) + 0xc);
  *(undefined4 *)((long)param_1 + 0x164) = 0;
  FUN_038e18e4(param_1 + 0x2d);
  uVar4 = (**(code **)(*plVar8 + 0x10))(plVar8);
  if ((uVar4 & 1) == 0) {
    param_1[0x1a] = &LAB_038684c0;
    param_1[0x1b] = 0;
    param_1[0x18] = &PTR_LAB_04b5fd28;
    param_1[0x19] = param_1;
  }
  uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6);
  if ((uVar4 & 1) == 0) {
    param_1[0x21] = &LAB_03868590;
    param_1[0x22] = 0;
    param_1[0x1f] = &PTR_LAB_04b5fd28;
    param_1[0x20] = param_1;
  }
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffc;
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_3 + 8);
    *(undefined1 *)((long)param_1 + 0x166) = *(undefined1 *)(param_3 + 0xc);
    *(undefined1 *)((long)param_1 + 0x167) = *(undefined1 *)(param_3 + 0xd);
  }
  lVar3 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar7 = malloc(0x100);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar6 = (long *)(lVar3 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      return;
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x100,8);
  }
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_LAB_04b5fd78;
    puVar7[4] = &PTR_LAB_04b5fd78;
    puVar7[8] = &PTR_LAB_04b5fd78;
    puVar7[0xc] = &PTR_LAB_04b5fd78;
    puVar7[0x10] = &PTR_LAB_04b5fd78;
    puVar7[0x14] = &PTR_LAB_04b5fd78;
    puVar7[0x18] = &PTR_LAB_04b5fd78;
    puVar7[0x1c] = &PTR_LAB_04b5fd78;
    *(undefined4 *)(param_1 + 1) = 8;
    param_1[2] = puVar7;
  }
  return;
}

