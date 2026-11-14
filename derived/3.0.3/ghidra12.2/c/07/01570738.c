
long FUN_01570738(long param_1,uint *param_2,undefined8 param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if (*param_2 == 0) {
    return 0;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x2dd0));
  if (*param_2 < *(uint *)(param_1 + 0x38)) {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x40) + (long)(int)*param_2 * 8);
  }
  else {
    uVar7 = 0;
  }
  uVar8 = *(undefined8 *)(DAT_05231900 + 0x88);
  iVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0x40) + (long)(int)*param_2 * 8) + 0x30))();
  lVar2 = FUN_015ef730(uVar8,uVar7,param_3,param_4,1);
  if (iVar1 == 2) {
    if (lVar2 == 0) goto LAB_015709c0;
    if (param_5 != 0xe) {
      lVar4 = *(long *)(*(long *)(param_1 + 8) + 8);
      if (lVar4 == 0) {
        uVar9 = 0x3f800000;
        uVar10 = 0x3f800000;
        uVar11 = 0x3f800000;
        uVar12 = 0x3f800000;
      }
      else {
        if (param_5 < *(uint *)(lVar4 + 0x6248)) {
          lVar4 = *(long *)(*(long *)(lVar4 + 0x6250) + (long)(int)param_5 * 8);
        }
        else {
          lVar4 = 0;
        }
        puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x158) + 0xf0))(lVar4 + 0x158);
        uVar9 = *puVar3;
        uVar10 = puVar3[1];
        uVar11 = puVar3[2];
        uVar12 = puVar3[3];
      }
      lVar4 = *(long *)(lVar2 + 0x10);
      puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x210) + 0xf0))(lVar4 + 0x210);
      *puVar3 = uVar9;
      puVar3[1] = uVar10;
      puVar3[2] = uVar11;
      puVar3[3] = uVar12;
      *(uint *)(lVar4 + 0x230) = *(uint *)(lVar4 + 0x230) | 0x1000000;
    }
    iVar1 = *(int *)(param_1 + 0x7b8);
    if (iVar1 < *(int *)(param_1 + 0x7bc)) {
      piVar5 = (int *)(param_1 + 0x7b8);
      plVar6 = (long *)(param_1 + 0x7c0);
LAB_0157097c:
      *(long *)(*plVar6 + (long)iVar1 * 8) = lVar2;
      *piVar5 = *piVar5 + 1;
    }
  }
  else {
    if (lVar2 == 0) goto LAB_015709c0;
    if (param_5 != 0xe) {
      lVar4 = *(long *)(*(long *)(param_1 + 8) + 8);
      if (lVar4 == 0) {
        uVar9 = 0x3f800000;
        uVar10 = 0x3f800000;
        uVar11 = 0x3f800000;
        uVar12 = 0x3f800000;
      }
      else {
        if (param_5 < *(uint *)(lVar4 + 0x6248)) {
          lVar4 = *(long *)(*(long *)(lVar4 + 0x6250) + (long)(int)param_5 * 8);
        }
        else {
          lVar4 = 0;
        }
        puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x158) + 0xf0))(lVar4 + 0x158);
        uVar9 = *puVar3;
        uVar10 = puVar3[1];
        uVar11 = puVar3[2];
        uVar12 = puVar3[3];
      }
      lVar4 = *(long *)(lVar2 + 0x10);
      puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x210) + 0xf0))(lVar4 + 0x210);
      *puVar3 = uVar9;
      puVar3[1] = uVar10;
      puVar3[2] = uVar11;
      puVar3[3] = uVar12;
      *(uint *)(lVar4 + 0x230) = *(uint *)(lVar4 + 0x230) | 0x1000000;
    }
    if (*(char *)(*(long *)(DAT_05231900 + 0x70) + 0xd0) != '\0') {
      *(uint *)(lVar2 + 0x38) = *(uint *)(lVar2 + 0x38) & 0xffffffef;
    }
    iVar1 = *(int *)(param_1 + 0x168);
    if (iVar1 < *(int *)(param_1 + 0x16c)) {
      piVar5 = (int *)(param_1 + 0x168);
      plVar6 = (long *)(param_1 + 0x170);
      goto LAB_0157097c;
    }
  }
  lVar4 = *(long *)(lVar2 + 0x10);
  puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x250) + 0xf0))(lVar4 + 0x250);
  *puVar3 = 0;
  *(uint *)(lVar4 + 0x270) = *(uint *)(lVar4 + 0x270) | 0x1000000;
  *(uint *)(lVar2 + 0x38) = *(uint *)(lVar2 + 0x38) | 0x40;
LAB_015709c0:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x2dd0));
  return lVar2;
}

