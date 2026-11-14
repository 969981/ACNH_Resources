
void FUN_01a217c0(long param_1,uint *param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  uint uVar3;
  byte *pbVar4;
  long lVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  
  puVar7 = PTR_DAT_04bb27c0;
  lVar12 = *(long *)PTR_DAT_04bb27c0;
  if (lVar12 == 0) {
    return;
  }
  uVar14 = *param_2;
  if ((((uVar14 == 0) ||
       (plVar13 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                            ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
      ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar14)) {
    plVar13 = (long *)0x0;
  }
  if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
    plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)puVar7;
    iVar9 = (**(code **)(*plVar10 + 0x60))();
    if (iVar9 < 0x11) {
      uVar14 = 1;
      goto joined_r0x01a21884;
    }
    if (*(uint *)(lVar12 + 0x5e8) < 5) {
      uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01a21884;
    }
  }
  uVar14 = 0;
joined_r0x01a21884:
  if (plVar13 != (long *)0x0) {
    lVar12 = plVar13[0x2a];
    if (((*PTR_DAT_04bb3ff0 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3ff0), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bb3fe8 = PTR_DAT_04bb3fd0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3ff0);
    }
    uVar11 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb3fe8);
    uVar3 = 0;
    if ((int)lVar12 == 1) {
      uVar3 = uVar14;
    }
    if ((((uVar11 & 1) != 0) && (uVar3 != 0)) &&
       ((**(uint **)(param_1 + 8) >> (ulong)(*(uint *)(plVar13 + 0x5c) & 0x1f) & 1) != 0)) {
      (**(code **)(plVar13[0x5b] + 0x28))(plVar13 + 0x5b);
      puVar8 = PTR_DAT_04bbe5c0;
      puVar7 = PTR_DAT_04bbe5b8;
      lVar12 = **(long **)PTR_DAT_04bb27d0;
      bVar6 = *(byte *)(lVar12 + 0x473);
      if ((long)(char)bVar6 != 0xffffffffffffffff) {
        pbVar1 = (byte *)(lVar12 + 0x48);
        uVar11 = (long)(char)bVar6 & 0xffffffff;
        pbVar4 = pbVar1 + uVar11 * 0x80;
        if (7 < bVar6) {
          pbVar4 = pbVar1;
        }
        if ((*pbVar4 >> 3 & 1) != 0) {
          lVar12 = (*(long **)PTR_DAT_04bb27d0)[2] + 0x108;
          lVar5 = lVar12 + uVar11 * 0xc;
          if (0xb < bVar6) {
            lVar5 = lVar12;
          }
          if (*(char *)(lVar5 + 10) == '\0') {
            return;
          }
        }
      }
      if ((long *)plVar13[0x16] != plVar13 + 0x15) {
        lVar12 = (long)*(int *)((long)plVar13 + 0xbc);
        plVar10 = (long *)(plVar13[0x16] - lVar12);
        puVar2 = PTR_DAT_04bbe5c8 + 0x10;
        do {
          if (((*puVar8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar8), iVar9 != 0)) {
            *(undefined **)puVar7 = puVar2;
            __cxa_guard_release(puVar8);
          }
          if ((plVar10 != (long *)0x0) &&
             (uVar11 = (**(code **)(*plVar10 + 0x10))(plVar10,puVar7), (uVar11 & 1) != 0)) {
            if (plVar10[0x7a] == 0) {
              return;
            }
            FUN_006fb3d0();
            return;
          }
          plVar10 = (long *)(*(long *)((long)plVar10 + lVar12 + 8) - lVar12);
        } while (plVar10 != (long *)((long)(plVar13 + 0x15) - lVar12));
      }
    }
  }
  return;
}

