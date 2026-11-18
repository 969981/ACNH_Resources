
bool FUN_033bae00(float param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  int local_34;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  uVar8 = 0;
  if (lVar9 != 0) {
    uVar8 = *(uint *)(param_2 + 0x6c);
    if ((((uVar8 == 0) ||
         (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                              ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
        ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar8)) {
      plVar10 = (long *)0x0;
    }
    if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
      plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar9 = *(long *)puVar2;
      iVar4 = (**(code **)(*plVar5 + 0x60))();
      if (iVar4 < 0x11) {
        uVar11 = 1;
        uVar8 = 1;
      }
      else {
        uVar8 = *(uint *)(lVar9 + 0x5e8);
        if (4 < uVar8) goto LAB_033baed4;
        uVar11 = 0x1aU >> (ulong)(uVar8 & 0x1f) & 1;
        uVar8 = (uint)(0x101000100 >> (((ulong)uVar8 & 7) << 3)) & 1;
      }
    }
    else {
LAB_033baed4:
      uVar11 = 0;
      uVar8 = 0;
    }
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar10[0x2a];
      bVar3 = (int)lVar9 == 1;
      if (((*PTR_DAT_04bb2e60 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb2e60), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb2e58 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2e60);
      }
      uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb2e58);
      if ((uVar6 & 1) != 0) {
        uVar11 = uVar11 ^ 1;
        if ((int)lVar9 != 1) {
          uVar11 = 1;
        }
        if (uVar11 != 0) {
          return false;
        }
        iVar7 = (int)param_1;
        plVar10 = (long *)plVar10[0xd];
        iVar4 = -iVar7;
        if (-1 < iVar7) {
          iVar4 = iVar7;
        }
        iVar4 = (int)(long)((float)iVar4 * 11930465.0);
        local_34 = -iVar4;
        if (0.0 <= param_1) {
          local_34 = iVar4;
        }
        local_34 = *(int *)((long)plVar10 + 0x2b4) + local_34;
        (**(code **)(*plVar10 + 0x160))(plVar10,&local_34);
        return true;
      }
      uVar8 = 0;
      goto LAB_033baf98;
    }
  }
  bVar3 = false;
LAB_033baf98:
  bVar1 = false;
  if (uVar8 != 0) {
    bVar1 = bVar3;
  }
  return bVar1;
}

