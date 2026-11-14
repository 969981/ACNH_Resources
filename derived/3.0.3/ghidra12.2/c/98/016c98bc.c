
void FUN_016c98bc(byte *param_1,undefined4 param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined *local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined1 local_45;
  undefined4 local_28;
  undefined1 uStack_21;
  
  local_28 = param_2;
  lVar2 = FUN_016c91a4(param_2);
  if (lVar2 == 0) goto LAB_016c9b3c;
  uVar6 = (ulong)*param_1;
  if ((((uVar6 < 0x23) && (param_1[1] <= (byte)PTR_DAT_04bc27f0[uVar6])) &&
      ((*(uint *)(PTR_DAT_04bc2a20 + uVar6 * 4) >> (ulong)(param_1[1] & 0x1f) & 1) != 0)) &&
     ((param_3 & 1) != 0)) {
    local_45 = 0;
    pcStack_58 = (char *)((long)&local_50 + 4);
    local_50 = CONCAT35(local_50._5_3_,8);
    local_60 = PTR_DAT_04bb3768 + 0x10;
    FUN_038d1270(&local_60,"-----");
    if ((ulong)*param_1 < 0x23) {
      FUN_038d1270(&local_60,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_1 * 8 + 0xb0)
                   ,param_1[1]);
    }
    iVar1 = FUN_016b158c(param_1);
    lVar7 = *(long *)(lVar2 + 0x28);
    if (lVar7 == 0) {
      uVar6 = 0;
    }
    else {
      if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        lVar7 = *(long *)(lVar2 + 0x28);
        uVar6 = uVar6 & 0xffffffff;
        if (lVar7 == 0) goto LAB_016c9bdc;
      }
      plVar3 = *(long **)(lVar7 + 0x20);
      if (plVar3 != (long *)0x0) {
        local_60 = *(undefined **)(lVar2 + 8);
        pcStack_58 = *(char **)(lVar2 + 0x10);
        local_50 = 0x1638;
        (**(code **)(*plVar3 + 0x20))(plVar3,&local_60);
      }
    }
LAB_016c9bdc:
    *(bool *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + 0x1634) = iVar1 == 0;
    if ((((uVar6 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 0x18), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  lVar7 = *(long *)PTR_DAT_04bb4938;
  if (lVar7 == 0) goto LAB_016c9b3c;
  if (*(int *)(lVar7 + 0x98) == 0) {
LAB_016c998c:
    local_60 = (undefined *)CONCAT44(local_60._4_4_,3);
    if ((*(byte *)(lVar7 + 0x54) >> 3 & 1) == 0) goto LAB_016c9b3c;
    lVar7 = *(long *)(lVar2 + 0x28);
    if (lVar7 == 0) {
      uVar6 = 0;
    }
    else {
      if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        lVar7 = *(long *)(lVar2 + 0x28);
        uVar6 = uVar6 & 0xffffffff;
        if (lVar7 == 0) goto LAB_016c9b00;
      }
      plVar3 = *(long **)(lVar7 + 0x20);
      if (plVar3 != (long *)0x0) {
        local_60 = *(undefined **)(lVar2 + 8);
        pcStack_58 = *(char **)(lVar2 + 0x10);
        local_50 = 0x1638;
        (**(code **)(*plVar3 + 0x20))(plVar3,&local_60);
      }
    }
LAB_016c9b00:
    lVar7 = *(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8);
    local_60 = (undefined *)CONCAT44(local_60._4_4_,1);
  }
  else {
    FUN_0252d11c(&uStack_21);
    local_60 = PTR_DAT_04bb2020 + 0x10;
    pcStack_58 = "IsHotelEditTutorial";
    iVar1 = FUN_02753180(&uStack_21,&local_60);
    if (iVar1 == 0) goto LAB_016c998c;
    lVar7 = *(long *)(lVar2 + 0x28);
    if (lVar7 == 0) {
      uVar6 = 0;
    }
    else {
      if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        lVar7 = *(long *)(lVar2 + 0x28);
        uVar6 = uVar6 & 0xffffffff;
        if (lVar7 == 0) goto LAB_016c9ac4;
      }
      plVar3 = *(long **)(lVar7 + 0x20);
      if (plVar3 != (long *)0x0) {
        local_60 = *(undefined **)(lVar2 + 8);
        pcStack_58 = *(char **)(lVar2 + 0x10);
        local_50 = 0x1638;
        (**(code **)(*plVar3 + 0x20))(plVar3,&local_60);
      }
    }
LAB_016c9ac4:
    local_60 = (undefined *)((ulong)local_60 & 0xffffffff00000000);
    lVar7 = *(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8);
  }
  *(char *)(lVar7 + 0x1635) = (char)local_60;
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
LAB_016c9b3c:
  puVar5 = (undefined1 *)FUN_021c9770(param_2,0);
  if (puVar5 != (undefined1 *)0x0) {
    *puVar5 = 1;
    FUN_02093358(puVar5 + 0x10,param_1,&local_28);
    FUN_021c9f70(puVar5);
    param_2 = local_28;
  }
  FUN_0208f470(*(long *)PTR_DAT_04bb3968 + 0x1320,param_2,3);
  return;
}

