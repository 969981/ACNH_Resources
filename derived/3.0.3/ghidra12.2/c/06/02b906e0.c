
/* WARNING: Removing unreachable block (ram,0x02b907ec) */
/* WARNING: Removing unreachable block (ram,0x02b907a4) */
/* WARNING: Removing unreachable block (ram,0x02b9071c) */
/* WARNING: Removing unreachable block (ram,0x02b9070c) */
/* WARNING: Removing unreachable block (ram,0x02b90780) */
/* WARNING: Removing unreachable block (ram,0x02b907c8) */
/* WARNING: Removing unreachable block (ram,0x02b90810) */

undefined4 FUN_02b906e0(undefined8 param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  uint extraout_w12;
  long *plVar11;
  undefined4 local_50 [3];
  int local_44;
  uint local_38;
  uint local_34;
  undefined4 local_28;
  int local_24;
  
  local_50[0] = 0;
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x148);
  }
  if (puVar1[1] == 0) {
    return *(undefined4 *)PTR_DAT_04bb3238;
  }
  FUN_02a58ea0(local_50,puVar1,param_1);
  puVar4 = PTR_DAT_04bb27c0;
  plVar11 = (long *)PTR_DAT_04bb3238;
  if (local_44 != 0) {
    if (local_44 != 0x1e) {
      local_28 = 0;
      local_24 = local_44;
      if ((((DAT_05641c34 != local_44) && (local_28 = 1, DAT_05641c38 != local_44)) &&
          (local_28 = 2, DAT_05641c3c != local_44)) &&
         ((local_28 = 3, DAT_05641c40 != local_44 && (local_28 = 4, DAT_05641c44 != local_44))))
      goto LAB_02b909fc;
    }
    if (((puVar1[1] == 0) || ((0x11f < local_38 || (0xff < local_34)))) ||
       (uVar2 = *(uint *)(puVar1[1] + (ulong)local_38 * 0x400 + (ulong)local_34 * 4 + 0x30),
       0x35 < uVar2)) {
      uVar6 = *(uint *)PTR_DAT_04bb3238;
    }
    else {
      uVar9 = 0;
      do {
        uVar3 = *(uint *)(*(long *)PTR_DAT_04bb5008 + 0x1e18 +
                          ((long)((ulong)uVar9 << 0x20) >> 0x1d) + 4);
        if (uVar3 == uVar2) {
          uVar6 = *(uint *)(*(long *)PTR_DAT_04bb5008 + 0x1e18 + (long)(int)uVar9 * 8);
          break;
        }
        uVar9 = uVar9 + 1;
        uVar6 = extraout_w12;
      } while (uVar9 != 0x36);
      if (uVar3 != uVar2) {
        uVar6 = *(uint *)PTR_DAT_04bb3238;
      }
    }
    if ((uVar6 != 0) && (lVar10 = *(long *)PTR_DAT_04bb27c0, lVar10 != 0)) {
      plVar11 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) + (ulong)(uVar6 >> 0x14) * 8);
      if ((plVar11 == (long *)0x0) ||
         (((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar11 + 0x46) != uVar6)))) {
        plVar11 = (long *)0x0;
      }
      if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
        plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar10 = *(long *)puVar4;
        iVar5 = (**(code **)(*plVar7 + 0x60))();
        if (iVar5 < 0x11) {
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
          if (*(uint *)(lVar10 + 0x5e8) < 5) {
            uVar2 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
          }
        }
      }
      else {
        uVar2 = 0;
      }
      if (plVar11 != (long *)0x0) {
        if (((*PTR_DAT_04bc4410 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4410), iVar5 != 0)) {
          *(undefined **)PTR_DAT_04bc4408 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4410);
        }
        uVar6 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bc4408);
        puVar4 = PTR_DAT_04bb3238;
        if ((uVar2 & uVar6) == 1) {
          plVar7 = (long *)plVar11[0x4f];
          plVar11 = (long *)PTR_DAT_04bb3238;
          if (plVar7 != (long *)0x0) {
            if (((*PTR_DAT_04bc44a8 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc44a8), iVar5 != 0)) {
              *(undefined **)PTR_DAT_04bc44a0 = PTR_DAT_04bc4430 + 0x10;
              __cxa_guard_release(PTR_DAT_04bc44a8);
            }
            uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,PTR_DAT_04bc44a0);
            plVar11 = plVar7 + 0x58;
            if ((uVar8 & 1) == 0) {
              plVar11 = (long *)puVar4;
            }
          }
          goto LAB_02b909fc;
        }
      }
    }
    plVar11 = (long *)PTR_DAT_04bb3238;
  }
LAB_02b909fc:
  return (int)*plVar11;
}

