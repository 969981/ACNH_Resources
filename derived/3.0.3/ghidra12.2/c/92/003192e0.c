
bool FUN_003192e0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined *local_68 [3];
  undefined8 local_50;
  
  puVar3 = PTR_DAT_04bcecf0;
  (**(code **)(*(long *)PTR_DAT_04bcecf0 + 0x10))(PTR_DAT_04bcecf0);
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  plVar7 = DAT_04c61758;
  do {
    plVar4 = DAT_04c61758;
    plVar7 = (long *)plVar7[1];
    if (plVar7 == DAT_04c61758) goto LAB_003193a4;
    (**(code **)(*(long *)plVar7[2] + 0x18))(local_68);
    uVar6 = FUN_0018b44c(local_50,*(undefined8 *)(param_2 + 0x18));
    local_68[0] = puVar1;
    FUN_0018b1a0(local_68);
  } while ((uVar6 & 1) == 0);
  if ((long *)plVar7[2] != (long *)0x0) {
    (**(code **)(*(long *)plVar7[2] + 8))();
  }
  plVar5 = DAT_04c61758;
  lVar2 = *plVar7;
  *(long *)(lVar2 + 8) = plVar7[1];
  *(long *)plVar7[1] = lVar2;
  plVar5[2] = plVar5[2] + -1;
  FUN_00187e4c(plVar7);
LAB_003193a4:
  (**(code **)(*(long *)puVar3 + 0x20))(puVar3);
  return plVar7 != plVar4;
}

