
void FUN_0215d798(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined *local_d0;
  char *pcStack_c8;
  undefined4 local_c0;
  char local_bc [8];
  char local_b4 [4];
  undefined1 local_b0;
  undefined1 local_3d;
  undefined4 local_38;
  
  local_d0 = PTR_DAT_04bb2020 + 0x10;
  pcStack_c8 = "NpcSpClothSetParamSet";
  uVar6 = FUN_038c9744(0,&local_d0,param_2,8,1,0);
  *param_1 = uVar6;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    plVar8 = malloc(0x200);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar8 = (long *)(lVar10 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x200,8);
    }
  }
  puVar2 = PTR_DAT_04bcb440;
  puVar1 = (undefined8 *)((long)plVar8 + 0x1c);
  *(undefined1 *)((long)plVar8 + 0x9b) = 0;
  plVar8[2] = (long)puVar1;
  *(undefined4 *)(plVar8 + 3) = 0x80;
  *plVar8 = (long)(puVar2 + 0x10);
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar2 = PTR_DAT_04bb2d88 + 0x10;
  plVar8[1] = (long)puVar2;
  uVar5 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar8 + 0x14) = uVar5;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = (long)&PTR_LAB_04a75698;
  plVar8[0x17] = 0;
  *(undefined8 *)((long)plVar8 + 0xbd) = 0;
  *(undefined4 *)(plVar8 + 0x19) = 0;
  plVar8[0x1f] = (long)&PTR_LAB_04a756c0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  puVar3 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar8 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar8 + 0x18b) = 0;
  plVar8[0x23] = (long)puVar3;
  puVar1 = (undefined8 *)((long)plVar8 + 0x14c);
  plVar8[0x28] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar8[0x37] = 0;
  puVar3 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(plVar8 + 0x32) = 0xffffffff;
  *(undefined4 *)(plVar8 + 0x38) = 0xffffffff;
  plVar8[0x33] = 0;
  plVar8[0x34] = 0;
  plVar8[0x35] = 0;
  *(undefined4 *)(plVar8 + 0x36) = 0;
  *(undefined4 *)(plVar8 + 0x39) = 0;
  plVar8[0x3a] = 0;
  *(undefined4 *)(plVar8 + 0x3b) = 0;
  plVar8[0x27] = (long)(puVar3 + 0x10);
  DAT_053f6410 = 1;
  DAT_053f6434 = 0xffffffffffffffff;
  DAT_053f6414 = 0xffffffffffffffff;
  DAT_053f641c = 0xffffffffffffffff;
  DAT_053f6424 = 0xffffffffffffffff;
  DAT_053f642c = 0xffffffffffffffff;
  *plVar8 = (long)&PTR_FUN_04a755e8;
  *(undefined8 *)((long)plVar8 + 0x1f5) = 0;
  plVar8[0x3e] = 0;
  local_3d = 0;
  local_b0 = 0;
  plVar8[0x3c] = 0;
  plVar8[0x3d] = (long)&LAB_0215da20;
  uVar5 = s_invalid_name_040e8f53._8_4_;
  uVar6 = *param_1;
  local_c0 = 0x80;
  local_bc[0] = s_invalid_name_040e8f53[0];
  local_bc[1] = s_invalid_name_040e8f53[1];
  local_bc[2] = s_invalid_name_040e8f53[2];
  local_bc[3] = s_invalid_name_040e8f53[3];
  local_bc[4] = s_invalid_name_040e8f53[4];
  local_bc[5] = s_invalid_name_040e8f53[5];
  local_bc[6] = s_invalid_name_040e8f53[6];
  local_bc[7] = s_invalid_name_040e8f53[7];
  param_1[1] = plVar8;
  uVar4 = s_invalid_name_040e8f53._8_4_;
  s_invalid_name_040e8f53[8] = (char)uVar5;
  s_invalid_name_040e8f53[9] = SUB41(uVar5,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar5,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar5,3);
  local_b4[0] = s_invalid_name_040e8f53[8];
  local_b4[1] = s_invalid_name_040e8f53[9];
  local_b4[2] = s_invalid_name_040e8f53[10];
  local_b4[3] = s_invalid_name_040e8f53[0xb];
  pcStack_c8 = local_bc;
  s_invalid_name_040e8f53._8_4_ = uVar4;
  local_d0 = puVar2;
  local_38 = FUN_006bd550("invalid_name",0);
  uVar9 = FUN_03853d00(plVar8,&local_d0);
  if ((uVar9 & 1) != 0) {
    (**(code **)(*plVar8 + 0x20))(plVar8,&local_d0,uVar6);
  }
  (**(code **)(*(long *)*param_1 + 0x28))();
  return;
}

