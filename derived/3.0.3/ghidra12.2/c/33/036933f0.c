
void FUN_036933f0(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  uint *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  undefined *local_60;
  char *pcStack_58;
  
  puVar2 = PTR_DAT_04bb27c0;
  uVar11 = *(uint *)(param_1 + 0x2738);
  if ((int)uVar11 < 0) {
    return;
  }
  if (*(int *)(param_1 + 0x278) <= (int)uVar11) {
    return;
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) goto LAB_0369363c;
  uVar11 = *(uint *)(*(long *)(*(long *)(param_1 + 0x280) + (ulong)uVar11 * 8) + 0x40);
  if ((((uVar11 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar11 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_036934d4;
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_036934d4:
    uVar11 = 0;
  }
  if (plVar10 != (long *)0x0) {
    if (((*PTR_DAT_04bb3748 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3748), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3740 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3748);
    }
    uVar4 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3740);
    if (((uVar11 & uVar4) == 1) && (plVar10 = (long *)plVar10[0xc], plVar10 != (long *)0x0)) {
      if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb37b0 = PTR_DAT_04bb3070 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37b8);
      }
      uVar6 = (**(code **)(*plVar10 + 0x10))(plVar10,PTR_DAT_04bb37b0);
      puVar2 = PTR_DAT_04bb2020;
      if ((uVar6 & 1) != 0) {
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        pcStack_58 = "ClosetUIPoseType";
        local_60 = puVar1;
        if (((plVar10[0x227] == 0) || (lVar9 = *(long *)(plVar10[0x227] + 0x78), lVar9 == 0)) ||
           (plVar5 = *(long **)(lVar9 + 0x48), plVar5 == (long *)0x0)) {
          iVar3 = 0;
        }
        else {
          iVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5,&local_60);
        }
        puVar7 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar11 = *puVar7 ^ *puVar7 << 0xb;
        uVar4 = puVar7[3];
        *puVar7 = puVar7[1];
        puVar7[1] = puVar7[2];
        uVar11 = uVar11 >> 8 ^ uVar4 >> 0x13 ^ uVar11 ^ uVar4;
        puVar7[2] = uVar4;
        puVar7[3] = uVar11;
        pcStack_58 = "ClosetUIPoseType";
        iVar8 = (int)((ulong)uVar11 + (ulong)uVar11 * 4 >> 0x20);
        if (iVar3 <= iVar8) {
          iVar8 = iVar8 + 1;
        }
        *(int *)(param_1 + 0x273c) = iVar8;
        if (((plVar10[0x227] != 0) && (lVar9 = *(long *)(plVar10[0x227] + 0x78), lVar9 != 0)) &&
           (plVar5 = *(long **)(lVar9 + 0x48), plVar5 != (long *)0x0)) {
          local_60 = puVar1;
          (**(code **)(*plVar5 + 0x28))(plVar5,&local_60);
        }
        local_60 = puVar2 + 0x10;
        pcStack_58 = "CommonClosetUISameSelecting";
        FUN_017081d0(plVar10,&local_60,6,0,0);
      }
    }
  }
LAB_0369363c:
  uVar11 = *(uint *)(param_1 + 0x278);
  if (0 < (int)uVar11) {
    uVar4 = 0;
    do {
      if ((((int)uVar4 < *(int *)(param_1 + 0x278)) &&
          ((1 << (ulong)(uVar4 & 0x1f) & param_2 & 0xff) != 0)) &&
         (uVar4 != *(uint *)(param_1 + 0x2738))) {
        FUN_03692f00(param_1,uVar4);
      }
      uVar4 = uVar4 + 1;
    } while (uVar11 != uVar4);
  }
  return;
}

