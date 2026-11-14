
undefined8 FUN_01d6d300(uint *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined *local_60;
  long *plStack_58;
  undefined *local_50;
  undefined2 *puStack_48;
  undefined4 local_40;
  undefined2 local_3c [10];
  undefined2 local_28;
  
  uVar2 = *param_1;
  if (uVar2 - 4 < 2) {
LAB_01d6d330:
    plVar5 = *(long **)(param_1 + 4);
    if (plVar5 == (long *)0x0) {
      return 3;
    }
  }
  else {
    if (uVar2 == 0) {
      return 3;
    }
    if (uVar2 == 1) goto LAB_01d6d330;
    plVar5 = *(long **)(param_1 + 4);
    if ((uVar2 & 0xfffffffe) != 8) {
      if (plVar5 == (long *)0x0) {
        return 1;
      }
      goto LAB_01d6d380;
    }
    if (plVar5 == (long *)0x0) {
      return 1;
    }
  }
  plVar1 = &DAT_04178a58;
  if ((char)plVar5[0xd7] != '\0') {
    plVar1 = plVar5;
  }
  if (*plVar1 != *(long *)(param_1 + 2)) {
    return 3;
  }
LAB_01d6d380:
  plStack_58 = plVar5 + 2;
  lVar4 = 0;
  local_60 = PTR_DAT_04bb2020 + 0x10;
  do {
    if (*(char *)((long)plVar5 + lVar4 + 0x10) == '\0') goto LAB_01d6d3cc;
    if (*(char *)((long)plVar5 + lVar4 + 0x11) == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_01d6d3cc;
    }
    lVar4 = lVar4 + 2;
  } while (lVar4 != 0x40);
  lVar4 = 0xffffffff;
LAB_01d6d3cc:
  local_28 = 0;
  local_40 = 0xb;
  puStack_48 = local_3c;
  local_3c[0] = 0;
  local_50 = PTR_DAT_04bc0d30 + 0x10;
  uVar3 = FUN_01df33d0(&local_50,&local_60,lVar4);
  if (((uVar3 & 1) == 0) || (uVar3 = FUN_006f5580(param_2,&local_50), (uVar3 & 1) == 0)) {
    (**(code **)(*param_2 + 0x38))(param_2);
    return 2;
  }
  return 0;
}

