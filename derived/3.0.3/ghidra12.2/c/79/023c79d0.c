
/* WARNING: Removing unreachable block (ram,0x023c7f20) */
/* WARNING: Removing unreachable block (ram,0x023c8090) */

void FUN_023c79d0(long param_1,int *param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 uVar3;
  undefined *puVar4;
  char *__dest;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  byte bVar9;
  uint uVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  char *__src;
  int local_140;
  int local_13c;
  undefined *local_138;
  char *local_130;
  int local_128;
  char local_124 [63];
  undefined1 local_e5;
  undefined1 auStack_e0 [8];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined4 local_c0;
  undefined1 local_bc [4];
  undefined4 local_b8;
  undefined1 local_7d;
  uint local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined3 uStack_6c;
  
  if (*(long *)(param_1 + 0x4d0) != 0) {
    *(undefined4 *)(param_1 + 0x1f84) = 0;
    puVar11 = *(undefined8 **)(param_1 + 0x60);
    *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) & 0xfff3ffff;
    *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) | 0x100000;
    if (puVar11 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar11 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar11 = &DAT_05240280;
      }
    }
    local_d0 = (undefined *)CONCAT44(local_d0._4_4_,0xc);
    *(uint *)((long)puVar11 + 0x15f4) = *(uint *)((long)puVar11 + 0x15f4) | 0x1000;
    puVar11 = *(undefined8 **)(param_1 + 0x60);
    if (puVar11 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar11 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar11 = &DAT_05240280;
      }
    }
    local_e5 = 0;
    puVar1 = (undefined1 *)((long)puVar11 + 0x5f06);
    local_128 = 0x40;
    uVar3 = *puVar1;
    *puVar1 = 1;
    puVar4 = PTR_DAT_04bb2bc0;
    local_124[0] = '\0';
    local_130 = local_124;
    local_138 = PTR_DAT_04bb2bc0 + 0x10;
    if (*(char *)(param_1 + 0x190a) != '\0') {
      puVar11 = *(undefined8 **)(param_1 + 0x60);
      if (puVar11 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(&DAT_052461c0);
          puVar11 = &DAT_05240280;
          if (iVar5 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar11 = &DAT_05240280;
        }
      }
      __dest = local_130;
      local_d0 = (undefined *)((ulong)local_d0 & 0xffffffff00000000);
      if (puVar11[0x227] == 0) {
        plVar12 = &DAT_04c931a0;
      }
      else {
        plVar12 = (long *)(*(long *)(puVar11[0x227] + 0x88) + 0x60);
      }
      (**(code **)(*plVar12 + 0x18))(plVar12);
      __src = (char *)plVar12[1];
      if (__dest != __src) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
        lVar8 = 0;
        do {
          if (*(char *)(plVar12[1] + lVar8) == '\0') goto LAB_023c7bcc;
          lVar2 = plVar12[1] + lVar8;
          if (*(char *)(lVar2 + 1) == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_023c7bcc;
          }
          if (*(char *)(lVar2 + 2) == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_023c7bcc;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_023c7bcc:
        iVar5 = (int)lVar8;
        if (local_128 <= (int)lVar8) {
          iVar5 = local_128 + -1;
        }
        memcpy(__dest,__src,(long)iVar5);
        __dest[iVar5] = '\0';
      }
    }
    local_13c = *param_2;
    FUN_0172d300(*(undefined8 *)(param_1 + 0x4d0),&local_13c,1);
    if ((*(char *)(param_1 + 0x190a) != '\0') && (*local_130 != '\0')) {
      puVar11 = *(undefined8 **)(param_1 + 0x60);
      if (puVar11 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(&DAT_052461c0);
          puVar11 = &DAT_05240280;
          if (iVar5 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar11 = &DAT_05240280;
        }
      }
      FUN_01707310(puVar11,&local_138,6,3,0);
      FUN_01707750(puVar11,&local_138);
    }
    local_140 = *param_2;
    local_c8 = local_bc;
    local_7d = 0;
    local_bc[0] = 0;
    local_c0 = 0x40;
    local_d0 = puVar4 + 0x10;
    uVar7 = FUN_02537880(&local_d0,&local_140);
    if (((uVar7 & 1) != 0) && (iVar5 = FUN_0170aef0(&local_d0,PTR_PTR_04bb2238), iVar5 != 0)) {
      FUN_0170afcc(&local_d8,&local_d0,PTR_PTR_04bb2238);
      if (iVar5 == 0x1c) {
        FUN_0244b5a8(&local_78,param_1 + 0x1ee8);
        local_d8 = local_78;
        local_d4 = local_74;
      }
      puVar4 = PTR_DAT_04bb43c0;
      lVar8 = *(long *)PTR_DAT_04bb43c0;
      uVar6 = FUN_0277d6c4(&local_d8);
      if (*(long *)puVar4 != 0) {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) | 0x80000;
          FUN_024726d8(0x3f800000,param_1);
          uVar7 = FUN_017009b0(&local_d8);
          if ((uVar7 & 1) != 0) {
            plVar12 = *(long **)(param_1 + 0x60);
            *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) | 0x40000;
            if (plVar12 == (long *)0x0) {
              if ((DAT_052461c0 & 1) == 0) {
                iVar5 = __cxa_guard_acquire(&DAT_052461c0);
                plVar12 = &DAT_05240280;
                if (iVar5 != 0) {
                  FUN_016fcf10(&DAT_05240280);
                  FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                  __cxa_guard_release(&DAT_052461c0);
                }
              }
              else {
                plVar12 = &DAT_05240280;
              }
            }
            *(undefined4 *)(plVar12 + 0x2c2) = 0x3f800000;
            (**(code **)(*plVar12 + 0x4e0))((int)plVar12[0x2c1],plVar12);
          }
          if ((*(long *)PTR_DAT_04bb4718 != 0) && ((ulong)*(byte *)(param_1 + 0x1ee8) < 8)) {
            lVar8 = *(long *)PTR_DAT_04bb4718 + (ulong)*(byte *)(param_1 + 0x1ee8) * 0xc;
            *(undefined2 *)(lVar8 + 0x284) = (undefined2)local_d8;
            *(undefined1 *)(lVar8 + 0x286) = local_d8._2_1_;
            *(undefined1 *)(lVar8 + 0x287) = local_d8._3_1_;
            *(undefined4 *)(lVar8 + 0x288) = local_d4;
            *(undefined2 *)(lVar8 + 0x28c) = 0x100;
          }
          local_78 = 0;
          local_74 = CONCAT31(local_74._1_3_,1);
          local_70 = 0;
          uStack_6c = 0;
          FUN_02321e44(auStack_e0,param_1,&local_78);
          if ((*(byte *)(param_1 + 0x17d6) >> 3 & 1) != 0) {
            puVar11 = *(undefined8 **)(param_1 + 0x60);
            if (puVar11 == (undefined8 *)0x0) {
              if ((DAT_052461c0 & 1) == 0) {
                iVar5 = __cxa_guard_acquire(&DAT_052461c0);
                puVar11 = &DAT_05240280;
                if (iVar5 != 0) {
                  FUN_016fcf10(&DAT_05240280);
                  FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                  __cxa_guard_release(&DAT_052461c0);
                }
              }
              else {
                puVar11 = &DAT_05240280;
              }
            }
            local_78 = 2;
            uVar6 = 2;
            lVar8 = puVar11[0x227];
            if (lVar8 == 0) {
              puVar11 = &DAT_04c931a0;
            }
            else {
              uVar10 = 0;
              if (*(long *)(lVar8 + 0x78) != 0) {
                uVar10 = *(uint *)(*(long *)(lVar8 + 0x78) + 0x18);
              }
              if (uVar10 < 3) {
                uVar6 = 0;
              }
              if (*(uint *)(lVar8 + 0x80) <= uVar6) {
                uVar6 = 0;
              }
              puVar11 = (undefined8 *)(*(long *)(lVar8 + 0x88) + (long)(int)uVar6 * 0xe8 + 0x60);
            }
            if (*(char *)puVar11[1] == '\0') {
              puVar13 = *(undefined8 **)(param_1 + 0x60);
              puVar11 = puVar13;
              if (puVar13 == (undefined8 *)0x0) {
                if (((DAT_052461c0 & 1) == 0) &&
                   (iVar5 = __cxa_guard_acquire(&DAT_052461c0), iVar5 != 0)) {
                  FUN_016fcf10(&DAT_05240280);
                  FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                  __cxa_guard_release(&DAT_052461c0);
                }
                puVar13 = *(undefined8 **)(param_1 + 0x60);
                if (puVar13 == (undefined8 *)0x0) {
                  if (((DAT_052461c0 & 1) == 0) &&
                     (iVar5 = __cxa_guard_acquire(&DAT_052461c0), iVar5 != 0)) {
                    FUN_016fcf10(&DAT_05240280);
                    FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                    __cxa_guard_release(&DAT_052461c0);
                  }
                  puVar13 = &DAT_05240280;
                  puVar11 = puVar13;
                }
                else {
                  puVar11 = &DAT_05240280;
                }
              }
              lVar8 = puVar13[0x227];
              if (lVar8 == 0) {
                local_78 = 0;
                puVar13 = &DAT_04c931a0;
                lVar8 = 0;
              }
              else {
                local_78 = *(uint *)(puVar13 + 0x2d3) >> 1 & 1;
                uVar6 = 0;
                if (*(long *)(lVar8 + 0x78) != 0) {
                  uVar6 = *(uint *)(*(long *)(lVar8 + 0x78) + 0x18);
                }
                uVar10 = local_78;
                if (uVar6 <= local_78) {
                  uVar10 = 0;
                }
                if (*(uint *)(lVar8 + 0x80) <= uVar10) {
                  uVar10 = 0;
                }
                lVar8 = *(long *)(lVar8 + 0x88) + (long)(int)uVar10 * 0xe8;
                puVar13 = (undefined8 *)(lVar8 + 0x60);
              }
              FUN_01707310(lVar8,puVar11,puVar13,0,2,0);
              FUN_01707750(puVar11,puVar13);
            }
          }
          if ((*(byte *)(param_1 + 0x17d6) >> 2 & 1) != 0) {
            puVar11 = *(undefined8 **)(param_1 + 0x60);
            if (puVar11 == (undefined8 *)0x0) {
              if ((DAT_052461c0 & 1) == 0) {
                iVar5 = __cxa_guard_acquire(&DAT_052461c0);
                puVar11 = &DAT_05240280;
                if (iVar5 != 0) {
                  FUN_016fcf10(&DAT_05240280);
                  FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                  __cxa_guard_release(&DAT_052461c0);
                }
              }
              else {
                puVar11 = &DAT_05240280;
              }
            }
            local_78 = 3;
            uVar6 = 3;
            lVar8 = puVar11[0x227];
            if (lVar8 == 0) {
              puVar11 = &DAT_04c931a0;
            }
            else {
              uVar10 = 0;
              if (*(long *)(lVar8 + 0x78) != 0) {
                uVar10 = *(uint *)(*(long *)(lVar8 + 0x78) + 0x18);
              }
              if (uVar10 < 4) {
                uVar6 = 0;
              }
              if (*(uint *)(lVar8 + 0x80) <= uVar6) {
                uVar6 = 0;
              }
              puVar11 = (undefined8 *)(*(long *)(lVar8 + 0x88) + (long)(int)uVar6 * 0xe8 + 0x60);
            }
            if (*(char *)puVar11[1] == '\0') {
              puVar13 = *(undefined8 **)(param_1 + 0x60);
              puVar11 = puVar13;
              if (puVar13 == (undefined8 *)0x0) {
                if (((DAT_052461c0 & 1) == 0) &&
                   (iVar5 = __cxa_guard_acquire(&DAT_052461c0), iVar5 != 0)) {
                  FUN_016fcf10(&DAT_05240280);
                  FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                  __cxa_guard_release(&DAT_052461c0);
                }
                puVar13 = *(undefined8 **)(param_1 + 0x60);
                if (puVar13 == (undefined8 *)0x0) {
                  if (((DAT_052461c0 & 1) == 0) &&
                     (iVar5 = __cxa_guard_acquire(&DAT_052461c0), iVar5 != 0)) {
                    FUN_016fcf10(&DAT_05240280);
                    FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                    __cxa_guard_release(&DAT_052461c0);
                  }
                  puVar13 = &DAT_05240280;
                  puVar11 = puVar13;
                }
                else {
                  puVar11 = &DAT_05240280;
                }
              }
              lVar8 = puVar13[0x227];
              if (lVar8 == 0) {
                local_78 = 0;
                puVar13 = &DAT_04c931a0;
                lVar8 = 0;
              }
              else {
                local_78 = *(uint *)(puVar13 + 0x2d3) >> 1 & 1;
                uVar6 = 0;
                if (*(long *)(lVar8 + 0x78) != 0) {
                  uVar6 = *(uint *)(*(long *)(lVar8 + 0x78) + 0x18);
                }
                uVar10 = local_78;
                if (uVar6 <= local_78) {
                  uVar10 = 0;
                }
                if (*(uint *)(lVar8 + 0x80) <= uVar10) {
                  uVar10 = 0;
                }
                lVar8 = *(long *)(lVar8 + 0x88) + (long)(int)uVar10 * 0xe8;
                puVar13 = (undefined8 *)(lVar8 + 0x60);
              }
              FUN_01707310(lVar8,puVar11,puVar13,0,3,0);
              FUN_01707750(puVar11,puVar13);
            }
          }
        }
      }
    }
    puVar11 = *(undefined8 **)(param_1 + 0x60);
    if (puVar11 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar11 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar11 = &DAT_05240280;
      }
    }
    *(uint *)((long)puVar11 + 0x15f4) = *(uint *)((long)puVar11 + 0x15f4) & 0xffffefff;
    if (*param_2 == 0) {
      *(undefined4 *)(param_1 + 0x1f88) = 9;
    }
    else {
      bVar9 = *(byte *)(param_1 + 0x1ee8);
      local_b8 = *param_3;
      *(undefined4 *)(param_1 + 0x1f88) = local_b8;
      if (7 < bVar9) {
        bVar9 = 0xff;
      }
      local_c0 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
      local_c8 = *(undefined1 **)(*(long *)(param_1 + 0x68) + 0x278);
      local_d0._0_4_ = (uint)CONCAT11(bVar9,*(int *)(param_1 + 0x178) == 0);
      local_d0 = (undefined *)CONCAT44(*param_2,(uint)local_d0);
      if ((*(long *)PTR_DAT_04bb7ff8 == 0) || (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 0)) {
        local_bc[0] = 0;
      }
      else {
        local_bc[0] = 1;
      }
      FUN_023090f0(&local_d0);
      *(undefined4 *)(param_1 + 0x21c0) = 3;
    }
    *puVar1 = uVar3;
  }
  *(undefined4 *)(param_1 + 0x2240) = 0;
  return;
}

