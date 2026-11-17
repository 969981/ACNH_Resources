
undefined4 FUN_02b4ef8c(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  lVar1 = FUN_02b4f694();
  if (*(int *)(param_1 + 0x2a0) - 1U < 8) {
    uVar3 = *(uint *)(param_1 + 0x29c);
  }
  else {
    if (*(int *)(param_1 + 0x2a0) - 9U < 10) {
      iVar4 = DAT_056323f8;
    }
    else {
      iVar4 = DAT_056323fc;
    }
    uVar3 = *(int *)(param_1 + 0x29c) - iVar4;
  }
  if (*(int *)(param_1 + 0x2a0) - 1U < 8) {
    if (0 < (int)uVar3) goto LAB_02b4f044;
    if (*(uint *)(lVar1 + 0x290) <= uVar3) goto LAB_02b4f064;
    lVar1 = *(long *)(lVar1 + 0x298);
  }
  else if (*(int *)(param_1 + 0x2a0) - 9U < 10) {
    if (4 < (int)uVar3) {
LAB_02b4f044:
      lVar1 = lVar1 + 0xf8;
      goto LAB_02b4f068;
    }
    if (*(uint *)(lVar1 + 0x420) <= uVar3) {
LAB_02b4f064:
      lVar1 = 0;
      goto LAB_02b4f068;
    }
    lVar1 = *(long *)(lVar1 + 0x428);
  }
  else {
    if (8 < (int)uVar3) goto LAB_02b4f044;
    if (*(uint *)(lVar1 + 0xa90) <= uVar3) goto LAB_02b4f064;
    lVar1 = *(long *)(lVar1 + 0xa98);
  }
  lVar1 = *(long *)(lVar1 + (long)(int)uVar3 * 8);
LAB_02b4f068:
  puVar2 = (undefined4 *)(**(code **)(*(long *)(lVar1 + 0xa0) + 0xf0))();
  return *puVar2;
}

