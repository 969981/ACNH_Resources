
undefined4 FUN_004d3c00(undefined8 param_1,undefined8 param_2,long *param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined1 local_80 [16];
  long local_70;
  undefined *local_68;
  ulong local_60;
  long lStack_58;
  
  uVar2 = FUN_00428440(param_2);
  switch(uVar2 & 0x1f) {
  case 2:
  case 4:
  case 5:
    lVar5 = *param_3;
    uVar4 = (ulong)*(byte *)(param_3 + 2) << 0x20;
    plVar9 = (long *)param_3[3];
    uVar2 = *(uint *)(plVar9 + 1);
    if (uVar2 != (*(uint *)((long)plVar9 + 0xc) & 0x3fffffff)) goto LAB_004d3c8c;
    break;
  case 3:
    if ((param_3[1] == 0) && (uVar4 = FUN_00428700(param_2,&DAT_04c12b80), (uVar4 & 1) == 0)) {
      if (DAT_04c719d8 < 4) {
        return 0x80040200;
      }
      FUN_00444bc0(&local_70,&DAT_04c71988,4);
      lVar5 = FUN_004446b0(&local_70,"Non-managed strings in attribute owner are not supported",
                           &DAT_0413df78);
      uVar8 = 0x4d;
      goto LAB_004d4058;
    }
LAB_004d3eb0:
    plVar9 = (long *)param_3[3];
    uVar4 = (ulong)*(byte *)(param_3 + 2) << 0x20;
    lVar5 = *param_3;
    uVar2 = *(uint *)(plVar9 + 1);
    if (uVar2 != (*(uint *)((long)plVar9 + 0xc) & 0x3fffffff)) goto LAB_004d3c8c;
    break;
  case 6:
    lVar5 = FUN_00426d90(param_2);
    if (lVar5 != 0) {
      lVar5 = FUN_00426d90(param_2);
      uVar4 = FUN_00428440();
      if ((lVar5 == 0) || ((uVar4 & 0x1f) != 0)) {
        uVar8 = FUN_00426d90(param_2);
        uVar4 = FUN_00427110(uVar8,&DAT_04c16210);
        if ((uVar4 & 1) == 0) {
          if (DAT_04c719d8 < 4) {
            return 0x80040200;
          }
          FUN_00444bc0(&local_70,&DAT_04c71988,4);
          FUN_00426d90(param_2);
          local_80 = FUN_004273b0();
          lVar5 = FUN_004446b0(&local_70,"Pointer to invalid type: {}",&DAT_048616a0,local_80);
          uVar8 = 0x7e;
          goto LAB_004d4058;
        }
        goto LAB_004d3eb0;
      }
    }
    if (param_3[1] != 0) {
      local_60 = param_3[2];
      lStack_58 = param_3[3];
      local_70 = *param_3;
      local_68 = (undefined *)0x0;
      uVar3 = FUN_004d3c00(param_1,param_3[1],&local_70);
      return uVar3;
    }
    if (DAT_04c719d8 < 4) {
      return 0x80040200;
    }
    FUN_00444bc0(&local_70,&DAT_04c71988,4);
    lVar5 = FUN_004446b0(&local_70,"Pointers in attribute owner are not supported",&DAT_0413df78);
    uVar8 = 0x70;
LAB_004d4058:
    *(char **)(lVar5 + 0x28) =
         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Attributes/hkAttributeReader.cpp"
    ;
    *(undefined8 *)(lVar5 + 0x30) = uVar8;
    FUN_00444c00(&local_70);
    return 0x80040200;
  case 7:
    if (DAT_04c719d8 < 4) {
      return 0x80040200;
    }
    FUN_00444bc0(&local_70,&DAT_04c71988,4);
    lVar5 = FUN_004446b0(&local_70,"Record fields are not supported",&DAT_0413df78);
    uVar8 = 0x46;
    goto LAB_004d4058;
  case 8:
    lVar5 = FUN_00426d90(param_2);
    if (lVar5 == 0) {
      if (DAT_04c719d8 < 4) {
        return 0x80040200;
      }
      FUN_00444bc0(&local_70,&DAT_04c71988,4);
      lVar5 = FUN_004446b0(&local_70,"Variant arrays are not supported",&DAT_0413df78);
      uVar8 = 0x5c;
      goto LAB_004d4058;
    }
    uVar2 = FUN_00428440();
    if (3 < (uVar2 & 0x1f) - 2) {
      if (DAT_04c719d8 < 4) {
        return 0x80040200;
      }
      FUN_00444bc0(&local_70,&DAT_04c71988,4);
      lVar5 = FUN_004446b0(&local_70,"Arrays of compounds are not supported",&DAT_0413df78);
      uVar8 = 0x5d;
      goto LAB_004d4058;
    }
    if (param_3[1] == 0) {
      FUN_00427bc0(&local_70,param_2,&DAT_04c145c8);
      if ((local_60 & 1) != 0) {
        FUN_0043dd50(local_60 & 0xfffffffffffffffe);
      }
      if (local_70 != 0) {
        if (DAT_04c719d8 < 4) {
          return 0x80040200;
        }
        FUN_00444bc0(&local_70,&DAT_04c71988,4);
        lVar5 = FUN_004446b0(&local_70,"ValueArray in attribute owner is not supported",
                             &DAT_0413df78);
        uVar8 = 0x5e;
        goto LAB_004d4058;
      }
    }
    puVar6 = (ulong *)FUN_00426e90(param_2,1);
    if (puVar6 == (ulong *)0x0) {
      plVar9 = (long *)param_3[3];
    }
    else {
      plVar9 = (long *)param_3[3];
      if ((int)(*puVar6 >> 8) != 0) {
        lVar5 = *param_3;
        uVar4 = *puVar6 >> 8 & 0xffffffff | (ulong)*(byte *)(param_3 + 2) << 0x20;
        uVar2 = *(uint *)(plVar9 + 1);
        if (uVar2 != (*(uint *)((long)plVar9 + 0xc) & 0x3fffffff)) goto LAB_004d3c8c;
        break;
      }
    }
    lVar5 = *param_3;
    uVar4 = (ulong)*(byte *)(param_3 + 2) << 0x20 | 0xffffffff;
    uVar2 = *(uint *)(plVar9 + 1);
    if (uVar2 != (*(uint *)((long)plVar9 + 0xc) & 0x3fffffff)) goto LAB_004d3c8c;
    break;
  default:
    local_60 = 0;
    local_70 = 0;
    local_68 = &DAT_0413df78;
    FUN_004223c0(0xfdbd9f9,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",0x1b
                 ,"Bad type visitor switch",&local_70);
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x4d40d8);
    (*pcVar1)();
  }
  FUN_00426990(PTR_DAT_048607b8,plVar9,0x18);
  uVar2 = *(uint *)(plVar9 + 1);
LAB_004d3c8c:
  plVar7 = (long *)(*plVar9 + (long)(int)uVar2 * 0x18);
  *plVar7 = lVar5;
  plVar7[1] = uVar4;
  plVar7[2] = -1;
  *(uint *)(plVar9 + 1) = uVar2 + 1;
  return 0;
}

