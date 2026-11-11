
int FUN_004407d0(undefined8 *param_1,long *param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined1 local_e8 [8];
  undefined8 local_e0;
  ulong local_d8;
  long local_d0;
  undefined *puStack_c8;
  undefined8 local_c0;
  long *local_38;
  
  iVar4 = -0x7ffbfe00;
  uVar2 = FUN_00428440(param_1[1]);
  switch(uVar2 & 0x1f) {
  case 0:
  case 1:
  case 6:
  case 7:
  case 8:
    break;
  case 2:
    uVar6 = FUN_0043a700(*param_2,param_2[1] - *param_2,&DAT_040a395f);
    if ((uVar6 & 1) == 0) {
      uVar6 = FUN_0043a700(*param_2,param_2[1] - *param_2,"false");
      if ((uVar6 & 1) == 0) {
        return -0x7ffbfe00;
      }
      uVar10 = param_1[1];
      plVar5 = (long *)(param_1[2] & 0xfffffffffffffffe);
      uVar8 = *param_1;
      pcVar12 = *(code **)(*plVar5 + 0x30);
      uVar11 = 0;
    }
    else {
      uVar10 = param_1[1];
      plVar5 = (long *)(param_1[2] & 0xfffffffffffffffe);
      uVar8 = *param_1;
      pcVar12 = *(code **)(*plVar5 + 0x30);
      uVar11 = 1;
    }
    iVar4 = (*pcVar12)(plVar5,uVar8,uVar10,uVar11);
    break;
  case 3:
    pcVar1 = (char *)*param_2;
    local_e0 = (char *)param_2[1];
    if (((pcVar1 != local_e0) &&
        (local_e8 = (undefined1  [8])(pcVar1 + 1),
        *pcVar1 == '\"' && local_e8 != (undefined1  [8])local_e0)) &&
       (local_e0 = local_e0 + -1, *local_e0 == '\"')) {
      FUN_00422780(&local_d0,local_e8);
      iVar4 = (**(code **)(*(long *)(param_1[2] & 0xfffffffffffffffe) + 0x30))
                        ((long *)(param_1[2] & 0xfffffffffffffffe),*param_1,param_1[1],local_d0);
      FUN_00422550(&local_d0);
    }
    break;
  case 4:
    iVar3 = FUN_00429d00(param_2,&local_d0,0x80,0x80);
    if (-1 < iVar3) {
      local_38 = &local_d0;
      auVar13 = FUN_00446e00(&local_38,&DAT_04c12000);
      lVar9 = auVar13._8_8_;
      if (lVar9 == 0) {
        uVar6 = 0;
        local_d8 = 0;
        _local_e8 = ZEXT816(0);
      }
      else {
        uVar6 = FUN_00428370(lVar9);
        if ((uVar6 & 1) != 0) {
          FUN_0043dd30(uVar6 & 0xfffffffffffffffe);
        }
        local_e0 = (char *)0x0;
        local_d8 = 0;
        local_e8 = (undefined1  [8])0x0;
        uVar7 = FUN_00428440(lVar9);
        if ((uVar7 & 0x1f) == 3) {
          _local_e8 = auVar13;
          if ((uVar6 & 1) != 0) {
            FUN_0043dd30(uVar6 & 0xfffffffffffffffe);
          }
          if ((local_d8 & 1) != 0) {
            FUN_0043dd50(local_d8 & 0xfffffffffffffffe);
          }
          local_d8 = uVar6;
        }
      }
      uVar7 = FUN_00466f40(param_1,local_e8);
      if ((local_d8 & 1) != 0) {
        FUN_0043dd50(local_d8 & 0xfffffffffffffffe);
      }
      if ((uVar6 & 1) != 0) {
        FUN_0043dd50(uVar6 & 0xfffffffffffffffe);
      }
      if ((uVar7 & 1) != 0) {
        iVar4 = 0;
      }
    }
    break;
  case 5:
    local_d0 = *param_2;
    puStack_c8 = (undefined *)param_2[1];
    iVar4 = FUN_00467240(&local_d0,local_e8);
    if (-1 < iVar4) {
      iVar4 = (**(code **)(*(long *)(param_1[2] & 0xfffffffffffffffe) + 0x30))
                        (local_e8,(long *)(param_1[2] & 0xfffffffffffffffe),*param_1,param_1[1]);
    }
    break;
  default:
    local_c0 = 0;
    local_d0 = 0;
    puStack_c8 = &DAT_0413df78;
    FUN_004223c0(0x261011c5,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",
                 0x3c,"Bad var visitor switch",&local_d0);
  }
  return iVar4;
}

