
void FUN_023053e8(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  byte *pbVar13;
  uint uVar14;
  long lVar15;
  int local_4c;
  undefined4 local_48;
  uint local_44;
  
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x24a26848) {
    return;
  }
  pbVar13 = *(byte **)(param_1 + 0x28);
  if (5 < *pbVar13 || (1 << (ulong)(*pbVar13 & 0x1f) & 0x29U) == 0) {
    return;
  }
  lVar15 = *(long *)(param_1 + 0x30);
  plVar11 = *(long **)PTR_DAT_04bb27d0;
  if (plVar11 == (long *)0x0) {
    bVar5 = false;
joined_r0x02305490:
    if ((lVar15 == 0) && (!bVar5)) {
      return;
    }
  }
  else {
    bVar3 = *(byte *)(*plVar11 + 0x473);
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      pbVar1 = (byte *)(*plVar11 + 0x48);
      uVar12 = (long)(char)bVar3 & 0xffffffff;
      pbVar2 = pbVar1 + uVar12 * 0x80;
      if (7 < bVar3) {
        pbVar2 = pbVar1;
      }
      if ((*pbVar2 >> 3 & 1) != 0) {
        lVar10 = plVar11[2] + 0x108 + uVar12 * 0xc;
        if (0xb < bVar3) {
          lVar10 = plVar11[2] + 0x108;
        }
        bVar5 = *(char *)(lVar10 + 10) != '\0';
        goto joined_r0x02305490;
      }
    }
    bVar5 = true;
  }
  local_4c = 0;
  local_48 = 0;
  lVar10 = *(long *)PTR_DAT_04bb5008;
  if (*(int *)(lVar10 + 0x26770) == 0) {
LAB_02305520:
    uVar8 = 0;
  }
  else {
    local_44 = *(uint *)(lVar10 + 0x2318);
    plVar11 = (long *)(lVar10 + 0x22e0) + local_44;
    if (6 < local_44) {
      plVar11 = (long *)(lVar10 + 0x22e0);
    }
    if ((long *)*plVar11 == (long *)0x0) goto LAB_02305520;
    uVar8 = (**(code **)(*(long *)*plVar11 + 0x38))();
  }
  puVar4 = PTR_DAT_04bb27c0;
  if (lVar15 == 0) {
    if (!bVar5) {
      return;
    }
    local_48 = *(undefined4 *)(pbVar13 + 0x2c);
    local_4c = (int)*(short *)(pbVar13 + 0x2a);
  }
  else {
    lVar10 = *(long *)(param_1 + 0x30);
    FUN_01a18a90(&local_4c,uVar8);
    FUN_01a18cc0(local_4c);
    lVar15 = *(long *)puVar4;
    if (lVar15 != 0) {
      uVar14 = *(uint *)PTR_DAT_04bbc7c0;
      if ((((uVar14 == 0) ||
           (plVar11 = *(long **)(*(long *)(*(long *)(lVar15 + 0x1c0) + 8) +
                                ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
          ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar14)) {
        plVar11 = (long *)0x0;
      }
      if ((*(int *)(lVar15 + 0x288) == 1) || (*(int *)(lVar15 + 0x288) == -1)) {
        plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar15 = *(long *)puVar4;
        iVar6 = (**(code **)(*plVar9 + 0x60))();
        if (iVar6 < 0x11) {
          uVar14 = 1;
        }
        else {
          if (4 < *(uint *)(lVar15 + 0x5e8)) goto LAB_02305604;
          uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar15 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_02305604:
        uVar14 = 0;
      }
      if (plVar11 != (long *)0x0) {
        if (((*PTR_DAT_04bbc7a8 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bbc7a8), iVar6 != 0)) {
          *(undefined **)PTR_DAT_04bbc7a0 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbc7a8);
        }
        uVar7 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bbc7a0);
        if (((uVar14 & uVar7) == 1) && (plVar11[0x5e] != 0)) {
          FUN_013cff80(plVar11[0x5e],&local_48,uVar8);
          if (plVar11[0x5e] != 0) {
            FUN_013d01b0(plVar11[0x5e],local_48);
          }
        }
      }
    }
    *(undefined4 *)(lVar10 + 0x2c) = local_48;
    *(short *)(lVar10 + 0x2a) = (short)local_4c;
    if (!bVar5) {
      return;
    }
  }
  FUN_01a18ec0(local_4c);
  lVar15 = *(long *)puVar4;
  if (lVar15 == 0) {
    return;
  }
  uVar14 = *(uint *)PTR_DAT_04bbc7c0;
  if ((((uVar14 == 0) ||
       (plVar11 = *(long **)(*(long *)(*(long *)(lVar15 + 0x1c0) + 8) +
                            ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
      ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar14)) {
    plVar11 = (long *)0x0;
  }
  if ((*(int *)(lVar15 + 0x288) == 1) || (*(int *)(lVar15 + 0x288) == -1)) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar15 = *(long *)puVar4;
    iVar6 = (**(code **)(*plVar9 + 0x60))();
    if (iVar6 < 0x11) {
      uVar14 = 1;
      goto joined_r0x02305748;
    }
    if (*(uint *)(lVar15 + 0x5e8) < 5) {
      uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar15 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02305748;
    }
  }
  uVar14 = 0;
joined_r0x02305748:
  if (plVar11 != (long *)0x0) {
    if (((*PTR_DAT_04bbc7a8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bbc7a8), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bbc7a0 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbc7a8);
    }
    uVar7 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bbc7a0);
    if (((uVar14 & uVar7) == 1) && (plVar11[0x5e] != 0)) {
      FUN_013d03c0(plVar11[0x5e],local_48);
    }
  }
  return;
}

