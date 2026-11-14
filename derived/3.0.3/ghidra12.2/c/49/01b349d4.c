
bool FUN_01b349d4(undefined8 param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *local_40;
  char *pcStack_38;
  
  lVar4 = *(long *)(param_2 + 8);
  if ((*(long **)(lVar4 + 0x60) == (long *)0x0) ||
     (puVar3 = (undefined8 *)**(long **)(lVar4 + 0x60), puVar3 == (undefined8 *)0x0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = (**(code **)*puVar3)();
    uVar1 = uVar1 ^ 1;
  }
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "HHABuildCelebraition";
  iVar2 = FUN_02746e10(*(long *)(lVar4 + 0x48) + *(long *)(lVar4 + 0x40),&local_40);
  if ((((uVar1 & 1) == 0) && (*(long *)(lVar4 + 0x60) != 0)) &&
     (puVar3 = *(undefined8 **)(*(long *)(lVar4 + 0x60) + 8), puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)();
  }
  return iVar2 < 1;
}

