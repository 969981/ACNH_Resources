
/* WARNING: Removing unreachable block (ram,0x027ccc30) */
/* WARNING: Removing unreachable block (ram,0x027cccdc) */

undefined8 FUN_027ccc08(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *local_40;
  char *pcStack_38;
  
  local_40 = (undefined *)((ulong)local_40 & 0xffffffff00000000);
  if ((*(char *)(param_1 + 0x1c4) == -1) || (lVar3 = FUN_0265c2a0(), lVar3 == 0)) {
LAB_027ccccc:
    local_40 = (undefined *)CONCAT44(local_40._4_4_,1);
    if ((*(char *)(param_1 + 0x1c5) != -1) && (lVar3 = FUN_0265c2a0(), lVar3 != 0)) {
      if ((*(long **)(lVar3 + 0x28) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x28), puVar4 == (undefined8 *)0x0)) {
        uVar1 = 1;
      }
      else {
        uVar1 = (**(code **)*puVar4)();
        uVar1 = uVar1 ^ 1;
      }
      local_40 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "MoveInCompletion";
      iVar2 = FUN_02749340(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8) + 0x1267c,&local_40);
      if ((((uVar1 & 1) == 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
      if (iVar2 != 0) goto LAB_027ccd78;
    }
    uVar5 = 0;
  }
  else {
    if ((*(long **)(lVar3 + 0x28) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x28), puVar4 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar4)();
      uVar1 = uVar1 ^ 1;
    }
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "MoveInCompletion";
    iVar2 = FUN_02749340(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8) + 0x1267c,&local_40);
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
    if (iVar2 == 0) goto LAB_027ccccc;
LAB_027ccd78:
    uVar5 = 1;
  }
  return uVar5;
}

