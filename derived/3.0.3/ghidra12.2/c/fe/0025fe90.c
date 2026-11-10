
bool FUN_0025fe90(long param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  int local_4c0 [4];
  undefined **local_4b0;
  undefined1 auStack_4a8 [39];
  undefined1 auStack_481 [945];
  int local_d0 [4];
  undefined1 auStack_c0 [128];
  undefined4 local_34;
  
  if ((*(char *)(*(long *)(param_1 + 0x70) + 8) == '\0') ||
     (plVar8 = *(long **)(*(long *)(param_1 + 0x70) + 0x90), *(char *)((long)plVar8 + 0x4c) != '\0')
     ) {
    return false;
  }
  FUN_002b3fa8(auStack_c0);
  plVar5 = (long *)FUN_002ba788(DAT_04c61168);
  (**(code **)(*plVar5 + 0x20))(local_d0,plVar5,*(undefined8 *)(param_1 + 0x70),auStack_c0);
  if (local_d0[0] == 0) {
    uVar6 = FUN_002b43ec(auStack_c0);
    uVar3 = FUN_002b43f4(auStack_c0);
    memset(auStack_481,0,0x3b1);
    local_34 = 0x3b1;
    FUN_00277b7c(plVar8,auStack_481,&local_34,uVar6,uVar3,0);
    FUN_00227258(&local_4b0);
    lVar7 = FUN_0026c88c(DAT_04c603c8);
    if ((lVar7 == 0) && (bVar1 = *(byte *)(*(long *)(param_1 + 0x70) + 0x38), bVar1 < 0x20)) {
      uVar6 = FUN_0026c894(DAT_04c603c8);
      uVar3 = local_34;
      uVar4 = (**(code **)(*plVar8 + 0x18))(plVar8);
      FUN_00283fa0(local_4c0,uVar6,param_1 + 100,auStack_481,uVar3,bVar1,uVar4,1,0);
    }
    else {
      FUN_00227418(&local_4b0,*(long *)(param_1 + 0x70) + 0x10);
      uVar6 = FUN_0026c894(DAT_04c603c8);
      uVar3 = local_34;
      uVar4 = (**(code **)(*plVar8 + 0x18))(plVar8);
      FUN_00283cf0(local_4c0,uVar6,param_1 + 100,auStack_481,uVar3,&local_4b0,uVar4,0);
    }
    bVar2 = local_4c0[0] == 0;
    local_4b0 = &PTR_LAB_04840580;
    FUN_0021f584(auStack_4a8);
  }
  else {
    bVar2 = false;
  }
  FUN_002b4104(auStack_c0);
  return bVar2;
}

