
undefined8 FUN_03892620(long param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  undefined *puVar4;
  char cVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  byte local_24 [4];
  
  puVar4 = PTR_DAT_04bcb7d8;
  local_24[0] = (**(code **)(**(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x68) + 0x80))();
  if (local_24[0] == 0xff) {
LAB_03892728:
    uVar7 = 0;
  }
  else {
    plVar6 = *(long **)(*(long *)puVar4 + 0x68);
    if (*(byte *)(plVar6 + 4) == local_24[0]) {
      lVar9 = param_1 + 0x4c8;
    }
    else {
      cVar5 = (**(code **)(*plVar6 + 0x158))(plVar6,local_24);
      uVar3 = (uint)cVar5;
      if (*(uint *)(param_1 + 0x4a8) <= uVar3) {
        uVar3 = 0;
      }
      lVar9 = *(long *)(param_1 + 0x4b0) + (long)(int)uVar3 * 0x70;
    }
    if (0 < (int)*(uint *)(param_1 + 0x4f8)) {
      uVar8 = 0;
      pcVar10 = (char *)(*(long *)(param_1 + 0x500) + 9);
      do {
        uVar2 = uVar8;
        if (*(uint *)(lVar9 + 0x30) <= uVar8) {
          uVar2 = 0;
        }
        if (((*(long *)(*(long *)(lVar9 + 0x38) + uVar2 * 0x10) != *(long *)(pcVar10 + -9)) ||
            (lVar1 = *(long *)(lVar9 + 0x38) + uVar2 * 0x10, *(char *)(lVar1 + 8) != pcVar10[-1]))
           || (*(char *)(lVar1 + 9) != *pcVar10)) goto LAB_03892728;
        uVar8 = uVar8 + 1;
        pcVar10 = pcVar10 + 0x10;
      } while (*(uint *)(param_1 + 0x4f8) != uVar8);
    }
    uVar7 = 1;
  }
  return uVar7;
}

