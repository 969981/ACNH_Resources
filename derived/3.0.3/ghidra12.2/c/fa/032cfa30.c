
void FUN_032cfa30(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *local_98;
  undefined1 auStack_90 [32];
  undefined **local_70;
  long *local_68;
  undefined1 auStack_60 [32];
  
  lVar4 = *(long *)(param_1 + 0x60);
  uVar1 = *(int *)(param_1 + 0x590) + 1U & 1;
  uVar2 = -uVar1;
  if (-2 < *(int *)(param_1 + 0x590)) {
    uVar2 = uVar1;
  }
  *(uint *)(param_1 + 0x590) = uVar2;
  FUN_00365060(lVar4,uVar2);
  lVar6 = *(long *)(param_1 + 0x560);
  if (lVar6 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar6 + 0x10);
  }
  plVar3 = *(long **)(param_2 + 8);
  local_98 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    local_98 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,auStack_90);
  }
  if (lVar6 != 0) {
    (**(code **)(*local_98 + 0x20))(local_98,lVar6);
    while (lVar5 != 0) {
      lVar6 = *(long *)(lVar5 + 0x10);
      (**(code **)(*local_98 + 0x20))(local_98,lVar5);
      lVar5 = lVar6;
    }
  }
  local_70 = &PTR_LAB_04b1b568;
  local_68 = (long *)0x0;
  if (local_98 != (long *)0x0) {
    local_68 = (long *)(**(code **)(*local_98 + 0x18))(local_98,auStack_60);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 8))();
    }
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 8))();
    }
  }
  *(undefined **)(lVar4 + 0x168) = PTR_LAB_04bc9508;
  *(undefined8 *)(lVar4 + 0x170) = 0;
  FUN_003650a8(lVar4);
  FUN_003650e4(lVar4,uVar2);
  return;
}

