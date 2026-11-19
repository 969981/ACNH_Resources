
void FUN_03956620(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  undefined *local_40;
  char *pcStack_38;
  
  uVar2 = (**(code **)(*param_1 + 0x10))();
  if ((uVar2 & 1) != 0) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "param_array";
    puStack_48 = &DAT_0407ebb1;
    local_50 = puVar1;
    local_40 = puVar1;
    uVar3 = FUN_038f3be0(param_2,&local_40,&local_50,param_3);
    FUN_038f1db0(uVar3,1,param_3);
    pcStack_38 = "name";
    puStack_48 = *(undefined8 **)(PTR_PTR_04bb2238 + 8);
    local_50 = puVar1;
    local_40 = puVar1;
    FUN_038f2500(uVar3,&local_40,&local_50,param_3);
    for (plVar4 = (long *)param_1[1]; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[2]) {
      (**(code **)(*plVar4 + 0x28))(plVar4,uVar3,param_3);
    }
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return;
}

