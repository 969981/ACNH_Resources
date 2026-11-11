
void FUN_00477d10(long param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  uint local_34;
  
  iVar3 = FUN_00477b40(param_2);
  if (iVar3 != 0) {
    lVar5 = *param_2;
    if (lVar5 == param_2[1]) {
      local_34 = 0;
    }
    else {
      local_34 = FUN_00446840(lVar5,param_2[1] - lVar5);
    }
    uVar4 = (int)param_2[4] * -0x61c8864f;
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
    local_34 = uVar4 + local_34 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ local_34;
    lVar5 = param_2[2];
    if (lVar5 == param_2[3]) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00446840(lVar5,param_2[3] - lVar5);
    }
    plVar8 = (long *)(param_1 + 0x168);
    uVar2 = *(int *)((long)param_2 + 0x24) * -0x61c8864f;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar4 = uVar4 * 0x40 + -0x61c88647 + uVar2 + (uVar2 >> 2) ^ uVar4;
    local_34 = local_34 * 0x40 + -0x61c88647 + uVar4 + (uVar4 >> 2) ^ local_34;
    lVar5 = FUN_0047c7b0(plVar8,&local_34);
    if ((lVar5 != 0) &&
       (lVar5 = *(long *)(*plVar8 + (long)*(int *)(lVar5 + 4) * 0x10 + 8), lVar5 != 0)) {
      lVar6 = FUN_0047c7b0(plVar8,&local_34);
      if (lVar6 != 0) {
        FUN_0047c830(plVar8,lVar6);
      }
      iVar3 = *(int *)(param_1 + 0xa0);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0xa0) = 0;
        iVar3 = *(int *)(param_1 + 0xb0);
      }
      else {
        plVar9 = *(long **)(param_1 + 0x98);
        iVar7 = 0;
        plVar8 = (long *)0x0;
        plVar10 = plVar9 + (long)iVar3 + -1;
        do {
          while (lVar5 == *plVar10) {
            iVar7 = iVar7 + 1;
            plVar1 = plVar8;
            if (plVar8 != (long *)0x0) {
              plVar9 = plVar10 + 1;
              *plVar10 = *plVar8;
              plVar1 = (long *)0x0;
              plVar10 = plVar8;
            }
            plVar8 = plVar1;
            iVar3 = iVar3 + -1;
            plVar10 = plVar10 + -1;
            if (iVar3 == 0) goto LAB_00477e88;
          }
          plVar1 = plVar9;
          if (plVar8 != (long *)0x0) {
            plVar1 = plVar10 + 1;
            plVar10 = plVar8;
          }
          plVar8 = plVar10;
          iVar3 = iVar3 + -1;
          plVar10 = plVar1;
        } while (iVar3 != 0);
LAB_00477e88:
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) - iVar7;
        iVar3 = *(int *)(param_1 + 0xb0);
      }
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0xb0) = 0;
        FUN_0043d590(param_1 + 0xb8);
      }
      iVar3 = *(int *)(param_1 + 0xf0);
      if (iVar3 != 0) {
        if (0 < iVar3) {
          lVar5 = *(long *)(param_1 + 0xe8) + (long)iVar3 * 0x10;
          do {
            lVar5 = lVar5 + -0x10;
            FUN_0043be10(lVar5);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        *(undefined4 *)(param_1 + 0xf0) = 0;
        FUN_0043d590(param_1 + 0xf8);
      }
    }
  }
  return;
}

