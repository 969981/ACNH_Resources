
void FUN_002bc800(long param_1,uint *param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  FUN_002aaa08();
  plVar2 = (long *)FUN_002ba790(DAT_04c61168);
  lVar3 = (**(code **)(*plVar2 + 0x38))(plVar2,*(undefined8 *)(param_2 + 2));
  cVar1 = FUN_002aaa44(param_1);
  if ((((cVar1 != -3) &&
       (lVar4 = FUN_002aaa28(param_1), lVar4 != *(long *)(lVar3 + 0x40) && *param_2 < 2)) &&
      (*(int *)(*(long *)(param_1 + 0x58) + 0x10) != 0)) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x58) + 8), lVar4 != 0)) {
    do {
      lVar5 = *(long *)(param_1 + 0x58);
      lVar6 = *(long *)(lVar4 + 8);
      if (*(long *)(lVar4 + 0x5b8) == *(long *)(lVar3 + 0x40)) {
        FUN_00223704(lVar5,lVar4);
        FUN_002236e0(lVar5 + 0x18,lVar5 + 0x18,lVar4 + *(int *)(lVar5 + 0x2c));
      }
      lVar4 = lVar6;
    } while (lVar6 != lVar5);
  }
  return;
}

