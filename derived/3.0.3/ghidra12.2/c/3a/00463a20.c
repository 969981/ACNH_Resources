
int FUN_00463a20(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *local_98 [2];
  ulong local_88;
  char *local_70;
  undefined8 uStack_68;
  ulong local_58;
  undefined8 local_50;
  uint local_48 [2];
  
  plVar9 = (long *)*param_1;
  local_58 = 0;
  uVar10 = param_1[2];
  cVar1 = *(char *)(*plVar9 + 3);
  local_50 = param_2;
  uVar8 = FUN_00427b40(&local_50);
  if (cVar1 == '\0') {
    local_58 = FUN_004280a0(uVar10,uVar8,*(char *)(*plVar9 + 4) != '\0');
    uVar8 = local_50;
  }
  else {
    local_58 = FUN_00427d40();
    uVar8 = local_50;
  }
  local_50 = uVar8;
  if (local_58 < 2) {
    iVar6 = *(int *)(param_1 + 1);
    iVar7 = FUN_00429050(&local_50);
    if (*(char *)*plVar9 != '\0') {
      FUN_00427bc0(local_98,uVar8,&DAT_04c15808);
      if ((local_88 & 1) != 0) {
        FUN_0043dd50(local_88 & 0xfffffffffffffffe);
      }
      if (local_98[0] == (undefined8 *)0x0) {
        local_48[0] = FUN_00462730(plVar9,uVar8,iVar7 + iVar6,0,0);
      }
      else {
        local_48[0] = (*(code *)*local_98[0])(plVar9[1],uVar8,iVar7 + iVar6,0,0);
      }
      if ((int)local_48[0] < 0) {
        if (DAT_04c70178 == '\0') {
          return local_48[0];
        }
        FUN_00444bc0(local_98,&DAT_04c70128,1);
        local_70 = 
        "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/TypeVm/hkTypeVmCompiler.cpp"
        ;
        uStack_68 = 0xe2;
        uVar8 = FUN_004446b0(local_98,"HK_RETURN_IF_FAILED({}) returning {}. ",&DAT_04863670,
                             "dispatch(fieldDecl.getType(), dstOff + fieldDecl.getOffset(), nullptr, 0)"
                             ,local_48);
        FUN_004446b0(uVar8,"Failed to compile \'{}\'",&DAT_04863660,&local_50);
        FUN_00444c00(local_98);
        return local_48[0];
      }
    }
  }
  else {
    uVar3 = FUN_004290b0(&local_58);
    uVar8 = local_50;
    if ((*(char *)(*plVar9 + 1) == '\0' || (uVar3 & 1) == 0) &&
       (((uVar3 >> 4 & 1) == 0 || (*(char *)(*plVar9 + 2) == '\0')))) {
      iVar4 = FUN_00429050(&local_50);
      uVar2 = local_58;
      iVar6 = *(int *)(param_1 + 1);
      iVar5 = FUN_00429050(&local_58);
      iVar7 = *(int *)(param_1 + 3);
      if ((uVar2 == 0) && (*(char *)*plVar9 == '\0')) {
        return 0;
      }
      FUN_00427bc0(local_98,uVar8,&DAT_04c15808);
      if ((local_88 & 1) != 0) {
        FUN_0043dd50(local_88 & 0xfffffffffffffffe);
      }
      if (local_98[0] == (undefined8 *)0x0) {
        iVar6 = FUN_00462730(plVar9,uVar8,iVar6 + iVar4,uVar2,iVar7 + iVar5);
        return iVar6;
      }
      iVar6 = (*(code *)*local_98[0])(plVar9[1],uVar8,iVar6 + iVar4,uVar2,iVar7 + iVar5);
      return iVar6;
    }
  }
  return 0;
}

