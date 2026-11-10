
void FUN_0019b830(undefined8 *param_1,long *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  undefined4 local_84;
  undefined1 auStack_80 [56];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  FUN_0019b6c8();
  FUN_0018aa4c(&local_48);
  uVar2 = FUN_0019dcc0(param_3 != 0,param_3,PTR_LAB_04bcc120,param_2,&local_48);
  if ((uVar2 & 1) != 0) {
    *param_1 = local_48;
    param_1[1] = uStack_40;
    param_1[2] = local_38;
    return;
  }
  FUN_0018af38(auStack_80,10,param_3);
  FUN_00189428(auStack_80);
  do {
    iVar1 = (**(code **)(*param_2 + 0x70))(param_2);
    if (iVar1 == 0x40) break;
    uVar2 = FUN_00189434(auStack_80,
                         "C:/home/ws/Master/Pack/7923402a/OnlineCore/src/Core/SystemComponent.cpp",
                         0x152,"TestState()!=Terminated");
  } while ((uVar2 & 1) != 0);
  iVar1 = (**(code **)(*param_2 + 0x70))(param_2);
  if (iVar1 == 0x40) {
    local_84 = 0x10001;
  }
  else {
    local_84 = 0x8001000b;
  }
  FUN_0018aa70(param_1,&local_84);
  FUN_0018afc4(auStack_80);
  return;
}

