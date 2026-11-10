
long FUN_00319fb0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined *local_90;
  undefined1 local_88 [16];
  undefined1 *local_78;
  undefined8 uStack_70;
  undefined *local_68 [3];
  undefined8 local_50;
  
  puVar3 = PTR_DAT_04bcecf0;
  (**(code **)(*(long *)PTR_DAT_04bcecf0 + 0x10))(PTR_DAT_04bcecf0);
  puVar2 = PTR_DAT_04bc0ec8;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  lVar6 = DAT_04c61758;
  do {
    lVar6 = *(long *)(lVar6 + 8);
    if (lVar6 == DAT_04c61758) {
      (**(code **)(*(long *)puVar3 + 0x20))(puVar3);
      goto LAB_0031a050;
    }
    (**(code **)(**(long **)(lVar6 + 0x10) + 0x18))(local_68);
    uVar4 = FUN_0018b44c(local_50,*(undefined8 *)(param_2 + 0x18));
    local_68[0] = puVar1;
    FUN_0018b1a0(local_68);
  } while ((uVar4 & 1) == 0);
  plVar5 = *(long **)(lVar6 + 0x10);
  (**(code **)(*(long *)puVar3 + 0x20))(puVar3);
  if (plVar5 == (long *)0x0) {
LAB_0031a050:
    local_90 = puVar2 + 0x10;
    local_88[0] = 0;
    local_78 = local_88;
    uStack_70 = 0x10;
    FUN_0018b070(&local_90,"DynamicGathering",0xffffffffffffffff);
    (**(code **)(*(long *)puVar3 + 0x10))(puVar3);
    lVar6 = DAT_04c61758;
    do {
      lVar6 = *(long *)(lVar6 + 8);
      if (lVar6 == DAT_04c61758) {
        plVar5 = (long *)0x0;
        goto LAB_0031a118;
      }
      (**(code **)(**(long **)(lVar6 + 0x10) + 0x18))(local_68);
      uVar4 = FUN_0018b44c(local_50,local_78);
      local_68[0] = puVar2 + 0x10;
      FUN_0018b1a0(local_68);
    } while ((uVar4 & 1) == 0);
    plVar5 = *(long **)(lVar6 + 0x10);
LAB_0031a118:
    (**(code **)(*(long *)puVar3 + 0x20))(puVar3);
    local_90 = puVar2 + 0x10;
    FUN_0018b1a0(&local_90);
    if (plVar5 == (long *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_00189504(lVar6 + 0xa0,param_2);
    }
  }
  else {
    lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  return lVar6;
}

