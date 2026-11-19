
void FUN_03c0afb4(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *local_80;
  undefined8 uStack_78;
  undefined1 auStack_6c [4];
  uint local_68;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  int local_24;
  
  FUN_03c11314(param_1,param_2,"BcatMgr");
  *(undefined1 *)(param_1 + 0x46) = 0;
  *param_1 = &PTR_LAB_04b7cad0;
  param_1[0x48] = 0xffffffff;
  puVar7 = param_1 + 0x47;
  param_1[0x49] = 0xffffffff;
  param_1[0x4a] = 0xffffffff;
  param_1[0x45] = &PTR_LAB_04b7cba8;
  puVar1 = PTR_DAT_04bd4738;
  *(undefined2 *)(param_1 + 0x4b) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 0;
  param_1[0x47] = puVar1 + 0x10;
  param_1[0x51] = &PTR_LAB_04b7cbc8;
  param_1[0x53] = &PTR_LAB_04b7cbe8;
  *(undefined1 *)(param_1 + 0x52) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0x100000000;
  FUN_03ebac90(puVar7,4,0,0,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_50 = "State::cSleep";
  local_58 = puVar1;
  FUN_03ebaf40(puVar7,0,&local_58);
  puVar6 = (undefined8 *)param_1[0x4d];
  puVar6[4] = &LAB_03c0b324;
  puVar6[5] = 0;
  *puVar6 = &PTR_LAB_04b7cc38;
  puVar6[1] = param_1;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  local_50 = "State::cWorking";
  local_58 = puVar1;
  FUN_03ebaf40(puVar7,1,&local_58);
  puVar6 = (undefined8 *)(param_1[0x4d] + (ulong)(1 < *(uint *)(param_1 + 0x4c)) * 0x40);
  *puVar6 = &PTR_LAB_04b7cc38;
  puVar6[1] = param_1;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = &LAB_03c0b328;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  local_50 = "State::cWaitErrorAuthority";
  local_58 = puVar1;
  FUN_03ebaf40(puVar7,2,&local_58);
  puVar6 = (undefined8 *)(param_1[0x4d] + (ulong)(2 < *(uint *)(param_1 + 0x4c)) * 0x80);
  *puVar6 = &PTR_LAB_04b7cc38;
  puVar6[1] = param_1;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = &LAB_03c0b374;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  local_50 = "State::cDispErrorViewer";
  local_58 = puVar1;
  FUN_03ebaf40(puVar7,3,&local_58);
  lVar9 = 0xc0;
  if (*(uint *)(param_1 + 0x4c) < 4) {
    lVar9 = 0;
  }
  puVar7 = (undefined8 *)(param_1[0x4d] + lVar9);
  *puVar7 = &PTR_LAB_04b7cc38;
  puVar7[1] = param_1;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = &LAB_03c0b3a8;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  uVar2 = *(uint *)(param_1 + 0x4a);
  *(undefined1 *)((long)param_1 + 0x259) = 1;
  *(undefined4 *)(param_1 + 0x49) = *(undefined4 *)(param_1 + 0x48);
  uVar3 = *(undefined4 *)((long)param_1 + 0x244);
  *(uint *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)((long)param_1 + 0x244) = 0;
  *(undefined4 *)((long)param_1 + 0x24c) = uVar3;
  if (uVar2 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x4c) <= uVar2) {
      uVar2 = 0;
    }
    puVar7 = *(undefined8 **)(param_1[0x4d] + (long)(int)uVar2 * 0x40);
    if (puVar7 != (undefined8 *)0x0) {
      (*(code *)*puVar7)();
    }
  }
  uStack_78 = (**(code **)(*DAT_05aec668 + 0x10))();
  uVar8 = *(undefined8 *)(*(long *)PTR_DAT_04bb3518 + 0x108);
  local_80 = puVar1;
  FUN_03c53c60(auStack_6c,&local_80);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,local_68);
  local_24 = 1 << (ulong)(local_68 & 0x1f);
  FUN_03c53c60(&local_58,&local_80);
  uVar3 = FUN_03c54ed0(uVar8,&local_80,local_48,(ulong)local_58 & 0xffffffff,
                       (ulong)local_50 & 0xffffffff,&local_24,local_50._4_4_,0);
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    plVar5 = malloc(0x40);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar9 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x40,8);
    }
  }
  plVar5[2] = 0;
  plVar5[3] = 0;
  *plVar5 = (long)(PTR_DAT_04bd2dd0 + 0x10);
  plVar5[1] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((long)plVar5 + 0x2c));
  *(undefined4 *)(plVar5 + 7) = 0;
  puVar1 = PTR_LAB_04bd2dc8;
  plVar5[3] = 0;
  plVar5[1] = (long)plVar5;
  plVar5[2] = (long)puVar1;
  param_1[0x58] = plVar5;
  return;
}

