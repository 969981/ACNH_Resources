
void FUN_004551e0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  void *__s;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  bool bVar6;
  
  puVar1 = PTR_DAT_048607b8;
  iVar2 = FUN_00426fc0();
  __s = (void *)(**(code **)(*(long *)puVar1 + 0x10))(puVar1,(long)iVar2,0);
  memset(__s,0,(long)iVar2);
  if (param_2 == 0) {
    uVar3 = 0;
    bVar6 = true;
  }
  else {
    uVar3 = FUN_00428370(param_2);
    if ((uVar3 & 1) == 0) {
      bVar6 = true;
    }
    else {
      FUN_0043dd30(uVar3 & 0xfffffffffffffffe);
      bVar6 = false;
    }
  }
  plVar4 = (long *)FUN_0043c5f0();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x80))();
  if (plVar4 != (long *)0x0) {
    uVar5 = FUN_00427270(param_2);
    (**(code **)(*plVar4 + 200))(plVar4,__s,uVar5);
  }
  *param_1 = __s;
  param_1[1] = param_2;
  param_1[2] = uVar3;
  if (bVar6) {
    return;
  }
  FUN_0043dd30(uVar3 & 0xfffffffffffffffe);
  FUN_0043dd50(uVar3 & 0xfffffffffffffffe);
  return;
}

