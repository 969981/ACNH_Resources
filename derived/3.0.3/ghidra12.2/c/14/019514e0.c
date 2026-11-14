
undefined4 FUN_019514e0(undefined8 param_1,byte param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *local_40;
  undefined2 local_38;
  
  local_40 = PTR_DAT_04bb7648 + 0x10;
  local_38 = *DAT_05ab5ea8;
  lVar3 = FUN_03775a30(&local_40);
  uVar2 = 0xfffe;
  if ((param_2 < 0xc) && (lVar3 != 0)) {
    lVar3 = lVar3 + (ulong)param_2 * 0x38;
    if ((*(long **)(lVar3 + 0x1368) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x1368), puVar4 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar4)();
      uVar1 = uVar1 ^ 1;
    }
    uVar2 = FUN_0277d6c4(*(long *)(lVar3 + 0x1350) + *(long *)(lVar3 + 0x1348));
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar3 + 0x1368) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x1368) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return uVar2;
}

