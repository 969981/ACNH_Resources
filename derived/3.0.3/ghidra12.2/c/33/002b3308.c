
void FUN_002b3308(undefined8 param_1,long *param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  Result *pRVar10;
  undefined4 local_7c;
  undefined1 local_78;
  int local_74;
  ErrorResultVariant aEStack_70 [12];
  undefined4 local_64;
  undefined1 auStack_5d [13];
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  int local_38;
  undefined4 local_34;
  
  puVar1 = PTR_DAT_04bc1510;
  uVar4 = FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  FUN_002b5410(&local_38,uVar4,0);
  if (local_38 == 0) {
    local_50 = 0;
LAB_002b338c:
    local_74 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_74);
  }
  else {
    cVar2 = FUN_002aaa44(param_2);
    if ((cVar2 == -3) || (lVar8 = param_4[3], iVar3 = FUN_002aaa3c(param_2), (int)lVar8 == iVar3)) {
      local_50 = 0x10c08;
      goto LAB_002b338c;
    }
    local_64 = 0;
    (**(code **)(*param_4 + 0x10))(&local_50,param_4,auStack_5d,&local_64,0xd);
    if (local_50 != 0) {
      local_7c = 0;
      local_74 = 0x10c08;
      pRVar10 = (Result *)&local_7c;
LAB_002b3528:
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_70,pRVar10);
      piVar9 = &local_74;
      goto LAB_002b33a4;
    }
    local_7c = 0;
    local_78 = 0;
    plVar5 = (long *)FUN_002aaa54(param_2);
    plVar6 = (long *)FUN_002ba58c(*(undefined8 *)puVar1);
    uVar7 = (**(code **)(*plVar6 + 0x50))();
    if ((uVar7 & 1) != 0) {
      plVar6 = (long *)FUN_002ba58c(*(undefined8 *)puVar1);
      uVar7 = (**(code **)(*plVar6 + 0x48))();
      if ((uVar7 & 1) == 0) goto LAB_002b346c;
      plVar6 = (long *)FUN_002ba58c(*(undefined8 *)puVar1);
      uVar7 = (**(code **)(*plVar6 + 0x58))();
      if ((uVar7 & 1) == 0) goto LAB_002b346c;
LAB_002b34dc:
      local_74 = (**(code **)(*param_2 + 0x18))(param_2);
      lVar8 = (**(code **)(*plVar5 + 0x78))(plVar5,&local_74,local_64,&local_7c);
      if (lVar8 != 0) goto LAB_002b34a8;
LAB_002b3510:
      local_74 = 0x4c0d;
LAB_002b3520:
      pRVar10 = (Result *)&local_34;
      local_34 = 0;
      goto LAB_002b3528;
    }
LAB_002b346c:
    if (param_3 == 0) goto LAB_002b34dc;
    local_74 = (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = (**(code **)(*plVar5 + 0x70))(plVar5,&local_74,param_3,local_64,&local_7c);
    if (lVar8 == 0) goto LAB_002b3510;
LAB_002b34a8:
    FUN_002a9f34(&local_74,plVar5,auStack_5d);
    FUN_00229780(&local_50,&local_74);
    if (local_50 == 0) {
      local_74 = 0;
      goto LAB_002b3520;
    }
  }
  piVar9 = &local_50;
LAB_002b33a4:
  FUN_002296c4(param_1,piVar9);
  return;
}

