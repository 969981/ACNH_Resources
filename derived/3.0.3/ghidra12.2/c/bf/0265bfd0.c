
bool FUN_0265bfd0(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined2 local_44;
  undefined1 local_42;
  undefined *local_40;
  char *pcStack_38;
  
  puVar1 = PTR_DAT_04bb2020;
  local_44 = 0x23;
  local_42 = 8;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = (char *)param_1;
  FUN_020fd3a0(&local_44,&local_40);
  lVar5 = FUN_0265c0c0(&local_44);
  bVar2 = lVar5 != 0;
  if ((lVar5 != 0) && ((param_2 & 1) != 0)) {
    if ((*(long **)(lVar5 + 0x28) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x28), puVar6 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar6)();
      uVar3 = uVar3 ^ 1;
    }
    local_40 = puVar1 + 0x10;
    pcStack_38 = "MoveInCompletion";
    iVar4 = FUN_02749340(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8) + 0x1267c,&local_40);
    bVar2 = iVar4 != 0;
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
  }
  return bVar2;
}

