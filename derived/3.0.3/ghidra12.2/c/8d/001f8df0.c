
bool FUN_001f8df0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined *local_68 [3];
  undefined8 local_50;
  
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  plVar6 = DAT_04c5ee70;
  do {
    plVar3 = DAT_04c5ee70;
    plVar6 = (long *)plVar6[1];
    if (plVar6 == DAT_04c5ee70) goto LAB_001f8ea0;
    (**(code **)(*(long *)plVar6[2] + 0x18))(local_68);
    uVar5 = FUN_0018b44c(local_50,*(undefined8 *)(param_2 + 0x18));
    local_68[0] = puVar1;
    FUN_0018b1a0(local_68);
  } while ((uVar5 & 1) == 0);
  if ((long *)plVar6[2] != (long *)0x0) {
    (**(code **)(*(long *)plVar6[2] + 8))();
  }
  plVar4 = DAT_04c5ee70;
  lVar2 = *plVar6;
  *(long *)(lVar2 + 8) = plVar6[1];
  *(long *)plVar6[1] = lVar2;
  plVar4[2] = plVar4[2] + -1;
  FUN_00187e4c(plVar6);
LAB_001f8ea0:
  return plVar6 != plVar3;
}

