
void FUN_01c027a0(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  long lVar14;
  undefined1 auStack_78 [12];
  int local_6c;
  undefined1 local_63;
  
  pbVar13 = (byte *)(param_1 + 4);
  lVar14 = *(long *)(*param_1 + 0xc0);
  if (lVar14 != 0) {
    if (*(char *)(lVar14 + 0x1b8) != '\0') {
      pbVar13 = (byte *)(lVar14 + 0x188);
    }
  }
  if (((*pbVar13 & 1) == 0) || (lVar14 = *(long *)(pbVar13 + 8), lVar14 == 0)) {
    puVar12 = (undefined8 *)0x0;
  }
  else {
    puVar12 = *(undefined8 **)(lVar14 + 0x18);
    if ((*(byte *)(lVar14 + 8) & 10) != 2) {
      puVar12 = (undefined8 *)0x0;
    }
  }
  if (((*PTR_DAT_04bc0ca8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc0ca8), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bc0ca0 = PTR_DAT_04bb3ba0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc0ca8);
  }
  if (puVar12 == (undefined8 *)0x0) {
    uVar5 = 1;
  }
  else {
    uVar5 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bc0ca0);
    uVar5 = uVar5 ^ 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  if ((*(byte *)(param_1 + 0xc) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xf8 | 4;
    if (param_1[0x10] == 0) {
      if (param_1[0xd] != 0) goto LAB_01c028a4;
    }
    else {
      FUN_03f45838(param_1 + 0xe);
      if (param_1[0xd] == 0) {
        *(undefined4 *)((long)param_1 + 100) = 0xe;
      }
      else {
LAB_01c028a4:
        if (*(long *)PTR_DAT_04bb49b8 != 0) {
          FUN_03f350f4(*(long *)PTR_DAT_04bb49b8,param_1 + 0xb);
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  plVar2 = param_1 + 0x2a;
  *(undefined1 *)param_1[0x15] = 0;
  *(undefined1 *)param_1[0x20] = 0;
  *(undefined8 *)((long)param_1 + 0x444) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x44c) = 0xffffffffffffffff;
  *(undefined2 *)((long)param_1 + 0x45c) = 0;
  *(undefined8 *)((long)param_1 + 0x434) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x43c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x424) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x42c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x454) = 0;
  *(undefined8 *)((long)param_1 + 0x414) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x41c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x404) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x40c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3f4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3fc) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3e4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3ec) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3d4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3dc) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3c4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3cc) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3b4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3bc) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3a4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3ac) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x394) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x39c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 900) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x38c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x374) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x37c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x364) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x36c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x354) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x35c) = 0xffffffffffffffff;
  (**(code **)(param_1[0x2a] + 0x10))(plVar2);
  lVar14 = *param_1;
  iVar6 = *(int *)(lVar14 + 0x8c);
  if (iVar6 == 3) {
    pbVar13 = (byte *)(lVar14 + 0x9e);
LAB_01c02978:
    bVar10 = 0;
    if (*pbVar13 < 0x2f) {
      bVar10 = *pbVar13;
    }
  }
  else {
    if (iVar6 == 2) {
      pbVar13 = (byte *)(lVar14 + 0x9b);
      goto LAB_01c02978;
    }
    bVar10 = 0;
    if (iVar6 == 1) {
      pbVar13 = (byte *)(lVar14 + 0x96);
      goto LAB_01c02978;
    }
  }
  FUN_01b97520(auStack_78,bVar10);
  *(undefined8 *)((long)param_1 + 0x354) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x35c) = 0xffffffffffffffff;
  *(undefined2 *)((long)param_1 + 0x45c) = 0;
  *(undefined8 *)((long)param_1 + 0x454) = 0;
  *(undefined1 *)(param_1 + 3) = local_63;
  *(undefined8 *)((long)param_1 + 0x364) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x36c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x374) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x37c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 900) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x38c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x394) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x39c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3a4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3ac) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3b4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3bc) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3c4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3cc) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3d4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3dc) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3e4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3ec) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3f4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3fc) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x404) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x40c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x414) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x41c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x424) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x42c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x434) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x43c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x444) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x44c) = 0xffffffffffffffff;
  (**(code **)(param_1[0x2a] + 0x10))(plVar2);
  *(undefined1 *)((long)param_1 + 0x45d) = local_63;
  *(undefined4 *)(param_1 + 0x67) = 0xffffffff;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  lVar7 = (**(code **)(*param_3 + 0x18))(param_3);
  lVar8 = (**(code **)(*param_3 + 0x18))(param_3);
  if (((lVar8 != 0) && (uVar9 = (**(code **)(*param_3 + 0x20))(param_3), lVar7 != 0)) &&
     ((int)param_1[0x67] < 9)) {
    uVar1 = (int)param_1[0x67] + 1;
    *(uint *)(param_1 + 0x67) = uVar1;
    puVar4 = PTR_DAT_04bb2d80;
    plVar3 = param_1 + 0x2b + (ulong)uVar1 * 6;
    if (9 < uVar1) {
      plVar3 = param_1 + 0x2b;
    }
    *plVar3 = lVar7;
    plVar3[1] = lVar8 + (uVar9 & 0xffffffff) * 2;
    plVar3[2] = (long)(puVar4 + 0x10);
  }
  (**(code **)(*plVar2 + 0x18))(plVar2);
  FUN_006f1490(plVar2);
  if ((uVar5 & 1) == 0) {
    iVar6 = *(int *)(lVar14 + 0x8c);
    local_6c = 0;
    if (iVar6 == 3) {
      pbVar13 = (byte *)(lVar14 + 0x9e);
LAB_01c02adc:
      bVar10 = 0;
      if (*pbVar13 < 0x2f) {
        bVar10 = *pbVar13;
      }
    }
    else {
      if (iVar6 == 2) {
        pbVar13 = (byte *)(lVar14 + 0x9b);
        goto LAB_01c02adc;
      }
      if (iVar6 == 1) {
        pbVar13 = (byte *)(lVar14 + 0x96);
        goto LAB_01c02adc;
      }
      bVar10 = 0;
    }
    FUN_01b97520(auStack_78,bVar10);
    if (local_6c != 1) {
      iVar6 = *(int *)(lVar14 + 0x8c);
      if (iVar6 == 3) {
        pbVar13 = (byte *)(lVar14 + 0x9e);
LAB_01c02b44:
        bVar10 = 0;
        if (*pbVar13 < 0x2f) {
          bVar10 = *pbVar13;
        }
      }
      else {
        if (iVar6 == 2) {
          pbVar13 = (byte *)(lVar14 + 0x9b);
          goto LAB_01c02b44;
        }
        if (iVar6 == 1) {
          pbVar13 = (byte *)(lVar14 + 0x96);
          goto LAB_01c02b44;
        }
        bVar10 = 0;
      }
      if (bVar10 != 0x2b) {
        lVar14 = (**(code **)(*param_2 + 0x60))(param_2);
        lVar7 = (**(code **)(*param_2 + 0x68))(param_2);
        if ((**(char **)(lVar14 + 8) != '\0') && (**(char **)(lVar7 + 8) != '\0')) {
          FUN_01c09c30(param_1 + 10,lVar14,lVar7);
          lVar8 = *(long *)(*param_1 + 8);
          lVar7 = *(long *)PTR_DAT_04bb28f8;
          nn::os::LockMutex((MutexType *)(lVar7 + 0x29b0));
          iVar6 = *(int *)(lVar7 + 0x29ec);
          lVar14 = lVar7 + 0x29d8;
          do {
            lVar14 = *(long *)(lVar14 + 8);
            if (lVar14 == lVar7 + 0x29d8) {
              lVar14 = 0;
              break;
            }
          } while (*(int *)(lVar14 + -(long)iVar6 + 0x10) != *(int *)(lVar8 + 8));
          nn::os::UnlockMutex((MutexType *)(lVar7 + 0x29b0));
          if ((lVar14 != 0) && (lVar14 = lVar14 + -(long)iVar6, lVar14 != 0)) {
            lVar7 = *(long *)(lVar14 + 0x20);
            if (*(int *)(lVar14 + 0x28) < 1) {
              lVar7 = 0;
            }
            if ((lVar7 != 0) && (lVar7 = lVar7 - *(int *)(lVar14 + 0x2c), lVar7 != 0)) {
              do {
                FUN_01bbfe88(lVar7);
                lVar8 = *(long *)(lVar7 + *(int *)(lVar14 + 0x2c) + 8);
                lVar7 = lVar8 - *(int *)(lVar14 + 0x2c);
              } while (lVar8 != lVar14 + 0x18 && lVar7 != 0);
            }
          }
          param_1[2] = (long)param_2;
          uVar11 = 1;
          goto LAB_01c02c24;
        }
      }
    }
  }
  uVar11 = 3;
LAB_01c02c24:
  *(undefined4 *)(param_1 + 1) = uVar11;
  return;
}

