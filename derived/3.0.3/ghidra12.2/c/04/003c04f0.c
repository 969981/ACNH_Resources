
long * FUN_003c04f0(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    plVar6 = (long *)*param_2;
    if (plVar6 == (long *)0x0) {
      if (0 < (int)plVar3[1]) {
        lVar5 = 0;
        do {
          *(undefined4 *)(*plVar3 + lVar5 * 4) = 0;
          lVar5 = lVar5 + 1;
        } while (lVar5 < (int)plVar3[1]);
      }
    }
    else {
      uVar7 = *(uint *)(plVar3 + 1);
      uVar1 = *(uint *)(plVar6 + 1);
      if ((int)uVar7 <= (int)*(uint *)(plVar6 + 1)) {
        uVar1 = uVar7;
      }
      if (0 < (int)uVar1) {
        if (uVar1 == 1) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          do {
            lVar5 = uVar8 * 4;
            uVar8 = uVar8 + 2;
            *(undefined4 *)(*plVar3 + lVar5) = *(undefined4 *)(*plVar6 + lVar5);
            *(undefined4 *)(*plVar3 + lVar5 + 4) = *(undefined4 *)(*plVar6 + lVar5 + 4);
          } while (((ulong)uVar1 & 0xfffffffe) != uVar8);
        }
        if ((uVar1 & 1) != 0) {
          *(undefined4 *)(*plVar3 + uVar8 * 4) = *(undefined4 *)(*plVar6 + uVar8 * 4);
        }
        uVar7 = *(uint *)(plVar3 + 1);
      }
      if ((int)uVar1 < (int)uVar7) {
        lVar5 = (long)(int)uVar1;
        do {
          *(undefined4 *)(*plVar3 + lVar5 * 4) = 0;
          lVar5 = lVar5 + 1;
        } while (lVar5 < (int)plVar3[1]);
      }
    }
  }
  if ((param_1[1] != 0) && (param_2[1] != 0)) {
    *(undefined1 *)(param_1[1] + 0xc0) = *(undefined1 *)(param_2[1] + 0xc0);
    if (*(char *)(param_1[1] + 0xc0) != '\0') {
      memcpy((void *)param_1[1],(void *)param_2[1],0xc0);
      lVar5 = param_1[1];
      uVar7 = *(uint *)(lVar5 + 0xd0);
      uVar2 = *(uint *)(param_2[1] + 0xd0);
      uVar1 = uVar2;
      if ((int)uVar7 <= (int)uVar2) {
        uVar1 = uVar7;
      }
      if ((int)uVar1 < 1) {
        uVar9 = uVar7;
      }
      else {
        if (uVar1 == 1) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          do {
            *(undefined1 *)(*(long *)(param_1[1] + 200) + uVar8) =
                 *(undefined1 *)(*(long *)(param_2[1] + 200) + uVar8);
            lVar5 = *(long *)(param_2[1] + 200) + uVar8;
            lVar4 = *(long *)(param_1[1] + 200) + uVar8;
            uVar8 = uVar8 + 2;
            *(undefined1 *)(lVar4 + 1) = *(undefined1 *)(lVar5 + 1);
          } while (((ulong)uVar1 & 0xfffffffe) != uVar8);
        }
        if ((uVar1 & 1) != 0) {
          *(undefined1 *)(*(long *)(param_1[1] + 200) + uVar8) =
               *(undefined1 *)(*(long *)(param_2[1] + 200) + uVar8);
        }
        lVar5 = param_1[1];
        uVar9 = *(uint *)(lVar5 + 0xd0);
      }
      if (((int)uVar1 < (int)uVar9) && (uVar9 != 0)) {
        if ((int)uVar2 <= (int)uVar7) {
          uVar7 = uVar2;
        }
        lVar4 = (long)(int)uVar7;
        do {
          *(undefined1 *)(*(long *)(lVar5 + 200) + lVar4) = 0;
          lVar4 = lVar4 + 1;
          lVar5 = param_1[1];
        } while (*(int *)(lVar5 + 0xd0) != 0);
      }
    }
  }
  if (param_1[2] != 0) {
    if (param_2[2] == 0) {
      FUN_003c0890();
      return param_1;
    }
    FUN_003c08d0();
  }
  return param_1;
}

