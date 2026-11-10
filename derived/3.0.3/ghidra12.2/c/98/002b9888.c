
void FUN_002b9888(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  int local_70;
  ErrorResultVariant aEStack_6c [12];
  int local_60 [4];
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined4 local_34;
  
  piVar4 = &local_70;
  uVar3 = FUN_002a4950();
  uVar1 = DAT_04c5fb98;
  if (((uVar3 & 1) == 0) && (*(char *)((long)param_2 + 0x5a) == '\0')) {
    uVar2 = (**(code **)(*(long *)param_2[1] + 0x20))();
    FUN_00222fb8(&local_50,uVar1,uVar2);
    if (local_50 == 0) {
      FUN_002a89f0(local_60,param_2[0x11]);
      FUN_002a8f10(param_2[0x11]);
      FUN_002a89f0(local_60,param_2[0x12]);
      FUN_002a8f10(param_2[0x12]);
      FUN_002a89f0(local_60,param_2[0x13]);
      FUN_002a8f10(param_2[0x13]);
      FUN_002a89f0(local_60,param_2[0x14]);
      FUN_002a8f10(param_2[0x14]);
      FUN_002b7aa0(local_60,param_2[0x10]);
      FUN_00229780(&local_50,local_60);
      FUN_002ba858(local_60,param_2[8]);
      FUN_00229780(&local_50,local_60);
      plVar6 = (long *)param_2[9];
      plVar7 = *(long **)(param_2[0x10] + 0x10);
      lVar5 = *(long *)(param_2[0x10] + 0x20);
      uVar2 = (**(code **)(*plVar7 + 0x40))(plVar7);
      (**(code **)(*plVar6 + 0x58))(local_60,plVar6,param_3,lVar5 + 8,plVar7,uVar2);
      FUN_00229780(&local_50,local_60);
      (**(code **)(*(long *)param_2[10] + 0x58))
                (local_60,(long *)param_2[10],param_3,*(long *)(param_2[0x10] + 0x18) + 8,
                 *(undefined8 *)(param_2[0x10] + 8),param_2[9]);
      FUN_00229780(&local_50,local_60);
      FUN_002ab120(local_60,param_2 + 2,param_2[9],param_2[10]);
      FUN_00229780(&local_50,local_60);
      if (param_2[0xf] != 0) {
        FUN_002bae80(local_60);
        FUN_00229780(&local_50,local_60);
      }
      FUN_002211bc(param_2[0xc],0);
      *(undefined4 *)((long)param_2 + 0xbc) = 0;
      param_2[0x16] = *param_2;
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(*(long *)(param_2[0x10] + 0x20) + 0x30);
      *(undefined4 *)((long)param_2 + 0xc4) =
           *(undefined4 *)(*(long *)(param_2[0x10] + 0x18) + 0x30);
      *(undefined2 *)((long)param_2 + 0x5a) = 1;
      FUN_002ab4a0(local_60,param_2 + 2);
      if (local_60[0] == 0) {
        local_70 = 0;
        local_34 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,(Result *)&local_34);
        FUN_00229780((long)param_2 + 0xe4,&local_70);
        local_70 = 0;
        local_34 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,(Result *)&local_34);
      }
      else {
        piVar4 = local_60;
      }
      goto LAB_002b98dc;
    }
  }
  else {
    local_60[0] = 0;
    local_50 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)local_60);
  }
  piVar4 = &local_50;
LAB_002b98dc:
  FUN_002296c4(param_1,piVar4);
  return;
}

