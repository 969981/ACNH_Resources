
void FUN_011e433c(void)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  long **pplVar4;
  long *plVar5;
  byte *pbVar6;
  byte bVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  undefined8 local_a0;
  undefined2 local_98;
  byte local_96;
  undefined1 local_95;
  undefined4 local_94;
  long local_90;
  undefined4 local_88;
  undefined4 local_84;
  long *local_80;
  char local_78;
  char local_77;
  long *local_70;
  char local_68;
  char local_67;
  
  puVar8 = PTR_DAT_04bb27c0;
  if (**(char **)(PTR_DAT_04bc3a88 + 8) != '\0') {
    return;
  }
  if (DAT_050dfb28 == 0) {
    return;
  }
  lVar13 = *(long *)PTR_DAT_04bb27c0;
  if (lVar13 == 0) {
    return;
  }
  plVar14 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                      ((ulong)(DAT_050dfb28 >> 0x11) & 0x7ff8));
  if (((plVar14 == (long *)0x0) || ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar14 + 0x46) != DAT_050dfb28)) {
    plVar14 = (long *)0x0;
  }
  if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
    plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar13 = *(long *)puVar8;
    iVar9 = (**(code **)(*plVar11 + 0x60))();
    if (iVar9 < 0x11) {
      uVar10 = 1;
      goto joined_r0x011e441c;
    }
    if (*(uint *)(lVar13 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x011e441c;
    }
  }
  uVar10 = 0;
