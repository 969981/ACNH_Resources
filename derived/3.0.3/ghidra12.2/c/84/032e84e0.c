
undefined8 FUN_032e84e0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  short *psVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  void *pvVar19;
  undefined8 uVar20;
  long lVar21;
  undefined **local_138;
  undefined8 uStack_130;
  undefined *local_128;
  undefined2 *local_120;
  undefined4 local_118;
  undefined2 local_114 [96];
  undefined2 local_54;
  
  plVar5 = *(long **)(param_1 + 4);
  lVar21 = *(long *)PTR_DAT_04bc1118;
  if ((plVar5 != (long *)0x0) &&
     (uVar6 = (**(code **)(*plVar5 + 0x20))(plVar5,*(undefined8 *)(param_1 + 8),param_1[10]),
     (uVar6 & 1) == 0)) {
    if (param_1[0x191] < param_1[0x192]) {
      iVar17 = *param_1;
      lVar10 = (long)iVar17 + -1;
      plVar5 = *(long **)(param_1 + 8);
      iVar4 = (int)lVar10;
      *param_1 = iVar4;
      iVar12 = *(int *)((long)plVar5 + 0xc);
      if (iVar12 != 0) {
        iVar18 = iVar12 - iVar4;
        if (iVar17 <= iVar12) {
          iVar18 = 1;
        }
        iVar4 = iVar18 + iVar4;
        uVar14 = iVar12 - iVar4;
        if (0 < (int)uVar14) {
          if (uVar14 == 1) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            lVar11 = (long)iVar4 * 2;
            do {
              lVar7 = uVar6 * 2;
              uVar6 = uVar6 + 2;
              *(undefined2 *)(*plVar5 + lVar10 * 2 + lVar7) =
                   *(undefined2 *)(*plVar5 + lVar11 + lVar7);
              *(undefined2 *)(*plVar5 + lVar10 * 2 + lVar7 + 2) =
                   *(undefined2 *)(*plVar5 + lVar11 + lVar7 + 2);
            } while (((ulong)uVar14 & 0xfffffffe) != uVar6);
          }
          if ((uVar14 & 1) != 0) {
            *(undefined2 *)(*plVar5 + (uVar6 + lVar10) * 2) =
                 *(undefined2 *)(*plVar5 + (uVar6 + (long)iVar4) * 2);
          }
          iVar12 = *(int *)((long)plVar5 + 0xc);
        }
        *(int *)((long)plVar5 + 0xc) = iVar12 - iVar18;
        *(undefined2 *)(*plVar5 + (long)(iVar12 - iVar18) * 2) = 0;
      }
      FUN_032e8dd0(param_1);
    }
    else {
      iVar4 = param_1[0x212];
      FUN_03363ed0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x114));
      if (iVar4 < 1) {
        if ((((*(int *)(*(long *)(lVar21 + 0x20) + 0x1050) - 7U < 3) &&
             (lVar10 = *(long *)(*(long *)(lVar21 + 0x20) + 0x6e0), lVar10 != 0)) &&
            (plVar5 = *(long **)(lVar10 + 8), plVar5 != (long *)0x0)) &&
           (uVar6 = (**(code **)(*plVar5 + 0xe8))(), (uVar6 & 1) != 0)) {
          (**(code **)(*(long *)(param_1 + 0x1dc) + 0x18))(param_1 + 0x1dc);
          local_120 = *(undefined2 **)(param_1 + 0x1de);
          local_128 = PTR_DAT_04bb8610 + 0x10;
          FUN_032e8f60(param_1 + 0x1a6,&local_128,0xffffffff);
        }
        *param_1 = param_1[1];
      }
      else {
        *param_1 = param_1[1];
        FUN_032e8dd0(param_1);
        param_1[0x212] = 0;
      }
    }
    if (param_1[0x183] == param_1[0x184]) {
      if (param_1[0x18d] == 0) {
        param_1[0x11d] = 0;
        **(undefined2 **)(param_1 + 0x11a) = 0;
        param_1[0x121] = 0;
        param_1[0x183] = -1;
        param_1[0x184] = -1;
        **(undefined2 **)(param_1 + 0x11e) = 0;
        param_1[0x185] = -1;
        param_1[0x186] = -1;
        (**(code **)(**(long **)(param_1 + 4) + 0x28))();
      }
      else {
        if (((*(int *)(*(long *)(lVar21 + 0x20) + 0x1050) - 7U < 3) &&
            (lVar21 = *(long *)(*(long *)(lVar21 + 0x20) + 0x6e0), lVar21 != 0)) &&
           ((plVar5 = *(long **)(lVar21 + 8), plVar5 != (long *)0x0 &&
            (uVar6 = (**(code **)(*plVar5 + 0xe8))(), (uVar6 & 1) != 0)))) {
          pvVar9 = *(void **)(param_1 + 0x11e);
          pvVar19 = *(void **)(param_1 + 0x1a8);
          if (pvVar19 != pvVar9) {
            lVar21 = 0;
            psVar13 = (short *)((long)pvVar9 + 2);
            do {
              if (psVar13[-1] == 0) goto LAB_032e8c84;
              if (*psVar13 == 0) {
                lVar21 = lVar21 + 1;
                goto LAB_032e8c84;
              }
              if (psVar13[1] == 0) {
                lVar21 = lVar21 + 2;
                goto LAB_032e8c84;
              }
              lVar21 = lVar21 + 3;
              psVar13 = psVar13 + 3;
            } while (lVar21 != 0x80001);
            lVar21 = 0;
LAB_032e8c84:
            uVar14 = (uint)lVar21;
            if (param_1[0x1aa] <= (int)(uint)lVar21) {
              uVar14 = param_1[0x1aa] - 1;
            }
            uVar6 = -(ulong)(uVar14 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar14 << 1;
            memcpy(pvVar19,pvVar9,uVar6);
            *(undefined2 *)((long)pvVar19 + uVar6) = 0;
          }
        }
        FUN_03363ed0(param_1 + 0x11a,*(undefined8 *)(param_1 + 0x11e));
        param_1[0x183] = param_1[0x185];
        param_1[0x184] = param_1[0x186];
        *(undefined1 *)(param_1 + 0x118) = 1;
      }
    }
    else {
      FUN_03363ed0(param_1 + 0x11a,*(undefined8 *)(param_1 + 0x11e));
      param_1[0x183] = param_1[0x185];
      param_1[0x184] = param_1[0x186];
    }
    FUN_03363ed0(param_1 + 0x114,**(undefined8 **)(param_1 + 8));
    pvVar9 = *(void **)(param_1 + 0x1de);
    (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
    pvVar19 = *(void **)(param_1 + 0x1a8);
    if (pvVar9 != pvVar19) {
      (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
      lVar21 = 0;
      do {
        if (*(short *)(*(long *)(param_1 + 0x1a8) + lVar21 * 2) == 0) goto LAB_032e8d5c;
        lVar10 = *(long *)(param_1 + 0x1a8) + lVar21 * 2;
        if (*(short *)(lVar10 + 2) == 0) {
          lVar21 = lVar21 + 1;
          goto LAB_032e8d5c;
        }
        if (*(short *)(lVar10 + 4) == 0) {
          lVar21 = lVar21 + 2;
          goto LAB_032e8d5c;
        }
        lVar21 = lVar21 + 3;
      } while (lVar21 != 0x80001);
      lVar21 = 0;
LAB_032e8d5c:
      uVar14 = (uint)lVar21;
      if (param_1[0x1e0] <= (int)(uint)lVar21) {
        uVar14 = param_1[0x1e0] - 1;
      }
      uVar6 = -(ulong)(uVar14 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar14 << 1;
      memcpy(pvVar9,pvVar19,uVar6);
      *(undefined2 *)((long)pvVar9 + uVar6) = 0;
    }
    param_1[1] = *param_1;
    FUN_03363ed0(param_1 + 0x11e,*(undefined8 *)(param_1 + 0x11a));
    param_1[0x185] = param_1[0x183];
    param_1[0x186] = param_1[0x184];
    return 0;
  }
  param_1[0x212] = 0;
  if (param_1[10] < 1) {
    return 1;
  }
  if (param_1[10] <= param_1[0x183]) {
    FUN_032e81e0(param_1);
  }
  if (param_1[0x18d] == 0) {
    uVar14 = param_1[0x184];
    uVar15 = param_1[0x183];
    iVar12 = uVar14 - uVar15;
    iVar4 = param_1[10];
  }
  else {
    uVar14 = param_1[0x184];
    uVar15 = param_1[0x183];
    iVar12 = uVar14 - uVar15;
    iVar4 = param_1[10];
    if (param_1[0x18d] != 1) {
      plVar5 = *(long **)(param_1 + 8);
      iVar17 = *(int *)((long)plVar5 + 0xc);
      if (iVar17 <= iVar4) {
        return 1;
      }
      goto LAB_032e8608;
    }
  }
  plVar5 = *(long **)(param_1 + 8);
  iVar17 = *(int *)((long)plVar5 + 0xc);
  if (iVar17 - iVar12 <= iVar4) {
    return 1;
  }
LAB_032e8608:
  iVar18 = *param_1;
  iVar17 = iVar17 - iVar4;
  iVar4 = *(int *)((long)plVar5 + 0xc);
  iVar16 = iVar18 - iVar17;
  if (iVar4 != 0) {
    iVar2 = iVar4 - iVar16;
    if (iVar18 <= iVar4) {
      iVar2 = iVar17;
    }
    iVar1 = iVar2 + iVar16;
    uVar3 = iVar4 - iVar1;
    if (0 < (int)uVar3) {
      if (uVar3 == 1) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        lVar11 = (long)iVar18 * 2 + (long)iVar17 * -2;
        lVar10 = (long)iVar1 * 2;
        do {
          lVar7 = uVar6 * 2;
          uVar6 = uVar6 + 2;
          *(undefined2 *)(*plVar5 + lVar11 + lVar7) = *(undefined2 *)(*plVar5 + lVar10 + lVar7);
          *(undefined2 *)(*plVar5 + lVar11 + lVar7 + 2) =
               *(undefined2 *)(*plVar5 + lVar10 + lVar7 + 2);
        } while (((ulong)uVar3 & 0xfffffffe) != uVar6);
      }
      if ((uVar3 & 1) != 0) {
        *(undefined2 *)(*plVar5 + (uVar6 + (long)iVar16) * 2) =
             *(undefined2 *)(*plVar5 + (uVar6 + (long)iVar1) * 2);
      }
      iVar4 = *(int *)((long)plVar5 + 0xc);
    }
    *(int *)((long)plVar5 + 0xc) = iVar4 - iVar2;
    *(undefined2 *)(*plVar5 + (long)(iVar4 - iVar2) * 2) = 0;
    iVar18 = *param_1;
    iVar16 = iVar18 - iVar17;
  }
  *param_1 = iVar16;
  uVar3 = 0;
  if (0 < iVar12) {
    uVar3 = ~(uVar14 | uVar15) >> 0x1f;
  }
  if (uVar3 == 1) {
    iVar4 = param_1[0x184];
    plVar5 = (long *)(param_1 + 0x11a);
    iVar17 = (iVar4 - iVar18) + iVar17;
    iVar12 = param_1[0x11d];
    if (iVar12 != 0) {
      iVar18 = (iVar4 - param_1[0x183]) - iVar17;
      iVar4 = iVar12 - iVar18;
      if (iVar18 + iVar17 <= iVar12) {
        iVar4 = iVar17;
      }
      iVar16 = iVar4 + iVar18;
      uVar14 = iVar12 - iVar16;
      if (0 < (int)uVar14) {
        if (uVar14 == 1) {
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          lVar10 = (long)iVar16 * 2;
          lVar11 = (long)iVar18 * 2;
          do {
            lVar7 = uVar6 * 2;
            uVar6 = uVar6 + 2;
            *(undefined2 *)(*plVar5 + lVar11 + lVar7) = *(undefined2 *)(*plVar5 + lVar10 + lVar7);
            *(undefined2 *)(*plVar5 + lVar11 + lVar7 + 2) =
                 *(undefined2 *)(*plVar5 + lVar10 + lVar7 + 2);
          } while (((ulong)uVar14 & 0xfffffffe) != uVar6);
        }
        if ((uVar14 & 1) != 0) {
          *(undefined2 *)(*plVar5 + (uVar6 + (long)iVar18) * 2) =
               *(undefined2 *)(*plVar5 + (uVar6 + (long)iVar16) * 2);
        }
        iVar12 = param_1[0x11d];
      }
      param_1[0x11d] = iVar12 - iVar4;
      *(undefined2 *)(*(long *)(param_1 + 0x11a) + (long)(iVar12 - iVar4) * 2) = 0;
      iVar4 = param_1[0x184];
    }
    param_1[0x184] = iVar4 - iVar17;
    if (((*(int *)(*(long *)(lVar21 + 0x20) + 0x1050) - 7U < 3) &&
        (lVar10 = *(long *)(*(long *)(lVar21 + 0x20) + 0x6e0), lVar10 != 0)) &&
       ((plVar8 = *(long **)(lVar10 + 8), plVar8 != (long *)0x0 &&
        (uVar6 = (**(code **)(*plVar8 + 0xe8))(), (uVar6 & 1) != 0)))) {
      (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
      lVar11 = *(long *)(param_1 + 0x1a8);
      lVar10 = 0;
      do {
        if (*(short *)(lVar11 + lVar10 * 2) == 0) goto LAB_032e8aac;
        lVar7 = lVar11 + lVar10 * 2;
        if (*(short *)(lVar7 + 2) == 0) {
          lVar10 = lVar10 + 1;
          goto LAB_032e8aac;
        }
        if (*(short *)(lVar7 + 4) == 0) {
          lVar10 = lVar10 + 2;
          goto LAB_032e8aac;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      lVar10 = 0;
LAB_032e8aac:
      if (-1 < iVar17) {
        iVar12 = (int)lVar10;
        iVar4 = iVar12;
        if (iVar17 <= iVar12) {
          iVar4 = iVar17;
        }
        *(undefined2 *)(lVar11 + (long)(iVar12 - iVar4) * 2) = 0;
      }
      local_54 = 0;
      local_118 = 0x61;
      local_120 = local_114;
      local_114[0] = 0;
      local_128 = PTR_DAT_04bc9690 + 0x10;
      (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
      lVar21 = *(long *)(lVar21 + 0x20);
      uStack_130 = *(undefined8 *)(param_1 + 0x1a8);
      local_138 = &PTR_LAB_04952fa8;
      if (*(long *)(lVar21 + 0x1ae0) != 0) {
        FUN_032e28a0(*(long *)(lVar21 + 0x1ae0),lVar21 + 0x1a70);
      }
      *(undefined1 *)(lVar21 + 0x1aa8) = 1;
      if (*(int *)(lVar21 + 0x1aa4) - 1U < 2) {
        lVar10 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar10 / 1000);
          nn::os::SleepThread();
        } while (*(int *)(lVar21 + 0x1aa4) - 1U < 2);
      }
      FUN_032ee0b0(lVar21 + 0x1800,&local_138,&local_128);
      (**(code **)(local_128 + 0x18))(&local_128);
      FUN_03363ed0(plVar5,local_120);
      iVar4 = param_1[0x183];
      iVar12 = param_1[0x184];
      uVar20 = *(undefined8 *)(param_1 + 8);
      (**(code **)(local_128 + 0x18))(&local_128);
      iVar4 = FUN_03363c80(uVar20,iVar4,iVar12 - iVar4,local_120,0xffffffff);
      *param_1 = param_1[0x183] + iVar4;
      param_1[0x184] = param_1[0x183] + iVar4;
    }
    if (param_1[0x184] <= param_1[0x183]) {
      param_1[0x11d] = 0;
      param_1[0x183] = -1;
      param_1[0x184] = -1;
      **(undefined2 **)(param_1 + 0x11a) = 0;
      **(undefined2 **)(param_1 + 0x1a8) = 0;
      **(undefined2 **)(param_1 + 0x1de) = 0;
    }
  }
  if (*(long **)(param_1 + 4) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 4) + 0x18))();
  }
  if (*param_1 < 0) {
    *param_1 = 0;
  }
  else if (*(int *)(*(long *)(param_1 + 8) + 0xc) < *param_1) {
    *param_1 = *(int *)(*(long *)(param_1 + 8) + 0xc) + -1;
  }
  return 1;
}

