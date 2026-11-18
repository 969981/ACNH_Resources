
void FUN_03692f00(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  long *plVar13;
  undefined *local_70;
  char *pcStack_68;
  
  if ((int)param_2 < 0) {
    return;
  }
  if (*(int *)(param_1 + 0x278) <= (int)param_2) {
    return;
  }
  *(byte *)(param_1 + 0x2734) = *(byte *)(param_1 + 0x2734) | (byte)(1 << (ulong)(param_2 & 0x1f));
  plVar13 = (long *)PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 != 0) {
    uVar12 = *(uint *)(*(long *)(*(long *)(param_1 + 0x280) + (ulong)param_2 * 8) + 0x40);
    if ((((uVar12 == 0) ||
         (plVar11 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                              ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
        ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar12)) {
      plVar11 = (long *)0x0;
    }
    if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar9 = *plVar13;
      iVar5 = (**(code **)(*plVar7 + 0x60))();
      if (iVar5 < 0x11) {
        uVar12 = 1;
      }
      else {
        if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_03693004;
        uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_03693004:
      uVar12 = 0;
    }
    if (plVar11 != (long *)0x0) {
      if (((*PTR_DAT_04bb3748 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3748), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb3740 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3748);
      }
      uVar6 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb3740);
      puVar4 = PTR_DAT_04bb34e8;
      puVar3 = PTR_DAT_04bb34e0;
      if ((uVar12 & uVar6) == 1) {
        if ((long *)plVar11[0x16] != plVar11 + 0x15) {
          lVar9 = (long)*(int *)((long)plVar11 + 0xbc);
          plVar13 = (long *)(plVar11[0x16] - lVar9);
          puVar1 = PTR_DAT_04bb2e38 + 0x10;
          do {
            if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
              *(undefined **)puVar3 = puVar1;
              __cxa_guard_release(puVar4);
            }
            if ((plVar13 != (long *)0x0) &&
               (uVar8 = (**(code **)(*plVar13 + 0x10))(plVar13,puVar3), (uVar8 & 1) != 0)) {
              plVar13[0x6d] = 0x1040000000;
              break;
            }
            plVar13 = (long *)(*(long *)((long)plVar13 + lVar9 + 8) - lVar9);
          } while (plVar13 != (long *)((long)(plVar11 + 0x15) - lVar9));
        }
        plVar11[0x83] = 0;
        *(undefined8 *)((long)plVar11 + 0x41d) = 0;
        lVar9 = plVar11[0xc];
        *(undefined1 *)((long)plVar11 + 0x425) = 1;
        plVar13 = (long *)PTR_DAT_04bb27c0;
        if (lVar9 != 0) {
          *(undefined4 *)(lVar9 + 0x12d0) = 0;
          *(undefined1 *)(lVar9 + 0x142d) = 0;
          **(undefined1 **)(lVar9 + 0x12e0) = 0;
          *(undefined4 *)(lVar9 + 0x1330) = 0xffffffff;
          *(undefined4 *)(lVar9 + 0x1428) = 0;
          *(undefined8 *)(lVar9 + 0x1334) = 0;
          *(undefined8 *)(lVar9 + 0x133c) = 0;
          *(undefined4 *)(lVar9 + 0x1344) = 0;
        }
      }
    }
  }
  uVar2 = *(undefined4 *)(param_1 + 0x273c);
  if ((int)*(uint *)(param_1 + 0x278) <= (int)*(uint *)(param_1 + 0x2738) ||
      0x7fffffff < *(uint *)(param_1 + 0x2738)) {
    uVar2 = 0;
  }
  if (param_2 < *(uint *)(param_1 + 0x278)) {
    lVar9 = *(long *)(*(long *)(param_1 + 0x280) + (ulong)param_2 * 8);
    lVar10 = *plVar13;
  }
  else {
    lVar9 = 0;
    lVar10 = *plVar13;
  }
  if (lVar10 == 0) {
    return;
  }
  uVar12 = *(uint *)(lVar9 + 0x40);
  if ((((uVar12 == 0) ||
       (plVar11 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
      ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar12)) {
    plVar11 = (long *)0x0;
  }
  if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *plVar13;
    iVar5 = (**(code **)(*plVar7 + 0x60))();
    if (iVar5 < 0x11) {
      uVar12 = 1;
      goto joined_r0x03693238;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x03693238;
    }
  }
  uVar12 = 0;
joined_r0x03693238:
  if (plVar11 != (long *)0x0) {
    if (((*PTR_DAT_04bb3748 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3748), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb3740 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3748);
    }
    uVar6 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb3740);
    if (((uVar12 & uVar6) == 1) && (plVar13 = (long *)plVar11[0xc], plVar13 != (long *)0x0)) {
      if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb37b0 = PTR_DAT_04bb3070 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37b8);
      }
      uVar8 = (**(code **)(*plVar13 + 0x10))(plVar13,PTR_DAT_04bb37b0);
      puVar3 = PTR_DAT_04bb2020;
      if ((uVar8 & 1) != 0) {
        local_70 = PTR_DAT_04bb2020 + 0x10;
        pcStack_68 = "ClosetUIPoseType";
        if (((plVar13[0x227] != 0) && (lVar9 = *(long *)(plVar13[0x227] + 0x78), lVar9 != 0)) &&
           (plVar11 = *(long **)(lVar9 + 0x48), plVar11 != (long *)0x0)) {
          (**(code **)(*plVar11 + 0x28))(plVar11,&local_70,uVar2);
        }
        uVar8 = FUN_03692280(param_1,param_2);
        if ((uVar8 & 1) == 0) {
          local_70 = puVar3 + 0x10;
          pcStack_68 = "CommonClosetUISameSelecting";
          FUN_017081d0(plVar13,&local_70,6,0,0);
        }
      }
    }
  }
  return;
}

