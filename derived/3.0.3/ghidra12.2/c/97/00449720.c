
undefined4 FUN_00449720(char *param_1,undefined8 param_2,undefined1 (*param_3) [16],long *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined *puVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 auVar11 [16];
  char *local_a0;
  char *pcStack_98;
  char *local_78;
  undefined8 uStack_70;
  char *local_60;
  undefined8 local_58;
  undefined4 local_48 [2];
  
  *(char **)*param_3 = param_1;
  *(undefined8 *)(*param_3 + 8) = param_2;
  local_60 = param_1;
  local_58 = param_2;
  iVar2 = FUN_004299f0(&local_60,0x3c,0);
  if (iVar2 == -1) {
    local_a0 = *(char **)*param_3;
    if ((local_a0 != *(char **)(*param_3 + 8)) &&
       (pcStack_98 = *(char **)(*param_3 + 8) + -1, *pcStack_98 == '*')) {
      auVar11 = FUN_00429810(&local_a0);
      uVar8 = *(uint *)(param_4 + 1);
      if (uVar8 == (*(uint *)((long)param_4 + 0xc) & 0x3fffffff)) {
        FUN_00426990(PTR_DAT_048607c0,param_4,0x10);
        uVar8 = *(uint *)(param_4 + 1);
      }
      *(undefined1 (*) [16])(*param_4 + (long)(int)uVar8 * 0x10) = auVar11;
      *(uint *)(param_4 + 1) = uVar8 + 1;
      *(undefined **)*param_3 = &DAT_040f28c8;
      *(undefined **)(*param_3 + 8) = &DAT_040f28ca;
    }
  }
  else {
    if (iVar2 == 0) {
      if (1 < DAT_04c6f6c8) {
        FUN_00444bc0(&local_a0,&DAT_04c6f678,2);
        lVar4 = FUN_004446b0(&local_a0,"Invalid type name: \'{}\' (empty root)",&DAT_04861730,
                             &local_60);
        *(char **)(lVar4 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
        ;
        *(undefined8 *)(lVar4 + 0x30) = 0x138;
        FUN_00444c00(&local_a0);
      }
      return 0x80040200;
    }
    pcStack_98 = local_60 + iVar2;
    local_a0 = local_60;
    auVar11 = FUN_00429810(&local_a0);
    *param_3 = auVar11;
    iVar3 = FUN_00429a30(&local_60,0x3e);
    puVar7 = PTR_DAT_048607c0;
    local_48[0] = 0x80040257;
    if (iVar3 < iVar2) {
      if (DAT_04c6f6c8 == 0) {
        return 0x80040257;
      }
      FUN_00444bc0(&local_a0,&DAT_04c6f678,1);
      local_78 = 
      "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
      ;
      uStack_70 = 0x144;
      uVar5 = FUN_004446b0(&local_a0,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_04861580,
                           "indexOfClose < indexOfOpen",local_48);
      pcVar6 = "Invalid type name: \'{}\' (invalid arguments)";
LAB_00449aec:
      FUN_004446b0(uVar5,pcVar6,&DAT_04861730,&local_60);
      FUN_00444c00(&local_a0);
      return local_48[0];
    }
    pcVar6 = local_60 + iVar3;
    pcVar10 = local_60 + (long)iVar2 + 2;
    pcVar9 = local_60 + (long)iVar2 + 1;
    if (pcVar10 < pcVar6) {
      iVar2 = 0;
      do {
        while (cVar1 = *pcVar10, cVar1 == '>') {
          local_48[0] = 0x80040257;
          if (iVar2 < 1) {
            if (DAT_04c6f6c8 == 0) {
              return 0x80040257;
            }
            FUN_00444bc0(&local_a0,&DAT_04c6f678,1);
            uStack_70 = 0x15b;
            puVar7 = &DAT_04853630;
            pcVar6 = "bracketNesting <= 0";
            goto LAB_00449ad8;
          }
          iVar2 = iVar2 + -1;
          pcVar10 = pcVar10 + 1;
          if (pcVar6 <= pcVar10) goto LAB_004499d4;
        }
        if (cVar1 == '<') {
          iVar2 = iVar2 + 1;
        }
        else if ((iVar2 == 0) && (cVar1 == ',')) {
          local_a0 = pcVar9;
          pcStack_98 = pcVar10;
          auVar11 = FUN_00429810(&local_a0);
          uVar8 = *(uint *)(param_4 + 1);
          if (uVar8 == (*(uint *)((long)param_4 + 0xc) & 0x3fffffff)) {
            FUN_00426990(puVar7,param_4,0x10);
            uVar8 = *(uint *)(param_4 + 1);
          }
          iVar2 = 0;
          *(undefined1 (*) [16])(*param_4 + (long)(int)uVar8 * 0x10) = auVar11;
          pcVar9 = pcVar10 + 1;
          *(uint *)(param_4 + 1) = uVar8 + 1;
        }
        pcVar10 = pcVar10 + 1;
      } while (pcVar10 < pcVar6);
LAB_004499d4:
      local_48[0] = 0x80040257;
      if (iVar2 != 0) {
        if (DAT_04c6f6c8 == 0) {
          return 0x80040257;
        }
        FUN_00444bc0(&local_a0,&DAT_04c6f678,1);
        uStack_70 = 0x164;
        puVar7 = &DAT_048615b8;
        pcVar6 = "bracketNesting";
LAB_00449ad8:
        local_78 = 
        "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/TypeReg/Detail/hkTypeRegDetail.cpp"
        ;
        uVar5 = FUN_004446b0(&local_a0,"HK_RETURN_RES_IF({}) returning {}. ",puVar7,pcVar6,local_48)
        ;
        pcVar6 = "Invalid type name: {} (invalid brackets nesting)";
        goto LAB_00449aec;
      }
    }
    local_48[0] = 0x80040257;
    if (pcVar9 < pcVar6) {
      local_a0 = pcVar9;
      pcStack_98 = pcVar6;
      auVar11 = FUN_00429810(&local_a0);
      uVar8 = *(uint *)(param_4 + 1);
      if (uVar8 == (*(uint *)((long)param_4 + 0xc) & 0x3fffffff)) {
        FUN_00426990(PTR_DAT_048607c0,param_4,0x10);
        uVar8 = *(uint *)(param_4 + 1);
      }
      *(undefined1 (*) [16])(*param_4 + (long)(int)uVar8 * 0x10) = auVar11;
      *(uint *)(param_4 + 1) = uVar8 + 1;
    }
  }
  return 0;
}

