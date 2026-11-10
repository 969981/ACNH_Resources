
undefined8 FUN_002ca570(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_6c;
  undefined4 local_64;
  
  lVar1 = param_1 + 8;
  if (*(long *)(param_1 + 0x10) == lVar1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    lVar6 = *(long *)(param_1 + 0x10);
    do {
      while( true ) {
        iVar3 = FUN_002b43fc(lVar6 + 0x18);
        iVar4 = FUN_002b43fc(param_2);
        if ((iVar3 != iVar4) || (uVar5 = FUN_002c9978(lVar6 + 0x18,param_2), (uVar5 & 1) != 0))
        break;
        local_64 = 0;
        local_6c = 0x40000;
        (**(code **)(*(long *)(lVar6 + 0x10) + 0x10))(lVar6 + 0x10,&local_6c);
        lVar2 = *(long *)(lVar6 + 8);
        (*(code *)**(undefined8 **)(lVar6 + 0x10))(lVar6 + 0x10);
        FUN_00223704(lVar1,lVar6);
        FUN_002236e0(param_1 + 0x20,param_1 + 0x20,lVar6 + *(int *)(param_1 + 0x34));
        uVar7 = 1;
        lVar6 = lVar2;
        if (lVar2 == lVar1) {
          return 1;
        }
      }
      lVar6 = *(long *)(lVar6 + 8);
    } while (lVar6 != lVar1);
  }
  return uVar7;
}

