
long FUN_0014a41c(long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  size_t sVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  char acStack_166 [262];
  
  memset(acStack_166,0,0x106);
  if (((*(byte *)(param_1 + 0xf66) >> 3 & 1) != 0) && (param_2 != 0)) {
    lVar12 = 0;
    lVar11 = 0;
    lVar9 = param_2;
    uVar1 = 0xffffffffffffffff;
    do {
      uVar14 = uVar1;
      lVar9 = *(long *)(lVar9 + 0x28);
      uVar1 = uVar14 + 1;
      lVar11 = lVar11 + 8;
      lVar12 = lVar12 + 4;
    } while (lVar9 != 0);
    uVar13 = (uint)uVar1;
    if (uVar13 != 0) {
      FUN_0014d430(param_1,"Shuffling %i addresses",uVar13 + 1);
      plVar7 = (long *)FUN_001432f0(lVar11);
      if (plVar7 == (long *)0x0) {
        return 0;
      }
      *plVar7 = param_2;
      uVar10 = 0;
      lVar11 = param_2;
      do {
        lVar11 = *(long *)(lVar11 + 0x28);
        uVar2 = uVar10 + 1;
        plVar7[uVar10 + 1] = lVar11;
        uVar10 = uVar2;
      } while (uVar1 != uVar2);
      lVar11 = FUN_001432f0(lVar12);
      if (lVar11 == 0) goto LAB_0014a5f8;
      iVar6 = FUN_00154d70(param_1,lVar11,lVar12);
      if (iVar6 == 0) {
        lVar12 = uVar14 + 2;
        do {
          uVar4 = *(uint *)(lVar11 + -4 + lVar12 * 4);
          uVar5 = 0;
          uVar15 = (uint)lVar12;
          if (uVar15 != 0) {
            uVar5 = uVar4 / uVar15;
          }
          uVar4 = uVar4 - uVar5 * uVar15;
          lVar16 = lVar12 + -1;
          lVar9 = plVar7[uVar4];
          plVar7[uVar4] = plVar7[lVar12 + -1];
          plVar7[lVar12 + -1] = lVar9;
          lVar12 = lVar16;
        } while (1 < lVar16);
        lVar12 = 0;
        if (uVar13 < 2) {
          uVar13 = 1;
        }
        do {
          plVar3 = plVar7 + lVar12;
          lVar12 = lVar12 + 1;
          *(long *)(*plVar3 + 0x28) = plVar3[1];
        } while ((ulong)(uVar13 + 1) - 1 != lVar12);
        *(undefined8 *)(plVar7[uVar1 & 0xffffffff] + 0x28) = 0;
        param_2 = *plVar7;
      }
      FUN_00143300(lVar11);
      FUN_00143300(plVar7);
    }
  }
  plVar7 = (long *)FUN_00143330(1,0x18);
  if (plVar7 == (long *)0x0) {
    return 0;
  }
  FUN_0014a624(param_3,param_4,acStack_166);
  sVar8 = strlen(acStack_166);
  *plVar7 = param_2;
  plVar7[2] = 1;
  FUN_00146418(plVar7 + 1);
  if (plVar7[1] == 0) {
    plVar7[1] = 1;
  }
  lVar11 = FUN_0014af3c(*(undefined8 *)(param_1 + 200),acStack_166,sVar8 + 1,plVar7);
  if (lVar11 != 0) {
    *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
    return lVar11;
  }
LAB_0014a5f8:
  FUN_00143300(plVar7);
  return 0;
}

