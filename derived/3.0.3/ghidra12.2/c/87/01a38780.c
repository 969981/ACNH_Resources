
void FUN_01a38780(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  uint *puVar13;
  long *plVar14;
  undefined *local_70;
  char *local_68;
  long local_60;
  uint local_58;
  undefined4 local_54;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar11 = param_1 + 0x36c + ((ulong)*(uint *)(param_1 + 0x368) & 1) * 0x20;
  if ((*(char *)(lVar11 + 0x1d) != '\0') && (*(char *)(lVar11 + 0x1c) == '\0')) {
    return;
  }
  uVar8 = *(uint *)(lVar11 + 0x14);
  if (uVar8 == *(uint *)PTR_DAT_04bb3238) {
    return;
  }
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 == 0) {
    return;
  }
  if ((((uVar8 == 0) ||
       (plVar14 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                            ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0)) ||
      ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar14 + 0x46) != uVar8)) {
    plVar14 = (long *)0x0;
  }
  if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)puVar2;
    iVar7 = (**(code **)(*plVar9 + 0x60))();
    if (iVar7 < 0x11) {
      uVar8 = 1;
      goto joined_r0x01a3887c;
    }
    if (*(uint *)(lVar11 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01a3887c;
    }
  }
  uVar8 = 0;
joined_r0x01a3887c:
  if (plVar14 != (long *)0x0) {
    lVar11 = plVar14[0x2a];
    if (((*PTR_DAT_04bbfcb0 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbfcb0), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bbfca8 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbfcb0);
    }
    uVar10 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bbfca8);
    puVar4 = PTR_DAT_04bb3e78;
    puVar2 = PTR_DAT_04bb3e70;
    uVar3 = 0;
    if ((int)lVar11 == 1) {
      uVar3 = uVar8;
    }
    if (((uVar10 & 1) != 0) && (uVar3 != 0)) {
      if ((long *)plVar14[0x16] != plVar14 + 0x15) {
        lVar11 = (long)*(int *)((long)plVar14 + 0xbc);
        plVar9 = (long *)(plVar14[0x16] - lVar11);
        puVar1 = PTR_DAT_04bb3e80 + 0x10;
        do {
          if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
            *(undefined **)puVar2 = puVar1;
            __cxa_guard_release(puVar4);
          }
          if (plVar9 != (long *)0x0) {
            uVar10 = (**(code **)(*plVar9 + 0x10))(plVar9,puVar2);
            puVar6 = PTR_DAT_04bc0510;
            puVar5 = PTR_DAT_04bb43c0;
            if ((uVar10 & 1) != 0) {
              local_60 = 0;
              local_70 = PTR_DAT_04bc0510 + 0x10;
              local_68 = *(char **)(param_1 + 0x350);
              lVar11 = *(long *)PTR_DAT_04bb43c0;
              uVar8 = FUN_0277d6c4(&local_68);
              if (*(long *)puVar5 != 0) {
                lVar11 = *(long *)(lVar11 + 0x57e58);
                uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                if ((uVar8 < *(uint *)(lVar11 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
                  lVar11 = *(long *)PTR_DAT_04bc0428;
                  uVar8 = FUN_0277d6c4(param_1 + 0x350);
                  uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                  if (uVar8 < *(uint *)(lVar11 + 0x1d8)) {
                    lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8);
                    if (lVar11 != 0) {
                      local_60 = lVar11;
                    }
                  }
                }
              }
              uVar10 = FUN_01ad7aa4(&local_70,1);
              if ((uVar10 & 1) != 0) {
                local_54 = 9;
                goto LAB_01a38b84;
              }
              local_70 = puVar6 + 0x10;
              local_68 = *(char **)(param_1 + 0x350);
              local_60 = 0;
              lVar11 = *(long *)puVar5;
              uVar8 = FUN_0277d6c4(&local_68);
              if (*(long *)puVar5 == 0) {
LAB_01a38b60:
                local_58 = 0xbc;
              }
              else {
                lVar11 = *(long *)(lVar11 + 0x57e58);
                uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                if ((*(uint *)(lVar11 + 0x1d8) <= uVar8) ||
                   (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) == 0))
                goto LAB_01a38b60;
                lVar11 = *(long *)PTR_DAT_04bc0428;
                uVar8 = FUN_0277d6c4(param_1 + 0x350);
                uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                if ((*(uint *)(lVar11 + 0x1d8) <= uVar8) ||
                   (puVar12 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8),
                   puVar12 == (uint *)0x0)) goto LAB_01a38b60;
                local_58 = 0;
                uVar8 = *puVar12;
                if ((uVar8 != 0) && (puVar12 != (uint *)(ulong)uVar8)) {
                  puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar8);
                  local_58 = 0;
                  if (*puVar13 != 0) {
                    uVar8 = puVar13[1];
                    if ((uVar8 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                      lVar11 = 0xc;
                      if (*(char *)((long)puVar13 + 10) != '\0') {
                        lVar11 = 0x1c;
                      }
                      lVar11 = (long)puVar13 + lVar11 + (ulong)(ushort)puVar13[2] * 8;
                      if (lVar11 != 0) {
                        uVar3 = 0;
                        if ((ulong)uVar8 != 0) {
                          uVar3 = (uint)((ulong)((long)puVar12 - lVar11) / (ulong)uVar8);
                        }
                        if (*puVar13 <= uVar3) {
                          uVar3 = 0xffffffff;
                        }
                        if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                           (local_58 = (uint)*(ushort *)
                                              (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                              (long)(int)uVar3 * 2), local_58 < 0xbd))
                        goto LAB_01a38b6c;
                      }
                    }
                    local_58 = 0;
                  }
                }
              }
LAB_01a38b6c:
              local_54 = 10;
              if (local_58 != 0xab) {
                local_54 = 0;
              }
LAB_01a38b84:
              puVar2 = PTR_DAT_04bb2020 + 0x10;
              local_68 = "MigoroType";
              if (((plVar9[0x227] != 0) && (lVar11 = *(long *)(plVar9[0x227] + 0x78), lVar11 != 0))
                 && (plVar14 = *(long **)(lVar11 + 0x48), plVar14 != (long *)0x0)) {
                local_70 = puVar2;
                (**(code **)(*plVar14 + 0x28))(plVar14,&local_70,local_54);
              }
              local_68 = PTR_DAT_04bbcb98 + 200;
              local_70 = puVar2;
              FUN_0073d870(plVar9,&local_70,0,2,0);
              return;
            }
          }
          plVar9 = (long *)(*(long *)((long)plVar9 + lVar11 + 8) - lVar11);
        } while (plVar9 != (long *)((long)(plVar14 + 0x15) - lVar11));
      }
    }
  }
  return;
}

