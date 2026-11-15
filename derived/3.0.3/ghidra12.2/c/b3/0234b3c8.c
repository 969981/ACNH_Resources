
void FUN_0234b3c8(long param_1,undefined1 param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [48];
  
  if (**(char **)(param_1 + 0x5fa8) != '\0') {
    return;
  }
  lVar10 = *(long *)(param_1 + 0x1150);
  *(undefined1 *)(param_1 + 0xc1b0) = param_2;
  if (lVar10 == 0) goto LAB_0234bd04;
  FUN_0090d910(auStack_a8,*(undefined8 *)PTR_DAT_04bb4868);
  puVar7 = *(ulong **)(param_1 + 0x1180);
  uVar9 = 0xffffffffffff;
  lVar8 = *(long *)(param_1 + 0x1160);
  if ((puVar7 != (ulong *)0x0) && (lVar8 != 0)) {
    uVar9 = *puVar7;
  }
  if ((((((uint)(uVar9 >> 0x20) ^ 0xffffffff) & 0xffff) != 0) &&
      ((((uint)uVar9 ^ 0xffffffff) & 0xffff) != 0)) &&
     ((((uint)(uVar9 >> 0x10) ^ 0xffffffff) & 0xffff) != 0)) {
    plVar5 = (long *)**(undefined8 **)
                       (*(long *)(lVar10 + 0x38) +
                       (-(uVar9 >> 0xf & 1) & 0xfffffffffff80000 | (uVar9 & 0xffff) << 3));
    (**(code **)(*plVar5 + 0x158))
              (plVar5,(int)(short)(uVar9 >> 0x10),(int)(short)(uVar9 >> 0x20),auStack_90);
    puVar7 = *(ulong **)(param_1 + 0x1180);
    lVar8 = *(long *)(param_1 + 0x1160);
  }
  uVar9 = 0xffffffffffff;
  if ((puVar7 != (ulong *)0x0) && (lVar8 != 0)) {
    uVar9 = puVar7[(ulong)(2 < *(uint *)(param_1 + 0x1178)) * 2];
  }
  if ((((((uint)(uVar9 >> 0x20) ^ 0xffffffff) & 0xffff) != 0) &&
      ((((uint)uVar9 ^ 0xffffffff) & 0xffff) != 0)) &&
     ((((uint)(uVar9 >> 0x10) ^ 0xffffffff) & 0xffff) != 0)) {
    plVar5 = (long *)**(undefined8 **)
                       (*(long *)(lVar10 + 0x38) +
                       (-(uVar9 >> 0xf & 1) & 0xfffffffffff80000 | (uVar9 & 0xffff) << 3));
    (**(code **)(*plVar5 + 0x158))
              (plVar5,(int)(short)(uVar9 >> 0x10),(int)(short)(uVar9 >> 0x20),auStack_90);
    puVar7 = *(ulong **)(param_1 + 0x1180);
    lVar8 = *(long *)(param_1 + 0x1160);
  }
  uVar9 = 0xffffffffffff;
  if ((puVar7 != (ulong *)0x0) && (lVar8 != 0)) {
    lVar2 = 0x28;
    if (*(uint *)(param_1 + 0x1178) < 6) {
      lVar2 = 0;
    }
    uVar9 = *(ulong *)((long)puVar7 + lVar2);
  }
  if ((((((uint)(uVar9 >> 0x20) ^ 0xffffffff) & 0xffff) != 0) &&
      ((((uint)uVar9 ^ 0xffffffff) & 0xffff) != 0)) &&
     ((((uint)(uVar9 >> 0x10) ^ 0xffffffff) & 0xffff) != 0)) {
    plVar5 = (long *)**(undefined8 **)
                       (*(long *)(lVar10 + 0x38) +
                       (-(uVar9 >> 0xf & 1) & 0xfffffffffff80000 | (uVar9 & 0xffff) << 3));
    (**(code **)(*plVar5 + 0x158))
              (plVar5,(int)(short)(uVar9 >> 0x10),(int)(short)(uVar9 >> 0x20),auStack_90);
    puVar7 = *(ulong **)(param_1 + 0x1180);
    lVar8 = *(long *)(param_1 + 0x1160);
  }
  uVar9 = 0xffffffffffff;
  if ((puVar7 != (ulong *)0x0) && (lVar8 != 0)) {
    lVar2 = 0x38;
    if (*(uint *)(param_1 + 0x1178) < 8) {
      lVar2 = 0;
    }
    uVar9 = *(ulong *)((long)puVar7 + lVar2);
  }
  if ((((((uint)(uVar9 >> 0x20) ^ 0xffffffff) & 0xffff) != 0) &&
      ((((uint)uVar9 ^ 0xffffffff) & 0xffff) != 0)) &&
     ((((uint)(uVar9 >> 0x10) ^ 0xffffffff) & 0xffff) != 0)) {
    plVar5 = (long *)**(undefined8 **)
                       (*(long *)(lVar10 + 0x38) +
                       (-(uVar9 >> 0xf & 1) & 0xfffffffffff80000 | (uVar9 & 0xffff) << 3));
    (**(code **)(*plVar5 + 0x158))
              (plVar5,(int)(short)(uVar9 >> 0x10),(int)(short)(uVar9 >> 0x20),auStack_90);
    puVar7 = *(ulong **)(param_1 + 0x1180);
    lVar8 = *(long *)(param_1 + 0x1160);
  }
  uVar9 = 0xffffffffffff;
  if ((puVar7 != (ulong *)0x0) && (lVar8 != 0)) {
    lVar2 = 0x50;
    if (*(uint *)(param_1 + 0x1178) < 0xb) {
      lVar2 = 0;
    }
    uVar9 = *(ulong *)((long)puVar7 + lVar2);
  }
  if ((((((uint)(uVar9 >> 0x20) ^ 0xffffffff) & 0xffff) != 0) &&
      ((((uint)uVar9 ^ 0xffffffff) & 0xffff) != 0)) &&
     ((((uint)(uVar9 >> 0x10) ^ 0xffffffff) & 0xffff) != 0)) {
    plVar5 = (long *)**(undefined8 **)
                       (*(long *)(lVar10 + 0x38) +
                       (-(uVar9 >> 0xf & 1) & 0xfffffffffff80000 | (uVar9 & 0xffff) << 3));
    (**(code **)(*plVar5 + 0x158))
              (plVar5,(int)(short)(uVar9 >> 0x10),(int)(short)(uVar9 >> 0x20),auStack_90);
    puVar7 = *(ulong **)(param_1 + 0x1180);
    lVar8 = *(long *)(param_1 + 0x1160);
  }
  uVar9 = 0xffffffffffff;
  if ((puVar7 != (ulong *)0x0) && (lVar8 != 0)) {
    uVar9 = puVar7[1 < *(uint *)(param_1 + 0x1178)];
  }
  if ((((((uint)(uVar9 >> 0x20) ^ 0xffffffff) & 0xffff) != 0) &&
      ((((uint)uVar9 ^ 0xffffffff) & 0xffff) != 0)) &&
     ((((uint)(uVar9 >> 0x10) ^ 0xffffffff) & 0xffff) != 0)) {
    plVar5 = (long *)**(undefined8 **)
                       (*(long *)(lVar10 + 0x38) +
                       (-(uVar9 >> 0xf & 1) & 0xfffffffffff80000 | (uVar9 & 0xffff) << 3));
    (**(code **)(*plVar5 + 0x158))
              (plVar5,(int)(short)(uVar9 >> 0x10),(int)(short)(uVar9 >> 0x20),auStack_80);
    puVar7 = *(ulong **)(param_1 + 0x1180);
    lVar8 = *(long *)(param_1 + 0x1160);
  }
  uVar9 = 0xffffffffffff;
  if ((puVar7 != (ulong *)0x0) && (lVar8 != 0)) {
    lVar2 = 0x18;
    if (*(uint *)(param_1 + 0x1178) < 4) {
      lVar2 = 0;
    }
    uVar9 = *(ulong *)((long)puVar7 + lVar2);
  }
  if ((((((uint)(uVar9 >> 0x20) ^ 0xffffffff) & 0xffff) != 0) &&
      ((((uint)uVar9 ^ 0xffffffff) & 0xffff) != 0)) &&
     ((((uint)(uVar9 >> 0x10) ^ 0xffffffff) & 0xffff) != 0)) {
    plVar5 = (long *)**(undefined8 **)
                       (*(long *)(lVar10 + 0x38) +
                       (-(uVar9 >> 0xf & 1) & 0xfffffffffff80000 | (uVar9 & 0xffff) << 3));
    (**(code **)(*plVar5 + 0x158))
              (plVar5,(int)(short)(uVar9 >> 0x10),(int)(short)(uVar9 >> 0x20),auStack_80);
    puVar7 = *(ulong **)(param_1 + 0x1180);
    lVar8 = *(long *)(param_1 + 0x1160);
  }
  uVar9 = 0xffffffffffff;
  if ((puVar7 != (ulong *)0x0) && (lVar8 != 0)) {
    lVar2 = 0x30;
    if (*(uint *)(param_1 + 0x1178) < 7) {
      lVar2 = 0;
    }
    uVar9 = *(ulong *)((long)puVar7 + lVar2);
  }
  if ((((((uint)(uVar9 >> 0x20) ^ 0xffffffff) & 0xffff) != 0) &&
      ((((uint)uVar9 ^ 0xffffffff) & 0xffff) != 0)) &&
     ((((uint)(uVar9 >> 0x10) ^ 0xffffffff) & 0xffff) != 0)) {
    plVar5 = (long *)**(undefined8 **)
                       (*(long *)(lVar10 + 0x38) +
                       (-(uVar9 >> 0xf & 1) & 0xfffffffffff80000 | (uVar9 & 0xffff) << 3));
    (**(code **)(*plVar5 + 0x158))
              (plVar5,(int)(short)(uVar9 >> 0x10),(int)(short)(uVar9 >> 0x20),auStack_80);
    puVar7 = *(ulong **)(param_1 + 0x1180);
    lVar8 = *(long *)(param_1 + 0x1160);
  }
  uVar9 = 0xffffffffffff;
  if ((puVar7 != (ulong *)0x0) && (lVar8 != 0)) {
    uVar9 = puVar7[(ulong)(8 < *(uint *)(param_1 + 0x1178)) * 8];
  }
  if ((((((uint)(uVar9 >> 0x20) ^ 0xffffffff) & 0xffff) != 0) &&
      ((((uint)uVar9 ^ 0xffffffff) & 0xffff) != 0)) &&
     ((((uint)(uVar9 >> 0x10) ^ 0xffffffff) & 0xffff) != 0)) {
    plVar5 = (long *)**(undefined8 **)
                       (*(long *)(lVar10 + 0x38) +
                       (-(uVar9 >> 0xf & 1) & 0xfffffffffff80000 | (uVar9 & 0xffff) << 3));
    (**(code **)(*plVar5 + 0x158))
              (plVar5,(int)(short)(uVar9 >> 0x10),(int)(short)(uVar9 >> 0x20),auStack_80);
    puVar7 = *(ulong **)(param_1 + 0x1180);
    lVar8 = *(long *)(param_1 + 0x1160);
  }
  uVar9 = 0xffffffffffff;
  if ((puVar7 != (ulong *)0x0) && (lVar8 != 0)) {
    lVar8 = 0x58;
    if (*(uint *)(param_1 + 0x1178) < 0xc) {
      lVar8 = 0;
    }
    uVar9 = *(ulong *)((long)puVar7 + lVar8);
  }
  if ((((((uint)(uVar9 >> 0x20) ^ 0xffffffff) & 0xffff) != 0) &&
      ((((uint)uVar9 ^ 0xffffffff) & 0xffff) != 0)) &&
     ((((uint)(uVar9 >> 0x10) ^ 0xffffffff) & 0xffff) != 0)) {
    plVar5 = (long *)**(undefined8 **)
                       (*(long *)(lVar10 + 0x38) +
                       (-(uVar9 >> 0xf & 1) & 0xfffffffffff80000 | (uVar9 & 0xffff) << 3));
    (**(code **)(*plVar5 + 0x158))
              (plVar5,(int)(short)(uVar9 >> 0x10),(int)(short)(uVar9 >> 0x20),auStack_80);
  }
  puVar3 = PTR_DAT_04bb27c0;
  uVar11 = *(uint *)(*(long *)(param_1 + 0xbdd0) +
                     ((ulong)*(uint *)(*(long *)(param_1 + 0xbdd0) + 0x10) & 1) * 0x20 + 0x28);
  if ((uVar11 != 0) && (lVar10 = *(long *)PTR_DAT_04bb27c0, lVar10 != 0)) {
    plVar5 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                       ((ulong)(uVar11 >> 0x11) & 0x7ff8));
    if ((plVar5 == (long *)0x0) ||
       (((*(uint *)(plVar5 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar5 + 0x46) != uVar11)))) {
      plVar5 = (long *)0x0;
    }
    if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
      plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar10 = *(long *)puVar3;
      iVar4 = (**(code **)(*plVar6 + 0x60))();
      if (iVar4 < 0x11) {
        uVar11 = 1;
      }
      else {
        if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_0234b984;
        uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_0234b984:
      uVar11 = 0;
    }
    if (plVar5 != (long *)0x0) {
      lVar10 = plVar5[0x2a];
      if (((*PTR_DAT_04bc3070 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc3070), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bc3068 = PTR_DAT_04bbe058 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc3070);
      }
      uVar9 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bc3068);
      uVar1 = 0;
      if ((int)lVar10 == 1) {
        uVar1 = uVar11;
      }
      if (((((uVar9 & 1) != 0) && (uVar1 != 0)) && (lVar10 = plVar5[0xc], lVar10 != 0)) &&
         (*(long *)(lVar10 + 0x1150) != 0)) {
        uVar9 = 0xffffffffffff;
        if ((*(long *)(lVar10 + 0x1180) != 0) && (*(long *)(lVar10 + 0x1160) != 0)) {
          uVar9 = *(ulong *)(*(long *)(lVar10 + 0x1180) +
                            (ulong)(4 < *(uint *)(lVar10 + 0x1178)) * 0x20);
        }
        if ((((((uint)(uVar9 >> 0x20) ^ 0xffffffff) & 0xffff) != 0) &&
            ((((uint)uVar9 ^ 0xffffffff) & 0xffff) != 0)) &&
           ((((uint)(uVar9 >> 0x10) ^ 0xffffffff) & 0xffff) != 0)) {
          plVar5 = (long *)**(undefined8 **)
                             (*(long *)(*(long *)(lVar10 + 0x1150) + 0x38) +
                             (-(uVar9 >> 0xf & 1) & 0xfffffffffff80000 | (uVar9 & 0xffff) << 3));
          (**(code **)(*plVar5 + 0x158))
                    (plVar5,(int)(short)(uVar9 >> 0x10),(int)(short)(uVar9 >> 0x20),auStack_90);
        }
      }
    }
  }
  uVar11 = *(uint *)(*(long *)(param_1 + 0xbe10) +
                     (ulong)(*(uint *)(*(long *)(param_1 + 0xbe10) + 0x10) & 1) * 0x14 + 0x1c);
  if ((uVar11 != 0) && (lVar10 = *(long *)puVar3, lVar10 != 0)) {
    plVar5 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                       ((ulong)(uVar11 >> 0x11) & 0x7ff8));
    if ((plVar5 == (long *)0x0) ||
       (((*(uint *)(plVar5 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar5 + 0x46) != uVar11)))) {
      plVar5 = (long *)0x0;
    }
    if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
      plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar10 = *(long *)puVar3;
      iVar4 = (**(code **)(*plVar6 + 0x60))();
      if (iVar4 < 0x11) {
        uVar11 = 1;
      }
      else {
        if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_0234bb14;
        uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_0234bb14:
      uVar11 = 0;
    }
    if (plVar5 != (long *)0x0) {
      lVar10 = plVar5[0x2a];
      if (((*PTR_DAT_04bc3060 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc3060), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bc3058 = PTR_DAT_04bbe058 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc3060);
      }
      uVar9 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bc3058);
      uVar1 = 0;
      if ((int)lVar10 == 1) {
        uVar1 = uVar11;
      }
      if (((((uVar9 & 1) != 0) && (uVar1 != 0)) && (lVar10 = plVar5[0xc], lVar10 != 0)) &&
         (*(long *)(lVar10 + 0x1150) != 0)) {
        uVar9 = 0xffffffffffff;
        if ((*(long *)(lVar10 + 0x1180) != 0) && (*(long *)(lVar10 + 0x1160) != 0)) {
          uVar9 = *(ulong *)(*(long *)(lVar10 + 0x1180) +
                            (ulong)(4 < *(uint *)(lVar10 + 0x1178)) * 0x20);
        }
        if ((((((uint)(uVar9 >> 0x20) ^ 0xffffffff) & 0xffff) != 0) &&
            ((((uint)uVar9 ^ 0xffffffff) & 0xffff) != 0)) &&
           ((((uint)(uVar9 >> 0x10) ^ 0xffffffff) & 0xffff) != 0)) {
          plVar5 = (long *)**(undefined8 **)
                             (*(long *)(*(long *)(lVar10 + 0x1150) + 0x38) +
                             (-(uVar9 >> 0xf & 1) & 0xfffffffffff80000 | (uVar9 & 0xffff) << 3));
          (**(code **)(*plVar5 + 0x158))
                    (plVar5,(int)(short)(uVar9 >> 0x10),(int)(short)(uVar9 >> 0x20),auStack_90);
        }
      }
    }
  }
  uVar11 = *(uint *)(*(long *)(param_1 + 0xbdd8) +
                     ((ulong)*(uint *)(*(long *)(param_1 + 0xbdd8) + 0x10) & 1) * 0x20 + 0x28);
  if ((uVar11 == 0) || (lVar10 = *(long *)puVar3, lVar10 == 0)) goto LAB_0234bd04;
  plVar5 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) + ((ulong)(uVar11 >> 0x11) & 0x7ff8))
  ;
  if ((plVar5 == (long *)0x0) ||
     (((*(uint *)(plVar5 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar5 + 0x46) != uVar11)))) {
    plVar5 = (long *)0x0;
  }
  if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar11 = 1;
    }
    else {
      if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_0234bca0;
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0234bca0:
    uVar11 = 0;
  }
  if (plVar5 != (long *)0x0) {
    lVar10 = plVar5[0x2a];
    if (((*PTR_DAT_04bc3080 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc3080), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bc3078 = PTR_DAT_04bbe058 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc3080);
    }
    uVar9 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bc3078);
    uVar1 = 0;
    if ((int)lVar10 == 1) {
      uVar1 = uVar11;
    }
    if (((uVar9 & 1) != 0) && (uVar1 != 0)) {
      FUN_0256b2c0(plVar5,auStack_90,auStack_80);
    }
  }
LAB_0234bd04:
  FUN_0234b2c4(param_1,*(undefined1 *)(param_1 + 0xc1af));
  return;
}

