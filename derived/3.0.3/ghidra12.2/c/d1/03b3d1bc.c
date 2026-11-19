
undefined1  [16] FUN_03b3d1bc(long param_1,long param_2,long param_3,int *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  puVar3 = PTR_DAT_04bc3ee8;
  if (**(char **)PTR_DAT_04bc3ee8 == '\0') {
    if (param_4 == (int *)0x0) {
LAB_03b3d2d8:
      uVar5 = 0;
      lVar10 = 0;
      goto LAB_03b3d3f4;
    }
    iVar4 = 2;
  }
  else {
    if ((*(byte *)(param_2 + 0x11) >> 5 & 1) == 0) {
      uVar5 = 0;
      if (*(long *)(param_2 + 8) == 0) {
        lVar10 = 0;
        goto LAB_03b3d3f4;
      }
      lVar10 = 0;
      if (*(char *)(param_2 + 0x10) == -1) goto LAB_03b3d3f4;
    }
    lVar10 = FUN_03b3e6e0(*(undefined8 *)(*(char **)PTR_DAT_04bc3ee8 + 8));
    if (lVar10 != 0) {
      iVar4 = FUN_03b45970(lVar10,param_2,param_3);
      if (iVar4 < 1) {
        *(undefined1 *)(lVar10 + 0x1a4) = *(undefined1 *)(param_1 + 0xfc);
        *(undefined1 *)(lVar10 + 0x1a5) = *(undefined1 *)(param_1 + 0xfd);
        if (*(char *)(param_1 + 0xfc) != '\0') {
          uVar1 = *(undefined8 *)(param_1 + 0x100);
          uVar9 = *(undefined8 *)(param_1 + 0x110);
          *(undefined8 *)(lVar10 + 0x1b0) = *(undefined8 *)(param_1 + 0x108);
          *(undefined8 *)(lVar10 + 0x1b8) = uVar9;
          *(undefined8 *)(lVar10 + 0x1a8) = uVar1;
          uVar1 = *(undefined8 *)(param_1 + 0x118);
          uVar9 = *(undefined8 *)(param_1 + 0x120);
          uVar2 = *(undefined8 *)(param_1 + 0x130);
          *(undefined8 *)(lVar10 + 0x1d0) = *(undefined8 *)(param_1 + 0x128);
          *(undefined8 *)(lVar10 + 0x1d8) = uVar2;
          *(undefined8 *)(lVar10 + 0x1c0) = uVar1;
          *(undefined8 *)(lVar10 + 0x1c8) = uVar9;
        }
        if (param_3 != 0) {
          *(ushort *)(lVar10 + 0x1d0) =
               *(ushort *)(lVar10 + 0x1d0) & 0xfffd | (ushort)*(byte *)(param_3 + 0x12) << 1;
        }
        nn::os::LockMutex((MutexType *)(param_1 + 0x88));
        plVar7 = *(long **)(param_1 + 0x60);
        if (plVar7 != (long *)0x0) {
          plVar8 = (long *)(*(int *)((long)plVar7 + 0x14) + lVar10);
          lVar11 = *plVar7;
          *plVar7 = (long)plVar8;
          *plVar8 = lVar11;
          plVar8[1] = (long)plVar7;
          if (lVar11 != 0) {
            *(long **)(lVar11 + 8) = plVar8;
          }
          *(int *)(plVar7 + 2) = (int)plVar7[2] + 1;
        }
        lVar11 = *(long *)puVar3;
        *(long *)(lVar10 + 0x110) = param_1;
        if (lVar11 == 0) {
          plVar7 = (long *)0x0;
        }
        else {
          plVar7 = *(long **)(lVar11 + 8);
        }
        nn::os::LockMutex((MutexType *)(plVar7 + 0x11));
        plVar8 = (long *)(*(int *)((long)plVar7 + 0x14) + param_1);
        if (plVar8[1] == 0 && *plVar8 == 0) {
          lVar11 = *plVar7;
          *plVar7 = (long)plVar8;
          *plVar8 = lVar11;
          plVar8[1] = (long)plVar7;
          if (lVar11 != 0) {
            *(long **)(lVar11 + 8) = plVar8;
          }
          *(int *)(plVar7 + 2) = (int)plVar7[2] + 1;
        }
        nn::os::UnlockMutex((MutexType *)(plVar7 + 0x11));
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x88));
        uVar6 = *(uint *)(lVar10 + 0x10);
        if (param_4 != (int *)0x0) {
          iVar4 = 0;
          goto LAB_03b3d3ec;
        }
      }
      else {
        lVar11 = *(long *)(*(long *)puVar3 + 8);
        nn::os::LockMutex((MutexType *)(lVar11 + 200));
        *(undefined4 *)(lVar10 + 0x10) = 0;
        plVar7 = (long *)(*(int *)(lVar11 + 0x54) + lVar10);
        lVar10 = *plVar7;
        plVar8 = (long *)plVar7[1];
        if (plVar8 != (long *)0x0 || lVar10 != 0) {
          if (lVar10 != 0) {
            *(long **)(lVar10 + 8) = plVar8;
            plVar8 = (long *)plVar7[1];
          }
          if (plVar8 != (long *)0x0) {
            *plVar8 = *plVar7;
          }
          *plVar7 = 0;
          plVar7[1] = 0;
          *(int *)(lVar11 + 0x50) = *(int *)(lVar11 + 0x50) + -1;
        }
        nn::os::UnlockMutex((MutexType *)(lVar11 + 200));
        uVar6 = 0;
        lVar10 = 0;
        if (param_4 != (int *)0x0) {
LAB_03b3d3ec:
          *param_4 = iVar4;
        }
      }
      uVar5 = (ulong)uVar6;
      goto LAB_03b3d3f4;
    }
    if (param_4 == (int *)0x0) goto LAB_03b3d2d8;
    iVar4 = 7;
  }
  uVar5 = 0;
  *param_4 = iVar4;
  lVar10 = 0;
LAB_03b3d3f4:
  auVar12._8_8_ = uVar5;
  auVar12._0_8_ = lVar10;
  return auVar12;
}

