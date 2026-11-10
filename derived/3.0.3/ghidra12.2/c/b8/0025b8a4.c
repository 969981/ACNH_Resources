
void FUN_0025b8a4(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  int *piVar5;
  int local_60;
  ErrorResultVariant aEStack_5c [12];
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined4 local_34;
  
  piVar5 = &local_60;
  if ((param_3 == 0) || (param_4 == 0)) {
    local_50 = 0x10c07;
LAB_0025b900:
    local_60 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_60);
  }
  else {
    if (((int)param_2[0x9e] == 1) || (uVar4 = FUN_002212e4(param_2[0x79]), (uVar4 & 1) != 0)) {
LAB_0025b8e8:
      local_50 = 0x10c08;
      goto LAB_0025b900;
    }
    plVar1 = param_2 + 0x59;
    uVar4 = FUN_0021fea0(plVar1);
    if ((uVar4 & 1) != 0) {
      uVar4 = FUN_0021fea0(param_2 + 0x55);
      if (((uVar4 & 1) != 0) && (uVar4 = FUN_002200e4(param_2 + 0x55,plVar1), (uVar4 & 1) != 0))
      goto LAB_0025b8e8;
    }
    uVar4 = FUN_0021fea0(plVar1);
    if ((uVar4 & 1) != 0) {
      uVar4 = FUN_0021fea0(param_2 + 0x55);
      if (((uVar4 & 1) != 0) && (uVar4 = FUN_002200e4(param_2 + 0x55,plVar1), (uVar4 & 1) == 0))
      goto LAB_0025b8e8;
    }
    local_50 = 0;
    local_60 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_60);
    iVar2 = FUN_002212bc(param_2[0x79]);
    if (iVar2 != 0) {
      (**(code **)(*(long *)param_2[0x79] + 0x10))((long *)param_2[0x79],1);
    }
    *(undefined4 *)(param_2 + 0x6f) = *(undefined4 *)((long)param_2 + 0x37c);
    uVar3 = (**(code **)(*param_2 + 0x118))(param_2);
    *(undefined4 *)((long)param_2 + 0x37c) = uVar3;
    if ((int)param_2[0x84] == 0) {
      (**(code **)(*param_2 + 0x120))(&local_60,param_2);
      FUN_00229780(&local_50,&local_60);
      if (local_50 != 0) {
        local_34 = 0;
        local_60 = 0x6c1b;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_34);
        goto LAB_0025b91c;
      }
      if ((int)param_2[0x84] == 0) {
        *(undefined4 *)((long)param_2 + 0x474) = 1;
      }
    }
    (**(code **)(*(long *)param_2[0x79] + 0x30))(&local_60,(long *)param_2[0x79],param_3,param_4);
    FUN_00229780(&local_50,&local_60);
    if (local_50 == 0) {
      FUN_00258064(param_2);
      FUN_002211bc(param_2[0x79],0);
    }
  }
  piVar5 = &local_50;
LAB_0025b91c:
  FUN_002296c4(param_1,piVar5);
  return;
}

