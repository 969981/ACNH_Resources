
byte FUN_03be6d30(long *param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  byte bVar9;
  long lVar10;
  
  uVar6 = *(uint *)(param_1 + 1);
  if ((uVar6 >> 6 & 1) != 0) {
    if ((uVar6 >> 4 & 1) == 0) {
      FUN_03be69e0(param_1,param_1[6]);
      uVar6 = *(uint *)(param_1 + 1);
    }
    *(uint *)(param_1 + 1) = uVar6 & 0xffffffbf;
  }
  (**(code **)(*param_1 + 0x30))(param_1);
  if ((long *)param_1[0xb] != (long *)0x0) {
    uVar3 = (**(code **)(*(long *)param_1[0xb] + 0x28))();
    if ((uVar3 & 1) == 0) {
      bVar9 = 0;
      iVar2 = (int)param_1[0x11];
      goto joined_r0x03be6ed4;
    }
    plVar4 = (long *)param_1[0xb];
    param_1[0xb] = 0;
    (**(code **)(*plVar4 + 0x18))();
  }
  bVar9 = 1;
  iVar2 = (int)param_1[0x11];
joined_r0x03be6ed4:
  if (iVar2 == 0) {
    bVar1 = true;
  }
  else if ((long *)param_1[0x10] == param_1 + 0xf) {
    bVar1 = false;
  }
  else {
    lVar7 = (long)*(int *)((long)param_1 + 0x8c);
    plVar4 = (long *)(param_1[0x10] - lVar7);
    lVar10 = (long)plVar4 + lVar7;
    do {
      lVar10 = *(long *)(lVar10 + 8);
      iVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
      if (iVar2 != 0) {
        plVar8 = (long *)((long)plVar4 + (long)*(int *)((long)param_1 + 0x8c));
        if (*plVar8 != 0) {
          *(long *)(*plVar8 + 8) = plVar8[1];
        }
        if ((long *)plVar8[1] != (long *)0x0) {
          *(long *)plVar8[1] = *plVar8;
        }
        *plVar8 = 0;
        plVar8[1] = 0;
        *(int *)(param_1 + 0x11) = (int)param_1[0x11] + -1;
        lVar5 = (**(code **)(**(long **)(*(long *)(param_1[5] + 0x30) + 0x18) + 0x20))();
        (**(code **)(*plVar4 + 0x60))(plVar4);
        if ((*(uint *)(plVar4 + 6) & 0xfffffffe) != 4) {
          (**(code **)(*plVar4 + 0x40))(plVar4);
        }
        plVar4[5] = 0;
        plVar4[6] = 0;
        plVar4[4] = 0;
        plVar8 = *(long **)(lVar5 + 0xb8);
        (**(code **)*plVar4)(plVar4);
        (**(code **)(*plVar8 + 0x38))(plVar8,plVar4);
      }
      plVar4 = (long *)(lVar10 - lVar7);
    } while (plVar4 != (long *)((long)(param_1 + 0xf) - lVar7));
    bVar1 = (int)param_1[0x11] == 0;
  }
  return bVar9 & bVar1;
}

