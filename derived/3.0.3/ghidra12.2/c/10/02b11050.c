
void FUN_02b11050(long param_1)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  
  puVar5 = PTR_DAT_04bb3238;
  puVar4 = PTR_DAT_04bb27c0;
  uVar13 = *(uint *)(param_1 + 0x48);
  uVar9 = *(uint *)PTR_DAT_04bb3238;
  if (uVar13 != uVar9) {
    lVar10 = *(long *)PTR_DAT_04bb27c0;
    if (lVar10 != 0) {
      if ((((uVar13 == 0) ||
           (plVar11 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                                ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
          ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar13)) {
        plVar11 = (long *)0x0;
      }
      if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
        plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar10 = *(long *)puVar4;
        iVar6 = (**(code **)(*plVar8 + 0x60))();
        if (iVar6 < 0x11) {
          uVar13 = 1;
        }
        else {
          if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_02b11124;
          uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_02b11124:
        uVar13 = 0;
      }
      if (plVar11 != (long *)0x0) {
        lVar10 = plVar11[0x2a];
        uVar9 = *(uint *)(plVar11 + 0x49);
        if (((*PTR_DAT_04bc4410 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4410), iVar6 != 0)) {
          *(undefined **)PTR_DAT_04bc4408 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4410);
        }
        uVar7 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bc4408);
        if ((((int)lVar10 == 1) && ((uVar7 & uVar13) != 0)) && ((uVar9 >> 4 & 1) != 0)) {
          lVar10 = plVar11[0xc];
          if (lVar10 != 0) {
            *(uint *)(lVar10 + 0x11a0) = *(uint *)(lVar10 + 0x11a0) | 1;
          }
          if (plVar11[0x11] != 0) {
            FUN_02a5b080(plVar11,plVar11[0x11],1);
          }
          uVar9 = *(uint *)puVar5;
          *(uint *)(param_1 + 0x48) = uVar9;
          goto LAB_02b111b4;
        }
      }
    }
    uVar9 = *(uint *)puVar5;
  }
LAB_02b111b4:
  uVar13 = *(uint *)(param_1 + 0x4c);
  if (uVar13 == uVar9) {
    return;
  }
  lVar10 = *(long *)puVar4;
  if (lVar10 == 0) {
    return;
  }
  if ((((uVar13 == 0) ||
       (lVar12 = *(long *)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                          ((ulong)(uVar13 >> 0x11) & 0x7ff8)), lVar12 == 0)) ||
      ((*(uint *)(lVar12 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar12 + 0x230) != uVar13)) {
    lVar12 = 0;
  }
  if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
    plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar4;
    iVar6 = (**(code **)(*plVar11 + 0x60))();
    if (iVar6 < 0x11) {
      uVar13 = 1;
      goto joined_r0x02b1125c;
    }
    if (*(uint *)(lVar10 + 0x5e8) < 5) {
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02b1125c;
    }
  }
  uVar13 = 0;
joined_r0x02b1125c:
  if (lVar12 != 0) {
    uVar13 = uVar13 ^ 1;
    if (*(int *)(lVar12 + 0x150) != 1) {
      uVar13 = 1;
    }
    if ((uVar13 == 0) && ((*(uint *)(lVar12 + 0x248) >> 4 & 1) != 0)) {
      if ((((*(uint *)(lVar12 + 0x248) >> 10 & 1) == 0) &&
          (puVar1 = (uint *)(lVar12 + 0x248), (*puVar1 >> 1 & 1) == 0)) &&
         (((*puVar1 >> 9 & 1) != 0 || ((*puVar1 >> 8 & 1) != 0)))) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 0x400;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (*(long *)(lVar12 + 0xb0) != lVar12 + 0xa8) {
          lVar10 = (long)*(int *)(lVar12 + 0xbc);
          plVar11 = (long *)(*(long *)(lVar12 + 0xb0) - lVar10);
          do {
            (**(code **)(*plVar11 + 0xb8))(plVar11);
            plVar11 = (long *)(*(long *)((long)plVar11 + lVar10 + 8) - lVar10);
          } while (plVar11 != (long *)((lVar12 + 0xa8) - lVar10));
        }
      }
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)puVar5;
    }
  }
  return;
}

