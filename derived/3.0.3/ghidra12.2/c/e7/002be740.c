
void FUN_002be740(undefined8 param_1,long param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined1 local_c8 [132];
  undefined4 local_44;
  
  if (*(long *)(param_2 + 0x10) == 2) {
    FUN_002b3fa8(&local_148);
    FUN_002b3fa8(local_c8);
    lVar9 = *(long *)(param_2 + 8);
    if (lVar9 != param_2) {
      FUN_002beb38(lVar9 + 0x10,&local_148);
      if (*(long *)(lVar9 + 8) != param_2) {
        FUN_002beb38(*(long *)(lVar9 + 8) + 0x10,local_c8);
      }
    }
    uVar6 = FUN_002b4440(&local_148);
    if ((((uVar6 & 1) != 0) && (uVar6 = FUN_002b4440(local_c8), (uVar6 & 1) != 0)) ||
       ((uVar6 = FUN_002b4440(&local_148), (uVar6 & 1) == 0 &&
        (uVar6 = FUN_002b4440(local_c8), (uVar6 & 1) == 0)))) {
LAB_002be964:
      local_44 = 0;
      local_158 = CONCAT44(local_158._4_4_,0x10c07);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_158 + 4),(Result *)&local_44);
      FUN_002296c4(param_1,&local_158);
      FUN_002b4104(local_c8);
      FUN_002b4104(&local_148);
      return;
    }
    uVar6 = FUN_002b4440(&local_148);
    if ((uVar6 & 1) == 0) {
      FUN_002b4368(local_c8);
      uVar6 = FUN_0021fea0();
      if ((uVar6 & 1) == 0) goto LAB_002be964;
      FUN_002b4370(&local_148);
      uVar6 = FUN_0021fea0();
      lVar9 = 0;
      if ((uVar6 & 1) == 0) {
        lVar9 = 0xffffffff;
      }
      lVar8 = 1;
    }
    else {
      FUN_002b4368(&local_148);
      uVar6 = FUN_0021fea0();
      if ((uVar6 & 1) == 0) goto LAB_002be964;
      FUN_002b4370(local_c8);
      uVar6 = FUN_0021fea0();
      lVar8 = 0;
      lVar9 = 0xffffffff;
      if ((uVar6 & 1) != 0) {
        lVar9 = 1;
      }
    }
    local_150 = 0;
    plVar1 = (long *)(local_c8 + lVar8 * 0x80 + -0x80);
    local_158 = 0x40000;
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_158);
    if ((uVar6 & 1) == 0) {
      FUN_002b415c(param_3,plVar1);
    }
    else {
      plVar2 = (long *)(local_c8 + lVar9 * 0x80 + -0x80);
      local_158 = 0x40000;
      local_150 = 0;
      (**(code **)(*plVar2 + 0x20))(plVar2,&local_158);
      FUN_002b415c(param_3,plVar1);
      uVar7 = FUN_002b4370(plVar2);
      FUN_002b44ec(param_3,uVar7);
      lVar9 = FUN_002b43ec(plVar1);
      if (lVar9 == 0) {
        uVar7 = FUN_002b43ec(plVar2);
        FUN_002b44fc(param_3,uVar7);
        iVar4 = FUN_002b43f4(plVar1);
        if (iVar4 != 0) goto LAB_002be910;
LAB_002be9ec:
        uVar5 = FUN_002b43f4(plVar2);
        FUN_002b4504(param_3,uVar5);
        iVar4 = FUN_002b43fc(plVar1);
        if (iVar4 != 0) goto LAB_002be91c;
LAB_002bea0c:
        uVar5 = FUN_002b43fc(plVar2);
        FUN_002b450c(param_3,uVar5);
        iVar4 = FUN_002b43c8(plVar1);
        if (iVar4 != 0) goto LAB_002be928;
LAB_002bea2c:
        uVar5 = FUN_002b43c8(plVar2);
        FUN_002b4514(param_3,uVar5);
        iVar4 = FUN_002b43d4(plVar1);
        if (iVar4 != 0) goto LAB_002be934;
LAB_002bea4c:
        uVar5 = FUN_002b43d4(plVar2);
        FUN_002b452c(param_3,uVar5);
        iVar4 = FUN_002b43e0(plVar1);
        if (iVar4 != 0) goto LAB_002be940;
LAB_002bea6c:
        uVar5 = FUN_002b43e0(plVar2);
        FUN_002b453c(param_3,uVar5);
        cVar3 = FUN_002b4404(plVar1);
        if (cVar3 != '\0') goto LAB_002be950;
LAB_002bea90:
        uVar5 = FUN_002b4404(plVar2);
        FUN_002b454c(param_3,uVar5);
        FUN_002b4468(plVar1);
        uVar6 = FUN_0021fea0();
      }
      else {
        iVar4 = FUN_002b43f4(plVar1);
        if (iVar4 == 0) goto LAB_002be9ec;
LAB_002be910:
        iVar4 = FUN_002b43fc(plVar1);
        if (iVar4 == 0) goto LAB_002bea0c;
LAB_002be91c:
        iVar4 = FUN_002b43c8(plVar1);
        if (iVar4 == 0) goto LAB_002bea2c;
LAB_002be928:
        iVar4 = FUN_002b43d4(plVar1);
        if (iVar4 == 0) goto LAB_002bea4c;
LAB_002be934:
        iVar4 = FUN_002b43e0(plVar1);
        if (iVar4 == 0) goto LAB_002bea6c;
LAB_002be940:
        cVar3 = FUN_002b4404(plVar1);
        if (cVar3 == '\0') goto LAB_002bea90;
LAB_002be950:
        FUN_002b4468(plVar1);
        uVar6 = FUN_0021fea0();
      }
      if ((uVar6 & 1) == 0) {
        uVar7 = FUN_002b4468(plVar2);
        FUN_002b44f4(param_3,uVar7);
      }
    }
    FUN_002b4104(local_c8);
    FUN_002b4104(&local_148);
  }
  else {
    if (*(long *)(param_2 + 0x10) != 1) {
      local_148 = CONCAT44(local_148._4_4_,0x10c07);
      goto LAB_002beb08;
    }
    FUN_002beb38(*(long *)(param_2 + 8) + 0x10,param_3);
  }
  local_140 = 0;
  local_148 = 0x1000;
  (**(code **)(*param_3 + 0x20))(param_3,&local_148);
  local_148 = local_148 & 0xffffffff00000000;
LAB_002beb08:
  local_158 = local_158 & 0xffffffff00000000;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_148 + 4),(Result *)&local_158);
  FUN_002296c4(param_1,&local_148);
  return;
}

