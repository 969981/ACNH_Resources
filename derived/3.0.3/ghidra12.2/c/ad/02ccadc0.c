
undefined4 FUN_02ccadc0(long *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 local_58;
  
  local_58 = 0xfffe;
  FUN_0277d4ac(&local_58);
  lVar7 = 0;
  uVar9 = 0;
  uVar8 = 0;
  iVar4 = 0;
  iVar10 = 0;
  do {
    iVar2 = (**(code **)(*param_1 + 0x3f0))(param_1,lVar7);
    if (iVar2 != 2) {
      uVar5 = (**(code **)(*param_1 + 0x440))(param_1,lVar7);
      if ((uVar5 & 1) != 0) {
        (**(code **)(*param_1 + 0x408))(param_1,&local_58,lVar7);
        uVar5 = FUN_02cd8d70(&local_58);
        if ((uVar5 & 1) != 0) {
          uVar9 = uVar9 + 1;
          uVar3 = FUN_0277e9e0(&local_58);
          uVar8 = uVar8 + ((uVar3 ^ 0xffffffff) & 1);
        }
      }
      if ((iVar2 != 3) && (uVar5 = (**(code **)(*param_1 + 0x428))(param_1,lVar7), (uVar5 & 1) != 0)
         ) {
        if (iVar2 == 0) {
          iVar4 = iVar4 + 1;
        }
        if (iVar2 == 1) {
          iVar10 = iVar10 + 1;
        }
      }
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 10);
  if (uVar9 == 0) {
    return 4;
  }
  iVar2 = FUN_0267c230(param_1 + 0x3f);
  uVar3 = iVar2 + iVar4;
  iVar4 = FUN_026731d0(param_1 + 0x3f);
  uVar1 = iVar4 + iVar10 + uVar3;
  if (uVar9 <= uVar1) {
    if (uVar8 == 0) {
      if (uVar9 <= uVar3) {
        return 0;
      }
LAB_02ccaf4c:
      uVar6 = 1;
      if (uVar3 != 0) {
        uVar6 = 2;
      }
      return uVar6;
    }
    if (uVar8 <= (uint)(iVar4 + iVar10)) {
      if (uVar9 == uVar8) {
        return 1;
      }
      if ((int)(uVar9 - uVar8) <= (int)(uVar1 - uVar8)) goto LAB_02ccaf4c;
    }
  }
  return 3;
}

