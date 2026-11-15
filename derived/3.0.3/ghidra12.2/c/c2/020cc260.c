
void FUN_020cc260(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  short sVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 local_4c;
  undefined4 local_44;
  undefined4 local_24;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  uVar11 = *param_2;
  if ((((uVar11 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar11 = 1;
      goto joined_r0x020cc320;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x020cc320;
    }
  }
  uVar11 = 0;
joined_r0x020cc320:
  if (plVar10 != (long *)0x0) {
    lVar7 = plVar10[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar11;
    }
    if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
      plVar5 = plVar10 + 0x7c;
      iVar4 = FUN_021d5df0(plVar5);
      if (iVar4 == 2) {
        local_4c = (ulong)local_4c._4_4_ << 0x20;
        FUN_01e39778(plVar10,PTR_DAT_04bb2150,&local_4c,0);
      }
      else {
        sVar3 = FUN_0376baa0(plVar5);
        if (sVar3 != -1) {
          iVar4 = *(int *)(*(long *)PTR_DAT_04bb4e28 + 0xe0);
          if (iVar4 != 0) {
            lVar8 = *(long *)(*(long *)PTR_DAT_04bb4e28 + 0xe8);
            lVar7 = 0;
            lVar9 = (long)iVar4 << 3;
            do {
              if (*(short *)(*(long *)(lVar8 + lVar7 * 8) + 0x38) == sVar3) {
                if ((*(ushort *)(*(long *)(lVar8 + lVar7 * 8) + 0x114) >> 5 & 1) != 0) {
                  return;
                }
                break;
              }
              lVar7 = lVar7 + 1;
              lVar9 = lVar9 + -8;
            } while (lVar9 != 0);
          }
        }
        puVar12 = (undefined8 *)plVar10[0x77];
        if (((*PTR_DAT_04bb6710 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar4 != 0)) {
          *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb6710);
        }
        if ((puVar12 != (undefined8 *)0x0) &&
           (uVar6 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bb6708), puVar2 = PTR_DAT_04bb4e28,
           (uVar6 & 1) != 0)) {
          local_4c = 0;
          local_44 = 0;
          lVar7 = *(long *)PTR_DAT_04bb4e28;
          iVar4 = FUN_03722560(lVar7,plVar5);
          if ((iVar4 != -1) &&
             (lVar7 = *(long *)(*(long *)(lVar7 + 0xe8) + (long)iVar4 * 8),
             (*(ushort *)(lVar7 + 0x114) >> 9 & 1) != 0)) {
            local_44 = *(undefined4 *)(lVar7 + 0x10c);
            local_4c = *(undefined8 *)(lVar7 + 0x104);
            local_24 = *(undefined4 *)(lVar7 + 0x110);
            FUN_01e39778(plVar10,&local_4c,&local_24,0);
            FUN_01fb0544(puVar12);
          }
          FUN_015243f0(*(undefined8 *)PTR_DAT_04bb4c80,&local_4c);
          lVar7 = *(long *)puVar2;
          iVar4 = FUN_03722560(lVar7,plVar5);
          if (iVar4 != -1) {
            lVar7 = *(long *)(*(long *)(lVar7 + 0xe8) + (long)iVar4 * 8);
            *(ushort *)(lVar7 + 0x114) = *(ushort *)(lVar7 + 0x114) & 0xfdff;
          }
        }
      }
    }
  }
  return;
}

