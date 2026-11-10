
void FUN_002b35ac(long param_1,int *param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  FUN_002aaa08();
  plVar2 = (long *)FUN_002ba790(DAT_04c61168);
  lVar3 = (**(code **)(*plVar2 + 0x38))(plVar2,*(undefined8 *)(param_2 + 2));
  cVar1 = FUN_002aaa44(param_1);
  if (((cVar1 != -3) && (lVar4 = FUN_002aaa28(param_1), lVar4 != *(long *)(lVar3 + 0x40))) &&
     ((*param_2 == 1 || (*param_2 == 0)))) {
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x50) + (ulong)*(byte *)(lVar3 + 0x38) * 0x34);
    *(undefined4 *)((long)puVar5 + 0x2c) = 0;
    *puVar5 = 0;
    *(undefined4 *)(puVar5 + 6) = 0;
  }
  return;
}

