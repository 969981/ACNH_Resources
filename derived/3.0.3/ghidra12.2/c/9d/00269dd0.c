
void FUN_00269dd0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined1 auStack_34 [16];
  undefined4 local_24;
  
  FUN_002619d0(*param_1);
  (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,0);
  uVar2 = param_1[1];
  local_44 = 0;
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
  FUN_002296c4(auStack_34,&local_44);
  FUN_002665d0(uVar2,auStack_34);
  (**(code **)(*(long *)param_1[1] + 0x10))((long *)param_1[1],0);
  FUN_0026820c(param_1[2]);
  (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],0);
  FUN_0027b624(param_1[3]);
  (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],0);
  FUN_0027fa50(param_1[4]);
  (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],0);
  FUN_0026cd48(param_1[5]);
  (**(code **)(*(long *)param_1[5] + 0x10))((long *)param_1[5],0);
  FUN_002788e4(param_1[6]);
  (**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],0);
  if (param_1[7] != 0) {
    FUN_00279f24();
    (**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0);
  }
  if (param_1[8] != 0) {
    FUN_00268a94();
    (**(code **)(*(long *)param_1[8] + 0x10))((long *)param_1[8],0);
  }
  if (param_1[9] != 0) {
    FUN_002804d4();
    (**(code **)(*(long *)param_1[9] + 0x10))((long *)param_1[9],0);
  }
  FUN_002671e0(param_1[10]);
  (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],0);
  lVar1 = FUN_002ba790(DAT_04c61168);
  for (lVar3 = *(long *)(lVar1 + 0x20); lVar3 != lVar1 + 0x18; lVar3 = *(long *)(lVar3 + 8)) {
    FUN_00273c40(*(undefined8 *)(lVar3 + 0x10));
  }
  FUN_00220f24(param_1 + 0x1b);
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined2 *)(param_1 + 0x6e) = 0xffff;
  return;
}

