
void FUN_0023e390(undefined8 param_1,long *param_2,undefined8 param_3,short *param_4)

{
  long *plVar1;
  ushort uVar2;
  undefined4 local_88;
  ErrorResultVariant aEStack_84 [12];
  undefined4 local_78;
  ErrorResultVariant aEStack_74 [20];
  short local_60;
  int local_54 [4];
  undefined4 local_44;
  
  plVar1 = param_2 + 0xc;
  FUN_00226918(local_54,plVar1,param_3,2,0x11);
  if (local_54[0] != 0) {
    local_88 = 0;
    local_78 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_88);
    FUN_002296c4(param_1,&local_78);
    return;
  }
  FUN_0021f4e0(&local_78);
  uVar2 = 0;
  *(undefined2 *)(param_2 + 0x1dc) = 1;
  do {
    local_60 = uVar2 + 30000;
    FUN_00226a50(&local_88,plVar1,&local_78,0,1);
    FUN_00229780(local_54,&local_88);
    if (local_54[0] == 0) {
      if (param_4 != (short *)0x0) {
        *param_4 = uVar2 + 30000;
      }
      FUN_00220f24(param_2 + 0x1b1);
      *(undefined1 *)((long)param_2 + 0xd81) = 0;
      *(undefined1 *)(param_2 + 0x1b8) = 1;
      param_2[0x1b9] = 0;
      (**(code **)(*param_2 + 0x10))(param_2,1);
      local_88 = 0;
      param_2[6] = (long)PTR_LAB_04bcd2e8;
      param_2[7] = 0;
      param_2[8] = (long)"LanMatchmakeUpdateJob::Update";
      goto LAB_0023e4f0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < *(ushort *)(param_2 + 0x1dc));
  FUN_002269b8(&local_88,plVar1);
  local_88 = 0x10c08;
LAB_0023e4f0:
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)&local_44);
  FUN_002296c4(param_1,&local_88);
  FUN_0021f584(&local_78);
  return;
}

