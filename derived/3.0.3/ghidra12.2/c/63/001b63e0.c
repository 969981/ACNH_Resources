
undefined8 FUN_001b63e0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  
  plVar6 = (long *)(param_1 + 0x88);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  lVar8 = *(long *)(param_1 + 0xd8);
  do {
    if (lVar8 == param_1 + 0xd0) {
      uVar7 = 0;
LAB_001b64b4:
      (**(code **)(*plVar6 + 0x20))(plVar6);
      return uVar7;
    }
    lVar1 = lVar8 + 0x10;
    uVar5 = FUN_001b9898(lVar1,param_2);
    if ((uVar5 & 1) != 0) {
      if (*(char *)(lVar8 + 0x78) == '\0') {
        FUN_001b8590(lVar1);
        sVar4 = FUN_001e14f8(*(undefined8 *)(lVar8 + 0x18));
        cVar2 = *(char *)(param_2 + 0x68);
      }
      else {
        sVar4 = FUN_001e14f8(*(undefined8 *)(lVar8 + 0x18));
        cVar2 = *(char *)(param_2 + 0x68);
      }
      if (cVar2 == '\0') {
        FUN_001b8590(param_2);
      }
      sVar3 = FUN_001e14f8(*(undefined8 *)(param_2 + 8));
      if (sVar4 == sVar3) {
        FUN_001b83dc(lVar1,param_3);
        uVar7 = 1;
        goto LAB_001b64b4;
      }
    }
    lVar8 = *(long *)(lVar8 + 8);
  } while( true );
}

