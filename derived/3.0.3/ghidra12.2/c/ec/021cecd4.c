
void FUN_021cecd4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined *local_d0;
  char *pcStack_c8;
  undefined4 local_c0;
  char local_bc [8];
  char local_b4 [4];
  undefined1 local_b0;
  undefined1 local_3d;
  undefined4 local_38;
  
  local_d0 = PTR_DAT_04bb2020 + 0x10;
  pcStack_c8 = "NpcTopsFormParamSet";
  uVar5 = FUN_038c9744(0,&local_d0,param_2,8,1,0);
  *param_1 = uVar5;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    plVar7 = malloc(0x200);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar7 = (long *)(lVar9 + 8);
    if (lVar6 != 0) {
      plVar7 = (long *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x200,8);
    }
  }
  puVar2 = PTR_DAT_04bcb440;
  puVar1 = (undefined8 *)((long)plVar7 + 0x1c);
  *(undefined1 *)((long)plVar7 + 0x9b) = 0;
  plVar7[2] = (long)puVar1;
  *(undefined4 *)(plVar7 + 3) = 0x80;
  *plVar7 = (long)(puVar2 + 0x10);
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar2 = PTR_DAT_04bb2d88 + 0x10;
  plVar7[1] = (long)puVar2;
  uVar4 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar7 + 0x14) = uVar4;
  plVar7[0x1a] = 0;
  plVar7[0x1b] = (long)&PTR_LAB_04a76a40;
  plVar7[0x17] = 0;
  *(undefined8 *)((long)plVar7 + 0xbd) = 0;
  *(undefined4 *)(plVar7 + 0x19) = 0;
  plVar7[0x1f] = (long)&PTR_LAB_04a76a68;
  plVar7[0x15] = 0;
  plVar7[0x16] = 0;
  puVar3 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar7 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar7 + 0x18b) = 0;
  plVar7[0x23] = (long)puVar3;
  puVar1 = (undefined8 *)((long)plVar7 + 0x14c);
  plVar7[0x28] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar7[0x37] = 0;
  puVar3 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(plVar7 + 0x32) = 0xffffffff;
  *(undefined4 *)(plVar7 + 0x38) = 0xffffffff;
  plVar7[0x35] = 0;
  plVar7[0x33] = 0;
  plVar7[0x34] = 0;
  *(undefined4 *)(plVar7 + 0x36) = 0;
  *(undefined4 *)(plVar7 + 0x39) = 0;
  plVar7[0x27] = (long)(puVar3 + 0x10);
  plVar7[0x3a] = 0;
  DAT_05458a68 = 1;
  DAT_05458adc = 0xffffffffffffffff;
  DAT_05458ae4 = 0xffffffff;
  *(undefined4 *)(plVar7 + 0x3b) = 0;
  plVar7[0x3e] = 0;
  *(undefined8 *)((long)plVar7 + 0x1f5) = 0;
  DAT_05458a6c = 0xffffffffffffffff;
  DAT_05458a74 = 0xffffffffffffffff;
  DAT_05458a7c = 0xffffffffffffffff;
  DAT_05458a84 = 0xffffffffffffffff;
  DAT_05458a8c = 0xffffffffffffffff;
  DAT_05458a94 = 0xffffffffffffffff;
  DAT_05458a9c = 0xffffffffffffffff;
  DAT_05458aa4 = 0xffffffffffffffff;
  DAT_05458aac = 0xffffffffffffffff;
  DAT_05458ab4 = 0xffffffffffffffff;
  DAT_05458abc = 0xffffffffffffffff;
  DAT_05458ac4 = 0xffffffffffffffff;
  DAT_05458acc = 0xffffffffffffffff;
  DAT_05458ad4 = 0xffffffffffffffff;
  *plVar7 = (long)&PTR_FUN_04a76990;
  local_3d = 0;
  local_b0 = 0;
  plVar7[0x3c] = 0;
  plVar7[0x3d] = (long)&LAB_021cef80;
  uVar5 = *param_1;
  local_c0 = 0x80;
  local_bc[0] = s_invalid_name_040e8f53[0];
  local_bc[1] = s_invalid_name_040e8f53[1];
  local_bc[2] = s_invalid_name_040e8f53[2];
  local_bc[3] = s_invalid_name_040e8f53[3];
  local_bc[4] = s_invalid_name_040e8f53[4];
  local_bc[5] = s_invalid_name_040e8f53[5];
  local_bc[6] = s_invalid_name_040e8f53[6];
  local_bc[7] = s_invalid_name_040e8f53[7];
  local_b4[0] = s_invalid_name_040e8f53[8];
  local_b4[1] = s_invalid_name_040e8f53[9];
  local_b4[2] = s_invalid_name_040e8f53[10];
  local_b4[3] = s_invalid_name_040e8f53[0xb];
  pcStack_c8 = local_bc;
  param_1[1] = plVar7;
  local_d0 = puVar2;
  local_38 = FUN_006bd550("invalid_name",0);
  uVar8 = FUN_03853d00(plVar7,&local_d0);
  if ((uVar8 & 1) != 0) {
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_d0,uVar5);
  }
  (**(code **)(*(long *)*param_1 + 0x28))();
  return;
}

