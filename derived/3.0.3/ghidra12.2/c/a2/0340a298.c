
void FUN_0340a298(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *local_50;
  undefined4 local_48;
  
  plVar2 = (long *)*param_2;
  *(long **)(param_1 + 8) = plVar2;
  *(undefined8 *)(param_1 + 0x10) = param_2[1];
  lVar3 = param_2[2];
  *(long *)(param_1 + 0x18) = lVar3;
  if (plVar2 != (long *)0x0 && lVar3 != 0) {
    local_48 = 0x1f;
    puVar1 = PTR_DAT_04bc0cb8 + 0x10;
    local_50 = puVar1;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_50);
    (**(code **)(plVar2[3] + 0x210))(lVar3,plVar2[1],0,0);
    plVar2 = *(long **)(param_1 + 8);
    local_48 = 0x1f;
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    local_50 = puVar1;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
    (**(code **)(plVar2[3] + 0x208))(plVar2[1],0,0,uVar4);
    plVar2 = *(long **)(param_1 + 0x10);
    if (plVar2 != (long *)0x0) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      local_48 = 0x1f;
      local_50 = puVar1;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
      (**(code **)(plVar2[3] + 0x208))(plVar2[1],0,0,uVar4);
    }
  }
  return;
}

