
void FUN_004d6940(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  double dVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  double local_88;
  undefined *local_80;
  ulong local_78;
  undefined4 local_48 [2];
  
  uVar2 = FUN_00428440(param_2);
  switch(uVar2 & 0x1f) {
  case 0:
  case 1:
    break;
  case 2:
    lVar11 = param_3[1];
    uVar7 = param_3[2];
    if ((uVar7 & 1) != 0) {
      FUN_0043dd30(uVar7 & 0xfffffffffffffffe);
    }
    uVar5 = FUN_00428440(lVar11);
    if ((uVar7 & 1) != 0) {
      FUN_0043dd50(uVar7 & 0xfffffffffffffffe);
    }
    if (lVar11 != 0 && (uVar5 & 0x1f) == 4) {
LAB_004d6e18:
      uVar4 = FUN_004e4ec0(param_3);
      FUN_004d7060(*param_1,uVar4);
      return;
    }
    lVar12 = param_3[1];
    uVar7 = FUN_00428440(lVar12);
    lVar11 = param_3[1];
    uVar5 = FUN_00428440(lVar11);
    if ((lVar12 == 0) || ((uVar7 & 0x1f) != 2)) {
      bVar1 = false;
      if ((lVar11 != 0) && ((uVar5 & 0x1f) == 4)) {
        if ((param_3[1] == 0) || (uVar7 = FUN_00428440(), (uVar7 & 0x1f) != 4)) {
          uVar7 = 0;
          uVar8 = 0;
          uVar10 = 0;
        }
        else {
          uVar10 = *param_3;
          uVar8 = param_3[1];
          uVar7 = param_3[2];
          if ((uVar7 & 1) != 0) {
            FUN_0043dd30(uVar7 & 0xfffffffffffffffe);
            uVar7 = param_3[2];
          }
        }
        local_88 = 0.0;
        local_80 = (undefined *)((ulong)local_80 & 0xffffffffffffff00);
        plVar9 = (long *)(uVar7 & 0xfffffffffffffffe);
        (**(code **)(*plVar9 + 0x38))(plVar9,uVar10,uVar8,&local_88);
        bVar1 = local_88 != 0.0;
        goto joined_r0x004d6f64;
      }
    }
    else {
      if ((param_3[1] == 0) || (uVar7 = FUN_00428440(), (uVar7 & 0x1f) != 2)) {
        uVar10 = 0;
        uVar8 = 0;
        uVar7 = 0;
      }
      else {
        uVar10 = *param_3;
        uVar8 = param_3[1];
        uVar7 = param_3[2];
        if ((uVar7 & 1) != 0) {
          FUN_0043dd30(uVar7 & 0xfffffffffffffffe);
          uVar7 = param_3[2];
        }
      }
      local_88 = (double)((ulong)local_88 & 0xffffffffffffff00);
      plVar9 = (long *)(uVar7 & 0xfffffffffffffffe);
      (**(code **)(*plVar9 + 0x38))(plVar9,uVar10,uVar8,&local_88);
      bVar1 = local_88._0_1_ != '\0';
joined_r0x004d6f64:
      if ((uVar7 & 1) != 0) {
        FUN_0043dd50(plVar9);
      }
    }
    FUN_004d7400(*param_1,bVar1);
    break;
  case 3:
    if ((param_3[1] == 0) || (uVar7 = FUN_00428440(), (uVar7 & 0x1f) != 3)) {
      uVar8 = 0;
      uVar10 = 0;
      uVar7 = 0;
    }
    else {
      uVar10 = *param_3;
      uVar8 = param_3[1];
      uVar7 = param_3[2];
      if ((uVar7 & 1) != 0) {
        FUN_0043dd30(uVar7 & 0xfffffffffffffffe);
        uVar7 = param_3[2];
      }
    }
    local_88 = 0.0;
    plVar9 = (long *)(uVar7 & 0xfffffffffffffffe);
    (**(code **)(*plVar9 + 0x38))(plVar9,uVar10,uVar8,&local_88);
    dVar6 = local_88;
    if ((uVar7 & 1) != 0) {
      FUN_0043dd50(plVar9);
    }
    param_1 = (undefined8 *)*param_1;
    if ((param_1[1] == 0) || (uVar7 = FUN_00428440(), (uVar7 & 0x1f) != 3)) {
      uVar8 = 0;
      uVar10 = 0;
      uVar7 = 0;
    }
    else {
      uVar10 = *param_1;
      uVar8 = param_1[1];
      uVar7 = param_1[2];
      if ((uVar7 & 1) != 0) {
        FUN_0043dd30(uVar7 & 0xfffffffffffffffe);
        uVar7 = param_1[2];
      }
    }
    plVar9 = (long *)(uVar7 & 0xfffffffffffffffe);
    (**(code **)(*plVar9 + 0x30))(plVar9,uVar10,uVar8,dVar6);
    if ((uVar7 & 1) != 0) {
      FUN_0043dd50(plVar9);
    }
    break;
  case 4:
    iVar3 = FUN_00428440(param_2);
    if ((iVar3 != 0x10004) && (iVar3 = FUN_00428440(param_2), iVar3 != 0x10204)) {
      iVar3 = FUN_00428440(param_2);
      if (iVar3 == 0x8004) {
        uVar4 = FUN_004e5020(param_3);
        FUN_004d71e0(*param_1,uVar4);
        return;
      }
      goto LAB_004d6e18;
    }
    dVar6 = (double)FUN_004e5170(param_3);
    param_1 = (undefined8 *)*param_1;
    if ((param_1[1] == 0) || (uVar7 = FUN_00428440(), (uVar7 & 0x1f) != 4)) {
      uVar10 = 0;
      uVar8 = 0;
      uVar7 = 0;
    }
    else {
      uVar10 = *param_1;
      uVar8 = param_1[1];
      uVar7 = param_1[2];
      if ((uVar7 & 1) != 0) {
        FUN_0043dd30(uVar7 & 0xfffffffffffffffe);
        uVar7 = param_1[2];
      }
    }
    local_88 = (double)-(long)dVar6;
    if (-1 < (long)dVar6) {
      local_88 = dVar6;
    }
    local_80 = (undefined *)((ulong)dVar6 >> 0x3f);
    plVar9 = (long *)(uVar7 & 0xfffffffffffffffe);
    (**(code **)(*plVar9 + 0x30))(plVar9,uVar10,uVar8,&local_88);
    if ((uVar7 & 1) != 0) {
      FUN_0043dd50(plVar9);
    }
    break;
  case 5:
    iVar3 = FUN_00428440(param_2);
    if (iVar3 == 0x74605) {
      if ((param_3[1] == 0) || (uVar7 = FUN_00428440(), (uVar7 & 0x1f) != 5)) {
        uVar10 = 0;
        uVar8 = 0;
        uVar7 = 0;
      }
      else {
        uVar10 = *param_3;
        uVar8 = param_3[1];
        uVar7 = param_3[2];
        if ((uVar7 & 1) != 0) {
          FUN_0043dd30(uVar7 & 0xfffffffffffffffe);
          uVar7 = param_3[2];
        }
      }
      local_88 = 0.0;
      plVar9 = (long *)(uVar7 & 0xfffffffffffffffe);
      (**(code **)(*plVar9 + 0x38))(plVar9,uVar10,uVar8,&local_88);
      fVar13 = (float)local_88 * DAT_04102e70;
      if ((uVar7 & 1) != 0) {
        FUN_0043dd50(plVar9);
      }
      FUN_004d7570(*param_1,(uint)fVar13 >> 0x10);
    }
    else if ((iVar3 == 0x345e05) || (iVar3 == 0x174605)) {
      if ((param_3[1] == 0) || (uVar7 = FUN_00428440(), (uVar7 & 0x1f) != 5)) {
        uVar8 = 0;
        uVar10 = 0;
        uVar7 = 0;
      }
      else {
        uVar10 = *param_3;
        uVar8 = param_3[1];
        uVar7 = param_3[2];
        if ((uVar7 & 1) != 0) {
          FUN_0043dd30(uVar7 & 0xfffffffffffffffe);
          uVar7 = param_3[2];
        }
      }
      local_88 = 0.0;
      plVar9 = (long *)(uVar7 & 0xfffffffffffffffe);
      (**(code **)(*plVar9 + 0x38))(plVar9,uVar10,uVar8,&local_88);
      dVar6 = local_88;
      if ((uVar7 & 1) != 0) {
        FUN_0043dd50(plVar9);
      }
      param_1 = (undefined8 *)*param_1;
      if ((param_1[1] == 0) || (uVar7 = FUN_00428440(), (uVar7 & 0x1f) != 5)) {
        uVar8 = 0;
        uVar10 = 0;
        uVar7 = 0;
      }
      else {
        uVar10 = *param_1;
        uVar8 = param_1[1];
        uVar7 = param_1[2];
        if ((uVar7 & 1) != 0) {
          FUN_0043dd30(uVar7 & 0xfffffffffffffffe);
          uVar7 = param_1[2];
        }
      }
      plVar9 = (long *)(uVar7 & 0xfffffffffffffffe);
      (**(code **)(*plVar9 + 0x30))((double)(float)dVar6,plVar9,uVar10,uVar8);
      if ((uVar7 & 1) != 0) {
        FUN_0043dd50(plVar9);
      }
    }
    break;
  case 6:
  case 7:
    FUN_004daa90(&local_88,param_3);
    FUN_004da040(*param_1,&local_88);
    if ((local_78 & 1) != 0) {
      FUN_0043dd50(local_78 & 0xfffffffffffffffe);
    }
    break;
  case 8:
    local_48[0] = *(undefined4 *)(param_3 + 4);
    FUN_004dafa0(&local_88,*param_3,param_3[1],param_3[3],local_48,0);
    FUN_004d7790(*param_1,&local_88);
    break;
  default:
    local_78 = 0;
    local_88 = 0.0;
    local_80 = &DAT_0413df78;
    FUN_004223c0(0xfdbd9f9,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",0x1b
                 ,"Bad type visitor switch",&local_88);
  }
  return;
}

