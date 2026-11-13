
void FUN_011dbc54(long param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 *__dest;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  float local_e4;
  undefined4 uStack_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  byte local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_84;
  undefined4 uStack_80;
  int local_7c;
  undefined *local_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  float local_58;
  
  puVar4 = PTR_DAT_04bb27c0;
  if (DAT_050dfb28 == 0) {
    return;
  }
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 == 0) {
    return;
  }
  plVar13 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                      ((ulong)(DAT_050dfb28 >> 0x11) & 0x7ff8));
  if (((plVar13 == (long *)0x0) || ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar13 + 0x46) != DAT_050dfb28)) {
    plVar13 = (long *)0x0;
  }
  local_7c = param_2;
  if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)puVar4;
    iVar6 = (**(code **)(*plVar9 + 0x60))();
    if (iVar6 < 0x11) {
      uVar8 = 1;
      goto joined_r0x011dbd24;
    }
    if (*(uint *)(lVar11 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x011dbd24;
    }
  }
  uVar8 = 0;
joined_r0x011dbd24:
  if (plVar13 != (long *)0x0) {
    lVar11 = plVar13[0x2a];
    if (((*PTR_DAT_04bbbb10 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bbbb10), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bbbb08 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbbb10);
    }
    uVar10 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bbbb08);
    iVar6 = local_7c;
    uVar2 = 0;
    if ((int)lVar11 == 1) {
      uVar2 = uVar8;
    }
    if (((uVar10 & 1) != 0) && (uVar2 != 0)) {
      local_84 = *(undefined4 *)PTR_DAT_04bb37e0;
      uStack_80 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      FUN_011dc2e0(plVar13,param_1,local_7c,&local_84,0);
      if (iVar6 != 4) {
        FUN_011db9b8(plVar13,param_1,0);
        puVar4 = PTR_DAT_04bb2010;
        local_90 = *(undefined4 *)(param_1 + 8);
        uStack_8c = *(undefined4 *)(param_1 + 0xc);
        local_98 = PTR_DAT_04bb2010 + 0x10;
        FUN_011dc8e4(&local_98);
        local_a8 = 0;
        lVar11 = *(long *)PTR_DAT_04bb2720;
        if (lVar11 == 0) {
          puVar15 = &DAT_055c04a0;
        }
        else {
          puVar15 = &DAT_055c04a0;
          if (*(long *)(lVar11 + 0x330) != 0) {
            puVar15 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
            iVar7 = FUN_006bd550(*puVar15,0);
            puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar7 != 0x758f7eaf) {
              puVar15 = &DAT_055c04a0;
            }
          }
        }
        local_a4 = *(undefined4 *)(puVar15 + 7);
        local_a0 = FUN_017baf44();
        local_a0 = local_a0 & 1;
        local_b0 = PTR_DAT_04bb6268 + 0x10;
        FUN_01a5033c(&local_b8,&local_b0,0,param_1,0);
        puVar5 = PTR_DAT_04bbbc68;
        lVar11 = *(long *)PTR_DAT_04bbbc68;
        if (((((lVar11 != 0) && (*(long *)(lVar11 + 0xb0) != 0)) &&
             (*(long *)(*(long *)(lVar11 + 0xb0) + 8) != 0)) &&
            ((*(long *)(lVar11 + 0x488) != 0 && (*(long *)(*(long *)(lVar11 + 0x488) + 8) != 0))))
           && ((*(long *)(lVar11 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar11 + 0x2b0) + 8) != 0))))
        {
          uVar8 = FUN_0277d6c4(&local_b8);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
            local_c0 = *(undefined4 *)(param_1 + 8);
            uStack_bc = *(undefined4 *)(param_1 + 0xc);
            local_c8 = puVar4 + 0x10;
            local_d0 = local_b8;
            uStack_cc = uStack_b4;
            FUN_011ddc58(&local_c8,&local_d0);
            iVar7 = FUN_0277d6c4(&local_b8);
            if (iVar7 == 0xea79) {
              lVar11 = *(long *)puVar5;
              if (lVar11 != 0) {
                if ((*(long *)(lVar11 + 0xb0) != 0) &&
                   (*(long *)(*(long *)(lVar11 + 0xb0) + 8) != 0)) {
                  if ((*(long *)(lVar11 + 0x488) != 0) &&
                     (*(long *)(*(long *)(lVar11 + 0x488) + 8) != 0)) {
                    if ((*(long *)(lVar11 + 0x2b0) != 0) &&
                       (*(long *)(*(long *)(lVar11 + 0x2b0) + 8) != 0)) {
                      uVar8 = FUN_0277d6c4(&local_84);
                      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                      if ((uVar8 < *(uint *)(lVar11 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
                        local_d8 = local_84;
                        uStack_d4 = uStack_80;
                        iVar7 = FUN_01241ca0(&local_d8);
                        if (iVar7 - 5U < 5) {
                          FUN_011de024(plVar13,param_1);
                          iVar6 = local_7c;
                        }
                      }
                    }
                  }
                }
              }
            }
            if (iVar6 == 8) {
              iVar6 = (int)plVar13[0x3c36];
              iVar7 = (int)plVar13[0x3c35];
              if (iVar6 < iVar7) {
                *(int *)(plVar13 + 0x3c36) = iVar6 + 1;
                iVar6 = *(int *)((long)plVar13 + 0x1e1ac) + iVar6;
                iVar3 = 0;
                if (iVar7 <= iVar6) {
                  iVar3 = iVar7;
                }
                plVar9 = (long *)(plVar13[0x3c34] + (long)(iVar6 - iVar3) * 0x10);
                *plVar9 = (long)(puVar4 + 0x10);
                plVar9[1] = 0;
                *(undefined4 *)(plVar9 + 1) = *(undefined4 *)(param_1 + 8);
                *(undefined4 *)((long)plVar9 + 0xc) = *(undefined4 *)(param_1 + 0xc);
              }
            }
          }
        }
        if (local_7c != 0) {
          local_dc = (float)*(int *)(param_1 + 0xc) * 5.0 + 5.0;
          local_e4 = (float)*(int *)(param_1 + 8) * 5.0 + 5.0;
          if (*(long *)PTR_DAT_04bb27c8 != 0) {
            uStack_e0 = FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_e4,0);
          }
          puVar4 = PTR_DAT_04bb2020;
          if (local_7c == 2) {
            if ((*(byte *)(plVar13 + 0x3c3d) & 1) == 0) {
              lVar11 = 0;
            }
            else {
              lVar12 = plVar13[0x3c3e];
              lVar11 = 0;
              if ((lVar12 != 0) &&
                 (lVar11 = *(long *)(lVar12 + 0x18), (*(byte *)(lVar12 + 8) & 10) != 2)) {
                lVar11 = 0;
              }
            }
            local_60 = CONCAT44(uStack_e0,local_e4);
            local_78 = PTR_DAT_04bb2020 + 0x10;
            iVar6 = *(int *)(lVar11 + 0x1c0);
            local_70 = &DAT_040badf1;
            uStack_68 = 0;
            local_58 = local_dc;
            iVar7 = *(int *)(lVar11 + 0x1b8);
            if (iVar7 <= iVar6) {
              return;
            }
            *(int *)(lVar11 + 0x1c0) = iVar6 + 1;
            if (*(long *)(lVar11 + 0x1b0) == 0) {
              return;
            }
            iVar6 = *(int *)(lVar11 + 0x1bc) + iVar6;
            iVar3 = 0;
            if (iVar7 <= iVar6) {
              iVar3 = iVar7;
            }
            puVar15 = (undefined8 *)(*(long *)(lVar11 + 0x1b0) + (long)(iVar6 - iVar3) * 0xa8);
            *puVar15 = 0;
            *(float *)(puVar15 + 1) = local_e4;
            *(undefined4 *)((long)puVar15 + 0xc) = uStack_e0;
            *(float *)(puVar15 + 2) = local_dc;
            (**(code **)(puVar4 + 0x28))(&local_78);
            puVar14 = puVar15 + 3;
            __dest = (undefined1 *)*puVar14;
            if (__dest == local_70) {
              return;
            }
            iVar6 = *(int *)((long)puVar15 + 0x24);
            lVar11 = 0;
            do {
              pcVar1 = local_70 + lVar11;
              lVar11 = lVar11 + 1;
            } while (*pcVar1 != '\0');
          }
          else {
            if (local_7c != 1) {
              return;
            }
            if ((*(byte *)(plVar13 + 0x3c3d) & 1) == 0) {
              lVar11 = 0;
            }
            else {
              lVar12 = plVar13[0x3c3e];
              lVar11 = 0;
              if ((lVar12 != 0) &&
                 (lVar11 = *(long *)(lVar12 + 0x18), (*(byte *)(lVar12 + 8) & 10) != 2)) {
                lVar11 = 0;
              }
            }
            local_60 = CONCAT44(uStack_e0,local_e4);
            local_78 = PTR_DAT_04bb2020 + 0x10;
            iVar6 = *(int *)(lVar11 + 0x1c0);
            local_70 = &DAT_040eec0e;
            uStack_68 = 0;
            local_58 = local_dc;
            iVar7 = *(int *)(lVar11 + 0x1b8);
            if (iVar7 <= iVar6) {
              return;
            }
            *(int *)(lVar11 + 0x1c0) = iVar6 + 1;
            if (*(long *)(lVar11 + 0x1b0) == 0) {
              return;
            }
            iVar6 = *(int *)(lVar11 + 0x1bc) + iVar6;
            iVar3 = 0;
            if (iVar7 <= iVar6) {
              iVar3 = iVar7;
            }
            puVar15 = (undefined8 *)(*(long *)(lVar11 + 0x1b0) + (long)(iVar6 - iVar3) * 0xa8);
            *puVar15 = 0;
            *(float *)(puVar15 + 1) = local_e4;
            *(undefined4 *)((long)puVar15 + 0xc) = uStack_e0;
            *(float *)(puVar15 + 2) = local_dc;
            (**(code **)(puVar4 + 0x28))(&local_78);
            puVar14 = puVar15 + 3;
            __dest = (undefined1 *)*puVar14;
            if (__dest == local_70) {
              return;
            }
            iVar6 = *(int *)((long)puVar15 + 0x24);
            lVar11 = 0;
            do {
              pcVar1 = local_70 + lVar11;
              lVar11 = lVar11 + 1;
            } while (*pcVar1 != '\0');
          }
          uVar8 = (int)lVar11 - 1;
          if (iVar6 <= (int)uVar8) {
            uVar8 = iVar6 - 1;
          }
          if ((int)uVar8 < 1) {
            uVar8 = 0;
          }
          else {
            memcpy(__dest,local_70,(ulong)uVar8);
            __dest = __dest + uVar8;
          }
          *__dest = 0;
          *(uint *)(puVar14 + 1) = uVar8;
        }
      }
    }
  }
  return;
}

