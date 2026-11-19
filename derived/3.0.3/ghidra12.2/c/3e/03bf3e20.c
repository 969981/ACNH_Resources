
void FUN_03bf3e20(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  
  lVar2 = (**(code **)(**(long **)(param_1[6] + 0x18) + 0x20))();
  if (*(char *)(lVar2 + 0x78) == '\0') {
    return;
  }
  plVar3 = (long *)(**(code **)(**(long **)(param_1[6] + 0x18) + 0x20))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x10))();
  if ((param_1[4] != 0) && (*(char *)(param_1[4] + 0x20) != '\0')) goto LAB_03bf4068;
  plVar10 = *(long **)(param_1[6] + 0x18);
  if (plVar10[3] == 0) {
LAB_03bf3ecc:
    lVar2 = (**(code **)(*plVar10 + 0x20))(plVar10);
    if ((plVar10[3] == 0) || (DataMemoryBarrier(2,1), *(char *)(plVar10[3] + 0xb0) == '\0')) {
      plVar11 = *(long **)(lVar2 + 0x80);
      if ((plVar11 == (long *)0x0) ||
         (uVar5 = (**(code **)(*plVar11 + 0x78))(plVar11), uVar5 >> 10 < 5)) {
        plVar11 = param_2;
      }
      FUN_03bf5064(plVar10,plVar11);
      lVar2 = param_1[4];
    }
    else {
      DataMemoryBarrier(2,1);
      lVar2 = param_1[4];
    }
  }
  else {
    DataMemoryBarrier(2,1);
    if (*(char *)(plVar10[3] + 0xb0) == '\0') {
      plVar10 = *(long **)(param_1[6] + 0x18);
      goto LAB_03bf3ecc;
    }
    DataMemoryBarrier(2,1);
    lVar2 = param_1[4];
  }
  if (lVar2 == 0) {
    lVar2 = (**(code **)(*param_1 + 0x40))(param_1,param_2);
    param_1[4] = lVar2;
    FUN_03bf4190(param_1,0,param_2);
    FUN_03bf12d0(param_1 + 0x10,0,param_2);
  }
  lVar2 = (**(code **)(**(long **)(param_1[6] + 0x18) + 0x20))();
  lVar4 = param_1[6];
  lVar6 = *(long *)(lVar4 + 0x18);
  plVar10 = (long *)(lVar6 + 0x18);
  plVar11 = plVar10 + *(uint *)(lVar6 + 0x10);
  if (1 < *(uint *)(lVar6 + 0x10)) {
    plVar11 = plVar10;
  }
  if ((*plVar11 != 0) && (DataMemoryBarrier(2,1), *(char *)(*plVar11 + 0xb0) != '\0')) {
    DataMemoryBarrier(2,1);
    plVar11 = plVar10 + *(uint *)(lVar6 + 0x10);
    if (1 < *(uint *)(lVar6 + 0x10)) {
      plVar11 = plVar10;
    }
    uVar1 = *(uint *)(*(long *)(*plVar11 + 8) + 0x20);
    uVar5 = (ulong)uVar1;
    if (uVar1 != 0) {
      piVar7 = (int *)(*(long *)(*plVar11 + 0x50) + 4);
      do {
        if (*piVar7 != 0) {
          uVar1 = *(uint *)(lVar2 + 0x90);
          if ((int)uVar1 < 1) goto LAB_03bf402c;
          lVar8 = *(long *)(lVar2 + 0x98);
          lVar6 = 0;
          goto LAB_03bf4014;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
  }
LAB_03bf4068:
  if (((*(int *)(*(long *)(param_1[6] + 0x18) + 0x10) == 1) &&
      (lVar2 = *(long *)(*(long *)(param_1[6] + 0x18) + 0x20), lVar2 != 0)) &&
     (DataMemoryBarrier(2,1), *(char *)(lVar2 + 0xb0) != '\0')) {
    DataMemoryBarrier(2,1);
    lVar2 = (**(code **)(**(long **)(param_1[6] + 0x18) + 0x20))();
    uVar9 = *(undefined8 *)(lVar2 + 0xc0);
    if (param_1[5] != 0) {
      (**(code **)(*param_1 + 0x48))(param_1,param_1[5],1);
    }
    lVar2 = (**(code **)(*param_1 + 0x40))(param_1,uVar9);
    param_1[5] = lVar2;
    FUN_03bf4190(param_1,1,uVar9);
    FUN_03bf12d0(param_1 + 0x10,1,uVar9);
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) | 1;
  }
  (**(code **)(*plVar3 + 0x18))(plVar3);
  lVar2 = param_1[6];
  if (*(short *)(lVar2 + 0x44) != 0) {
    uVar5 = 0;
    do {
      lVar2 = *(long *)(*(long *)(lVar2 + 0x48) + uVar5 * 8);
      if ((lVar2 != 0) && ((uVar1 = *(uint *)(lVar2 + 0x60), uVar1 < 2 || (uVar1 == 2)))) {
        *(undefined4 *)(param_1[0xf] + uVar5 * 4) = 0;
      }
      lVar2 = param_1[6];
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)(lVar2 + 0x44));
  }
  return;
  while (lVar6 = lVar6 + 8, (ulong)uVar1 * 8 != lVar6) {
LAB_03bf4014:
    if (*(long *)(lVar8 + lVar6) == lVar4) {
      if ((lVar6 != 0x7fffffff8) || (*(int *)(lVar2 + 0x94) <= (int)uVar1)) goto LAB_03bf4068;
      goto LAB_03bf4058;
    }
  }
LAB_03bf402c:
  if ((int)uVar1 < *(int *)(lVar2 + 0x94)) {
    lVar8 = *(long *)(lVar2 + 0x98);
LAB_03bf4058:
    *(long *)(lVar8 + (long)(int)uVar1 * 8) = lVar4;
    *(int *)(lVar2 + 0x90) = *(int *)(lVar2 + 0x90) + 1;
  }
  goto LAB_03bf4068;
}

