
void FUN_002a4a7c(undefined8 param_1,long *param_2,uint param_3,uint param_4)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  undefined8 *puVar8;
  int local_60;
  ErrorResultVariant aEStack_5c [12];
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined4 local_34;
  
  piVar7 = &local_60;
  if (param_2[0xe] == 0) {
    *(undefined2 *)((long)param_2 + 0x4e) = *(undefined2 *)(*(long *)PTR_DAT_04bc1510 + 0x58);
    uVar5 = FUN_0021f454();
    lVar6 = FUN_00285d10(0x6f8,uVar5);
    if (lVar6 != 0) {
      FUN_002a5690(lVar6);
    }
    param_2[0xe] = lVar6;
    uVar1 = *(undefined2 *)((long)param_2 + 0x4e);
    uVar4 = (**(code **)(*param_2 + 0x18))(param_2);
    FUN_002a57b0(&local_50,lVar6,param_3,param_4,uVar1,uVar4);
    puVar3 = PTR_DAT_04bccf00;
    if (local_50 == 0) {
      uVar2 = *(ushort *)((long)param_2 + 0x4e);
      *(undefined8 *)((long)param_2 + 0x54) = 0xfffffff;
      local_60 = 0;
      local_34 = 0;
      *(uint *)(puVar3 + 0xf4) = (uint)uVar2 * (param_3 & 0xffff);
      *(uint *)(puVar3 + 0xf8) = (uint)uVar2 * (param_4 & 0xffff);
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_34);
    }
    else {
      puVar8 = (undefined8 *)param_2[0xe];
      *(undefined2 *)((long)param_2 + 0x4e) = 0;
      *(undefined8 *)((long)param_2 + 0x54) = 0;
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)*puVar8)(puVar8);
        FUN_00285dc0(puVar8);
        param_2[0xe] = 0;
      }
      piVar7 = &local_50;
    }
  }
  else {
    local_60 = 0;
    local_50 = 0x10c02;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_60);
    piVar7 = &local_50;
  }
  FUN_002296c4(param_1,piVar7);
  return;
}

