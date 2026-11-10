
void FUN_003072f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                 undefined8 param_5,undefined4 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 local_564 [4];
  undefined4 local_554;
  ErrorResultVariant aEStack_550 [1280];
  
  puVar1 = PTR_DAT_04bcb8d8;
  uVar2 = FUN_002bf8e0(*(undefined8 *)PTR_DAT_04bcb8d8);
  if ((uVar2 & 1) == 0) {
    FUN_00307458(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  if (param_4 < 0x4ad) {
    plVar5 = *(long **)(*(long *)puVar1 + 0x88);
    lVar3 = FUN_002ba788(DAT_04c61168);
    uVar4 = FUN_002b4368(lVar3 + 8);
    (**(code **)(*plVar5 + 200))(local_564,plVar5,&local_554,param_3,param_4,uVar4,param_5);
    uVar2 = FUN_002bf904(*(undefined8 *)puVar1);
    if ((uVar2 & 1) != 0) {
      memset(&local_554,0,0x2c);
    }
    uVar4 = FUN_002cd7f0(*(undefined8 *)(*(long *)puVar1 + 0x88),param_5);
    FUN_00307458(param_1,param_2,&local_554,param_4 + 0x2c,uVar4,param_6);
  }
  else {
    local_564[0] = 0;
    local_554 = 0x10c07;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_550,(Result *)local_564);
    FUN_002296c4(param_1,&local_554);
  }
  return;
}

