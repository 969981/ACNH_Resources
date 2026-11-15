
undefined1 FUN_022a8b60(long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined8 local_68;
  undefined *puStack_60;
  int local_58;
  int iStack_54;
  undefined8 local_38;
  
  puVar4 = PTR_DAT_04bb27c8;
  iVar3 = *(int *)(param_1 + 8);
  iVar7 = *(int *)(param_1 + 0xc);
  iVar1 = iVar7 + 2;
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  iVar8 = iVar3;
  while( true ) {
    lVar6 = *(long *)puVar4;
    local_38 = 0;
    local_68 = 0;
    if (((lVar6 == 0) || (*(long *)(lVar6 + 0xa8) == 0)) ||
       (puStack_60 = puVar2, local_58 = iVar8, iStack_54 = iVar7,
       uVar5 = FUN_009493f8(lVar6 + 0x28,&puStack_60,(long)&local_38 + 4,&local_38,
                            (long)&local_68 + 4,&local_68), (uVar5 & 1) == 0)) {
      return 0;
    }
    if (((local_38._4_4_ == 0x44) || ((int)local_38 == 0x44)) || (local_68._4_4_ == 0x44)) break;
    if ((int)local_68 == 0x44) {
      return 1;
    }
    if (iVar8 < iVar3 + 1) {
      iVar8 = iVar8 + 1;
    }
    else {
      iVar7 = iVar7 + 1;
      iVar8 = iVar3;
    }
    if ((iVar3 == iVar8) && (iVar1 == iVar7)) {
      return 0;
    }
  }
  return 1;
}

