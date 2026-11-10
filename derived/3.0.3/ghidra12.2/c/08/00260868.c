
bool FUN_00260868(long param_1)

{
  undefined1 uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined1 auStack_494 [19];
  undefined1 auStack_481 [945];
  int local_d0 [4];
  undefined1 auStack_c0 [128];
  undefined4 local_34;
  
  lVar7 = *(long *)(param_1 + 0x70);
  if ((*(char *)(lVar7 + 8) == '\0') || (0x1f < *(byte *)(lVar7 + 0x38))) {
    bVar2 = false;
  }
  else {
    plVar8 = *(long **)(lVar7 + 0x90);
    FUN_002b3fa8(auStack_c0);
    plVar5 = (long *)FUN_002ba788(DAT_04c61168);
    (**(code **)(*plVar5 + 0x20))(local_d0,plVar5,*(undefined8 *)(param_1 + 0x70),auStack_c0);
    if (local_d0[0] == 0) {
      uVar6 = FUN_002b43ec(auStack_c0);
      uVar3 = FUN_002b43f4(auStack_c0);
      memset(auStack_481,0,0x3b1);
      local_34 = 0x3b1;
      FUN_00277b7c(plVar8,auStack_481,&local_34,uVar6,uVar3,1);
      uVar6 = FUN_0026c894(DAT_04c603c8);
      uVar3 = local_34;
      uVar1 = *(undefined1 *)(*(long *)(param_1 + 0x70) + 0x38);
      uVar4 = (**(code **)(*plVar8 + 0x18))(plVar8);
      FUN_00283fa0(auStack_494,uVar6,param_1 + 100,auStack_481,uVar3,uVar1,uVar4,1,0);
      FUN_00229780(local_d0,auStack_494);
      bVar2 = local_d0[0] == 0;
    }
    else {
      bVar2 = false;
    }
    FUN_002b4104(auStack_c0);
  }
  return bVar2;
}

