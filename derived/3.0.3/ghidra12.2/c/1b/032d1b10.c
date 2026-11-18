
void FUN_032d1b10(long param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined *local_70;
  undefined1 *local_68;
  long *local_50;
  long local_38;
  
  local_50 = (long *)&local_70;
  local_68 = (undefined1 *)&local_70;
  ppuVar2 = &local_70;
  ppuVar3 = &local_70;
  lVar6 = *(long *)(*(long *)(param_1 + 0xf0) + 0x18);
  if (*(long *)(lVar6 + 0x18) != 0) {
    return;
  }
  *(undefined **)(param_2 + 0x168) = PTR_LAB_04bc9508;
  *(long *)(param_2 + 0x170) = param_1;
  if ((param_3 & 1) != 0) {
    local_70 = &DAT_04b1b658;
    local_38 = lVar6;
    FUN_032d25d0(&local_70,&local_38);
    if ((undefined **)local_50 == &local_70) {
      puVar5 = (undefined8 *)(local_70 + 0x20);
    }
    else {
      if (local_50 == (long *)0x0) goto LAB_032d1ba0;
      puVar5 = (undefined8 *)(*local_50 + 0x28);
      ppuVar2 = (undefined **)local_50;
    }
    (*(code *)*puVar5)(ppuVar2);
  }
LAB_032d1ba0:
  local_70 = &DAT_04b1b6a0;
  local_68 = (undefined1 *)&local_70;
  local_50 = (long *)&local_70;
  if ((*(byte *)(lVar6 + 0x58) & 1) == 0) {
LAB_032d1bec:
    puVar5 = (undefined8 *)(local_70 + 0x20);
  }
  else {
    local_68 = (undefined1 *)&local_70;
    local_50 = (long *)&local_70;
    FUN_032d4940(lVar6);
    if (((*(byte *)(lVar6 + 0x58) & 1) != 0) &&
       (((*(byte *)(lVar6 + 0x58) >> 1 & 1) == 0 || (*(char *)(lVar6 + 0x59) != '\0')))) {
      for (lVar7 = *(long *)(lVar6 + 0x28); lVar7 != lVar6 + 0x20; lVar7 = *(long *)(lVar7 + 8)) {
        local_38 = lVar7 + -8;
        plVar4 = *(long **)(local_68 + 0x20);
        if (plVar4 == (long *)0x0) {
          FUN_032d2700();
                    /* WARNING: Does not return */
          pcVar1 = (code *)UndefinedInstructionException(0,0x32d1c88);
          (*pcVar1)();
        }
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_38);
      }
    }
    if ((undefined **)local_50 == &local_70) goto LAB_032d1bec;
    if (local_50 == (long *)0x0) goto LAB_032d1c00;
    puVar5 = (undefined8 *)(*local_50 + 0x28);
    ppuVar3 = (undefined **)local_50;
  }
  (*(code *)*puVar5)(ppuVar3);
LAB_032d1c00:
  (**(code **)(**(long **)(param_1 + 0xf0) + 0xa8))(*(long **)(param_1 + 0xf0),param_2,0);
  return;
}

