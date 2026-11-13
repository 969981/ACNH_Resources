
long * FUN_0122ff98(int *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined **local_78;
  char *pcStack_70;
  undefined **local_68;
  undefined *puStack_60;
  undefined **local_58;
  char *pcStack_50;
  undefined4 local_48;
  
  if (*param_1 < param_1[1]) {
    plVar3 = *(long **)(param_1 + 4);
    if (plVar3 != (long *)0x0) {
      *(long *)(param_1 + 4) = *plVar3;
    }
    *plVar3 = (long)(PTR_DAT_04bb3050 + 0x10);
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar2 = param_2[1];
    plVar3[3] = 0;
    plVar3[1] = lVar2;
    plVar3[2] = 0;
    lVar2 = param_2[6];
    *plVar3 = (long)&PTR_LAB_049877f8;
    local_78 = &PTR_LAB_048f9770;
    pcStack_70 = "mOffset0";
    local_68 = &PTR_LAB_048f9770;
    puStack_60 = &DAT_040f4355;
    plVar3[5] = 0;
    *(int *)(plVar3 + 4) = (int)lVar2;
    puVar1 = PTR_DAT_04bb2150;
    local_48 = 0;
    local_58 = &PTR_LAB_048f9770;
    pcStack_50 = "Min=-10.f, Max=10.f";
    FUN_006fdfc0(plVar3 + 6,&local_78,PTR_DAT_04bb2150,plVar3);
    local_48 = 0;
    local_78 = &PTR_LAB_048f9770;
    pcStack_70 = "mOffset1";
    local_68 = &PTR_LAB_048f9770;
    puStack_60 = &DAT_0406c929;
    local_58 = &PTR_LAB_048f9770;
    pcStack_50 = "Min=-10.f, Max=10.f";
    FUN_006fdfc0(plVar3 + 0xd,&local_78,puVar1,plVar3);
    local_48 = 0;
    local_78 = &PTR_LAB_048f9770;
    pcStack_70 = "mOffset2";
    local_68 = &PTR_LAB_048f9770;
    puStack_60 = &DAT_040a5f16;
    local_58 = &PTR_LAB_048f9770;
    pcStack_50 = "Min=-10.f, Max=10.f";
    FUN_006fdfc0(plVar3 + 0x14,&local_78,puVar1,plVar3);
    *plVar3 = (long)&PTR_LAB_04987dc8;
    if (*param_1 < param_1[1]) {
      *(long **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = plVar3;
      *param_1 = *param_1 + 1;
    }
  }
  else {
    plVar3 = (long *)0x0;
  }
  return plVar3;
}

