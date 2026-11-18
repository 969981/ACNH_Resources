
void FUN_037203a0(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 *puVar9;
  
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar4 = 0;
    puVar9 = *(undefined8 **)(param_1 + 0x20);
    do {
      puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x18) + lVar4 * 8);
      lVar4 = lVar4 + 1;
      *puVar7 = puVar9;
      *(undefined8 **)(param_1 + 0x20) = puVar7;
      puVar9 = puVar7;
    } while (lVar4 < *(int *)(param_1 + 0x10));
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0 < iVar1) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      if (iVar6 < *(int *)(param_1 + 0x14)) {
        piVar8 = *(int **)(param_1 + 0x20);
        if (piVar8 != (int *)0x0) {
          *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)piVar8;
        }
        *piVar8 = iVar5;
        iVar6 = *(int *)(param_1 + 0x10);
        if (iVar6 < *(int *)(param_1 + 0x14)) {
          *(int **)(*(long *)(param_1 + 0x18) + (long)iVar6 * 8) = piVar8;
          iVar6 = *(int *)(param_1 + 0x10) + 1;
          *(int *)(param_1 + 0x10) = iVar6;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar1 != iVar5);
  }
  if (0 < *(int *)(param_1 + 0xe0)) {
    lVar4 = 0;
    do {
      puVar9 = *(undefined8 **)(*(long *)(param_1 + 0xe8) + lVar4 * 8);
      (**(code **)*puVar9)(puVar9);
      lVar4 = lVar4 + 1;
      *puVar9 = *(undefined8 *)(param_1 + 0xf0);
      *(undefined8 **)(param_1 + 0xf0) = puVar9;
    } while (lVar4 < *(int *)(param_1 + 0xe0));
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (0 < *(int *)(param_1 + 0x1008)) {
    lVar4 = 0;
    puVar9 = *(undefined8 **)(param_1 + 0x1018);
    do {
      puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x1010) + lVar4 * 8);
      lVar4 = lVar4 + 1;
      *puVar7 = puVar9;
      *(undefined8 **)(param_1 + 0x1018) = puVar7;
      puVar9 = puVar7;
    } while (lVar4 < *(int *)(param_1 + 0x1008));
  }
  uVar2 = *(uint *)(&DAT_00001230 + param_1);
  *(undefined4 *)(param_1 + 0x1008) = 0;
  uVar3 = uVar2 & 0xffff7ffe;
  *(uint *)(&DAT_00001230 + param_1) = uVar3;
  if ((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) && ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0))
  {
    uVar3 = uVar2 & 0xffff7efe;
    *(uint *)(&DAT_00001230 + param_1) = uVar3;
  }
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x6efba09b) {
    if ((((DAT_05467d70 == 5) || (DAT_05467d70 == 7)) || (DAT_05467d70 == 8)) ||
       ((DAT_05467d70 == 6 || (DAT_05467d70 == 9)))) goto LAB_037205ac;
  }
  *(uint *)(&DAT_00001230 + param_1) = uVar3 & 0xffff7fbe;
LAB_037205ac:
  *(undefined8 *)(param_1 + 0x1460) = 0;
  *(undefined4 *)(param_1 + 0x123c8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1468) = 0;
  lVar4 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x140);
  if (*(long *)(lVar4 + 0x6b0) != 0) {
    nn::os::LockMutex((MutexType *)(lVar4 + 0x5b8));
    *(undefined8 *)(lVar4 + 0x584) = 0;
    nn::os::UnlockMutex((MutexType *)(lVar4 + 0x5b8));
    *(undefined8 *)(lVar4 + 0x520) = 0;
    *(undefined4 *)(lVar4 + 0x51c) = 0xffffffff;
    *(undefined1 *)(lVar4 + 0x528) = 0;
    *(undefined8 *)(lVar4 + 0x540) = 0;
    *(undefined4 *)(lVar4 + 0x53c) = 0xffffffff;
    *(undefined1 *)(lVar4 + 0x548) = 0;
    *(undefined8 *)(lVar4 + 0x560) = 0;
    *(undefined4 *)(lVar4 + 0x55c) = 0xffffffff;
    *(undefined1 *)(lVar4 + 0x568) = 0;
    *(undefined8 *)(lVar4 + 0x5e0) = 0;
    *(undefined4 *)(lVar4 + 0x5dc) = 0xffffffff;
    *(undefined1 *)(lVar4 + 0x5e8) = 0;
    *(undefined1 *)(lVar4 + 0x16b) = 0;
    *(undefined8 *)(lVar4 + 0x5f8) = 0xffffffffffffffff;
  }
  if ((DAT_05739190 != 0) &&
     (puVar9 = *(undefined8 **)(DAT_05739190 + 0x460), puVar9 != (undefined8 *)0x0)) {
    puVar7 = (undefined8 *)*puVar9;
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0x800;
    }
    if ((undefined4 *)puVar9[1] != (undefined4 *)0x0) {
      *(undefined4 *)puVar9[1] = 0;
    }
    if ((undefined4 *)puVar9[2] != (undefined4 *)0x0) {
      *(undefined4 *)puVar9[2] = 0;
    }
    puVar7 = (undefined8 *)puVar9[3];
    if (puVar7 != (undefined8 *)0x0) {
      *(undefined1 *)(puVar7 + 3) = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
    }
    puVar9 = (undefined8 *)puVar9[4];
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = 0;
      *(undefined4 *)(puVar9 + 1) = 0;
    }
  }
  if (0 < *(int *)(param_1 + 0x123d0)) {
    lVar4 = 0;
    do {
      puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x123d8) + lVar4 * 8);
      (**(code **)*puVar9)(puVar9);
      lVar4 = lVar4 + 1;
      *puVar9 = *(undefined8 *)(param_1 + 0x123e0);
      *(undefined8 **)(param_1 + 0x123e0) = puVar9;
    } while (lVar4 < *(int *)(param_1 + 0x123d0));
  }
  *(undefined4 *)(param_1 + 0x123d0) = 0;
  *(undefined2 *)(param_1 + 0x17210) = 0;
  return;
}

