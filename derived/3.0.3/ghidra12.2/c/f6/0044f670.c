
void FUN_0044f670(uint *param_1)

{
  byte *pbVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  long local_38;
  
  if ((~*param_1 & 0x208000) != 0) {
    return;
  }
  pbVar1 = (byte *)FUN_00426db0(param_1,0x200000);
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 1) != 0)) {
    return;
  }
  uVar2 = FUN_00428440(param_1);
  if ((uVar2 & 0x1f) == 8) {
    lVar3 = FUN_00426d90();
    if (lVar3 == 0) {
      return;
    }
    FUN_0044f670();
    uVar2 = FUN_004274f0(lVar3);
    if ((uVar2 & 1) == 0) {
      return;
    }
LAB_0044f7d0:
    if (((*(byte *)((long)param_1 + 2) >> 5 & 1) == 0) ||
       (puVar6 = (ulong *)FUN_00426db0(param_1,0x200000), puVar6 == (ulong *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = *puVar6 | 1;
    }
    puVar6 = (ulong *)FUN_00426d40(param_1,0x200000);
    *puVar6 = uVar2;
  }
  else {
    uVar2 = FUN_00428440(param_1);
    if ((uVar2 & 0x1f) != 7) {
      return;
    }
    lVar3 = *(long *)(param_1 + 2);
    if (lVar3 != 0) {
      FUN_0044f670(lVar3);
      uVar2 = FUN_004274f0(lVar3);
      if ((uVar2 & 1) != 0) goto LAB_0044f7d0;
    }
    plVar4 = (long *)FUN_00426e90(param_1,0x4000);
    if (((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) &&
       (*plVar4 != 0)) {
      lVar3 = *plVar4 << 4;
      plVar4 = plVar4 + 1;
      do {
        FUN_0044f670(*plVar4);
        uVar2 = FUN_004274f0(*plVar4);
        if ((uVar2 & 1) != 0) goto LAB_0044f7d0;
        lVar3 = lVar3 + -0x10;
        plVar4 = plVar4 + 2;
      } while (lVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_00426e00(param_1,0x800000);
    if ((puVar5 != (undefined8 *)0x0) && (plVar4 = (long *)*puVar5, plVar4 != (long *)0x0)) {
      if ((long)*(short *)((long)plVar4 + 2) + (long)(short)*plVar4 != 0) {
        lVar3 = ((long)*(short *)((long)plVar4 + 2) + (long)(short)*plVar4) * 8;
        do {
          plVar4 = plVar4 + 1;
          local_38 = *plVar4;
          uVar2 = FUN_004290b0(&local_38);
          if ((uVar2 & 1) == 0) {
            uVar7 = *(undefined8 *)(local_38 + 8);
            FUN_0044f670(uVar7);
            uVar2 = FUN_004274f0(uVar7);
            if ((uVar2 & 1) != 0) goto LAB_0044f7d0;
          }
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
    }
  }
  return;
}

