
long FUN_00654b10(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  FUN_0043c080(param_1 + 0x18,param_2 + 0x18);
  uVar8 = *(undefined8 *)(param_2 + 0x30);
  iVar4 = *(int *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar8;
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  if (iVar4 < 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    memset((void *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 8),0,(ulong)(uint)-iVar4 << 3);
  }
  else if (iVar4 != 0) {
    plVar6 = (long *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 8);
    *(undefined4 *)(param_1 + 0x28) = 0;
    do {
      plVar6 = plVar6 + -1;
      if (*plVar6 != 0) {
        FUN_004435c0();
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar2 = *(int *)(param_2 + 0x28);
  iVar1 = *(int *)(param_1 + 0x28);
  plVar6 = *(long **)(param_2 + 0x20);
  iVar4 = iVar1 + iVar2;
  if ((int)(*(uint *)(param_1 + 0x2c) & 0x3fffffff) < iVar4) {
    lVar3 = FUN_00426720(PTR_DAT_048607b8,iVar4,8,*(undefined8 *)(param_1 + 0x20),iVar1,
                         param_1 + 0x2c);
    *(long *)(param_1 + 0x20) = lVar3;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
  }
  if (iVar2 != 0) {
    lVar7 = (long)iVar2 << 3;
    plVar5 = (long *)(lVar3 + (long)iVar1 * 8);
    do {
      lVar3 = *plVar6;
      *plVar5 = lVar3;
      if (lVar3 != 0) {
        FUN_004435a0();
      }
      plVar6 = plVar6 + 1;
      lVar7 = lVar7 + -8;
      plVar5 = plVar5 + 1;
    } while (lVar7 != 0);
  }
  *(int *)(param_1 + 0x28) = iVar4;
  return param_1;
}

