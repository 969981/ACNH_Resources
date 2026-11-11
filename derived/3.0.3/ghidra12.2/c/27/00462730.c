
undefined4
FUN_00462730(long *param_1,ulong param_2,undefined4 param_3,ulong param_4,undefined4 param_5)

{
  undefined *puVar1;
  undefined2 uVar2;
  code *pcVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  char *pcVar13;
  undefined1 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *local_98;
  undefined8 local_90;
  ulong local_88;
  undefined4 local_80;
  char *local_70;
  undefined8 uStack_68;
  ulong local_58;
  undefined4 local_48 [2];
  
  uVar4 = (undefined2)param_5;
  uVar5 = FUN_00428440(param_2);
  uVar2 = (undefined2)param_3;
  switch(uVar5 & 0x1f) {
  case 1:
    if (param_1[2] == param_4) {
      local_90 = (undefined *)CONCAT44(param_5,param_3);
      local_98 = param_1;
      local_58 = FUN_00463130(param_1,param_2,&local_98);
      local_48[0] = 0x80040200;
      if (1 < local_58) {
        if (DAT_04c70178 == '\0') {
          return 0x80040200;
        }
        FUN_00444bc0(&local_98,&DAT_04c70128,1);
        local_70 = 
        "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/TypeVm/hkTypeVmCompiler.cpp"
        ;
        uStack_68 = 0x97;
        uVar12 = FUN_004446b0(&local_98,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_04853550,
                              "failedField",local_48);
        pcVar13 = "Failed to clone opaque field \'{}\'.";
        goto LAB_00462fb0;
      }
    }
    else {
      if (param_4 == param_2) {
        lVar8 = FUN_00461a20(*param_1,param_4);
      }
      else {
        lVar8 = FUN_00461c00(*param_1,param_4,param_2);
      }
      if (lVar8 == 0) {
        return 0x80040200;
      }
      plVar16 = (long *)param_1[1];
      uVar5 = *(uint *)(plVar16 + 1);
      if (uVar5 == (*(uint *)((long)plVar16 + 0xc) & 0x3fffffff)) {
        FUN_00426990(PTR_DAT_048607b8,plVar16,0x38);
        uVar5 = *(uint *)(plVar16 + 1);
      }
      puVar15 = (undefined8 *)(*plVar16 + (long)(int)uVar5 * 0x38);
      *(undefined1 *)(puVar15 + 1) = 0;
      *(undefined4 *)((long)puVar15 + 10) = 0;
      puVar15[2] = 0;
      *puVar15 = &PTR_LAB_04863468;
      *(uint *)(plVar16 + 1) = uVar5 + 1;
      plVar16 = (long *)(*plVar16 + (long)(int)uVar5 * 0x38);
      (**(code **)(*plVar16 + 8))(plVar16);
      *(undefined1 *)(plVar16 + 1) = 0xc;
      *(undefined2 *)((long)plVar16 + 10) = uVar4;
      *(undefined2 *)((long)plVar16 + 0xc) = uVar2;
      plVar16[2] = 0;
      plVar16[3] = param_4;
      puVar1 = PTR_DAT_04bd5628 + 0x10;
      plVar16[4] = param_2;
      plVar16[5] = lVar8;
      *plVar16 = (long)puVar1;
    }
    return 0;
  case 2:
    plVar16 = (long *)param_1[1];
    uVar5 = *(uint *)(plVar16 + 1);
    if (uVar5 == (*(uint *)((long)plVar16 + 0xc) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,plVar16,0x38);
      uVar5 = *(uint *)(plVar16 + 1);
    }
    puVar15 = (undefined8 *)(*plVar16 + (long)(int)uVar5 * 0x38);
    *(undefined1 *)(puVar15 + 1) = 0;
    *(undefined4 *)((long)puVar15 + 10) = 0;
    puVar15[2] = 0;
    *puVar15 = &PTR_LAB_04863468;
    *(uint *)(plVar16 + 1) = uVar5 + 1;
    plVar16 = (long *)(*plVar16 + (long)(int)uVar5 * 0x38);
    (**(code **)(*plVar16 + 8))(plVar16);
    uVar14 = 1;
    break;
  case 3:
    plVar16 = (long *)param_1[1];
    uVar5 = *(uint *)(plVar16 + 1);
    if (uVar5 == (*(uint *)((long)plVar16 + 0xc) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,plVar16,0x38);
      uVar5 = *(uint *)(plVar16 + 1);
    }
    puVar15 = (undefined8 *)(*plVar16 + (long)(int)uVar5 * 0x38);
    *(undefined1 *)(puVar15 + 1) = 0;
    *(undefined4 *)((long)puVar15 + 10) = 0;
    puVar15[2] = 0;
    *puVar15 = &PTR_LAB_04863468;
    *(uint *)(plVar16 + 1) = uVar5 + 1;
    plVar16 = (long *)(*plVar16 + (long)(int)uVar5 * 0x38);
    (**(code **)(*plVar16 + 8))(plVar16);
    uVar14 = 5;
    break;
  case 4:
    plVar16 = (long *)param_1[1];
    uVar5 = *(uint *)(plVar16 + 1);
    if (uVar5 == (*(uint *)((long)plVar16 + 0xc) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,plVar16,0x38);
      uVar5 = *(uint *)(plVar16 + 1);
    }
    puVar15 = (undefined8 *)(*plVar16 + (long)(int)uVar5 * 0x38);
    *(undefined1 *)(puVar15 + 1) = 0;
    *(undefined4 *)((long)puVar15 + 10) = 0;
    puVar15[2] = 0;
    *puVar15 = &PTR_LAB_04863468;
    *(uint *)(plVar16 + 1) = uVar5 + 1;
    plVar16 = (long *)(*plVar16 + (long)(int)uVar5 * 0x38);
    (**(code **)(*plVar16 + 8))(plVar16);
    uVar14 = 2;
    break;
  case 5:
    plVar16 = (long *)param_1[1];
    uVar5 = *(uint *)(plVar16 + 1);
    if (uVar5 == (*(uint *)((long)plVar16 + 0xc) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,plVar16,0x38);
      uVar5 = *(uint *)(plVar16 + 1);
    }
    puVar15 = (undefined8 *)(*plVar16 + (long)(int)uVar5 * 0x38);
    *(undefined1 *)(puVar15 + 1) = 0;
    *(undefined4 *)((long)puVar15 + 10) = 0;
    puVar15[2] = 0;
    *puVar15 = &PTR_LAB_04863468;
    *(uint *)(plVar16 + 1) = uVar5 + 1;
    plVar16 = (long *)(*plVar16 + (long)(int)uVar5 * 0x38);
    (**(code **)(*plVar16 + 8))(plVar16);
    uVar14 = 3;
    break;
  case 6:
    plVar16 = (long *)param_1[1];
    uVar5 = *(uint *)(plVar16 + 1);
    if (uVar5 == (*(uint *)((long)plVar16 + 0xc) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,plVar16,0x38);
      uVar5 = *(uint *)(plVar16 + 1);
    }
    puVar15 = (undefined8 *)(*plVar16 + (long)(int)uVar5 * 0x38);
    *(undefined1 *)(puVar15 + 1) = 0;
    *(undefined4 *)((long)puVar15 + 10) = 0;
    puVar15[2] = 0;
    *puVar15 = &PTR_LAB_04863468;
    *(uint *)(plVar16 + 1) = uVar5 + 1;
    plVar16 = (long *)(*plVar16 + (long)(int)uVar5 * 0x38);
    (**(code **)(*plVar16 + 8))(plVar16);
    uVar14 = 4;
    break;
  case 7:
    if ((param_1[3] != param_2) && (param_1[2] != param_4)) {
      if (param_4 == param_2) {
        lVar8 = FUN_00461a20(*param_1,param_4);
      }
      else {
        lVar8 = FUN_00461c00(*param_1,param_4,param_2);
      }
      if (lVar8 == 0) {
        return 0x80040200;
      }
      plVar16 = (long *)param_1[1];
      uVar5 = *(uint *)(plVar16 + 1);
      if (uVar5 == (*(uint *)((long)plVar16 + 0xc) & 0x3fffffff)) {
        FUN_00426990(PTR_DAT_048607b8,plVar16,0x38);
        uVar5 = *(uint *)(plVar16 + 1);
      }
      puVar15 = (undefined8 *)(*plVar16 + (long)(int)uVar5 * 0x38);
      *(undefined1 *)(puVar15 + 1) = 0;
      *(undefined4 *)((long)puVar15 + 10) = 0;
      puVar15[2] = 0;
      *puVar15 = &PTR_LAB_04863468;
      *(uint *)(plVar16 + 1) = uVar5 + 1;
      plVar16 = (long *)(*plVar16 + (long)(int)uVar5 * 0x38);
      (**(code **)(*plVar16 + 8))(plVar16);
      *(undefined1 *)(plVar16 + 1) = 0xc;
      *(undefined2 *)((long)plVar16 + 10) = uVar4;
      *(undefined2 *)((long)plVar16 + 0xc) = uVar2;
      plVar16[2] = 0;
      plVar16[3] = param_4;
      puVar1 = PTR_DAT_04bd5628 + 0x10;
      plVar16[4] = param_2;
      plVar16[5] = lVar8;
      *plVar16 = (long)puVar1;
      return 0;
    }
    if (param_4 == param_2) {
      local_90 = (undefined *)CONCAT44(param_5,param_3);
      local_98 = param_1;
      local_58 = FUN_004633c0(param_1,param_2,&local_98);
      local_48[0] = 0x80040200;
      if (local_58 < 2) {
        return 0;
      }
      if (DAT_04c70178 == '\0') {
        return 0x80040200;
      }
      FUN_00444bc0(&local_98,&DAT_04c70128,1);
      local_70 = 
      "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/TypeVm/hkTypeVmCompiler.cpp"
      ;
      uStack_68 = 0xbd;
      uVar12 = FUN_004446b0(&local_98,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_04853550,
                            "failedField",local_48);
      pcVar13 = "Failed to clone field \'{}\' in fast path.";
    }
    else if (param_4 == 0) {
      local_90 = (undefined *)CONCAT44(local_90._4_4_,param_3);
      local_98 = param_1;
      local_58 = FUN_004637b0(param_1,param_2,&local_98);
      local_48[0] = 0x80040200;
      if (local_58 < 2) {
        return 0;
      }
      if (DAT_04c70178 == '\0') {
        return 0x80040200;
      }
      FUN_00444bc0(&local_98,&DAT_04c70128,1);
      local_70 = 
      "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/TypeVm/hkTypeVmCompiler.cpp"
      ;
      uStack_68 = 0xef;
      uVar12 = FUN_004446b0(&local_98,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_04853550,
                            "failedField",local_48);
      pcVar13 = "Failed to clone field \'{}\' with NULL source type.";
    }
    else {
      uVar11 = FUN_00428440(param_4);
      uVar7 = param_4;
      if ((uVar11 & 0x1f) != 7) {
        uVar7 = 0;
      }
      if (uVar7 != param_4) {
        if (*(char *)*param_1 == '\0') {
          uVar6 = 0;
        }
        else {
          FUN_00427bc0(&local_98,param_2,&DAT_04c15808);
          if ((local_88 & 1) != 0) {
            FUN_0043dd50(local_88 & 0xfffffffffffffffe);
          }
          if (local_98 == (long *)0x0) {
            uVar6 = FUN_00462730(param_1,param_2,param_3,0,0);
          }
          else {
            uVar6 = (*(code *)*local_98)(param_1[1],param_2,param_3,0,0);
          }
        }
        return uVar6;
      }
      local_90 = (undefined *)CONCAT44(local_90._4_4_,param_3);
      local_98 = param_1;
      local_88 = uVar7;
      local_80 = param_5;
      local_58 = FUN_00463650(param_1,param_2,&local_98);
      local_48[0] = 0x80040200;
      if (local_58 < 2) {
        return 0;
      }
      if (DAT_04c70178 == '\0') {
        return 0x80040200;
      }
      FUN_00444bc0(&local_98,&DAT_04c70128,1);
      local_70 = 
      "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/TypeVm/hkTypeVmCompiler.cpp"
      ;
      uStack_68 = 0xe7;
      uVar12 = FUN_004446b0(&local_98,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_04853550,
                            "failedField",local_48);
      pcVar13 = "Failed to clone field \'{}\' by name matching.";
    }
LAB_00462fb0:
    FUN_004446b0(uVar12,pcVar13,&DAT_04863660,&local_58);
    FUN_00444c00(&local_98);
    return local_48[0];
  case 8:
    if ((((param_4 == 0) || (uVar7 = FUN_00428440(param_4), (uVar7 & 0x1f) != 8)) ||
        (lVar8 = FUN_00426d90(param_2), lVar8 == 0)) || (lVar8 = FUN_00426d90(param_4), lVar8 == 0))
    {
LAB_00463000:
      lVar8 = 0;
    }
    else {
      lVar8 = *param_1;
      if (*(char *)(lVar8 + 5) == '\0') {
        puVar15 = (undefined8 *)FUN_00426e90(param_2,1);
        if ((puVar15 == (undefined8 *)0x0) || ((int)((ulong)*puVar15 >> 8) == 0)) goto LAB_00463000;
        lVar8 = *param_1;
      }
      lVar9 = FUN_00426d90(param_4);
      lVar10 = FUN_00426d90(param_2);
      if (lVar9 == lVar10) {
        lVar8 = FUN_00461a20(lVar8,lVar9);
      }
      else {
        lVar8 = FUN_00461c00(lVar8,lVar9,lVar10);
      }
      if (lVar8 == 0) {
        return 0x80040200;
      }
    }
    plVar16 = (long *)param_1[1];
    uVar5 = *(uint *)(plVar16 + 1);
    if (uVar5 == (*(uint *)((long)plVar16 + 0xc) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,plVar16,0x38);
      uVar5 = *(uint *)(plVar16 + 1);
    }
    puVar15 = (undefined8 *)(*plVar16 + (long)(int)uVar5 * 0x38);
    *(undefined1 *)(puVar15 + 1) = 0;
    *(undefined4 *)((long)puVar15 + 10) = 0;
    puVar15[2] = 0;
    *puVar15 = &PTR_LAB_04863468;
    *(uint *)(plVar16 + 1) = uVar5 + 1;
    plVar16 = (long *)(*plVar16 + (long)(int)uVar5 * 0x38);
    (**(code **)(*plVar16 + 8))(plVar16);
    *(undefined1 *)(plVar16 + 1) = 0xb;
    *(undefined2 *)((long)plVar16 + 10) = uVar4;
    *(undefined2 *)((long)plVar16 + 0xc) = uVar2;
    plVar16[2] = 0;
    plVar16[3] = param_4;
    puVar1 = PTR_DAT_04bd5618 + 0x10;
    plVar16[4] = param_2;
    plVar16[5] = lVar8;
    *plVar16 = (long)puVar1;
    return 0;
  default:
    local_88 = 0;
    local_98 = (long *)0x0;
    local_90 = &DAT_0413df78;
    FUN_004223c0(0xfdbd9f9,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",0x1b
                 ,"Bad type visitor switch",&local_98);
                    /* WARNING: Does not return */
    pcVar3 = (code *)UndefinedInstructionException(0,0x463124);
    (*pcVar3)();
  }
  *(undefined2 *)((long)plVar16 + 10) = uVar4;
  *(undefined2 *)((long)plVar16 + 0xc) = uVar2;
  *(undefined1 *)(plVar16 + 1) = uVar14;
  plVar16[2] = 0;
  plVar16[3] = param_4;
  *plVar16 = (long)&PTR_LAB_048634a0;
  plVar16[4] = param_2;
  return 0;
}

