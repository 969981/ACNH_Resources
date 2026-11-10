
undefined8 FUN_002ca850(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_6c;
  undefined4 local_64;
  
  lVar1 = param_1 + 8;
  if (*(long *)(param_1 + 0x10) == lVar1) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    lVar5 = *(long *)(param_1 + 0x10);
    do {
      while( true ) {
        iVar3 = FUN_002b43f4(lVar5 + 0x18);
        iVar4 = FUN_002b43f4(param_2);
        if (iVar3 == iVar4) break;
LAB_002ca894:
        lVar5 = *(long *)(lVar5 + 8);
        if (lVar5 == lVar1) {
          return uVar6;
        }
      }
      iVar3 = FUN_002b43fc(lVar5 + 0x18);
      iVar4 = FUN_002b43fc(param_2);
      if (iVar3 != iVar4) goto LAB_002ca894;
      local_64 = 0;
      local_6c = 0x40000;
      (**(code **)(*(long *)(lVar5 + 0x10) + 0x10))(lVar5 + 0x10,&local_6c);
      lVar2 = *(long *)(lVar5 + 8);
      (*(code *)**(undefined8 **)(lVar5 + 0x10))(lVar5 + 0x10);
      FUN_00223704(lVar1,lVar5);
      FUN_002236e0(param_1 + 0x20,param_1 + 0x20,lVar5 + *(int *)(param_1 + 0x34));
      uVar6 = 1;
      lVar5 = lVar2;
    } while (lVar2 != lVar1);
  }
  return uVar6;
}

