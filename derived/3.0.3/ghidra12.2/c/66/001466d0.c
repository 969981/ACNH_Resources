
int FUN_001466d0(long *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined8 local_d0;
  undefined2 local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined2 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  lVar12 = *param_1;
  iVar3 = *(int *)(lVar12 + 0x1118);
  lVar14 = *(long *)(lVar12 + 0xfb0);
  lVar17 = *(long *)(lVar12 + 0xfb8);
  auVar18 = FUN_00147178();
  lVar9 = auVar18._0_8_;
  iVar4 = FUN_00147204(lVar9,auVar18._8_8_,*(undefined8 *)(lVar12 + 0x1018),
                       *(undefined8 *)(lVar12 + 0x1020));
  *(long *)(lVar12 + 0xfd0) = (long)iVar4;
  iVar6 = 999;
  if (0x20c49ba5e353f6 < lVar14) {
    iVar6 = 999999;
  }
  lVar13 = (long)(iVar4 / 1000000);
  lVar8 = lVar14 * 1000;
  lVar11 = (long)(iVar4 / 1000);
  if (0x20c49ba5e353f6 < lVar14) {
    lVar8 = lVar14;
    lVar11 = lVar13;
  }
  lVar14 = *(long *)(lVar12 + 0xf98);
  if (iVar4 <= iVar6) {
    lVar11 = 1;
  }
  lVar1 = lVar17 * 1000;
  lVar2 = (long)(iVar4 / 1000);
  iVar6 = 999;
  if (0x20c49ba5e353f6 < lVar17) {
    lVar1 = lVar17;
    lVar2 = lVar13;
    iVar6 = 999999;
  }
  lVar17 = 0;
  if (lVar11 != 0) {
    lVar17 = lVar8 / lVar11;
  }
  if (iVar4 <= iVar6) {
    lVar2 = 1;
  }
  *(long *)(lVar12 + 0xfd8) = lVar17;
  lVar8 = 0;
  if (lVar2 != 0) {
    lVar8 = lVar1 / lVar2;
  }
  *(long *)(lVar12 + 0xfe0) = lVar8;
  if (lVar14 != lVar9) {
    lVar11 = lVar12 + 0xf98;
    *(long *)(lVar12 + 0xf98) = lVar9;
    iVar3 = iVar3 % 6;
    iVar4 = *(int *)(lVar12 + 0x1118);
    *(uint *)(lVar12 + 0x1118) = iVar4 + 1U;
    plVar16 = (long *)(lVar11 + (long)iVar3 * 8 + 0xf0);
    *plVar16 = *(long *)(lVar12 + 0xfb8) + *(long *)(lVar12 + 0xfb0);
    *(undefined1 (*) [16])(lVar11 + (long)iVar3 * 0x10 + 0x120) = auVar18;
    iVar6 = iVar4;
    if (4 < iVar4) {
      iVar6 = 5;
    }
    if (iVar6 == 0) {
      lVar17 = lVar17 + lVar8;
    }
    else {
      uVar7 = (iVar4 + 1U) % 6;
      if (iVar4 < 5) {
        uVar7 = 0;
      }
      lVar17 = lVar11 + (ulong)uVar7 * 0x10;
      uVar5 = FUN_001471a8(lVar9,auVar18._8_8_,*(undefined8 *)(lVar17 + 0x120),
                           *(undefined8 *)(lVar17 + 0x128));
      if (uVar5 < 2) {
        uVar5 = 1;
      }
      lVar8 = *plVar16 - *(long *)(lVar11 + (ulong)uVar7 * 8 + 0xf0);
      if (lVar8 < 0x418938) {
        lVar17 = 0;
        if ((long)(int)uVar5 != 0) {
          lVar17 = (lVar8 * 1000) / (long)(int)uVar5;
        }
      }
      else {
        lVar17 = (long)((double)lVar8 / ((double)(int)uVar5 / DAT_041016c8));
      }
    }
    *(long *)(lVar12 + 0xfc0) = lVar17;
  }
  uVar7 = *(uint *)(lVar12 + 0xfcc);
  if ((uVar7 >> 4 & 1) == 0) {
    local_68 = 0;
    local_a0 = 0;
    local_a8 = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    if (*(long *)(lVar12 + 0x730) == 0) {
      if (*(long *)(lVar12 + 0x728) == 0) {
        if (lVar14 == lVar9) goto LAB_00146c0c;
        if ((uVar7 >> 7 & 1) == 0) {
          if (*(long *)(lVar12 + 0x1518) != 0) {
            FUN_00146338(*(undefined8 *)(lVar12 + 0x668),
                         "** Resuming transfer from byte position %ld\n");
          }
          FUN_00146338(*(undefined8 *)(lVar12 + 0x668),
                       "  %% Total    %% Received %% Xferd  Average Speed   Time    Time     Time  Current\n                                 Dload  Upload   Total   Spent    Left  Speed\n"
                      );
          uVar7 = *(uint *)(lVar12 + 0xfcc) | 0x80;
          *(uint *)(lVar12 + 0xfcc) = uVar7;
        }
        if (((uVar7 >> 5 & 1) == 0) || (lVar9 = *(long *)(lVar12 + 0xfe0), lVar9 < 1)) {
          lVar9 = 0;
          lVar14 = 0;
        }
        else {
          uVar10 = *(ulong *)(lVar12 + 0xfa8);
          lVar14 = 0;
          if (lVar9 != 0) {
            lVar14 = (long)uVar10 / lVar9;
          }
          if ((long)uVar10 < 0x2711) {
            if ((long)uVar10 < 1) {
              lVar9 = 0;
              goto LAB_00146a34;
            }
            lVar17 = *(long *)(lVar12 + 0xfb8) * 100;
          }
          else {
            lVar17 = *(long *)(lVar12 + 0xfb8);
            uVar10 = uVar10 / 100;
          }
          lVar9 = 0;
          if (uVar10 != 0) {
            lVar9 = lVar17 / (long)uVar10;
          }
        }
LAB_00146a34:
        if (((uVar7 >> 6 & 1) == 0) || (lVar17 = *(long *)(lVar12 + 0xfd8), lVar17 < 1)) {
          lVar17 = 0;
          lVar8 = 0;
        }
        else {
          uVar10 = *(ulong *)(lVar12 + 4000);
          lVar8 = 0;
          if (lVar17 != 0) {
            lVar8 = (long)uVar10 / lVar17;
          }
          if ((long)uVar10 < 0x2711) {
            if ((long)uVar10 < 1) {
              lVar17 = 0;
              goto LAB_00146aa8;
            }
            lVar11 = *(long *)(lVar12 + 0xfb0) * 100;
          }
          else {
            lVar11 = *(long *)(lVar12 + 0xfb0);
            uVar10 = uVar10 / 100;
          }
          lVar17 = 0;
          if (uVar10 != 0) {
            lVar17 = lVar11 / (long)uVar10;
          }
        }
LAB_00146aa8:
        if (lVar14 <= lVar8) {
          lVar14 = lVar8;
        }
        lVar8 = lVar14 - lVar13;
        if (lVar14 < 1) {
          lVar8 = 0;
        }
        FUN_00146f44(&local_b0,lVar8);
        FUN_00146f44(&local_c0,lVar14);
        FUN_00146f44(&local_d0,lVar13);
        lVar14 = 0xfb8;
        if ((*(uint *)(lVar12 + 0xfcc) & 0x20) != 0) {
          lVar14 = 0xfa8;
        }
        lVar8 = 0xfb0;
        if ((*(uint *)(lVar12 + 0xfcc) & 0x40) != 0) {
          lVar8 = 4000;
        }
        uVar10 = *(long *)(lVar12 + lVar8) + *(long *)(lVar12 + lVar14);
        lVar14 = *(long *)(lVar12 + 0xfb8) + *(long *)(lVar12 + 0xfb0);
        if ((long)uVar10 < 0x2711) {
          if ((long)uVar10 < 1) {
            lVar8 = 0;
          }
          else {
            lVar8 = 0;
            if (uVar10 != 0) {
              lVar8 = (lVar14 * 100) / (long)uVar10;
            }
          }
        }
        else {
          lVar8 = 0;
          if (uVar10 / 100 != 0) {
            lVar8 = lVar14 / (long)(uVar10 / 100);
          }
        }
        uVar15 = *(undefined8 *)(lVar12 + 0x668);
        FUN_00147038(uVar10,(long)&uStack_90 + 4);
        FUN_00147038(*(undefined8 *)(lVar12 + 0xfb0),&local_a0);
        FUN_00147038(*(undefined8 *)(lVar12 + 0xfb8),(long)&local_98 + 2);
        FUN_00147038(*(undefined8 *)(lVar12 + 0xfd8),(long)&local_88 + 6);
        FUN_00147038(*(undefined8 *)(lVar12 + 0xfe0),&local_78);
        FUN_00147038(*(undefined8 *)(lVar12 + 0xfc0),(long)&uStack_70 + 2);
        FUN_00146338(uVar15,"\r%3ld %s  %3ld %s  %3ld %s  %s  %s %s %s %s %s",lVar8,
                     (long)&uStack_90 + 4,lVar17,&local_a0,lVar9,(long)&local_98 + 2,
                     (long)&local_88 + 6,&local_78,&local_c0,&local_d0,&local_b0,
                     (long)&uStack_70 + 2);
        fflush(*(FILE **)(lVar12 + 0x668));
        goto LAB_00146c0c;
      }
      FUN_00149fe4(lVar12,1);
      iVar6 = (**(code **)(lVar12 + 0x728))
                        ((double)*(long *)(lVar12 + 4000),(double)*(long *)(lVar12 + 0xfb0),
                         (double)*(long *)(lVar12 + 0xfa8),(double)*(long *)(lVar12 + 0xfb8),
                         *(undefined8 *)(lVar12 + 0x798));
    }
    else {
      FUN_00149fe4(lVar12,1);
      iVar6 = (**(code **)(lVar12 + 0x730))
                        (*(undefined8 *)(lVar12 + 0x798),*(undefined8 *)(lVar12 + 4000),
                         *(undefined8 *)(lVar12 + 0xfb0),*(undefined8 *)(lVar12 + 0xfa8),
                         *(undefined8 *)(lVar12 + 0xfb8));
    }
    FUN_00149fe4(lVar12,0);
    if (iVar6 != 0) {
      FUN_0014d5f8(lVar12,"Callback aborted");
    }
  }
  else {
LAB_00146c0c:
    iVar6 = 0;
  }
  return iVar6;
}

