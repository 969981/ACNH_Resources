
undefined8 FUN_001b62d0(long param_1,long param_2)

{
  long lVar1;
  short sVar2;
  short sVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  
  plVar5 = (long *)(param_1 + 0x88);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  lVar6 = *(long *)(param_1 + 0xd8);
  if (lVar6 == param_1 + 0xd0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    do {
      lVar1 = lVar6 + 0x10;
      uVar4 = FUN_001b9898(lVar1,param_2);
      if ((uVar4 & 1) != 0) {
        if (*(char *)(lVar6 + 0x78) == '\0') {
          FUN_001b8590(lVar1);
          sVar2 = FUN_001e14f8(*(undefined8 *)(lVar6 + 0x18));
          if (*(char *)(param_2 + 0x68) != '\0') goto LAB_001b634c;
LAB_001b6380:
          FUN_001b8590(param_2);
          sVar3 = FUN_001e14f8(*(undefined8 *)(param_2 + 8));
          if (sVar2 != sVar3) goto LAB_001b6310;
        }
        else {
          sVar2 = FUN_001e14f8(*(undefined8 *)(lVar6 + 0x18));
          if (*(char *)(param_2 + 0x68) == '\0') goto LAB_001b6380;
LAB_001b634c:
          sVar3 = FUN_001e14f8(*(undefined8 *)(param_2 + 8));
          if (sVar2 != sVar3) goto LAB_001b6310;
        }
        FUN_001b83dc(lVar1,param_2);
        uVar7 = 1;
      }
LAB_001b6310:
      lVar6 = *(long *)(lVar6 + 8);
    } while (lVar6 != param_1 + 0xd0);
  }
  (**(code **)(*plVar5 + 0x20))(plVar5);
  return uVar7;
}

