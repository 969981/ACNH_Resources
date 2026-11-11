
long FUN_00514bd0(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  lVar3 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar3 != 0) {
    FUN_00443a00(lVar3,"TtRuntime Buffers Prepare");
  }
  if (0 < *(int *)(param_1 + 0x90)) {
    lVar3 = 0;
    plVar8 = (long *)(*(long *)(param_1 + 0x88) + 8);
    do {
      if ((int)plVar8[-1] == *(int *)(param_1 + 0x134)) {
        if (*plVar8 != 0) {
          lVar3 = *(long *)(*plVar8 + 0x18);
          goto LAB_00514c68;
        }
        break;
      }
      lVar3 = lVar3 + 1;
      plVar8 = plVar8 + 2;
    } while (lVar3 < *(int *)(param_1 + 0x90));
  }
  lVar3 = 0;
LAB_00514c68:
  lVar7 = *(long *)(param_1 + 0x18);
  lVar9 = *(long *)(*(long *)(lVar7 + 0x60) + (long)*(int *)(param_1 + 0x134) * 8);
  uVar6 = (ulong)*(uint *)(lVar9 + 0x28);
  if ((int)*(uint *)(lVar9 + 0x28) < 1) {
    uVar2 = 0;
  }
  else {
    lVar10 = 0;
    uVar2 = 0;
    uVar1 = uVar2;
    if (lVar3 == 0) {
      while( true ) {
        plVar8 = *(long **)(*(long *)(lVar7 + 0x50) +
                           (long)*(int *)(*(long *)(lVar9 + 0x20) + lVar10 * 4) * 8);
        uVar6 = (**(code **)(*plVar8 + 0x48))(plVar8,param_2,param_1,param_3);
        param_3 = param_3 + (uVar6 & 0xffffffff);
        uVar2 = (**(code **)(*plVar8 + 0x50))(plVar8,param_1);
        uVar6 = (ulong)*(int *)(lVar9 + 0x28);
        lVar10 = lVar10 + 1;
        if (uVar2 <= uVar1) {
          uVar2 = uVar1;
        }
        if ((long)uVar6 <= lVar10) break;
        lVar7 = *(long *)(param_1 + 0x18);
        uVar1 = uVar2;
      }
    }
    else {
      do {
        if (0 < *(int *)(*(long *)(lVar3 + 0x18) + lVar10 * 4)) {
          plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 0x18) + 0x50) +
                             (long)*(int *)(*(long *)(lVar9 + 0x20) + lVar10 * 4) * 8);
          uVar6 = (**(code **)(*plVar8 + 0x48))(plVar8,param_2,param_1,param_3);
          param_3 = param_3 + (uVar6 & 0xffffffff);
          uVar1 = (**(code **)(*plVar8 + 0x50))(plVar8,param_1);
          uVar6 = (ulong)*(uint *)(lVar9 + 0x28);
          if (uVar1 <= uVar2) {
            uVar1 = uVar2;
          }
          uVar2 = uVar1;
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)uVar6);
    }
    if (0 < (int)uVar6) {
      lVar7 = 0;
      if (lVar3 == 0) {
        do {
          plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 0x18) + 0x50) +
                             (long)*(int *)(*(long *)(lVar9 + 0x20) + lVar7 * 4) * 8);
          (**(code **)(*plVar8 + 0x58))(plVar8,param_1,param_3);
          lVar7 = lVar7 + 1;
        } while (lVar7 < *(int *)(lVar9 + 0x28));
      }
      else {
        do {
          if (0 < *(int *)(*(long *)(lVar3 + 0x18) + lVar7 * 4)) {
            plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 0x18) + 0x50) +
                               (long)*(int *)(*(long *)(lVar9 + 0x20) + lVar7 * 4) * 8);
            (**(code **)(*plVar8 + 0x58))(plVar8,param_1,param_3);
            uVar6 = (ulong)*(uint *)(lVar9 + 0x28);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)uVar6);
      }
    }
  }
  plVar8 = (long *)(lVar9 + 0x30);
  if (lVar3 != 0) {
    plVar8 = (long *)(lVar3 + 0x28);
  }
  iVar5 = (int)plVar8[1];
  param_3 = param_3 + (ulong)uVar2;
  if (0 < iVar5) {
    lVar7 = 0;
    lVar3 = 0;
    do {
      plVar4 = *(long **)(*(long *)(param_1 + 0x20) + (long)*(int *)(*plVar8 + lVar7) * 8);
      if (plVar4 != (long *)0x0) {
        param_3 = (**(code **)(*plVar4 + 0x28))(plVar4,param_3);
        iVar5 = (int)plVar8[1];
      }
      lVar3 = lVar3 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar3 < iVar5);
  }
  lVar3 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar3 != 0) {
    FUN_00443a70(lVar3,&DAT_04085310);
  }
  return param_3;
}

