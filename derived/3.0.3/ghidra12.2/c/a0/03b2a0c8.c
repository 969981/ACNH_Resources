
void FUN_03b2a0c8(long param_1)

{
  long lVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  
  lVar7 = *(long *)(param_1 + 0x48);
  if ((*(byte *)(param_1 + 0x40) >> 6 & 1) == 0) {
    lVar3 = *(long *)(lVar7 + 0x10);
  }
  else {
    lVar3 = *(long *)(lVar7 + 0x10);
    lVar1 = 0x28;
    if (*(uint *)(lVar7 + 8) < 6) {
      lVar1 = 0;
    }
    if (*(long *)(lVar3 + lVar1) != 0) {
      uVar4 = 5;
      goto LAB_03b2a11c;
    }
  }
  uVar4 = 4;
LAB_03b2a11c:
  plVar6 = *(long **)(lVar7 + 0x18);
  if (*(uint *)(lVar7 + 8) <= uVar4) {
    uVar4 = 0;
  }
  plVar5 = *(long **)(lVar3 + (ulong)uVar4 * 8);
  if (plVar6 != plVar5) {
    FUN_0035d98c(plVar6,0);
    *(undefined4 *)(plVar6 + 10) = 0;
    *(long **)(lVar7 + 0x18) = plVar5;
  }
  (**(code **)(*plVar5 + 0xb8))(0x3f800000,plVar5,0);
  if (((*(char *)(param_1 + 0x69) != '\0') && (*(char *)(param_1 + 0x68) == '\0')) &&
     ((lVar7 = *(long *)(param_1 + 0x50), lVar7 == 0 ||
      ((*(float *)(lVar7 + 0x50) <= 0.0 &&
       (fVar8 = *(float *)(lVar7 + 0x20), uVar2 = FUN_0035d97c(), fVar8 != (float)uVar2)))))) {
    plVar6 = *(long **)(param_1 + 0x70);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0xb8))(0x3f800000,plVar6,0);
    }
    *(undefined1 *)(param_1 + 0x68) = 1;
  }
  return;
}

