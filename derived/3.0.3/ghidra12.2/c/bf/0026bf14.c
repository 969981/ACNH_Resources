
void FUN_0026bf14(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_04bc1510;
  lVar4 = *(long *)PTR_DAT_04bc1510;
  plVar2 = (long *)FUN_002ba790(lVar4);
  lVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined1 *)(param_1 + 0x9b));
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    plVar2 = (long *)FUN_002ba790(*(undefined8 *)puVar1);
    lVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined1 *)(param_1 + 0x9b));
    uVar5 = *(undefined8 *)(lVar3 + 0x40);
  }
  plVar2 = (long *)FUN_002ba790(*(undefined8 *)puVar1);
  lVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined1 *)(param_1 + 0x9c));
  if (lVar3 == 0) {
    local_40 = 0;
  }
  else {
    plVar2 = (long *)FUN_002ba790(*(undefined8 *)puVar1);
    lVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined1 *)(param_1 + 0x9c));
    local_40 = *(undefined8 *)(lVar3 + 0x40);
  }
  local_48[0] = 3;
  uStack_38 = uVar5;
  FUN_002ab680(lVar4 + 0x10,local_48);
  return;
}

