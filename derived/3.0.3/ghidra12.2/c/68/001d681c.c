
undefined8 FUN_001d681c(long param_1,undefined8 param_2,long param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_b0 [136];
  int local_28;
  
  FUN_001e1500(auStack_b0);
  lVar7 = *(long *)(param_1 + 0x18);
  lVar5 = FUN_001df770(lVar7 + 0x98,param_2);
  if (lVar7 + 0xa0 == lVar5) {
LAB_001d68a4:
    uVar6 = 0;
  }
  else {
    *(undefined4 *)(lVar5 + 0x140) = *(undefined4 *)(lVar7 + 0xb0);
    FUN_001e15a8(auStack_b0,lVar5 + 0xb0);
    iVar3 = FUN_001e1884(param_2);
    iVar4 = FUN_001e1884(auStack_b0);
    if (iVar3 == iVar4) {
      sVar1 = FUN_001e14f8(param_2);
      sVar2 = FUN_001e14f8(auStack_b0);
      if (sVar1 == sVar2) goto LAB_001d68a4;
    }
    if (param_3 != 0) {
      lVar5 = FUN_001e14d8(param_3);
      lVar7 = FUN_001e14d8(auStack_b0);
      uVar6 = 0;
      if ((lVar5 != lVar7) || (*(int *)(param_3 + 0x88) != local_28)) goto LAB_001d68e4;
    }
    uVar6 = 1;
  }
LAB_001d68e4:
  FUN_001e1868(auStack_b0);
  return uVar6;
}

