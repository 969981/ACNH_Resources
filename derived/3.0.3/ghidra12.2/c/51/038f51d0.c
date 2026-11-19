
void FUN_038f51d0(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  lVar3 = *param_1;
  lVar1 = lVar3 + 0x10;
  *(long *)(lVar3 + 0x1c) = lVar1 + *(int *)(lVar3 + 0x1c);
  lVar4 = 0;
  if (*(long *)(lVar3 + 0x28) != 0) {
    uVar2 = *(uint *)(lVar3 + 0x24);
    lVar8 = (long)(int)*(long *)(lVar3 + 0x28);
    lVar6 = lVar1;
    if (param_2 != 0) {
      lVar6 = param_2;
    }
    lVar4 = lVar1 + lVar8;
    if (0 < (int)uVar2) {
      if (uVar2 == 1) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        plVar7 = (long *)(lVar8 + lVar3);
        do {
          plVar9 = plVar7 + 4;
          uVar5 = uVar5 + 2;
          plVar7[2] = lVar6 + (int)plVar7[2];
          *plVar9 = lVar6 + (int)*plVar9;
          plVar7 = plVar9;
        } while (((ulong)uVar2 & 0xfffffffe) != uVar5);
      }
      if ((uVar2 & 1) != 0) {
        *(long *)(lVar4 + uVar5 * 0x10) = lVar6 + *(int *)(lVar4 + uVar5 * 0x10);
      }
    }
  }
  *(long *)(lVar3 + 0x28) = lVar4;
  lVar4 = 0;
  if (*(long *)(lVar3 + 0x34) != 0) {
    uVar2 = *(uint *)(lVar3 + 0x30);
    lVar8 = (long)(int)*(long *)(lVar3 + 0x34);
    lVar6 = lVar1;
    if (param_2 != 0) {
      lVar6 = param_2;
    }
    lVar4 = lVar1 + lVar8;
    if (0 < (int)uVar2) {
      if (uVar2 == 1) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        plVar7 = (long *)(lVar8 + lVar3);
        do {
          plVar9 = plVar7 + 4;
          uVar5 = uVar5 + 2;
          plVar7[2] = lVar6 + (int)plVar7[2];
          *plVar9 = lVar6 + (int)*plVar9;
          plVar7 = plVar9;
        } while (((ulong)uVar2 & 0xfffffffe) != uVar5);
      }
      if ((uVar2 & 1) != 0) {
        *(long *)(lVar4 + uVar5 * 0x10) = lVar6 + *(int *)(lVar4 + uVar5 * 0x10);
      }
    }
  }
  *(long *)(lVar3 + 0x34) = lVar4;
  lVar4 = 0;
  if (*(long *)(lVar3 + 0x40) != 0) {
    uVar2 = *(uint *)(lVar3 + 0x3c);
    lVar8 = (long)(int)*(long *)(lVar3 + 0x40);
    lVar6 = lVar1;
    if (param_2 != 0) {
      lVar6 = param_2;
    }
    lVar4 = lVar1 + lVar8;
    if (0 < (int)uVar2) {
      if (uVar2 == 1) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        plVar7 = (long *)(lVar8 + lVar3 + 0x1c);
        do {
          uVar5 = uVar5 + 2;
          *(long *)((long)plVar7 + -0xc) = lVar6 + *(int *)((long)plVar7 + -0xc);
          *plVar7 = lVar6 + (int)*plVar7;
          plVar7 = plVar7 + 3;
        } while (((ulong)uVar2 & 0xfffffffe) != uVar5);
      }
      if ((uVar2 & 1) != 0) {
        *(long *)(lVar4 + uVar5 * 0xc) = lVar6 + *(int *)(lVar4 + uVar5 * 0xc);
      }
    }
  }
  *(long *)(lVar3 + 0x40) = lVar4;
  lVar4 = 0;
  if (*(long *)(lVar3 + 0x4c) != 0) {
    uVar2 = *(uint *)(lVar3 + 0x48);
    lVar8 = (long)(int)*(long *)(lVar3 + 0x4c);
    lVar6 = lVar1;
    if (param_2 != 0) {
      lVar6 = param_2;
    }
    lVar4 = lVar1 + lVar8;
    if (0 < (int)uVar2) {
      if (uVar2 == 1) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        plVar7 = (long *)(lVar8 + lVar3 + 0x1c);
        do {
          uVar5 = uVar5 + 2;
          *(long *)((long)plVar7 + -0xc) = lVar6 + *(int *)((long)plVar7 + -0xc);
          *plVar7 = lVar6 + (int)*plVar7;
          plVar7 = plVar7 + 3;
        } while (((ulong)uVar2 & 0xfffffffe) != uVar5);
      }
      if ((uVar2 & 1) != 0) {
        *(long *)(lVar4 + uVar5 * 0xc) = lVar6 + *(int *)(lVar4 + uVar5 * 0xc);
      }
    }
  }
  *(long *)(lVar3 + 0x4c) = lVar4;
  lVar4 = 0;
  if (*(long *)(lVar3 + 0x58) != 0) {
    uVar2 = *(uint *)(lVar3 + 0x54);
    lVar8 = (long)(int)*(long *)(lVar3 + 0x58);
    lVar6 = lVar1;
    if (param_2 != 0) {
      lVar6 = param_2;
    }
    lVar4 = lVar1 + lVar8;
    if (0 < (int)uVar2) {
      if (uVar2 == 1) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        plVar7 = (long *)(lVar8 + lVar3 + 0x1c);
        do {
          uVar5 = uVar5 + 2;
          *(long *)((long)plVar7 + -0xc) = lVar6 + *(int *)((long)plVar7 + -0xc);
          *plVar7 = lVar6 + (int)*plVar7;
          plVar7 = plVar7 + 3;
        } while (((ulong)uVar2 & 0xfffffffe) != uVar5);
      }
      if ((uVar2 & 1) != 0) {
        *(long *)(lVar4 + uVar5 * 0xc) = lVar6 + *(int *)(lVar4 + uVar5 * 0xc);
      }
    }
  }
  *(long *)(lVar3 + 0x58) = lVar4;
  if (*(long *)(lVar3 + 100) == 0) {
    *(undefined8 *)(lVar3 + 100) = 0;
    return;
  }
  uVar2 = *(uint *)(lVar3 + 0x60);
  lVar6 = (long)(int)*(long *)(lVar3 + 100);
  lVar4 = lVar1;
  if (param_2 != 0) {
    lVar4 = param_2;
  }
  lVar1 = lVar1 + lVar6;
  if (0 < (int)uVar2) {
    if (uVar2 == 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      plVar7 = (long *)(lVar6 + lVar3 + 0x1c);
      do {
        uVar5 = uVar5 + 2;
        *(long *)((long)plVar7 + -0xc) = lVar4 + *(int *)((long)plVar7 + -0xc);
        *plVar7 = lVar4 + (int)*plVar7;
        plVar7 = plVar7 + 3;
      } while (((ulong)uVar2 & 0xfffffffe) != uVar5);
    }
    if ((uVar2 & 1) != 0) {
      *(long *)(lVar1 + uVar5 * 0xc) = lVar4 + *(int *)(lVar1 + uVar5 * 0xc);
    }
  }
  *(long *)(lVar3 + 100) = lVar1;
  return;
}

