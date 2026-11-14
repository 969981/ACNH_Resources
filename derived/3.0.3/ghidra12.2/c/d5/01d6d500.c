
undefined4 FUN_01d6d500(uint *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined *local_70;
  long lStack_68;
  undefined *local_60;
  undefined2 *puStack_58;
  undefined4 local_50;
  undefined2 local_4c [20];
  undefined2 local_24;
  
  uVar2 = *param_1;
  if (uVar2 - 4 < 2) {
LAB_01d6d530:
    plVar7 = *(long **)(param_1 + 4);
    if (plVar7 == (long *)0x0) {
      return 3;
    }
  }
  else {
    if (uVar2 == 0) {
      return 3;
    }
    if (uVar2 == 1) goto LAB_01d6d530;
    if (((uVar2 & 0xfffffffe) != 8) || (plVar7 = *(long **)(param_1 + 4), plVar7 == (long *)0x0))
    goto LAB_01d6d578;
  }
  plVar1 = &DAT_04178a58;
  if ((char)plVar7[0xd7] != '\0') {
    plVar1 = plVar7;
  }
  if (*plVar1 != *(long *)(param_1 + 2)) {
    return 3;
  }
LAB_01d6d578:
  bVar3 = (byte)param_1[10];
  if ((bVar3 >> 2 & 1) != 0) {
    return 2;
  }
  lVar8 = *(long *)(param_1 + 6);
  if (lVar8 == 0) {
    if ((bVar3 & 1) == 0) {
      return 1;
    }
    lVar8 = *(long *)(param_1 + 8);
    if (lVar8 == 0) {
      uVar6 = 1;
      if ((bVar3 & 2) != 0) {
        uVar6 = 2;
      }
      return uVar6;
    }
  }
  lStack_68 = lVar8 + 0x2a;
  lVar5 = 0;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  do {
    if (*(char *)(lVar8 + lVar5 + 0x2a) == '\0') {
LAB_01d6d5e8:
      local_24 = 0;
      local_50 = 0x15;
      puStack_58 = local_4c;
      local_4c[0] = 0;
      local_60 = PTR_DAT_04bb4c98 + 0x10;
      uVar4 = FUN_01df33d0(&local_60,&local_70,lVar5);
      if (((uVar4 & 1) == 0) || (uVar4 = FUN_006f5580(param_2,&local_60), (uVar4 & 1) == 0)) {
        (**(code **)(*param_2 + 0x38))(param_2);
        return 2;
      }
      return 0;
    }
    if (lVar5 == 0x3c) {
      lVar5 = 0xffffffff;
      goto LAB_01d6d5e8;
    }
    if (*(char *)(lVar8 + lVar5 + 0x2b) == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_01d6d5e8;
    }
    lVar5 = lVar5 + 2;
  } while( true );
}

