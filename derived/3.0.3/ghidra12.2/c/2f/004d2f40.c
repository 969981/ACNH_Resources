
int FUN_004d2f40(long *param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long local_58;
  undefined *puStack_50;
  ulong local_48;
  
  uVar3 = FUN_00428440(param_2);
  iVar4 = 0;
  switch(uVar3 & 0x1f) {
  case 2:
  case 4:
  case 5:
    goto switchD_004d2f94_caseD_2;
  case 3:
    uVar6 = FUN_00427110(param_2,&DAT_04c12b80);
    if ((uVar6 & 1) != 0) {
      return 0;
    }
    piVar9 = (int *)(((long *)*param_3)[0x1a] +
                    (long)*(int *)(*(long *)*param_3 + (long)(int)param_3[1] * 0x18 + 0x10) * 0x10);
    iVar4 = piVar9[2] - *piVar9;
    break;
  case 6:
    uVar6 = FUN_00426d90(param_2);
    if (1 < uVar6) {
      lVar5 = FUN_00426d90(param_2);
      uVar6 = FUN_00428440();
      if (lVar5 == 0) {
        return 0;
      }
      if ((uVar6 & 0x1f) != 0) {
        return 0;
      }
    }
    local_58 = 0;
    iVar4 = FUN_004d2f40(&local_58,*param_1,param_3);
    return iVar4;
  default:
    local_48 = 0;
    local_58 = 0;
    puStack_50 = &DAT_0413df78;
    FUN_004223c0(0xfdbd9f9,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",0x1b
                 ,"Bad type visitor switch",&local_58);
                    /* WARNING: Does not return */
    pcVar2 = (code *)UndefinedInstructionException(0,0x4d31cc);
    (*pcVar2)();
  case 8:
    lVar5 = FUN_00426d90(param_2);
    if (lVar5 == 0) {
      lVar5 = *param_1;
    }
    else {
      lVar5 = FUN_00426d90(param_2);
    }
    lVar10 = ((long *)*param_3)[0x1a];
    lVar7 = *(long *)*param_3 + (long)(int)param_3[1] * 0x18;
    iVar4 = *(int *)(lVar7 + 0x10);
    iVar1 = *(int *)(lVar7 + 0x14);
    FUN_00427bc0(&local_58,param_2,PTR_DAT_04bd7320);
    if ((local_48 & 1) != 0) {
      FUN_0043dd50(local_48 & 0xfffffffffffffffe);
    }
    lVar7 = lVar10 + (long)iVar4 * 0x10;
    lVar10 = lVar10 + (long)iVar1 * 0x10;
    if (local_58 == 0) {
      iVar4 = 0;
      uVar6 = FUN_00428440(lVar5);
    }
    else {
      iVar4 = FUN_00426fc0(lVar5);
      iVar4 = iVar4 * (int)((ulong)(lVar10 - lVar7) >> 4);
      uVar6 = FUN_00428440(lVar5);
    }
    if (lVar5 == 0) {
      return iVar4;
    }
    if ((uVar6 & 0x1f) != 3) {
      return iVar4;
    }
    uVar6 = FUN_00427110(lVar5,&DAT_04c12b80);
    if ((uVar6 & 1) != 0) {
      return iVar4;
    }
    uVar6 = lVar10 - lVar7;
    if ((int)(uVar6 >> 4) < 1) {
      return iVar4;
    }
    uVar8 = uVar6 >> 4 & 0xffffffff;
    uVar6 = uVar6 >> 4 & 1;
    if (uVar8 == 1) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      piVar9 = (int *)(lVar7 + 0x10);
      do {
        lVar5 = lVar5 + 2;
        iVar4 = iVar4 + (piVar9[-2] - piVar9[-4]) + (piVar9[2] - *piVar9) + -2;
        piVar9 = piVar9 + 8;
      } while (uVar8 - uVar6 != lVar5);
    }
    if (uVar6 == 0) {
      return iVar4;
    }
    piVar9 = (int *)(lVar7 + lVar5 * 0x10);
    iVar4 = iVar4 + (piVar9[2] - *piVar9);
  }
  iVar4 = iVar4 + -1;
switchD_004d2f94_caseD_2:
  return iVar4;
}

