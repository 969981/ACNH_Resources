
void FUN_020cbc10(long param_1,uint *param_2)

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
  undefined8 *puVar11;
  uint uVar12;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  
  puVar2 = PTR_DAT_04bb27c0;
  uVar12 = *param_2;
  if (uVar12 == **(uint **)(param_1 + 8)) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  if ((((uVar12 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar12)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar12 = 1;
      goto joined_r0x020cbce0;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x020cbce0;
    }
  }
  uVar12 = 0;
joined_r0x020cbce0:
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
      uVar1 = uVar12;
    }
    if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
      sVar3 = FUN_0376baa0(plVar10 + 0x7c);
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
      puVar11 = (undefined8 *)plVar10[0x77];
      if (((*PTR_DAT_04bb6710 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6710);
      }
      if ((puVar11 != (undefined8 *)0x0) &&
         (uVar6 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bb6708), (uVar6 & 1) != 0)) {
        local_3c = 0;
        local_34 = 0;
        local_40 = 0;
        uVar6 = FUN_01faf398(puVar11,&local_3c,&local_40,*(undefined8 *)(param_1 + 8));
        if ((uVar6 & 1) != 0) {
          FUN_037228d0(*(undefined8 *)PTR_DAT_04bb4e28,&local_3c,&local_40,plVar10 + 0x7c);
        }
      }
    }
  }
  return;
}

