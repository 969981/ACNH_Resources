
undefined8 FUN_002ca970(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_5c;
  undefined4 local_54;
  
  lVar1 = param_1 + 8;
  if (*(long *)(param_1 + 0x10) == lVar1) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    lVar3 = *(long *)(param_1 + 0x10);
    do {
      while (iVar2 = FUN_002b43fc(lVar3 + 0x18), iVar2 != param_2) {
        lVar3 = *(long *)(lVar3 + 8);
        if (lVar3 == lVar1) {
          return uVar4;
        }
      }
      local_54 = 0;
      plVar5 = (long *)(lVar3 + 0x10);
      local_5c = 0x40000;
      (**(code **)(*plVar5 + 0x10))(plVar5,&local_5c);
      lVar6 = *(long *)(lVar3 + 8);
      (**(code **)*plVar5)(plVar5);
      FUN_00223704(lVar1,lVar3);
      FUN_002236e0(param_1 + 0x20,param_1 + 0x20,lVar3 + *(int *)(param_1 + 0x34));
      uVar4 = 1;
      lVar3 = lVar6;
    } while (lVar6 != lVar1);
  }
  return uVar4;
}

