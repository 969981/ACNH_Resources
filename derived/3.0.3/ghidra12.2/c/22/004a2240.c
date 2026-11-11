
undefined8 * FUN_004a2240(ulong *param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_58;
  undefined *puStack_50;
  undefined8 local_48;
  
  uVar2 = FUN_00428440(param_2);
  switch(uVar2 & 0x1f) {
  case 2:
    puVar3 = (undefined8 *)FUN_00438810(0x20);
    uVar6 = *param_1;
    FUN_00429460(&local_58,param_2);
    uVar5 = uVar6 & 0xfffffffffffffffe;
    uVar6 = uVar6 | 1;
    FUN_0043dd30(uVar5);
    FUN_0043dcf0(puVar3);
    ppuVar4 = &PTR_LAB_04866ea8;
    break;
  case 3:
    puVar3 = (undefined8 *)FUN_00438810(0x20);
    uVar6 = *param_1;
    FUN_00429460(&local_58,param_2);
    uVar5 = uVar6 & 0xfffffffffffffffe;
    uVar6 = uVar6 | 1;
    FUN_0043dd30(uVar5);
    FUN_0043dcf0(puVar3);
    ppuVar4 = &PTR_LAB_04866f10;
    break;
  case 4:
    puVar3 = (undefined8 *)FUN_00438810(0x20);
    uVar6 = *param_1;
    FUN_00429460(&local_58,param_2);
    uVar5 = uVar6 & 0xfffffffffffffffe;
    uVar6 = uVar6 | 1;
    FUN_0043dd30(uVar5);
    FUN_0043dcf0(puVar3);
    ppuVar4 = &PTR_LAB_04866f80;
    break;
  case 5:
    puVar3 = (undefined8 *)FUN_00438810(0x20);
    uVar6 = *param_1;
    FUN_00429460(&local_58,param_2);
    uVar5 = uVar6 & 0xfffffffffffffffe;
    uVar6 = uVar6 | 1;
    FUN_0043dd30(uVar5);
    FUN_0043dcf0(puVar3);
    ppuVar4 = &PTR_LAB_04866fe8;
    break;
  case 6:
    puVar3 = (undefined8 *)FUN_00438810(0x20);
    uVar6 = *param_1;
    FUN_00429460(&local_58,param_2);
    uVar5 = uVar6 & 0xfffffffffffffffe;
    uVar6 = uVar6 | 1;
    FUN_0043dd30(uVar5);
    FUN_0043dcf0(puVar3);
    ppuVar4 = &PTR_LAB_04867050;
    break;
  case 7:
    puVar3 = (undefined8 *)FUN_00438810(0x20);
    uVar6 = *param_1;
    FUN_00429460(&local_58,param_2);
    uVar5 = uVar6 & 0xfffffffffffffffe;
    FUN_0043dd30(uVar5);
    FUN_0043dcf0(puVar3);
    *puVar3 = &PTR_LAB_04867180;
    puVar3[2] = uVar6 | 1;
    FUN_0043dd30(uVar5);
    puVar3[3] = local_58;
    *(undefined4 *)(puVar3 + 1) = 0;
    ppuVar4 = &PTR_LAB_048670e8;
    goto LAB_004a24c0;
  case 8:
    puVar3 = (undefined8 *)FUN_00438810(0x20);
    uVar6 = *param_1;
    FUN_00429460(&local_58,param_2);
    uVar5 = uVar6 & 0xfffffffffffffffe;
    FUN_0043dd30(uVar5);
    FUN_0043dcf0(puVar3);
    *puVar3 = &PTR_LAB_048672a0;
    puVar3[2] = uVar6 | 1;
    FUN_0043dd30(uVar5);
    ppuVar4 = &PTR_LAB_048671e8;
    puVar3[3] = local_58;
    *(undefined4 *)(puVar3 + 1) = 0;
LAB_004a24c0:
    *puVar3 = ppuVar4;
    goto LAB_004a24c4;
  default:
    local_48 = 0;
    local_58 = 0;
    puStack_50 = &DAT_0413df78;
    FUN_004223c0(0xfdbd9f9,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",0x1b
                 ,"Bad type visitor switch",&local_58);
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x4a251c);
    (*pcVar1)();
  }
  *puVar3 = ppuVar4;
  puVar3[2] = uVar6;
  FUN_0043dd30(uVar5);
  puVar3[3] = local_58;
  *(undefined4 *)(puVar3 + 1) = 0;
LAB_004a24c4:
  FUN_0043dd50(uVar5);
  return puVar3;
}

