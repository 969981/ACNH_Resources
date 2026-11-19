
void FUN_03970e10(long param_1,byte param_2)

{
  uint uVar1;
  ushort uVar2;
  uint *puVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x4f8));
  iVar12 = *(int *)(param_1 + 0x20);
  if (iVar12 == 0) {
    uVar14 = 0;
  }
  else {
    lVar15 = *(long *)(param_1 + 0x28);
    uVar14 = 0;
    uVar16 = 0;
    do {
      lVar18 = *(long *)(lVar15 + (-(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3));
      if ((lVar18 != 0) && ((*(ushort *)(lVar18 + 0x88) >> 5 & 1) != 0)) {
        *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) | 1;
        uVar6 = *(ushort *)(lVar18 + 0x88);
        uVar2 = uVar6 & 0xffcf;
        if ((uVar6 & 0x800) == 0) {
          uVar2 = uVar6;
        }
        uVar14 = uVar14 | (uVar6 & 0x800) >> 0xb;
        *(ushort *)(lVar18 + 0x88) = uVar2 & 0xffdf;
      }
      uVar17 = uVar16 + 1;
      uVar16 = uVar17 & 0xffffffff;
    } while (iVar12 != (int)uVar17);
  }
  if ((*(byte *)(param_1 + 400) & 1) == 0) {
    iVar12 = *(int *)(param_1 + 0x10);
  }
  else {
    iVar12 = *(int *)(param_1 + 0x20);
    if (iVar12 != 0) {
      lVar15 = *(long *)(param_1 + 0x28);
      uVar16 = 0;
      do {
        lVar18 = *(long *)(lVar15 + (-(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3));
        if (((lVar18 != 0 & uVar14) == 1) && ((*(ushort *)(lVar18 + 0x88) >> 0xb & 1) == 0)) {
          *(ushort *)(lVar18 + 0x88) = *(ushort *)(lVar18 + 0x88) | 0x10;
        }
        uVar17 = uVar16 + 1;
        uVar16 = uVar17 & 0xffffffff;
      } while (iVar12 != (int)uVar17);
    }
    iVar12 = *(int *)(param_1 + 0x10);
    *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) & 0xfffffffe;
  }
  if (iVar12 != 0) {
    lVar15 = *(long *)(param_1 + 0x18);
    uVar16 = 0;
    do {
      uVar13 = *(uint *)(param_1 + 400);
      lVar18 = *(long *)(lVar15 + (-(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3));
      uVar14 = *(uint *)(lVar18 + 0x6b0);
      if ((uVar14 >> 9 & 1) != 0) {
        FUN_0396c55c(lVar18,lVar18 + 0x658,lVar18 + 0x660);
        uVar14 = *(uint *)(lVar18 + 0x6b0) & 0xfffffdff;
      }
      *(undefined4 *)(lVar18 + 0x6b8) = 0;
      *(uint *)(lVar18 + 0x6b0) = uVar14 & 0xffffff80 | uVar14 & 0x3f | (uVar13 >> 2 & 1) << 6;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass((undefined4 *)(lVar18 + 0xbc8),0x10);
        if (bVar8) {
          *(undefined4 *)(lVar18 + 0xbc8) = 0;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (*(char *)(*(long *)(lVar15 + (long)(int)uVar16 * 8) + 0x6b0) < '\0') {
        *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) | 0x10;
      }
      puVar9 = PTR_DAT_04bbd510;
      uVar17 = uVar16 + 1;
      uVar16 = uVar17 & 0xffffffff;
    } while (iVar12 != (int)uVar17);
    iVar12 = *(int *)(param_1 + 0x10);
    if (iVar12 != 0) {
      lVar15 = *(long *)(param_1 + 0x18);
      uVar16 = 0;
      do {
        if (((*(uint *)(param_1 + 400) ^ 0xffffffff) & 0x8010) == 0) {
          lVar18 = *(long *)(lVar15 + (-(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3));
          if ((*(byte *)(lVar18 + 0x6b0) >> 2 & 1) != 0) {
            uVar11 = *(undefined8 *)puVar9;
            if (*(long *)(lVar18 + 0x78) != 0) {
              FUN_039499cc(uVar11);
              *(undefined8 *)(lVar18 + 0x78) = 0;
            }
            if (*(long *)(lVar18 + 0x80) != 0) {
              FUN_039499cc(uVar11);
              *(undefined8 *)(lVar18 + 0x80) = 0;
            }
            if (*(long *)(lVar18 + 0x4d0) != 0) {
              FUN_039499cc(uVar11);
              *(undefined8 *)(lVar18 + 0x4d0) = 0;
            }
            *(uint *)(lVar18 + 0x6b0) = *(uint *)(lVar18 + 0x6b0) & 0xfffffffb;
          }
          *(undefined8 *)(lVar18 + 0x78) = 0;
          *(undefined8 *)(lVar18 + 0x80) = 0;
        }
        uVar17 = uVar16 + 1;
        uVar16 = uVar17 & 0xffffffff;
      } while (iVar12 != (int)uVar17);
    }
  }
  if ((((*(uint *)(param_1 + 400) ^ 0xffffffff) & 0x8010) == 0) &&
     (iVar12 = *(int *)(param_1 + 0x10), iVar12 != 0)) {
    lVar15 = *(long *)(param_1 + 0x18);
    uVar16 = 0;
    do {
      lVar18 = *(long *)(lVar15 + (-(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3));
      uVar14 = *(uint *)(param_1 + 400);
      if (*(char *)(lVar18 + 8) == '\0' || (uVar14 & 8) == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = **(undefined8 **)(param_1 + 0x18);
      }
      uVar13 = (uint)*(byte *)(param_1 + 0x53d);
      if ((uVar14 & 0x20) == 0) {
        uVar13 = 0xffffffff;
      }
      FUN_0396c6e0(lVar18,*(undefined4 *)(param_1 + 8),uVar11,*(undefined4 *)(param_1 + 0x188),
                   *(undefined1 *)(param_1 + 0x53c),*(undefined4 *)(param_1 + 0x18c),uVar13,
                   uVar14 >> 0xb & 1,(byte)(uVar14 >> 0xd) & 1);
      uVar17 = uVar16 + 1;
      uVar16 = uVar17 & 0xffffffff;
    } while (iVar12 != (int)uVar17);
  }
  iVar12 = *(int *)(param_1 + 0x518);
  lVar15 = *(long *)(param_1 + 0x520);
  if (iVar12 != 1) {
    lVar15 = 0;
  }
  if (lVar15 != 0) {
    if ((*(byte *)(param_1 + 0x195) & 1) == 0) {
      *(undefined4 *)(param_1 + 0x51c) = 0;
    }
    else if ((((*(uint *)(lVar15 + 8) >> 5 & 1) != 0) && ((*(uint *)(lVar15 + 0x114) >> 2 & 1) != 0)
             ) || (((*(uint *)(lVar15 + 8) >> 2 & 1) != 0 &&
                   ((*(uint *)(lVar15 + 0x114) >> 5 & 1) != 0)))) {
      iVar4 = 0;
      if (*(int *)(param_1 + 0x51c) < 1) {
        iVar4 = *(int *)(param_1 + 0x51c) + 1;
      }
      *(int *)(param_1 + 0x51c) = iVar4;
    }
  }
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar4 != 0) {
    lVar18 = *(long *)(param_1 + 0x28);
    uVar16 = 0;
    do {
      lVar10 = *(long *)(lVar18 + (-(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3));
      if (lVar10 != 0) {
        cVar7 = *(char *)(lVar10 + 0x90);
        if (*(char *)(lVar10 + 0x91) != -1) {
          cVar7 = *(char *)(lVar10 + 0x91);
        }
        uVar14 = (uint)cVar7;
        if ((int)uVar14 < (int)*(uint *)(param_1 + 0x10)) {
          if (*(uint *)(param_1 + 0x10) <= uVar14) {
            uVar14 = 0;
          }
          uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x18) + (long)(int)uVar14 * 8);
        }
        else {
          uVar11 = 0;
        }
        FUN_03969d80(lVar10,uVar11,lVar15,*(undefined4 *)(param_1 + 0x51c),
                     *(undefined1 *)(param_1 + 0x195));
      }
      uVar17 = uVar16 + 1;
      uVar16 = uVar17 & 0xffffffff;
    } while (iVar4 != (int)uVar17);
    iVar12 = *(int *)(param_1 + 0x518);
  }
  if ((iVar12 == 0) && (*(char *)(param_1 + 0x538) != '\0')) {
    *(undefined1 *)(param_1 + 0x538) = 0;
  }
  iVar12 = *(int *)(param_1 + 0x10);
  if (iVar12 != 0) {
    lVar15 = *(long *)(param_1 + 0x18);
    uVar16 = 0;
    do {
      FUN_0396cf20(*(undefined8 *)(lVar15 + (-(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3)),
                   (*(uint *)(param_1 + 400) & 2) == 0,
                   (*(byte *)(param_1 + 0x195) & 8) == 0 && *(char *)(param_1 + 0x538) != '\0');
      uVar17 = uVar16 + 1;
      uVar16 = uVar17 & 0xffffffff;
    } while (iVar12 != (int)uVar17);
  }
  uVar13 = *(uint *)(param_1 + 400);
  param_2 = (uVar13 & 0x300) == 0x100 & param_2;
  *(byte *)(param_1 + 0x172) = *(byte *)(param_1 + 0x172) & 0xfb | (byte)(uVar13 >> 0xe) & 4;
  uVar14 = 0x4000;
  if (param_2 == 0) {
    uVar14 = 0;
  }
  uVar17 = (ulong)*(uint *)(param_1 + 0xf8);
  *(uint *)(param_1 + 400) = uVar14 | uVar13 & 0xffffbfff;
  uVar16 = *(ulong *)(param_1 + 0x178);
  if (*(ulong *)(param_1 + 0x178) < uVar17) {
    *(ulong *)(param_1 + 0x178) = uVar17;
    uVar16 = uVar17;
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  uVar19 = (ulong)*(uint *)(param_1 + 0x108);
  uVar17 = *(ulong *)(param_1 + 0x180);
  if (*(ulong *)(param_1 + 0x180) < uVar19) {
    *(ulong *)(param_1 + 0x180) = uVar19;
    uVar17 = uVar19;
  }
  uVar19 = (ulong)*(uint *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (uVar16 < uVar19) {
    *(ulong *)(param_1 + 0x178) = uVar19;
    uVar16 = uVar19;
  }
  uVar19 = (ulong)*(uint *)(param_1 + 0x130);
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (uVar17 < uVar19) {
    *(ulong *)(param_1 + 0x180) = uVar19;
    uVar17 = uVar19;
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (uVar16 < *(uint *)(param_1 + 0x148)) {
    *(ulong *)(param_1 + 0x178) = (ulong)*(uint *)(param_1 + 0x148);
  }
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (uVar17 < *(uint *)(param_1 + 0x158)) {
    *(ulong *)(param_1 + 0x180) = (ulong)*(uint *)(param_1 + 0x158);
  }
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (param_2 != 0) {
    uVar1 = *(byte *)(param_1 + 0x171) + 1;
    bVar5 = *(byte *)(param_1 + 0x170);
    cVar7 = '\0';
    if (bVar5 != 0) {
      cVar7 = (char)(uVar1 / bVar5);
    }
    *(byte *)(param_1 + 0x171) = (char)uVar1 - cVar7 * bVar5;
  }
  *(uint *)(param_1 + 400) = uVar14 | uVar13 & 0xffffbfef | 0x100;
  *(char *)(param_1 + 0x539) = *(char *)(param_1 + 0x539) + '\x01';
  *(undefined4 *)(param_1 + 0x21c) = 5;
  uVar14 = *(uint *)(param_1 + 0x238);
  if (0 < (int)uVar14) {
    uVar13 = 0;
    do {
      uVar1 = uVar13 + 1;
      if (uVar14 <= uVar13) {
        uVar13 = 0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x240) + (long)(int)uVar13 * 4) = 0;
      uVar14 = *(uint *)(param_1 + 0x238);
      uVar13 = uVar1;
    } while ((int)uVar1 < (int)uVar14);
  }
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  puVar9 = PTR_DAT_04bd0f28;
  uVar16 = (ulong)*(uint *)PTR_DAT_04bd0f28;
  if (*(uint *)PTR_DAT_04bd0f28 != 0) {
    uVar17 = 0;
    do {
      uVar19 = uVar17 + 1;
      uVar14 = (uint)*(byte *)(param_1 + 0x53b);
      if (*(byte *)(param_1 + 0x53b) < 2) {
        uVar14 = 1;
      }
      puVar3 = (uint *)(param_1 + 0x200) + (uVar17 & 0xffffffff);
      if (2 < (uint)uVar17) {
        puVar3 = (uint *)(param_1 + 0x200);
      }
      *puVar3 = uVar14;
      uVar17 = uVar19;
    } while (uVar16 != uVar19);
  }
  *(undefined4 *)(param_1 + 0x2e4) = 5;
  uVar14 = *(uint *)(param_1 + 0x300);
  if (0 < (int)uVar14) {
    uVar13 = 0;
    do {
      uVar1 = uVar13 + 1;
      if (uVar14 <= uVar13) {
        uVar13 = 0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x308) + (long)(int)uVar13 * 4) = 0;
      uVar14 = *(uint *)(param_1 + 0x300);
      uVar13 = uVar1;
    } while ((int)uVar1 < (int)uVar14);
    uVar16 = (ulong)*(uint *)puVar9;
  }
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x288) = 0;
  if ((int)uVar16 != 0) {
    uVar17 = 0;
    do {
      uVar19 = uVar17 + 1;
      uVar14 = (uint)*(byte *)(param_1 + 0x53b);
      if (*(byte *)(param_1 + 0x53b) < 2) {
        uVar14 = 1;
      }
      puVar3 = (uint *)(param_1 + 0x2c8) + (uVar17 & 0xffffffff);
      if (2 < (uint)uVar17) {
        puVar3 = (uint *)(param_1 + 0x2c8);
      }
      *puVar3 = uVar14;
      uVar17 = uVar19;
    } while (uVar16 != uVar19);
  }
  *(undefined4 *)(param_1 + 0x3ac) = 5;
  uVar14 = *(uint *)(param_1 + 0x3c8);
  if (0 < (int)uVar14) {
    uVar13 = 0;
    do {
      uVar1 = uVar13 + 1;
      if (uVar14 <= uVar13) {
        uVar13 = 0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x3d0) + (long)(int)uVar13 * 4) = 0;
      uVar14 = *(uint *)(param_1 + 0x3c8);
      uVar13 = uVar1;
    } while ((int)uVar1 < (int)uVar14);
    uVar16 = (ulong)*(uint *)puVar9;
  }
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined4 *)(param_1 + 0x350) = 0;
  uVar14 = (uint)uVar16;
  if (uVar14 != 0) {
    uVar17 = 0;
    do {
      uVar19 = uVar17 + 1;
      uVar13 = (uint)*(byte *)(param_1 + 0x53b);
      if (*(byte *)(param_1 + 0x53b) < 2) {
        uVar13 = 1;
      }
      puVar3 = (uint *)(param_1 + 0x390) + (uVar17 & 0xffffffff);
      if (2 < (uint)uVar17) {
        puVar3 = (uint *)(param_1 + 0x390);
      }
      *puVar3 = uVar13;
      uVar17 = uVar19;
    } while (uVar16 != uVar19);
  }
  *(undefined4 *)(param_1 + 0x474) = 5;
  uVar13 = *(uint *)(param_1 + 0x490);
  if (0 < (int)uVar13) {
    uVar14 = 0;
    do {
      uVar1 = uVar14 + 1;
      if (uVar13 <= uVar14) {
        uVar14 = 0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x498) + (long)(int)uVar14 * 4) = 0;
      uVar13 = *(uint *)(param_1 + 0x490);
      uVar14 = uVar1;
    } while ((int)uVar1 < (int)uVar13);
    uVar14 = *(uint *)puVar9;
  }
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  *(undefined4 *)(param_1 + 0x418) = 0;
  if (uVar14 != 0) {
    uVar16 = 0;
    do {
      uVar17 = uVar16 + 1;
      uVar13 = (uint)*(byte *)(param_1 + 0x53b);
      if (*(byte *)(param_1 + 0x53b) < 2) {
        uVar13 = 1;
      }
      puVar3 = (uint *)(param_1 + 0x458) + (uVar16 & 0xffffffff);
      if (2 < (uint)uVar16) {
        puVar3 = (uint *)(param_1 + 0x458);
      }
      *puVar3 = uVar13;
      uVar16 = uVar17;
    } while (uVar14 != uVar17);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x4f8));
  return;
}

