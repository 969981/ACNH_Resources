
undefined8 * FUN_004a2750(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_48;
  undefined *puStack_40;
  undefined8 local_38;
  
  uVar2 = FUN_00428440(param_2);
  puVar4 = (undefined8 *)0x0;
  switch(uVar2 & 0x1f) {
  case 0:
  case 1:
    goto switchD_004a2794_caseD_0;
  case 2:
    puVar4 = (undefined8 *)FUN_00438810(0x30);
    puVar1 = (undefined8 *)*param_1;
    lVar6 = param_1[1];
    local_48 = *puVar1;
    puStack_40 = (undefined *)puVar1[1];
    uVar7 = puVar1[2];
    if ((uVar7 & 1) == 0) {
      FUN_0043dcf0(puVar4);
      ppuVar3 = &PTR_LAB_04867328;
LAB_004a2898:
      *puVar4 = ppuVar3;
      puVar4[2] = local_48;
      puVar4[3] = puStack_40;
      puVar4[4] = uVar7;
      puVar4[5] = lVar6;
      *(undefined4 *)(puVar4 + 1) = 0;
      return puVar4;
    }
    uVar5 = uVar7 & 0xfffffffffffffffe;
    FUN_0043dd30(uVar5);
    FUN_0043dcf0(puVar4);
    ppuVar3 = &PTR_LAB_04867328;
    break;
  case 3:
    puVar4 = (undefined8 *)FUN_00438810(0x30);
    puVar1 = (undefined8 *)*param_1;
    lVar6 = param_1[1];
    local_48 = *puVar1;
    puStack_40 = (undefined *)puVar1[1];
    uVar7 = puVar1[2];
    if ((uVar7 & 1) == 0) {
      FUN_0043dcf0(puVar4);
      ppuVar3 = &PTR_LAB_04867390;
      goto LAB_004a2898;
    }
    uVar5 = uVar7 & 0xfffffffffffffffe;
    FUN_0043dd30(uVar5);
    FUN_0043dcf0(puVar4);
    ppuVar3 = &PTR_LAB_04867390;
    break;
  case 4:
    puVar4 = (undefined8 *)FUN_00438810(0x30);
    puVar1 = (undefined8 *)*param_1;
    lVar6 = param_1[1];
    local_48 = *puVar1;
    puStack_40 = (undefined *)puVar1[1];
    uVar7 = puVar1[2];
    if ((uVar7 & 1) == 0) {
      FUN_0043dcf0(puVar4);
      ppuVar3 = &PTR_LAB_04867400;
      goto LAB_004a2898;
    }
    uVar5 = uVar7 & 0xfffffffffffffffe;
    FUN_0043dd30(uVar5);
    FUN_0043dcf0(puVar4);
    ppuVar3 = &PTR_LAB_04867400;
    break;
  case 5:
    puVar4 = (undefined8 *)FUN_00438810(0x30);
    puVar1 = (undefined8 *)*param_1;
    lVar6 = param_1[1];
    local_48 = *puVar1;
    puStack_40 = (undefined *)puVar1[1];
    uVar7 = puVar1[2];
    if ((uVar7 & 1) == 0) {
      FUN_0043dcf0(puVar4);
      ppuVar3 = &PTR_LAB_04867468;
      goto LAB_004a2898;
    }
    uVar5 = uVar7 & 0xfffffffffffffffe;
    FUN_0043dd30(uVar5);
    FUN_0043dcf0(puVar4);
    ppuVar3 = &PTR_LAB_04867468;
    break;
  case 6:
    puVar4 = (undefined8 *)FUN_00438810(0x30);
    puVar1 = (undefined8 *)*param_1;
    lVar6 = param_1[1];
    local_48 = *puVar1;
    puStack_40 = (undefined *)puVar1[1];
    uVar7 = puVar1[2];
    if ((uVar7 & 1) == 0) {
      FUN_0043dcf0(puVar4);
      ppuVar3 = &PTR_LAB_048674d0;
      goto LAB_004a2898;
    }
    uVar5 = uVar7 & 0xfffffffffffffffe;
    FUN_0043dd30(uVar5);
    FUN_0043dcf0(puVar4);
    ppuVar3 = &PTR_LAB_048674d0;
    break;
  case 7:
    puVar4 = (undefined8 *)FUN_00438810(0x30);
    puVar1 = (undefined8 *)*param_1;
    lVar6 = param_1[1];
    local_48 = *puVar1;
    puStack_40 = (undefined *)puVar1[1];
    uVar5 = puVar1[2];
    if ((uVar5 & 1) != 0) {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
    }
    FUN_0043dcf0(puVar4);
    *puVar4 = &PTR_LAB_04867600;
    puVar4[4] = uVar5;
    puVar4[2] = local_48;
    puVar4[3] = puStack_40;
    if ((uVar5 & 1) == 0) {
      puVar4[5] = lVar6;
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = &PTR_LAB_04867568;
      return puVar4;
    }
    uVar5 = uVar5 & 0xfffffffffffffffe;
    FUN_0043dd30(uVar5);
    puVar4[5] = lVar6;
    *(undefined4 *)(puVar4 + 1) = 0;
    ppuVar3 = &PTR_LAB_04867568;
    goto LAB_004a2ab0;
  case 8:
    puVar4 = (undefined8 *)FUN_00438810(0x30);
    puVar1 = (undefined8 *)*param_1;
    lVar6 = param_1[1];
    local_48 = *puVar1;
    puStack_40 = (undefined *)puVar1[1];
    uVar5 = puVar1[2];
    if ((uVar5 & 1) != 0) {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
    }
    FUN_0043dcf0(puVar4);
    *puVar4 = &PTR_LAB_04867720;
    puVar4[4] = uVar5;
    puVar4[2] = local_48;
    puVar4[3] = puStack_40;
    if ((uVar5 & 1) == 0) {
      puVar4[5] = lVar6;
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = &PTR_LAB_04867668;
      return puVar4;
    }
    uVar5 = uVar5 & 0xfffffffffffffffe;
    FUN_0043dd30(uVar5);
    ppuVar3 = &PTR_LAB_04867668;
    puVar4[5] = lVar6;
    *(undefined4 *)(puVar4 + 1) = 0;
LAB_004a2ab0:
    *puVar4 = ppuVar3;
    goto LAB_004a2ab4;
  default:
    local_38 = 0;
    local_48 = 0;
    puStack_40 = &DAT_0413df78;
    FUN_004223c0(0xfdbd9f9,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",0x1b
                 ,"Bad type visitor switch",&local_48);
    puVar4 = (undefined8 *)0x0;
    goto switchD_004a2794_caseD_0;
  }
  *puVar4 = ppuVar3;
  puVar4[4] = uVar7;
  puVar4[2] = local_48;
  puVar4[3] = puStack_40;
  FUN_0043dd30(uVar5);
  puVar4[5] = lVar6;
  *(undefined4 *)(puVar4 + 1) = 0;
LAB_004a2ab4:
  FUN_0043dd50(uVar5);
switchD_004a2794_caseD_0:
  return puVar4;
}