joined_r0x011e441c:
  if (plVar14 != (long *)0x0) {
    lVar13 = plVar14[0x2a];
    if (((*PTR_DAT_04bbbb10 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bbbb10), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bbbb08 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbbb10);
    }
    uVar12 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bbbb08);
    uVar3 = 0;
    if ((int)lVar13 == 1) {
      uVar3 = uVar10;
    }
    if (((uVar12 & 1) != 0) && (uVar3 != 0)) {
      if (**(char **)(PTR_DAT_04bc3a88 + 8) == '\0' && DAT_050dfb2c != 0) {
        local_a0 = (undefined *)CONCAT44(local_a0._4_4_,(int)plVar14[0x46]);
        FUN_0071c8d0(&local_70,&DAT_050dfb2c,&local_a0,0);
        plVar11 = local_70;
        if (local_70 != (long *)0x0) {
          if (((*PTR_DAT_04bbbb50 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04bbbb50), iVar9 != 0)) {
            *(undefined **)PTR_DAT_04bbbb48 = PTR_DAT_04bbbaf0 + 0x10;
            __cxa_guard_release(PTR_DAT_04bbbb50);
          }
          uVar12 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bbbb48);
          if ((uVar12 & 1) == 0) {
            local_67 = '\0';
          }
        }
        if ((((local_70 != (long *)0x0) && (local_68 != '\0')) && (local_67 != '\0')) &&
           (DAT_050dfb30 != 0)) {
          local_a0 = (undefined *)CONCAT44(local_a0._4_4_,(int)plVar14[0x46]);
          FUN_0071c8d0(&local_80,&DAT_050dfb30,&local_a0,0);
          plVar11 = local_80;
          if (local_80 != (long *)0x0) {
            if (((*PTR_DAT_04bbbb50 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04bbbb50), iVar9 != 0)) {
              *(undefined **)PTR_DAT_04bbbb48 = PTR_DAT_04bbbaf0 + 0x10;
              __cxa_guard_release(PTR_DAT_04bbbb50);
            }
            uVar12 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bbbb48);
            if ((uVar12 & 1) == 0) {
              local_77 = '\0';
            }
          }
          puVar8 = PTR_DAT_04bb43c0;
          if (((local_80 != (long *)0x0) && (local_78 != '\0')) && (local_77 != '\0')) {
            iVar9 = (int)plVar14[0x49ef];
            if (0 < iVar9) {
              plVar11 = plVar14 + 0x4f;
              iVar15 = 0;
              puVar1 = PTR_DAT_04bc0510 + 0x10;
              do {
                if ((*(ushort *)(plVar11 + 0xd) >> 3 & 1) != 0) {
                  local_88 = (undefined4)*plVar11;
                  local_84 = *(undefined4 *)((long)plVar11 + 4);
                  iVar9 = FUN_0277d6c4(&local_88);
                  if (iVar9 == 0x38d2) {
                    local_90 = 0;
                    bVar7 = local_88._2_1_;
                    lVar13 = *(long *)puVar8;
                    local_96 = local_88._2_1_;
                    local_95 = local_88._3_1_;
                    local_98 = (undefined2)local_88;
                    local_94 = local_84;
                    local_a0 = puVar1;
                    uVar10 = FUN_0277d6c4(&local_98);
                    if (*(long *)puVar8 != 0) {
                      lVar13 = *(long *)(lVar13 + 0x57e58);
                      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
                      if ((uVar10 < *(uint *)(lVar13 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                        lVar13 = *(long *)PTR_DAT_04bc0428;
                        uVar10 = FUN_0277d6c4(&local_88);
                        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
                        if ((uVar10 < *(uint *)(lVar13 + 0x1d8)) &&
                           (lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar10 * 8),
                           lVar13 != 0)) {
                          local_90 = lVar13;
                        }
                      }
                    }
                    uVar12 = FUN_01ae59b0(&local_a0);
                    bVar2 = bVar7 >> 2 & 1;
                    if ((uVar12 & 1) == 0) {
                      bVar2 = bVar7 & 4;
                    }
                    if (bVar2 != 0) {
LAB_011e476c:
                      pplVar4 = &local_70;
                      if ((int)plVar11[1] != DAT_050dfb2c) {
                        pplVar4 = &local_80;
                      }
                      plVar5 = *pplVar4 + 0x4f + (ulong)*(uint *)(plVar11 + 0xb) * 0x24;
                      if (999 < *(uint *)(plVar11 + 0xb)) {
                        plVar5 = *pplVar4 + 0x4f;
                      }
                      if (*(int *)((long)plVar5 + 0xfc) != 4) {
                        lVar13 = **(long **)PTR_DAT_04bb27d0;
                        bVar7 = *(byte *)(lVar13 + 0x473);
                        if ((long)(char)bVar7 != 0xffffffffffffffff) {
                          pbVar6 = (byte *)(lVar13 + 0x48) +
                                   ((long)(char)bVar7 & 0xffffffffU) * 0x80;
                          if (7 < bVar7) {
                            pbVar6 = (byte *)(lVar13 + 0x48);
                          }
                          if (((*pbVar6 >> 3 & 1) != 0) && (*(byte *)(lVar13 + 0x472) != bVar7))
                          goto LAB_011e4670;
                        }
                        uVar10 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
                        DAT_0514cb58 = DAT_0514cb5c;
                        DAT_0514cb5c = DAT_0514cb60;
                        uVar10 = uVar10 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar10 ^ DAT_0514cb64;
                        DAT_0514cb60 = DAT_0514cb64;
                        DAT_0514cb64 = uVar10;
                        *(char *)((long)plVar5 + 0x117) = (char)((ulong)uVar10 * 100 >> 0x20) + 'd';
                      }
                    }
                  }
                  else {
                    lVar13 = *(long *)PTR_DAT_04bbbc68;
                    if (((((lVar13 != 0) && (*(long *)(lVar13 + 0xb0) != 0)) &&
                         (*(long *)(*(long *)(lVar13 + 0xb0) + 8) != 0)) &&
                        ((*(long *)(lVar13 + 0x488) != 0 &&
                         (*(long *)(*(long *)(lVar13 + 0x488) + 8) != 0)))) &&
                       ((*(long *)(lVar13 + 0x2b0) != 0 &&
                        (*(long *)(*(long *)(lVar13 + 0x2b0) + 8) != 0)))) {
                      uVar10 = FUN_0277d6c4(&local_88);
                      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
                      if ((uVar10 < *(uint *)(lVar13 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                        FUN_0124c030(&local_a0,&local_88);
                        iVar9 = FUN_0123db50(&local_98,local_90);
                        if ((iVar9 - 0x23U < 9) ||
                           (iVar9 = FUN_0123db50(&local_98,local_90), iVar9 - 0x12U < 6))
                        goto LAB_011e476c;
                      }
                    }
                  }
LAB_011e4670:
                  iVar9 = (int)plVar14[0x49ef];
                }
                iVar15 = iVar15 + 1;
                plVar11 = plVar11 + 0xf;
              } while (iVar15 < iVar9);
            }
          }
        }
      }
      return;
    }
  }
  return;
}

