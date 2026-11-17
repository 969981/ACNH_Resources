
void FUN_02a88c4c(undefined1 *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  *(undefined4 *)(param_1 + 0x144) = 0;
  if (param_1[0x14c] != '\0') {
    param_1[0x14c] = 0;
  }
  puVar4 = PTR_DAT_04bb37e0;
  *(undefined8 *)(param_1 + 0x7c) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  uVar1 = *(undefined4 *)puVar4;
  uVar2 = *(undefined4 *)(puVar4 + 4);
  *(undefined2 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x66) = 0;
  param_1[0x84] = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xa4) = 0xffff;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  puVar4 = PTR_DAT_04bbc1a0;
  *(undefined8 *)(param_1 + 0xa6) = 0;
  if (param_1[0xe8] != '\0') {
    param_1[0xe8] = 0;
    *(undefined **)(param_1 + 0xb0) = puVar4 + 0x10;
  }
  if (param_1[0x130] != '\0') {
    param_1[0x130] = 0;
    *(undefined **)(param_1 + 0xf0) = puVar4 + 0x10;
  }
  if (param_1[0x188] != '\0') {
    (*(code *)**(undefined8 **)(param_1 + 0x160))(param_1 + 0x160);
    param_1[0x188] = 0;
  }
  if (param_1[0x1a0] != '\0') {
    (*(code *)**(undefined8 **)(param_1 + 400))(param_1 + 400);
    param_1[0x1a0] = 0;
  }
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  puVar5 = PTR_DAT_04bb3238;
  uVar1 = *(undefined4 *)PTR_DAT_04bb3238;
  *(undefined4 *)(param_1 + 0x154) = uVar1;
  *(undefined4 *)(param_1 + 0x158) = uVar1;
  nn::os::LockMutex((MutexType *)(param_1 + 0x2f8));
  puVar4 = PTR_DAT_04bb27c0;
  uVar3 = *(uint *)(param_1 + 0x2cc);
  if ((uVar3 != 0) && (lVar8 = *(long *)PTR_DAT_04bb27c0, lVar8 != 0)) {
    lVar9 = *(long *)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) + ((ulong)(uVar3 >> 0x11) & 0x7ff8));
    if ((lVar9 == 0) ||
       (((*(uint *)(lVar9 + 0x248) >> 1 & 1) != 0 || (*(uint *)(lVar9 + 0x230) != uVar3)))) {
      lVar9 = 0;
    }
    if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      lVar8 = *(long *)puVar4;
      iVar6 = (**(code **)(*plVar7 + 0x60))();
      if (((iVar6 < 0x11) ||
          ((*(uint *)(lVar8 + 0x5e8) < 5 &&
           ((1 << (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 0x1aU) != 0)))) && (lVar9 != 0)) {
        FUN_006fb3d0(lVar9);
        *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)puVar5;
      }
    }
  }
  uVar3 = *(uint *)(param_1 + 0x2d0);
  if ((uVar3 != 0) && (lVar8 = *(long *)puVar4, lVar8 != 0)) {
    lVar9 = *(long *)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) + ((ulong)(uVar3 >> 0x11) & 0x7ff8));
    if ((lVar9 == 0) ||
       (((*(uint *)(lVar9 + 0x248) >> 1 & 1) != 0 || (*(uint *)(lVar9 + 0x230) != uVar3)))) {
      lVar9 = 0;
    }
    if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      lVar8 = *(long *)puVar4;
      iVar6 = (**(code **)(*plVar7 + 0x60))();
      if (((iVar6 < 0x11) ||
          ((*(uint *)(lVar8 + 0x5e8) < 5 &&
           ((1 << (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 0x1aU) != 0)))) && (lVar9 != 0)) {
        FUN_006fb3d0(lVar9);
        *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)puVar5;
      }
    }
  }
  if (param_1[0x2a4] != '\0') {
    param_1[0x2a4] = 0;
  }
  if (param_1[0x2c8] != '\0') {
    param_1[0x2c8] = 0;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x2f8));
  if ((*(ushort *)(param_1 + 0x280) >> 7 & 1) != 0) {
    *(ushort *)(param_1 + 0x280) = *(ushort *)(param_1 + 0x280) & 0xff7f;
    if (DAT_055cdb30 == -0x24a26848) {
      lVar8 = *(long *)PTR_DAT_04bb5008;
      if (*(char *)(lVar8 + 0x2350) != '\0') {
        *(char *)(lVar8 + 0x2350) = '\0';
        *(undefined8 *)(lVar8 + 0x233c) = 0;
      }
      if (*(char *)(lVar8 + 0x2380) != '\0') {
        *(undefined1 *)(lVar8 + 0x2380) = 0;
        *(undefined8 *)(lVar8 + 0x236c) = 0;
      }
    }
    FUN_012e7a90(param_1 + 800);
  }
  if ((param_2 & 1) != 0) {
    *param_1 = 0;
    *(undefined2 *)(param_1 + 0x280) = 0;
  }
  return;
}

