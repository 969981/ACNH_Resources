
/* WARNING: Removing unreachable block (ram,0x02ed79c4) */

void FUN_02ed7230(undefined8 **param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 ***pppuVar7;
  byte bVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  long *plVar14;
  undefined4 uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 *puVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  int local_124;
  undefined8 local_120;
  undefined8 *local_118;
  undefined8 ***local_110;
  undefined8 ***local_108;
  undefined8 **local_100 [4];
  undefined8 *local_e0 [4];
  undefined8 local_c0 [4];
  undefined8 auStack_a0 [3];
  undefined *local_88;
  undefined4 local_80;
  
  puVar2 = PTR_DAT_04bc4e60;
  puVar22 = *(undefined8 **)param_1[0x43][0x7f];
  if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar11 != 0)) {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  puVar3 = PTR_DAT_04bc4e58;
  if (puVar22 == (undefined8 *)0x0) {
    return;
  }
  uVar13 = (**(code **)*puVar22)(puVar22,PTR_DAT_04bc4e58);
  if ((uVar13 & 1) == 0) {
    return;
  }
  if ((param_1[0x43][0xaf] != 0) &&
     (plVar18 = (long *)**(undefined8 **)(param_1[0x43][0xaf] + 0x230), plVar18 != (long *)0x0)) {
    puVar1 = PTR_DAT_04bc4f00 + 0x10;
    local_118 = (undefined8 *)CONCAT44(local_118._4_4_,3);
    local_120 = puVar1;
    (**(code **)(*plVar18 + 0x20))(plVar18,&local_120);
    uVar13 = (**(code **)(plVar18[3] + 0x50))(plVar18[1]);
    if ((uVar13 & 1) == 0) {
      local_118 = (undefined8 *)CONCAT44(local_118._4_4_,0xb);
      local_120 = puVar1;
      (**(code **)(*plVar18 + 0x20))(plVar18,&local_120);
      uVar10 = (**(code **)(plVar18[3] + 0xd0))(plVar18[1]);
      if ((uVar10 & 1) != (*(ushort *)(param_1 + 0x45) & 0x10) >> 4) {
        if ((uVar10 & 1) == 0) {
          uVar24 = 0xbf800000;
        }
        else {
          uVar24 = 0x3f800000;
        }
        local_120 = PTR_DAT_04bc4e68 + 0x10;
        local_118 = (undefined8 *)CONCAT44(local_118._4_4_,1);
        (**(code **)(*plVar18 + 0x18))(plVar18,&local_120);
        (**(code **)(plVar18[3] + 400))(uVar24,plVar18[1]);
      }
    }
  }
  plVar18 = (long *)param_1[0x43][0xb2];
  if (plVar18 != (long *)0x0) {
    plVar14 = (long *)plVar18[0x36];
    if ((*(ushort *)(param_1 + 0x45) >> 0xc & 1) == 0) {
      if (((plVar14 != (long *)0x0) &&
          (uVar13 = (**(code **)(*plVar14 + 0x48))(), (uVar13 & 1) != 0)) &&
         (plVar18 = (long *)plVar18[0x36], plVar18 != (long *)0x0)) {
        (**(code **)(*plVar18 + 0x40))(plVar18,0);
      }
    }
    else if (((plVar14 != (long *)0x0) &&
             (uVar13 = (**(code **)(*plVar14 + 0x50))(), (uVar13 & 1) != 0)) &&
            (plVar14 = (long *)plVar18[0x36], plVar14 != (long *)0x0)) {
      (**(code **)(*plVar14 + 0x38))(plVar14,0);
      (**(code **)(*plVar18 + 0xa8))(plVar18);
    }
  }
  puVar19 = *(undefined8 **)param_1[0x43][0x7f];
  if (((*puVar2 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar11 != 0)) {
    *(undefined **)puVar3 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar13 = (**(code **)*puVar19)(puVar19,puVar3);
  if ((uVar13 & 1) == 0) {
    puVar19 = (undefined8 *)0x0;
  }
  lVar21 = 0xa8;
  if (*(uint *)(puVar19 + 0x44) < 0x16) {
    lVar21 = 0;
  }
  plVar18 = *(long **)(puVar19[0x45] + lVar21);
  if (plVar18 != (long *)0x0) {
    puVar19 = param_1[0x45];
    if (((ulong)puVar19 & 0xe00) != 0) {
      puVar20 = *(undefined8 **)param_1[0x43][0x7f];
      if (((*puVar2 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar11 != 0)) {
        *(undefined **)puVar3 = PTR_DAT_04bc4d38 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e60);
      }
      uVar13 = (**(code **)*puVar20)(puVar20,PTR_DAT_04bc4e58);
      if ((uVar13 & 1) == 0) {
        puVar20 = (undefined8 *)0x0;
      }
      lVar21 = 0xb0;
      if (*(uint *)(puVar20 + 0x44) < 0x17) {
        lVar21 = 0;
      }
      plVar14 = *(long **)(puVar20[0x45] + lVar21);
      if (plVar14 != (long *)0x0) {
        fVar23 = 1.0;
        if (((ulong)puVar19 & 0x200) != 0) {
          fVar23 = 0.0;
        }
        fVar25 = 0.0;
        if (((ulong)puVar19 & 0x800) != 0) {
          fVar25 = 2.0;
        }
        puVar1 = PTR_DAT_04bc4f00 + 0x10;
        local_118 = (undefined8 *)CONCAT44(local_118._4_4_,7);
        if (((ulong)puVar19 & 0x600) != 0) {
          fVar25 = fVar23;
        }
        local_120 = puVar1;
        (**(code **)(*plVar14 + 0x20))(plVar14,&local_120);
        fVar23 = (float)(**(code **)(plVar14[3] + 0x90))(plVar14[1]);
        if (fVar25 != fVar23) {
          local_118 = (undefined8 *)CONCAT44(local_118._4_4_,0x14);
          local_120 = puVar1;
          (**(code **)(*plVar14 + 0x18))(plVar14,&local_120);
          (**(code **)(plVar14[3] + 0x158))(fVar25,plVar14[1]);
        }
      }
    }
    puVar1 = PTR_DAT_04bc4f00 + 0x10;
    local_118 = (undefined8 *)CONCAT44(local_118._4_4_,3);
    local_120 = puVar1;
    (**(code **)(*plVar18 + 0x20))(plVar18,&local_120);
    uVar13 = (**(code **)(plVar18[3] + 0x50))(plVar18[1]);
    if ((uVar13 & 1) == 0) {
      local_118 = (undefined8 *)CONCAT44(local_118._4_4_,0xc);
      local_120 = puVar1;
      (**(code **)(*plVar18 + 0x20))(plVar18,&local_120);
      bVar8 = (**(code **)(plVar18[3] + 0xe0))(plVar18[1]);
      if ((((ulong)puVar19 & 0xe00) != 0) != (bool)(bVar8 & 1)) {
        uVar24 = 0x3f800000;
        if (((ulong)puVar19 & 0xe00) == 0) {
          uVar24 = 0xbf800000;
        }
        local_120 = PTR_DAT_04bc4e68 + 0x10;
        local_118 = (undefined8 *)CONCAT44(local_118._4_4_,1);
        (**(code **)(*plVar18 + 0x18))(plVar18,&local_120);
        (**(code **)(plVar18[3] + 400))(uVar24,plVar18[1]);
      }
    }
  }
  puVar19 = *(undefined8 **)param_1[0x43][0x7f];
  if (((*puVar2 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar11 != 0)) {
    *(undefined **)puVar3 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if (puVar19 == (undefined8 *)0x0) {
    puVar19 = (undefined8 *)0x0;
  }
  else {
    uVar13 = (**(code **)*puVar19)(puVar19,PTR_DAT_04bc4e58);
    if ((uVar13 & 1) == 0) {
      puVar19 = (undefined8 *)0x0;
    }
  }
  lVar21 = 0;
  puVar2 = PTR_DAT_04bc4f00 + 0x10;
  puVar3 = PTR_DAT_04bc4e68 + 0x10;
  puVar1 = PTR_DAT_04bb7c30 + 0x10;
  do {
    uVar10 = (&DAT_04180ed0)[lVar21];
    if (uVar10 != 0xffffffff) {
      uVar5 = uVar10;
      if (*(uint *)(puVar19 + 0x44) <= uVar10) {
        uVar5 = 0;
      }
      plVar18 = *(long **)(puVar19[0x45] + (long)(int)uVar5 * 8);
      if (plVar18 != (long *)0x0) {
        if (uVar10 == 0x10) {
          local_118 = (undefined8 *)CONCAT44(local_118._4_4_,0x10);
          local_120 = puVar2;
          (**(code **)(*plVar18 + 0x20))(plVar18,&local_120);
          uVar13 = (**(code **)(plVar18[3] + 0x120))(plVar18[1]);
          if ((uVar13 & 1) != 0) {
            lVar16 = 0xd8;
            if (*(uint *)(puVar19 + 0x44) < 0x1c) {
              lVar16 = 0;
            }
            plVar14 = *(long **)(puVar19[0x45] + lVar16);
            if (plVar14 != (long *)0x0) {
              puVar4 = PTR_DAT_04bc4f00 + 0x10;
              local_118 = (undefined8 *)CONCAT44(local_118._4_4_,7);
              local_120 = puVar4;
              (**(code **)(*plVar18 + 0x20))(plVar18,&local_120);
              fVar23 = (float)(**(code **)(plVar18[3] + 0x90))(plVar18[1]);
              if (fVar23 == 0.0) {
                local_118._0_4_ = 0x14;
                local_120 = puVar4;
                (**(code **)(*plVar14 + 0x18))(plVar14,&local_120);
                (**(code **)(plVar14[3] + 0x158))(0x3f800000,plVar14[1]);
                local_118 = (undefined8 *)CONCAT44(local_118._4_4_,9);
                local_120 = puVar3;
                (**(code **)(*plVar14 + 0x18))(plVar14,&local_120);
                (**(code **)(plVar14[3] + 0x1d0))(plVar14[1]);
                FUN_02ed9ca0(param_1);
              }
            }
          }
        }
        local_118 = (undefined8 *)CONCAT44(local_118._4_4_,3);
        puVar4 = PTR_DAT_04bc4f00 + 0x10;
        local_120 = puVar4;
        (**(code **)(*plVar18 + 0x20))(plVar18,&local_120);
        uVar13 = (**(code **)(plVar18[3] + 0x50))(plVar18[1]);
        if ((uVar13 & 1) == 0) {
          local_118 = (undefined8 *)CONCAT44(local_118._4_4_,0xc);
          local_120 = puVar4;
          (**(code **)(*plVar18 + 0x20))(plVar18,&local_120);
          uVar9 = (**(code **)(plVar18[3] + 0xe0))(plVar18[1]);
          if ((uVar9 & 1) != (*(ushort *)(param_1 + 0x45) >> (ulong)((uint)lVar21 & 0x1f) & 1)) {
            local_120 = PTR_DAT_04bc4e68 + 0x10;
            if ((uVar9 & 1) == 0) {
              local_118 = (undefined8 *)CONCAT44(local_118._4_4_,1);
              (**(code **)(*plVar18 + 0x18))(plVar18,&local_120);
              uVar24 = 0x3f800000;
            }
            else {
              local_118 = (undefined8 *)CONCAT44(local_118._4_4_,1);
              (**(code **)(*plVar18 + 0x18))(plVar18,&local_120);
              uVar24 = 0xbf800000;
            }
            (**(code **)(plVar18[3] + 400))(uVar24,plVar18[1]);
            if (uVar10 == 0x10) {
              lVar16 = 0xd8;
              if (*(uint *)(puVar19 + 0x44) < 0x1c) {
                lVar16 = 0;
              }
              plVar18 = *(long **)(puVar19[0x45] + lVar16);
              if ((uVar9 & 1) == 0 && plVar18 != (long *)0x0) {
                local_120 = PTR_DAT_04bc4f00 + 0x10;
                local_118._0_4_ = 0x14;
                (**(code **)(*plVar18 + 0x18))(plVar18,&local_120);
                (**(code **)(plVar18[3] + 0x158))(0,plVar18[1]);
                local_120 = PTR_DAT_04bc4e68 + 0x10;
                local_118 = (undefined8 *)CONCAT44(local_118._4_4_,9);
                (**(code **)(*plVar18 + 0x18))(plVar18,&local_120);
                (**(code **)(plVar18[3] + 0x1d0))(plVar18[1]);
                FUN_02ed9ca0(param_1);
              }
            }
            if (lVar21 == 3) {
              if ((uVar9 & 1) == 0) {
                FUN_02ed2900(param_1);
              }
              else {
                local_120 = (undefined *)CONCAT44(local_120._4_4_,3);
                puVar20 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
                if (((*PTR_DAT_04bc7280 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar11 != 0)) {
                  *(undefined **)PTR_DAT_04bc7278 = puVar1;
                  __cxa_guard_release(PTR_DAT_04bc7280);
                }
                if ((puVar20 != (undefined8 *)0x0) &&
                   (uVar13 = (**(code **)*puVar20)(puVar20,PTR_DAT_04bc7278), (uVar13 & 1) != 0)) {
                  *(byte *)((long)puVar20 + 0x239) = *(byte *)((long)puVar20 + 0x239) | 6;
                }
              }
            }
          }
        }
      }
    }
    puVar4 = PTR_DAT_04bbbc38;
    lVar21 = lVar21 + 1;
  } while (lVar21 != 0xd);
  local_120 = (undefined *)0x0;
  local_118 = (undefined8 *)0x0;
  local_110 = local_100;
  local_100[0] = local_e0;
  local_e0[0] = local_c0;
  local_c0[0] = 0;
  if (auStack_a0 != (undefined8 *)0x0) {
    local_120 = (undefined *)0x300000000;
    local_118 = auStack_a0;
  }
  iVar11 = 0;
  local_108 = local_110;
  if (*(long *)PTR_DAT_04bbbc38 != 0) {
    iVar11 = FUN_014e4978();
  }
  plVar18 = *(long **)puVar22[0x45];
  if (plVar18 != (long *)0x0) {
    iVar12 = 1;
    if (iVar11 == 3) {
      iVar12 = 2;
    }
    iVar6 = 0;
    if (iVar11 != 2) {
      iVar6 = iVar12;
    }
    fVar25 = (float)iVar6;
    puVar2 = PTR_DAT_04bc4f00 + 0x10;
    local_80 = 7;
    local_88 = puVar2;
    (**(code **)(*plVar18 + 0x20))(plVar18,&local_88);
    fVar23 = (float)(**(code **)(plVar18[3] + 0x90))(plVar18[1]);
    if (fVar23 != fVar25) {
      local_80 = 9;
      local_88 = puVar2;
      (**(code **)(*plVar18 + 0x20))(plVar18,&local_88);
      fVar23 = (float)(**(code **)(plVar18[3] + 0xb0))(plVar18[1]);
      if (fVar25 <= fVar23 + 1.1920929e-07) {
        local_88 = PTR_DAT_04bc4f00 + 0x10;
        local_80 = 0x14;
        (**(code **)(*plVar18 + 0x18))(plVar18,&local_88);
        (**(code **)(plVar18[3] + 0x158))(fVar25,plVar18[1]);
        local_88 = PTR_DAT_04bc4e68 + 0x10;
        local_80 = 9;
        (**(code **)(*plVar18 + 0x18))(plVar18,&local_88);
        (**(code **)(plVar18[3] + 0x1d0))(plVar18[1]);
        FUN_02ed2900(param_1);
        FUN_02ed8b64(param_1);
        puVar2 = PTR_DAT_04bb2720;
        if (*(int *)((long)param_1 + 0x224) == 8) {
          lVar21 = *(long *)PTR_DAT_04bb2720;
          iVar11 = 0;
          if (lVar21 != 0) {
            if (*(long *)(lVar21 + 0x330) == 0) {
              iVar11 = 0;
            }
            else {
              puVar19 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
              iVar12 = FUN_006bd550(*puVar19,0);
              iVar11 = 0;
              if (iVar12 == 0x758f7eaf) {
                iVar11 = 0;
                if (*(long *)puVar2 != 0) {
                  lVar21 = *(long *)(*(long *)puVar2 + 0x330);
                  iVar11 = 0;
                  if (lVar21 != 0) {
                    iVar11 = *(int *)(lVar21 + 0x244);
                  }
                }
              }
            }
          }
          if (((((*(int *)(PTR_DAT_04bbe4b0 + 0xcc) == iVar11) &&
                (lVar21 = *(long *)PTR_DAT_04bb4938, lVar21 != 0)) &&
               (*(char *)(lVar21 + 8) != '\0')) && (*(int *)(lVar21 + 0x98) != 0)) ||
             (uVar13 = FUN_033fb320(), (uVar13 & 1) != 0)) goto LAB_02ed7c88;
        }
        else if (*(int *)((long)param_1 + 0x224) == 6) {
LAB_02ed7c88:
          lVar21 = param_1[0x43][0xb3];
          if (lVar21 != 0) {
            iVar11 = 0;
            if (*(long *)puVar4 != 0) {
              iVar11 = FUN_014e4978();
            }
            local_88 = (undefined *)CONCAT44(local_88._4_4_,iVar11);
            FUN_03d65ef0(lVar21,iVar11 != 2);
          }
        }
      }
    }
  }
  if (*(int *)((long)param_1 + 0x224) == 3) {
    local_124 = 0;
    iVar11 = FUN_014e5cfc();
    local_88 = (undefined *)CONCAT44(local_88._4_4_,iVar11);
    if ((iVar11 == 2) || (iVar11 == 1)) {
      local_124 = iVar11;
    }
    else if (iVar11 == 0) {
      local_124 = 0;
    }
    plVar18 = *(long **)(puVar22[0x45] + (ulong)(1 < *(uint *)(puVar22 + 0x44)) * 8);
    if (plVar18 != (long *)0x0) {
      fVar25 = (float)local_124;
      puVar2 = PTR_DAT_04bc4f00 + 0x10;
      local_80 = 7;
      local_88 = puVar2;
      (**(code **)(*plVar18 + 0x20))(plVar18,&local_88);
      fVar23 = (float)(**(code **)(plVar18[3] + 0x90))(plVar18[1]);
      if (fVar23 != fVar25) {
        local_80 = 9;
        local_88 = puVar2;
        (**(code **)(*plVar18 + 0x20))(plVar18,&local_88);
        fVar23 = (float)(**(code **)(plVar18[3] + 0xb0))(plVar18[1]);
        if (fVar25 <= fVar23 + 1.1920929e-07) {
          local_88 = PTR_DAT_04bc4f00 + 0x10;
          local_80 = 0x14;
          (**(code **)(*plVar18 + 0x18))(plVar18,&local_88);
          (**(code **)(plVar18[3] + 0x158))(fVar25,plVar18[1]);
          local_88 = PTR_DAT_04bc4e68 + 0x10;
          local_80 = 9;
          (**(code **)(*plVar18 + 0x18))(plVar18,&local_88);
          (**(code **)(plVar18[3] + 0x1d0))(plVar18[1]);
          FUN_02ed2900(param_1);
          FUN_02ed8b64(param_1);
          pppuVar7 = local_110;
          if ((int)local_120 < local_120._4_4_) {
            if (local_110 != (undefined8 ***)0x0) {
              local_110 = (undefined8 ***)*local_110;
            }
            *(int *)(pppuVar7 + 2) = local_124;
            *pppuVar7 = (undefined8 **)&DAT_04addc58;
            pppuVar7[1] = param_1;
            if ((int)local_120 < local_120._4_4_) {
              local_118[(int)local_120] = pppuVar7;
              local_120 = (undefined *)CONCAT44(local_120._4_4_,(int)local_120 + 1);
            }
          }
        }
      }
    }
    plVar18 = (long *)param_1[0x43][0xae];
    if (plVar18 != (long *)0x0) {
      plVar14 = (long *)plVar18[0x36];
      if (local_124 == 2) {
        if (((plVar14 != (long *)0x0) &&
            (uVar13 = (**(code **)(*plVar14 + 0x50))(), (uVar13 & 1) != 0)) &&
           (((long *)plVar18[0x36] != (long *)0x0 &&
            ((uVar13 = (**(code **)(*(long *)plVar18[0x36] + 0x58))(), (uVar13 & 1) != 0 &&
             (plVar14 = (long *)plVar18[0x36], plVar14 != (long *)0x0)))))) {
          (**(code **)(*plVar14 + 0x38))(plVar14,0);
          (**(code **)(*plVar18 + 0xa8))(plVar18);
        }
      }
      else if ((((plVar14 != (long *)0x0) &&
                (uVar13 = (**(code **)(*plVar14 + 0x48))(), (uVar13 & 1) != 0)) &&
               ((long *)plVar18[0x36] != (long *)0x0)) &&
              ((uVar13 = (**(code **)(*(long *)plVar18[0x36] + 0x60))(), (uVar13 & 1) != 0 &&
               (plVar18 = (long *)plVar18[0x36], plVar18 != (long *)0x0)))) {
        (**(code **)(*plVar18 + 0x40))(plVar18,0);
      }
    }
    plVar18 = (long *)param_1[0x43][0xb1];
    if (plVar18 != (long *)0x0) {
      plVar14 = (long *)plVar18[0x36];
      if (local_124 == 1) {
        if (((plVar14 != (long *)0x0) &&
            (uVar13 = (**(code **)(*plVar14 + 0x50))(), (uVar13 & 1) != 0)) &&
           (((long *)plVar18[0x36] != (long *)0x0 &&
            (((uVar13 = (**(code **)(*(long *)plVar18[0x36] + 0x58))(), (uVar13 & 1) != 0 &&
              (uVar13 = (**(code **)(*plVar18 + 0x68))(plVar18), (uVar13 & 1) == 0)) &&
             (plVar14 = (long *)plVar18[0x36], plVar14 != (long *)0x0)))))) {
          (**(code **)(*plVar14 + 0x38))(plVar14,0);
          (**(code **)(*plVar18 + 0xa8))(plVar18);
        }
      }
      else if (((plVar14 != (long *)0x0) &&
               (uVar13 = (**(code **)(*plVar14 + 0x48))(), (uVar13 & 1) != 0)) &&
              (((long *)plVar18[0x36] != (long *)0x0 &&
               ((uVar13 = (**(code **)(*(long *)plVar18[0x36] + 0x60))(), (uVar13 & 1) != 0 &&
                (plVar18 = (long *)plVar18[0x36], plVar18 != (long *)0x0)))))) {
        (**(code **)(*plVar18 + 0x40))(plVar18,0);
      }
    }
  }
  plVar18 = *(long **)(puVar22[0x45] + (ulong)(2 < *(uint *)(puVar22 + 0x44)) * 0x10);
  if (plVar18 != (long *)0x0) {
    uVar15 = 0;
    if (*(long *)PTR_DAT_04bb5ce0 != 0) {
      uVar15 = *(undefined4 *)(*(long *)PTR_DAT_04bb5ce0 + 0xee0);
    }
    local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar15);
    switch(uVar15) {
    case 0:
      puVar2 = PTR_DAT_04bc4f00 + 0x10;
      local_80 = 7;
      local_88 = puVar2;
      (**(code **)(*plVar18 + 0x20))(plVar18,&local_88);
      fVar23 = (float)(**(code **)(plVar18[3] + 0x90))(plVar18[1]);
      if (fVar23 != 2.0) {
        local_80 = 0x14;
        local_88 = puVar2;
        (**(code **)(*plVar18 + 0x18))(plVar18,&local_88);
        lVar21 = plVar18[3];
        uVar24 = 0x40000000;
LAB_02ed823c:
        (**(code **)(lVar21 + 0x158))(uVar24,plVar18[1]);
        local_88 = PTR_DAT_04bc4e68 + 0x10;
        local_80 = 9;
        (**(code **)(*plVar18 + 0x18))(plVar18,&local_88);
        (**(code **)(plVar18[3] + 0x1d0))(plVar18[1]);
      }
      break;
    case 1:
      puVar2 = PTR_DAT_04bc4f00 + 0x10;
      local_80 = 7;
      local_88 = puVar2;
      (**(code **)(*plVar18 + 0x20))(plVar18,&local_88);
      fVar23 = (float)(**(code **)(plVar18[3] + 0x90))(plVar18[1]);
      if (fVar23 != 1.0) {
        local_80 = 0x14;
        local_88 = puVar2;
        (**(code **)(*plVar18 + 0x18))(plVar18,&local_88);
        lVar21 = plVar18[3];
        uVar24 = 0x3f800000;
        goto LAB_02ed823c;
      }
      break;
    case 2:
      puVar2 = PTR_DAT_04bc4f00 + 0x10;
      local_80 = 7;
      local_88 = puVar2;
      (**(code **)(*plVar18 + 0x20))(plVar18,&local_88);
      fVar23 = (float)(**(code **)(plVar18[3] + 0x90))(plVar18[1]);
      if (fVar23 != 0.0) {
        local_80 = 0x14;
        local_88 = puVar2;
        (**(code **)(*plVar18 + 0x18))(plVar18,&local_88);
        lVar21 = plVar18[3];
        uVar24 = 0;
        goto LAB_02ed823c;
      }
      break;
    case 3:
      puVar2 = PTR_DAT_04bc4f00 + 0x10;
      local_80 = 7;
      local_88 = puVar2;
      (**(code **)(*plVar18 + 0x20))(plVar18,&local_88);
      fVar23 = (float)(**(code **)(plVar18[3] + 0x90))(plVar18[1]);
      if (fVar23 != 3.0) {
        local_80 = 0x14;
        local_88 = puVar2;
        (**(code **)(*plVar18 + 0x18))(plVar18,&local_88);
        lVar21 = plVar18[3];
        uVar24 = 0x40400000;
        goto LAB_02ed823c;
      }
    }
  }
  if ((*(uint *)((long)param_1 + 0x224) < 10) &&
     ((1 << (ulong)(*(uint *)((long)param_1 + 0x224) & 0x1f) & 0x3ceU) != 0)) {
    uVar10 = *(uint *)(puVar22 + 0x44);
    lVar16 = puVar22[0x45];
    lVar21 = 0x50;
    if (uVar10 < 0xb) {
      lVar21 = 0;
    }
    plVar18 = *(long **)(lVar16 + lVar21);
    lVar21 = 0x58;
    if (uVar10 < 0xc) {
      lVar21 = 0;
    }
    if (((plVar18 == (long *)0x0) || (plVar14 = *(long **)(lVar16 + lVar21), plVar14 == (long *)0x0)
        ) || (plVar17 = *(long **)(lVar16 + (ulong)(4 < uVar10) * 0x20), plVar17 == (long *)0x0))
    goto LAB_02ed84e0;
    local_80 = 0x13;
    puVar2 = PTR_DAT_04bc4f00 + 0x10;
    local_88 = puVar2;
    (**(code **)(*plVar18 + 0x20))(plVar18,&local_88);
    fVar23 = (float)(**(code **)(plVar18[3] + 0x150))(plVar18[1]);
    if (fVar23 <= 0.0) {
      local_80 = 0x13;
      local_88 = puVar2;
      (**(code **)(*plVar14 + 0x20))(plVar14,&local_88);
      fVar23 = (float)(**(code **)(plVar14[3] + 0x150))(plVar14[1]);
      if (0.0 < fVar23) {
        fVar23 = 2.0;
        goto LAB_02ed83e4;
      }
      local_80 = 0xb;
      puVar3 = PTR_DAT_04bc4f00 + 0x10;
      local_88 = puVar3;
      (**(code **)(*plVar18 + 0x20))(plVar18,&local_88);
      uVar13 = (**(code **)(plVar18[3] + 0xd0))(plVar18[1]);
      if ((uVar13 & 1) != 0) {
        local_80 = 0xb;
        local_88 = puVar3;
        (**(code **)(*plVar14 + 0x20))(plVar14,&local_88);
        uVar13 = (**(code **)(plVar14[3] + 0xd0))(plVar14[1]);
        fVar23 = 0.0;
        if ((uVar13 & 1) != 0) goto LAB_02ed83e4;
      }
    }
    else {
      fVar23 = 1.0;
LAB_02ed83e4:
      local_80 = 7;
      local_88 = puVar2;
      (**(code **)(*plVar17 + 0x20))(plVar17,&local_88);
      fVar25 = (float)(**(code **)(plVar17[3] + 0x90))(plVar17[1]);
      if ((fVar25 - fVar23 < -1.1920929e-07) || (1.1920929e-07 < fVar25 - fVar23)) {
        local_80 = 9;
        puVar2 = PTR_DAT_04bc4f00 + 0x10;
        local_88 = puVar2;
        (**(code **)(*plVar17 + 0x20))(plVar17,&local_88);
        fVar25 = (float)(**(code **)(plVar17[3] + 0xb0))(plVar17[1]);
        local_80 = 0x14;
        if (fVar23 <= fVar25) {
          fVar25 = fVar23;
        }
        local_88 = puVar2;
        (**(code **)(*plVar17 + 0x18))(plVar17,&local_88);
        (**(code **)(plVar17[3] + 0x158))(fVar25,plVar17[1]);
        local_80 = 9;
        local_88 = PTR_DAT_04bc4e68 + 0x10;
        (**(code **)(*plVar17 + 0x18))(plVar17,&local_88);
        (**(code **)(plVar17[3] + 0x1d0))(plVar17[1]);
      }
    }
LAB_02ed84e0:
    uVar10 = *(uint *)(puVar22 + 0x44);
    lVar16 = puVar22[0x45];
    lVar21 = 0x48;
    if (uVar10 < 10) {
      lVar21 = 0;
    }
    plVar18 = *(long **)(lVar16 + lVar21);
    lVar21 = 0x28;
    if (uVar10 < 6) {
      lVar21 = 0;
    }
    if (((plVar18 != (long *)0x0) &&
        (plVar14 = *(long **)(lVar16 + (ulong)(0x10 < uVar10) * 0x80), plVar14 != (long *)0x0)) &&
       (plVar17 = *(long **)(lVar16 + lVar21), plVar17 != (long *)0x0)) {
      local_80 = 0x13;
      puVar2 = PTR_DAT_04bc4f00 + 0x10;
      local_88 = puVar2;
      (**(code **)(*plVar18 + 0x20))(plVar18,&local_88);
      fVar23 = (float)(**(code **)(plVar18[3] + 0x150))(plVar18[1]);
      if (fVar23 <= 0.0) {
        local_80 = 0x13;
        local_88 = puVar2;
        (**(code **)(*plVar14 + 0x20))(plVar14,&local_88);
        fVar23 = (float)(**(code **)(plVar14[3] + 0x150))(plVar14[1]);
        if (fVar23 <= 0.0) {
          local_80 = 0xb;
          puVar3 = PTR_DAT_04bc4f00 + 0x10;
          local_88 = puVar3;
          (**(code **)(*plVar18 + 0x20))(plVar18,&local_88);
          uVar13 = (**(code **)(plVar18[3] + 0xd0))(plVar18[1]);
          if ((uVar13 & 1) != 0) {
            local_80 = 0xb;
            local_88 = puVar3;
            (**(code **)(*plVar14 + 0x20))(plVar14,&local_88);
            uVar13 = (**(code **)(plVar14[3] + 0xd0))(plVar14[1]);
            fVar23 = 0.0;
            if ((uVar13 & 1) != 0) goto LAB_02ed8620;
          }
          goto LAB_02ed871c;
        }
        fVar23 = 2.0;
      }
      else {
        fVar23 = 1.0;
      }
LAB_02ed8620:
      local_80 = 7;
      local_88 = puVar2;
      (**(code **)(*plVar17 + 0x20))(plVar17,&local_88);
      fVar25 = (float)(**(code **)(plVar17[3] + 0x90))(plVar17[1]);
      if ((fVar25 - fVar23 < -1.1920929e-07) || (1.1920929e-07 < fVar25 - fVar23)) {
        local_80 = 9;
        puVar2 = PTR_DAT_04bc4f00 + 0x10;
        local_88 = puVar2;
        (**(code **)(*plVar17 + 0x20))(plVar17,&local_88);
        fVar25 = (float)(**(code **)(plVar17[3] + 0xb0))(plVar17[1]);
        local_80 = 0x14;
        if (fVar23 <= fVar25) {
          fVar25 = fVar23;
        }
        local_88 = puVar2;
        (**(code **)(*plVar17 + 0x18))(plVar17,&local_88);
        (**(code **)(plVar17[3] + 0x158))(fVar25,plVar17[1]);
        local_80 = 9;
        local_88 = PTR_DAT_04bc4e68 + 0x10;
        (**(code **)(*plVar17 + 0x18))(plVar17,&local_88);
        (**(code **)(plVar17[3] + 0x1d0))(plVar17[1]);
      }
    }
  }
LAB_02ed871c:
  lVar21 = 0x90;
  if (*(uint *)(puVar22 + 0x44) < 0x13) {
    lVar21 = 0;
  }
  plVar18 = *(long **)(puVar22[0x45] + lVar21);
  if (plVar18 == (long *)0x0) goto LAB_02ed8944;
  iVar11 = *(int *)((long)param_1 + 0x22c);
  if (*(int *)((long)param_1 + 0x224) == 3) {
    iVar12 = FUN_014e5cfc();
    if (iVar12 == 1) {
      fVar23 = 2.0;
    }
    else {
      if (iVar12 != 2) goto LAB_02ed8764;
      fVar23 = 3.0;
    }
  }
  else {
LAB_02ed8764:
    fVar25 = 1.0;
    if (iVar11 != 1) {
      fVar25 = 0.0;
    }
    fVar23 = 2.0;
    if (iVar11 != 2) {
      fVar23 = fVar25;
    }
  }
  local_88 = PTR_DAT_04bc4f00 + 0x10;
  local_80 = 7;
  (**(code **)(*plVar18 + 0x20))(plVar18,&local_88);
  fVar25 = (float)(**(code **)(plVar18[3] + 0x90))(plVar18[1]);
  pppuVar7 = local_110;
  puVar2 = PTR_DAT_04bc0878;
  if ((fVar25 - fVar23 < -1.1920929e-07) || (1.1920929e-07 < fVar25 - fVar23)) {
    if ((int)local_120 < local_120._4_4_) {
      if (local_110 != (undefined8 ***)0x0) {
        local_110 = (undefined8 ***)*local_110;
      }
      *pppuVar7 = (undefined8 **)&DAT_04addc80;
      pppuVar7[1] = param_1;
      if ((int)local_120 < local_120._4_4_) {
        local_118[(int)local_120] = pppuVar7;
        local_120 = (undefined *)CONCAT44(local_120._4_4_,(int)local_120 + 1);
      }
    }
    lVar21 = 0x60;
    if (*(uint *)(puVar22 + 0x40) < 0xd) {
      lVar21 = 0;
    }
    lVar16 = 0x70;
    if (*(uint *)(puVar22 + 0x40) < 0xf) {
      lVar16 = 0;
    }
    plVar17 = *(long **)(puVar22[0x41] + lVar21);
    plVar14 = *(long **)(puVar22[0x41] + lVar16);
    if (plVar17 != (long *)0x0) {
      local_88 = PTR_DAT_04bc0878 + 0x10;
      local_80 = 0x15;
      (**(code **)(*plVar17 + 0x18))(plVar17,&local_88);
      (**(code **)(plVar17[3] + 0x640))(plVar17[1]);
    }
    if (plVar14 != (long *)0x0) {
      local_88 = puVar2 + 0x10;
      local_80 = 0x15;
      (**(code **)(*plVar14 + 0x18))(plVar14,&local_88);
      (**(code **)(plVar14[3] + 0x640))(plVar14[1]);
    }
    local_88 = PTR_DAT_04bc4f00 + 0x10;
    local_80 = 0x14;
    (**(code **)(*plVar18 + 0x18))(plVar18,&local_88);
    (**(code **)(plVar18[3] + 0x158))(fVar23,plVar18[1]);
    local_88 = PTR_DAT_04bc4e68 + 0x10;
    local_80 = 9;
    (**(code **)(*plVar18 + 0x18))(plVar18,&local_88);
    (**(code **)(plVar18[3] + 0x1d0))(plVar18[1]);
  }
LAB_02ed8944:
  lVar21 = 0x70;
  if (*(uint *)(puVar22 + 0x44) < 0xf) {
    lVar21 = 0;
  }
  plVar18 = *(long **)(puVar22[0x45] + lVar21);
  if (plVar18 != (long *)0x0) {
    fVar23 = 1.0;
    if (*(int *)(param_1 + 0x46) != 1) {
      fVar23 = 0.0;
    }
    fVar25 = 2.0;
    if (*(int *)(param_1 + 0x46) != 2) {
      fVar25 = fVar23;
    }
    puVar2 = PTR_DAT_04bc4f00 + 0x10;
    local_80 = 7;
    local_88 = puVar2;
    (**(code **)(*plVar18 + 0x20))(plVar18,&local_88);
    fVar23 = (float)(**(code **)(plVar18[3] + 0x90))(plVar18[1]);
    if ((fVar23 - fVar25 < -1.1920929e-07) || (1.1920929e-07 < fVar23 - fVar25)) {
      local_80 = 0x14;
      local_88 = puVar2;
      (**(code **)(*plVar18 + 0x18))(plVar18,&local_88);
      (**(code **)(plVar18[3] + 0x158))(fVar25,plVar18[1]);
      local_88 = PTR_DAT_04bc4e68 + 0x10;
      local_80 = 9;
      (**(code **)(*plVar18 + 0x18))(plVar18,&local_88);
      (**(code **)(plVar18[3] + 0x1d0))(plVar18[1]);
    }
  }
  if ((int)local_120 != 0) {
    lVar21 = (long)(int)local_120 << 3;
    puVar22 = local_118;
    do {
      (*(code *)**(undefined8 **)*puVar22)();
      lVar21 = lVar21 + -8;
      puVar22 = puVar22 + 1;
    } while (lVar21 != 0);
  }
  return;
}

