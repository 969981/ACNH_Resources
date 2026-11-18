
/* WARNING: Removing unreachable block (ram,0x037648dc) */
/* WARNING: Removing unreachable block (ram,0x03764838) */
/* WARNING: Removing unreachable block (ram,0x037644ec) */
/* WARNING: Removing unreachable block (ram,0x03763794) */
/* WARNING: Removing unreachable block (ram,0x03764228) */
/* WARNING: Removing unreachable block (ram,0x03763ec8) */
/* WARNING: Removing unreachable block (ram,0x037636c8) */
/* WARNING: Removing unreachable block (ram,0x03762fec) */
/* WARNING: Removing unreachable block (ram,0x03762e60) */
/* WARNING: Removing unreachable block (ram,0x03762f90) */
/* WARNING: Removing unreachable block (ram,0x037631ac) */
/* WARNING: Removing unreachable block (ram,0x03763d00) */
/* WARNING: Removing unreachable block (ram,0x03764094) */
/* WARNING: Removing unreachable block (ram,0x03763604) */
/* WARNING: Removing unreachable block (ram,0x03764410) */
/* WARNING: Removing unreachable block (ram,0x03764718) */
/* WARNING: Removing unreachable block (ram,0x037647ac) */
/* WARNING: Removing unreachable block (ram,0x03764ca0) */
/* WARNING: Removing unreachable block (ram,0x0376342c) */

void FUN_03762e10(undefined1 *param_1)

{
  ulong *puVar1;
  ushort *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  bool bVar13;
  ushort uVar14;
  undefined1 uVar15;
  byte bVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long *plVar21;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  undefined *puVar28;
  long *plVar29;
  uint uVar30;
  uint uVar31;
  undefined *puVar32;
  char *pcVar33;
  short sVar34;
  undefined **ppuVar35;
  undefined2 uVar36;
  ulong uVar37;
  ushort *puVar38;
  ushort uVar39;
  undefined *local_110;
  char *local_108;
  undefined1 local_100;
  byte local_ff;
  undefined8 local_f8;
  long *local_f0;
  undefined8 ****local_e8;
  undefined8 ****ppppuStack_e0;
  undefined8 ***local_d8;
  undefined8 **local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  long local_b8 [4];
  undefined *local_98;
  ushort local_90 [6];
  ushort local_84 [2];
  undefined8 local_80;
  char *local_78;
  ulong local_70;
  
  lVar24 = *(long *)PTR_DAT_04bb46b0;
  if (lVar24 == 0) {
    lVar24 = 0;
    plVar29 = plRam0000000000001678;
    if (plRam0000000000001678 != (long *)0x0) goto LAB_03762eb4;
LAB_03762ed0:
    uVar19 = 0;
  }
  else {
    local_f8 = CONCAT44(local_f8._4_4_,1);
    if (((*(byte *)(lVar24 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar18 = (**(code **)(**(long **)(*(long *)(lVar24 + 0x10) + 0x188) + 0x30))();
    }
    else {
      lVar18 = 0;
    }
    lVar24 = 0;
    if (lVar18 != 0) {
      lVar24 = lVar18 + 0x365f8;
    }
    plVar29 = *(long **)(lVar24 + 0x1678);
    if (*(long **)(lVar24 + 0x1678) == (long *)0x0) goto LAB_03762ed0;
LAB_03762eb4:
    if ((undefined8 *)*plVar29 == (undefined8 *)0x0) goto LAB_03762ed0;
    uVar19 = (*(code *)**(undefined8 **)*plVar29)();
    uVar19 = uVar19 & 0xffffffff;
  }
  local_84[0] = 0;
  FUN_0374a300(local_84,*(undefined1 *)
                         (*(long *)(lVar24 + 0x1660) + *(long *)(lVar24 + 0x1658) + 0x32));
  if ((((uVar19 & 1) != 0) && (*(long *)(lVar24 + 0x1678) != 0)) &&
     (puVar20 = *(undefined8 **)(*(long *)(lVar24 + 0x1678) + 8), puVar20 != (undefined8 *)0x0)) {
    (**(code **)*puVar20)();
  }
  puVar28 = PTR_DAT_04bb7648;
  local_98 = PTR_DAT_04bb7648 + 0x10;
  if ((*(long **)(lVar24 + 0x60) == (long *)0x0) ||
     (puVar20 = (undefined8 *)**(long **)(lVar24 + 0x60), puVar20 == (undefined8 *)0x0)) {
    uVar19 = 0;
  }
  else {
    uVar19 = (**(code **)*puVar20)();
    uVar19 = uVar19 & 0xffffffff;
  }
  lVar18 = *(long *)(lVar24 + 0x48) + *(long *)(lVar24 + 0x40);
  uVar10 = *(ushort *)(lVar18 + 0x48b0);
  uVar11 = *(ushort *)(lVar18 + 0x48b2);
  uVar37 = (ulong)uVar11;
  lVar18 = *(long *)PTR_DAT_04bb46b0;
  local_90[0] = uVar10;
  if (lVar18 != 0) {
    local_f8 = CONCAT44(local_f8._4_4_,1);
    if (((*(byte *)(lVar18 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar18 = (**(code **)(**(long **)(*(long *)(lVar18 + 0x10) + 0x188) + 0x30))();
      lVar25 = 0;
      if (lVar18 != 0) {
        lVar25 = lVar18 + 0xa8;
      }
      lVar18 = *(long *)PTR_DAT_04bb46b0;
      if (lVar18 == 0) goto LAB_03763340;
    }
    else {
      lVar25 = 0;
    }
    local_f8 = CONCAT44(local_f8._4_4_,1);
    if (((((*(byte *)(lVar18 + 0x50d) ^ 0xff) & 6) == 0) &&
        (lVar18 = (**(code **)(**(long **)(*(long *)(lVar18 + 0x10) + 0x188) + 0x30))(),
        uVar10 < 500)) && (lVar18 != 0)) {
      lVar18 = lVar18 + (ulong)uVar10 * 0x2d48;
      lVar26 = *(long *)(lVar18 + 0x4cc38);
      if (lVar26 == 0) {
        uVar22 = 0;
      }
      else {
        if (*(undefined8 **)(lVar26 + 0x10) == (undefined8 *)0x0) {
          uVar22 = 0;
        }
        else {
          uVar22 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
          lVar26 = *(long *)(lVar18 + 0x4cc38);
          uVar22 = uVar22 & 0xffffffff;
          if (lVar26 == 0) goto LAB_03763090;
        }
        plVar29 = *(long **)(lVar26 + 0x20);
        if (plVar29 != (long *)0x0) {
          local_f8 = *(undefined8 *)(lVar18 + 0x4cc18);
          local_f0 = *(long **)(lVar18 + 0x4cc20);
          local_e8 = (undefined8 ****)0x5a80;
          (**(code **)(*plVar29 + 0x20))(plVar29,&local_f8);
        }
      }
LAB_03763090:
      uVar27 = FUN_028f41ac(*(long *)(lVar18 + 0x4cc20) + *(long *)(lVar18 + 0x4cc18));
      if ((((uVar22 & 1) != 0) && (*(long *)(lVar18 + 0x4cc38) != 0)) &&
         (puVar20 = *(undefined8 **)(*(long *)(lVar18 + 0x4cc38) + 0x18),
         puVar20 != (undefined8 *)0x0)) {
        (**(code **)*puVar20)();
      }
      if ((uVar27 & 1) == 0) {
        lVar18 = *(long *)(lVar25 + 0x450);
        if (lVar18 == 0) {
          FUN_028eb350(*(long *)(lVar25 + 0x438) + *(long *)(lVar25 + 0x430),local_90[0],0xffff,1);
        }
        else {
          if (*(undefined8 **)(lVar18 + 0x10) == (undefined8 *)0x0) {
            uVar22 = 0;
LAB_03763114:
            plVar29 = *(long **)(lVar18 + 0x20);
            if (plVar29 != (long *)0x0) {
              local_f8 = *(undefined8 *)(lVar25 + 0x430);
              local_f0 = *(long **)(lVar25 + 0x438);
              local_e8 = (undefined8 ****)0x297e8;
              (**(code **)(*plVar29 + 0x20))(plVar29,&local_f8);
            }
          }
          else {
            uVar22 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
            lVar18 = *(long *)(lVar25 + 0x450);
            uVar22 = uVar22 & 0xffffffff;
            if (lVar18 != 0) goto LAB_03763114;
          }
          FUN_028eb350(*(long *)(lVar25 + 0x438) + *(long *)(lVar25 + 0x430),local_90[0],0xffff,1);
          if ((((uVar22 & 1) != 0) && (*(long *)(lVar25 + 0x450) != 0)) &&
             (puVar20 = *(undefined8 **)(*(long *)(lVar25 + 0x450) + 0x18),
             puVar20 != (undefined8 *)0x0)) {
            (**(code **)*puVar20)();
          }
        }
      }
    }
    lVar18 = *(long *)PTR_DAT_04bb46b0;
    if (lVar18 != 0) {
      local_f8 = CONCAT44(local_f8._4_4_,1);
      if (((((*(byte *)(lVar18 + 0x50d) ^ 0xff) & 6) == 0) &&
          (lVar18 = (**(code **)(**(long **)(*(long *)(lVar18 + 0x10) + 0x188) + 0x30))(),
          uVar11 < 500)) && (lVar18 != 0)) {
        lVar18 = lVar18 + uVar37 * 0x2d48;
        lVar26 = *(long *)(lVar18 + 0x4cc38);
        if (lVar26 == 0) {
          uVar22 = 0;
        }
        else {
          if (*(undefined8 **)(lVar26 + 0x10) == (undefined8 *)0x0) {
            uVar22 = 0;
          }
          else {
            uVar22 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
            lVar26 = *(long *)(lVar18 + 0x4cc38);
            uVar22 = uVar22 & 0xffffffff;
            if (lVar26 == 0) goto LAB_03763250;
          }
          plVar29 = *(long **)(lVar26 + 0x20);
          if (plVar29 != (long *)0x0) {
            local_f8 = *(undefined8 *)(lVar18 + 0x4cc18);
            local_f0 = *(long **)(lVar18 + 0x4cc20);
            local_e8 = (undefined8 ****)0x5a80;
            (**(code **)(*plVar29 + 0x20))(plVar29,&local_f8);
          }
        }
LAB_03763250:
        uVar27 = FUN_028f41ac(*(long *)(lVar18 + 0x4cc20) + *(long *)(lVar18 + 0x4cc18));
        if ((((uVar22 & 1) != 0) && (*(long *)(lVar18 + 0x4cc38) != 0)) &&
           (puVar20 = *(undefined8 **)(*(long *)(lVar18 + 0x4cc38) + 0x18),
           puVar20 != (undefined8 *)0x0)) {
          (**(code **)*puVar20)();
        }
        if ((uVar27 & 1) == 0) {
          lVar18 = *(long *)(lVar25 + 0x450);
          if (lVar18 == 0) {
            FUN_028eb350(*(long *)(lVar25 + 0x438) + *(long *)(lVar25 + 0x430),uVar37,0xffff,1);
          }
          else {
            if (*(undefined8 **)(lVar18 + 0x10) == (undefined8 *)0x0) {
              uVar22 = 0;
LAB_037632d4:
              plVar29 = *(long **)(lVar18 + 0x20);
              if (plVar29 != (long *)0x0) {
                local_f8 = *(undefined8 *)(lVar25 + 0x430);
                local_f0 = *(long **)(lVar25 + 0x438);
                local_e8 = (undefined8 ****)0x297e8;
                (**(code **)(*plVar29 + 0x20))(plVar29,&local_f8);
              }
            }
            else {
              uVar22 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
              lVar18 = *(long *)(lVar25 + 0x450);
              uVar22 = uVar22 & 0xffffffff;
              if (lVar18 != 0) goto LAB_037632d4;
            }
            FUN_028eb350(*(long *)(lVar25 + 0x438) + *(long *)(lVar25 + 0x430),uVar37,0xffff,1);
            if ((((uVar22 & 1) != 0) && (*(long *)(lVar25 + 0x450) != 0)) &&
               (puVar20 = *(undefined8 **)(*(long *)(lVar25 + 0x450) + 0x18),
               puVar20 != (undefined8 *)0x0)) {
              (**(code **)*puVar20)();
            }
          }
        }
      }
    }
  }
LAB_03763340:
  uVar14 = local_84[0];
  uVar10 = local_90[0];
  uVar17 = (uint)local_84[0];
  local_f8 = CONCAT44(local_f8._4_4_,uVar17) & 0xffffffff0000000f;
  if (1 < (int)local_f8 - 3U) {
    if ((int)local_f8 == 2) {
      lVar18 = *(long *)PTR_DAT_04bb46b0;
      if (lVar18 != 0) {
        uVar22 = (ulong)local_90[0];
        local_f8 = CONCAT44(local_f8._4_4_,1);
        if (((*(byte *)(lVar18 + 0x50d) ^ 0xff) & 6) == 0) {
          lVar25 = (**(code **)(**(long **)(*(long *)(lVar18 + 0x10) + 0x188) + 0x30))();
          lVar18 = 0;
          if ((uVar10 < 500) && (lVar25 != 0)) {
            lVar18 = lVar25 + uVar22 * 0x2d48 + 0x4cc10;
          }
        }
        else {
          lVar18 = 0;
        }
        lVar25 = *(long *)PTR_DAT_04bb46b0;
        if (lVar25 != 0) {
          local_f8 = CONCAT44(local_f8._4_4_,1);
          if ((((((*(byte *)(lVar25 + 0x50d) ^ 0xff) & 6) == 0) &&
               (lVar25 = (**(code **)(**(long **)(*(long *)(lVar25 + 0x10) + 0x188) + 0x30))(),
               uVar11 < 500)) && (lVar25 != 0)) && (lVar18 != 0)) {
            lVar25 = lVar25 + uVar37 * 0x2d48;
            lVar26 = *(long *)(lVar18 + 0x60);
            if (lVar26 == 0) {
              *(ushort *)(*(long *)(lVar18 + 0x48) + *(long *)(lVar18 + 0x40) + 2) = local_90[0];
LAB_037638c8:
              lVar26 = *(long *)(lVar18 + 0x60);
              if (lVar26 == 0) goto LAB_037638f4;
              if (*(undefined8 **)(lVar26 + 0x10) == (undefined8 *)0x0) {
                uVar37 = 0;
LAB_03763918:
                plVar29 = *(long **)(lVar26 + 0x20);
                if (plVar29 != (long *)0x0) {
                  local_f8 = *(ulong *)(lVar18 + 0x40);
                  local_f0 = *(long **)(lVar18 + 0x48);
                  local_e8 = (undefined8 ****)0x1188;
                  (**(code **)(*plVar29 + 0x20))(plVar29,&local_f8);
                }
              }
              else {
                uVar37 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
                lVar26 = *(long *)(lVar18 + 0x60);
                uVar37 = uVar37 & 0xffffffff;
                if (lVar26 != 0) goto LAB_03763918;
              }
              puVar38 = (ushort *)(*(long *)(lVar18 + 0x48) + *(ulong *)(lVar18 + 0x40));
              puVar38[2] = uVar11;
              *puVar38 = *puVar38 | 1;
              if ((((uVar37 & 1) != 0) && (*(long *)(lVar18 + 0x60) != 0)) &&
                 (puVar20 = *(undefined8 **)(*(long *)(lVar18 + 0x60) + 0x18),
                 puVar20 != (undefined8 *)0x0)) {
                (**(code **)*puVar20)();
              }
            }
            else {
              if (*(undefined8 **)(lVar26 + 0x10) == (undefined8 *)0x0) {
                uVar37 = 0;
LAB_03763848:
                plVar29 = *(long **)(lVar26 + 0x20);
                if (plVar29 == (long *)0x0) goto LAB_0376388c;
                local_f0 = *(long **)(lVar18 + 0x48);
                local_f8 = *(ulong *)(lVar18 + 0x40);
                local_e8 = (undefined8 ****)0x1188;
                (**(code **)(*plVar29 + 0x20))(plVar29,&local_f8);
                lVar26 = *(long *)(lVar18 + 0x48) + *(ulong *)(lVar18 + 0x40);
              }
              else {
                uVar37 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
                lVar26 = *(long *)(lVar18 + 0x60);
                uVar37 = uVar37 & 0xffffffff;
                if (lVar26 != 0) goto LAB_03763848;
LAB_0376388c:
                lVar26 = *(long *)(lVar18 + 0x48) + *(long *)(lVar18 + 0x40);
              }
              *(ushort *)(lVar26 + 2) = local_90[0];
              if ((uVar37 & 1) == 0) goto LAB_037638c8;
              if (*(long *)(lVar18 + 0x60) != 0) {
                puVar20 = *(undefined8 **)(*(long *)(lVar18 + 0x60) + 0x18);
                if (puVar20 != (undefined8 *)0x0) {
                  (**(code **)*puVar20)();
                }
                goto LAB_037638c8;
              }
LAB_037638f4:
              puVar38 = (ushort *)(*(long *)(lVar18 + 0x48) + *(long *)(lVar18 + 0x40));
              puVar38[2] = uVar11;
              *puVar38 = *puVar38 | 1;
            }
            lVar18 = *(long *)(lVar25 + 0x4cc70);
            if (lVar18 == 0) {
              *(ushort *)(*(long *)(lVar25 + 0x4cc58) + *(long *)(lVar25 + 0x4cc50) + 2) = uVar11;
LAB_03763a48:
              lVar18 = *(long *)(lVar25 + 0x4cc70);
              if (lVar18 == 0) goto LAB_03763a7c;
              if (*(undefined8 **)(lVar18 + 0x10) == (undefined8 *)0x0) {
                uVar37 = 0;
LAB_03763a94:
                plVar29 = *(long **)(lVar18 + 0x20);
                if (plVar29 != (long *)0x0) {
                  local_f8 = *(ulong *)(lVar25 + 0x4cc50);
                  local_f0 = *(long **)(lVar25 + 0x4cc58);
                  local_e8 = (undefined8 ****)0x1188;
                  (**(code **)(*plVar29 + 0x20))(plVar29,&local_f8);
                }
              }
              else {
                uVar37 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
                lVar18 = *(long *)(lVar25 + 0x4cc70);
                uVar37 = uVar37 & 0xffffffff;
                if (lVar18 != 0) goto LAB_03763a94;
              }
            }
            else {
              if (*(undefined8 **)(lVar18 + 0x10) == (undefined8 *)0x0) {
                uVar37 = 0;
LAB_037639cc:
                plVar29 = *(long **)(lVar18 + 0x20);
                if (plVar29 == (long *)0x0) goto LAB_03763a10;
                local_f8 = *(ulong *)(lVar25 + 0x4cc50);
                local_f0 = *(long **)(lVar25 + 0x4cc58);
                local_e8 = (undefined8 ****)0x1188;
                (**(code **)(*plVar29 + 0x20))(plVar29,&local_f8);
                lVar18 = *(long *)(lVar25 + 0x4cc58) + *(ulong *)(lVar25 + 0x4cc50);
              }
              else {
                uVar37 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
                lVar18 = *(long *)(lVar25 + 0x4cc70);
                uVar37 = uVar37 & 0xffffffff;
                if (lVar18 != 0) goto LAB_037639cc;
LAB_03763a10:
                lVar18 = *(long *)(lVar25 + 0x4cc58) + *(long *)(lVar25 + 0x4cc50);
              }
              *(ushort *)(lVar18 + 2) = uVar11;
              if ((uVar37 & 1) == 0) goto LAB_03763a48;
              if (*(long *)(lVar25 + 0x4cc70) != 0) {
                puVar20 = *(undefined8 **)(*(long *)(lVar25 + 0x4cc70) + 0x18);
                if (puVar20 != (undefined8 *)0x0) {
                  (**(code **)*puVar20)();
                }
                goto LAB_03763a48;
              }
LAB_03763a7c:
              uVar37 = 0;
            }
            puVar38 = (ushort *)(*(long *)(lVar25 + 0x4cc58) + *(long *)(lVar25 + 0x4cc50));
            puVar38[2] = local_90[0];
            *puVar38 = *puVar38 & 0xfffe;
            if ((((uVar37 & 1) != 0) && (*(long *)(lVar25 + 0x4cc70) != 0)) &&
               (puVar20 = *(undefined8 **)(*(long *)(lVar25 + 0x4cc70) + 0x18),
               puVar20 != (undefined8 *)0x0)) {
              (**(code **)*puVar20)();
            }
            lVar18 = *(long *)(lVar25 + 0x4e3a0);
            if (lVar18 == 0) {
              pvVar3 = (void *)(*(long *)(lVar25 + 0x4e388) + *(long *)(lVar25 + 0x4e380));
              memset(pvVar3,0,0x48b0);
              FUN_028f50f0((long)pvVar3 + 8);
            }
            else {
              if (*(undefined8 **)(lVar18 + 0x10) == (undefined8 *)0x0) {
                uVar37 = 0;
LAB_03763b60:
                plVar29 = *(long **)(lVar18 + 0x20);
                if (plVar29 != (long *)0x0) {
                  local_f8 = *(ulong *)(lVar25 + 0x4e380);
                  local_f0 = *(long **)(lVar25 + 0x4e388);
                  local_e8 = (undefined8 ****)0x48b0;
                  (**(code **)(*plVar29 + 0x20))(plVar29,&local_f8);
                }
              }
              else {
                uVar37 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
                lVar18 = *(long *)(lVar25 + 0x4e3a0);
                uVar37 = uVar37 & 0xffffffff;
                if (lVar18 != 0) goto LAB_03763b60;
              }
              pvVar3 = (void *)(*(long *)(lVar25 + 0x4e388) + *(long *)(lVar25 + 0x4e380));
              memset(pvVar3,0,0x48b0);
              FUN_028f50f0((long)pvVar3 + 8);
              if ((((uVar37 & 1) != 0) && (*(long *)(lVar25 + 0x4e3a0) != 0)) &&
                 (puVar20 = *(undefined8 **)(*(long *)(lVar25 + 0x4e3a0) + 0x18),
                 puVar20 != (undefined8 *)0x0)) {
                (**(code **)*puVar20)();
              }
            }
            lVar18 = *(long *)(lVar25 + 0x4e368);
            if (lVar18 == 0) {
              uVar37 = 0;
            }
            else {
              if (*(undefined8 **)(lVar18 + 0x10) == (undefined8 *)0x0) {
                uVar37 = 0;
              }
              else {
                uVar37 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
                lVar18 = *(long *)(lVar25 + 0x4e368);
                uVar37 = uVar37 & 0xffffffff;
                if (lVar18 == 0) goto LAB_03763c38;
              }
              plVar29 = *(long **)(lVar18 + 0x20);
              if (plVar29 != (long *)0x0) {
                local_f8 = *(ulong *)(lVar25 + 0x4e348);
                local_f0 = *(long **)(lVar25 + 0x4e350);
                local_e8 = (undefined8 ****)0x40;
                (**(code **)(*plVar29 + 0x20))(plVar29,&local_f8);
              }
            }
LAB_03763c38:
            puVar20 = (undefined8 *)(*(long *)(lVar25 + 0x4e350) + *(long *)(lVar25 + 0x4e348));
            *puVar20 = 0;
            puVar20[1] = 0;
            puVar20[2] = 0;
            puVar20[3] = 0;
            *(undefined8 *)((long)puVar20 + 4) = 0;
            puVar20[4] = 0;
            puVar20[5] = 0;
            *(undefined8 *)((long)puVar20 + 0xc) = 0;
            *(undefined8 *)((long)puVar20 + 0x14) = 0;
            *(undefined8 *)((long)puVar20 + 0x1c) = 0;
            *(undefined8 *)((long)puVar20 + 0x24) = 0;
            puVar20[6] = 0;
            puVar20[7] = 0;
            *(undefined2 *)((long)puVar20 + 0x36) = 0x101;
            *(undefined8 *)((long)puVar20 + 0x2a) = 0;
            if ((((uVar37 & 1) != 0) && (*(long *)(lVar25 + 0x4e368) != 0)) &&
               (puVar20 = *(undefined8 **)(*(long *)(lVar25 + 0x4e368) + 0x18),
               puVar20 != (undefined8 *)0x0)) {
              (**(code **)*puVar20)();
            }
          }
        }
      }
      FUN_03760540(local_90[0]);
    }
    else {
      if ((int)local_f8 != 1) goto LAB_03764fb4;
      local_d8 = &local_d0;
      local_f8 = 0;
      local_f0 = (long *)0x0;
      local_d0 = &local_c8;
      local_c8 = &local_c0;
      local_e8 = &local_d8;
      local_c0 = 0;
      if (local_b8 != (long *)0x0) {
        local_f8 = 0x400000000;
        local_f0 = local_b8;
      }
      ppppuStack_e0 = local_e8;
      uVar37 = FUN_03770770(local_90,&local_f8);
      puVar32 = PTR_DAT_04bb2020;
      if ((uVar37 & 1) == 0) {
        local_80 = PTR_DAT_04bb2020 + 0x10;
        local_78 = "IsBuiltNewHouse";
        FUN_0376c130(&local_98,&local_80,1);
        uVar10 = local_90[0];
        local_80 = (undefined *)(CONCAT44(local_80._4_4_,uVar17) & 0xffffffff0000000f);
        uVar23 = uVar14 >> 4 & 0xf;
        if ((int)local_80 != 1) {
          uVar23 = 0;
        }
        local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar23);
        if (uVar23 == 2) {
          lVar25 = *(long *)PTR_DAT_04bb46b0;
          lVar18 = 0;
          if (lVar25 != 0) {
            uVar37 = (ulong)local_90[0];
            local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
            if (((((*(byte *)(lVar25 + 0x50d) ^ 0xff) & 6) == 0) &&
                (lVar18 = (**(code **)(**(long **)(*(long *)(lVar25 + 0x10) + 0x188) + 0x38))(),
                uVar10 < 500)) && (lVar18 != 0)) {
              lVar18 = lVar18 + uVar37 * 0x2d48;
              if ((*(long **)(lVar18 + 0x4cc70) == (long *)0x0) ||
                 (puVar20 = (undefined8 *)**(long **)(lVar18 + 0x4cc70),
                 puVar20 == (undefined8 *)0x0)) {
                uVar36 = *(undefined2 *)
                          (*(long *)(lVar18 + 0x4cc58) + *(long *)(lVar18 + 0x4cc50) + 4);
              }
              else {
                uVar37 = (**(code **)*puVar20)();
                uVar36 = *(undefined2 *)
                          (*(long *)(lVar18 + 0x4cc58) + *(long *)(lVar18 + 0x4cc50) + 4);
                if ((((uVar37 & 1) != 0) && (*(long *)(lVar18 + 0x4cc70) != 0)) &&
                   (puVar20 = *(undefined8 **)(*(long *)(lVar18 + 0x4cc70) + 8),
                   puVar20 != (undefined8 *)0x0)) {
                  (**(code **)*puVar20)();
                }
              }
              local_80 = puVar28 + 0x10;
              local_78 = (char *)CONCAT62(local_78._2_6_,uVar36);
              local_110 = puVar32 + 0x10;
              local_108 = "IsBuiltNewHouse";
              FUN_0376c130(&local_80,&local_110,1);
            }
            goto LAB_03763ccc;
          }
        }
        else {
LAB_03763ccc:
          uVar10 = local_90[0];
          lVar25 = *(long *)PTR_DAT_04bb46b0;
          lVar18 = 0;
          if (lVar25 != 0) {
            uVar37 = (ulong)local_90[0];
            local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
            if (((((*(byte *)(lVar25 + 0x50d) ^ 0xff) & 6) != 0) ||
                (lVar18 = (**(code **)(**(long **)(*(long *)(lVar25 + 0x10) + 0x188) + 0x30))(),
                499 < uVar10)) || (lVar18 == 0)) goto LAB_037641f8;
            lVar18 = lVar18 + uVar37 * 0x2d48;
            lVar25 = *(long *)(lVar18 + 0x4cc70);
            if (lVar25 == 0) {
              uVar37 = 0;
            }
            else {
              if (*(undefined8 **)(lVar25 + 0x10) == (undefined8 *)0x0) {
                uVar37 = 0;
              }
              else {
                uVar37 = (**(code **)**(undefined8 **)(lVar25 + 0x10))();
                lVar25 = *(long *)(lVar18 + 0x4cc70);
                uVar37 = uVar37 & 0xffffffff;
                if (lVar25 == 0) goto LAB_03763da4;
              }
              plVar29 = *(long **)(lVar25 + 0x20);
              if (plVar29 != (long *)0x0) {
                local_80 = *(undefined **)(lVar18 + 0x4cc50);
                local_78 = *(char **)(lVar18 + 0x4cc58);
                local_70 = 0x1188;
                (**(code **)(*plVar29 + 0x20))(plVar29,&local_80);
              }
            }
LAB_03763da4:
            *(ushort *)(*(long *)(lVar18 + 0x4cc58) + *(long *)(lVar18 + 0x4cc50) + 2) = local_90[0]
            ;
            if ((*(long *)(lVar18 + 0x4cc70) != 0) &&
               (plVar29 = *(long **)(*(long *)(lVar18 + 0x4cc70) + 0x20), plVar29 != (long *)0x0)) {
              local_80 = *(undefined **)(lVar18 + 0x4cc50);
              local_78 = *(char **)(lVar18 + 0x4cc58);
              local_70 = 0x1188;
              (**(code **)(*plVar29 + 0x20))(plVar29,&local_80);
            }
            puVar28 = *(undefined **)(lVar18 + 0x4cc50);
            pcVar33 = *(char **)(lVar18 + 0x4cc58);
            puVar38 = (ushort *)(puVar28 + (long)pcVar33);
            if (puVar38[2] != 0xffff) {
              if ((*(long *)(lVar18 + 0x4cc70) != 0) &&
                 (plVar29 = *(long **)(*(long *)(lVar18 + 0x4cc70) + 0x20), plVar29 != (long *)0x0))
              {
                local_70 = 0x1188;
                local_80 = puVar28;
                local_78 = pcVar33;
                (**(code **)(*plVar29 + 0x20))(plVar29,&local_80);
                puVar28 = *(undefined **)(lVar18 + 0x4cc50);
                pcVar33 = *(char **)(lVar18 + 0x4cc58);
                puVar38 = (ushort *)(puVar28 + (long)pcVar33);
              }
              if ((puVar38[2] == 0xffff) || ((*puVar38 & 1) != 0)) {
                if ((*(long *)(lVar18 + 0x4cc70) != 0) &&
                   (plVar29 = *(long **)(*(long *)(lVar18 + 0x4cc70) + 0x20), plVar29 != (long *)0x0
                   )) {
                  local_70 = 0x1188;
                  local_80 = puVar28;
                  local_78 = pcVar33;
                  (**(code **)(*plVar29 + 0x20))(plVar29,&local_80);
                  puVar38 = (ushort *)(*(long *)(lVar18 + 0x4cc58) + *(long *)(lVar18 + 0x4cc50));
                }
                uVar23 = (uint)puVar38[2];
                if (uVar23 != 0xffff && (*puVar38 & 1) == 0) {
                  uVar23 = (uint)puVar38[1];
                }
                lVar26 = *(long *)PTR_DAT_04bb46b0;
                lVar25 = 0;
                if (lVar26 != 0) {
                  local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
                  if (((((*(byte *)(lVar26 + 0x50d) ^ 0xff) & 6) == 0) &&
                      (lVar25 = (**(code **)(**(long **)(*(long *)(lVar26 + 0x10) + 0x188) + 0x30))
                                          (), uVar23 < 500)) && (lVar25 != 0)) {
                    local_70 = local_70 & 0xffffffffffffff00;
                    lVar25 = lVar25 + (ulong)uVar23 * 0x2d48;
                    local_78 = (char *)(lVar25 + 0x4e378);
                    if (*(long *)(lVar25 + 0x4e3a0) == 0) {
                      uVar15 = 0;
                    }
                    else {
                      puVar20 = *(undefined8 **)(*(long *)(lVar25 + 0x4e3a0) + 0x10);
                      uVar15 = 0;
                      if (puVar20 != (undefined8 *)0x0) {
                        uVar15 = (**(code **)*puVar20)();
                      }
                    }
                    local_70 = CONCAT62(local_70._2_6_,CONCAT11(uVar15,(undefined1)local_70)) &
                               0xffffffffffff01ff;
                    local_108 = (char *)(lVar18 + 0x4e378);
                    local_100 = 1;
                    puVar28 = PTR_DAT_04bc3998 + 0x10;
                    local_80 = puVar28;
                    if (*(long **)(lVar18 + 0x4e3a0) == (long *)0x0) {
                      local_ff = 0;
                    }
                    else {
                      puVar20 = (undefined8 *)**(long **)(lVar18 + 0x4e3a0);
                      local_ff = 0;
                      if (puVar20 != (undefined8 *)0x0) {
                        local_ff = (**(code **)*puVar20)();
                      }
                    }
                    local_ff = local_ff & 1;
                    local_110 = puVar28;
                    FUN_03762d14(&local_80,&local_110);
                    FUN_02640184(&local_110);
                    FUN_02640184(&local_80);
                    local_70 = local_70 & 0xffffffffffffff00;
                    local_78 = (char *)(lVar25 + 0x4e340);
                    if (*(long *)(lVar25 + 0x4e368) == 0) {
                      uVar15 = 0;
                    }
                    else {
                      puVar20 = *(undefined8 **)(*(long *)(lVar25 + 0x4e368) + 0x10);
                      uVar15 = 0;
                      if (puVar20 != (undefined8 *)0x0) {
                        uVar15 = (**(code **)*puVar20)();
                      }
                    }
                    local_70 = CONCAT62(local_70._2_6_,CONCAT11(uVar15,(undefined1)local_70)) &
                               0xffffffffffff01ff;
                    local_108 = (char *)(lVar18 + 0x4e340);
                    local_100 = 1;
                    puVar28 = PTR_DAT_04bb7660 + 0x10;
                    local_80 = puVar28;
                    if (*(long **)(lVar18 + 0x4e368) == (long *)0x0) {
                      bVar16 = 0;
                    }
                    else {
                      puVar20 = (undefined8 *)**(long **)(lVar18 + 0x4e368);
                      bVar16 = 0;
                      if (puVar20 != (undefined8 *)0x0) {
                        bVar16 = (**(code **)*puVar20)();
                      }
                    }
                    local_ff = bVar16 & 1;
                    local_110 = puVar28;
                    FUN_03762d84(&local_80,&local_110);
                    FUN_02640184(&local_110);
                    FUN_02640184(&local_80);
                  }
                  goto LAB_03764068;
                }
              }
              else {
LAB_03764068:
                lVar26 = *(long *)PTR_DAT_04bb46b0;
                lVar25 = 0;
                if (lVar26 != 0) {
                  local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
                  if (((*(byte *)(lVar26 + 0x50d) ^ 0xff) & 6) == 0) {
                    lVar26 = (**(code **)(**(long **)(*(long *)(lVar26 + 0x10) + 0x188) + 0x30))();
                  }
                  else {
                    lVar26 = 0;
                  }
                  lVar25 = 0;
                  if (lVar26 != 0) {
                    lVar25 = lVar26 + 0xa8;
                  }
                }
              }
              lVar26 = *(long *)(lVar25 + 0x36540);
              if (lVar26 == 0) {
                uVar22 = 0;
              }
              else {
                if (*(undefined8 **)(lVar26 + 0x10) == (undefined8 *)0x0) {
                  uVar22 = 0;
                }
                else {
                  uVar22 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
                  lVar26 = *(long *)(lVar25 + 0x36540);
                  uVar22 = uVar22 & 0xffffffff;
                  if (lVar26 == 0) goto LAB_03764138;
                }
                plVar29 = *(long **)(lVar26 + 0x20);
                if (plVar29 != (long *)0x0) {
                  local_80 = *(undefined **)(lVar25 + 0x36520);
                  local_78 = *(char **)(lVar25 + 0x36528);
                  local_70 = 0x408;
                  (**(code **)(*plVar29 + 0x20))(plVar29,&local_80);
                }
              }
LAB_03764138:
              lVar26 = *(long *)(lVar25 + 0x36528) + *(long *)(lVar25 + 0x36520);
              if ((*(long *)(lVar18 + 0x4cc70) != 0) &&
                 (plVar29 = *(long **)(*(long *)(lVar18 + 0x4cc70) + 0x20), plVar29 != (long *)0x0))
              {
                local_80 = *(undefined **)(lVar18 + 0x4cc50);
                local_78 = *(char **)(lVar18 + 0x4cc58);
                local_70 = 0x1188;
                (**(code **)(*plVar29 + 0x20))(plVar29,&local_80);
              }
              uVar27 = 0;
              do {
                if (*(ushort *)(lVar26 + (-(uVar27 >> 0x1f) & 0xfffffffe00000000 | uVar27 << 1)) ==
                    local_90[0]) {
                  *(undefined2 *)(lVar26 + (long)(int)uVar27 * 2) =
                       *(undefined2 *)
                        (*(long *)(lVar18 + 0x4cc58) + *(long *)(lVar18 + 0x4cc50) + 4);
                  break;
                }
                uVar23 = (int)uVar27 + 1;
                uVar27 = (ulong)uVar23;
              } while (uVar23 != 0x1fb);
              if ((((uVar22 & 1) != 0) && (*(long *)(lVar25 + 0x36540) != 0)) &&
                 (puVar20 = *(undefined8 **)(*(long *)(lVar25 + 0x36540) + 0x18),
                 puVar20 != (undefined8 *)0x0)) {
                (**(code **)*puVar20)();
              }
              FUN_037650e0(&local_98);
            }
            if ((((uVar37 & 1) != 0) && (*(long *)(lVar18 + 0x4cc70) != 0)) &&
               (puVar20 = *(undefined8 **)(*(long *)(lVar18 + 0x4cc70) + 0x18),
               puVar20 != (undefined8 *)0x0)) {
              (**(code **)*puVar20)();
            }
            goto LAB_037641f8;
          }
        }
      }
      else {
        if ((int)local_f8 != 0) {
          lVar18 = (long)(int)local_f8 << 3;
          puVar32 = PTR_DAT_04bb2020 + 0x10;
          plVar29 = local_f0;
          do {
            lVar25 = *(long *)PTR_DAT_04bb46b0;
            if (lVar25 != 0) {
              puVar38 = (ushort *)*plVar29;
              uVar10 = *puVar38;
              local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
              if (((((*(byte *)(lVar25 + 0x50d) ^ 0xff) & 6) == 0) &&
                  (lVar25 = (**(code **)(**(long **)(*(long *)(lVar25 + 0x10) + 0x188) + 0x30))(),
                  uVar10 < 500)) && (lVar25 != 0)) {
                uVar11 = *puVar38;
                uVar9 = *(ushort *)*local_f0;
                uVar39 = uVar9;
                if (uVar11 == uVar9) {
                  uVar39 = *(ushort *)local_f0[1];
                }
                lVar25 = lVar25 + 0x4cc10 + (ulong)uVar10 * 0x2d48;
                lVar26 = *(long *)(lVar25 + 0x60);
                if (lVar26 == 0) {
                  uVar37 = 0;
                }
                else {
                  if (*(undefined8 **)(lVar26 + 0x10) == (undefined8 *)0x0) {
                    uVar37 = 0;
                    plVar21 = *(long **)(lVar26 + 0x20);
                  }
                  else {
                    uVar37 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
                    uVar37 = uVar37 & 0xffffffff;
                    if (*(long *)(lVar25 + 0x60) == 0) goto LAB_03763508;
                    plVar21 = *(long **)(*(long *)(lVar25 + 0x60) + 0x20);
                  }
                  if (plVar21 != (long *)0x0) {
                    local_80 = *(undefined **)(lVar25 + 0x40);
                    local_78 = *(char **)(lVar25 + 0x48);
                    local_70 = 0x1188;
                    (**(code **)(*plVar21 + 0x20))(plVar21,&local_80);
                  }
                }
LAB_03763508:
                *(ushort *)(*(long *)(lVar25 + 0x48) + *(long *)(lVar25 + 0x40) + 2) = *puVar38;
                if ((*(long *)(lVar25 + 0x60) != 0) &&
                   (plVar21 = *(long **)(*(long *)(lVar25 + 0x60) + 0x20), plVar21 != (long *)0x0))
                {
                  local_80 = *(undefined **)(lVar25 + 0x40);
                  local_78 = *(char **)(lVar25 + 0x48);
                  local_70 = 0x1188;
                  (**(code **)(*plVar21 + 0x20))(plVar21,&local_80);
                }
                puVar2 = (ushort *)(*(long *)(lVar25 + 0x48) + *(long *)(lVar25 + 0x40));
                puVar2[2] = uVar39;
                *puVar2 = *puVar2 & 0xfffe | (ushort)(uVar11 == uVar9);
                local_78 = (char *)CONCAT62(local_78._2_6_,*puVar38);
                local_108 = "IsBuiltNewHouse";
                local_110 = puVar32;
                local_80 = puVar28 + 0x10;
                FUN_0376c130(&local_80,&local_110,1);
                if ((((uVar37 & 1) != 0) && (*(long *)(lVar25 + 0x60) != 0)) &&
                   (puVar20 = *(undefined8 **)(*(long *)(lVar25 + 0x60) + 0x18),
                   puVar20 != (undefined8 *)0x0)) {
                  (**(code **)*puVar20)();
                }
              }
            }
            plVar29 = plVar29 + 1;
            lVar18 = lVar18 + -8;
          } while (lVar18 != 0);
        }
LAB_037641f8:
        lVar18 = *(long *)PTR_DAT_04bb46b0;
        if (lVar18 == 0) {
          lVar18 = 0;
        }
        else {
          local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
          if (((*(byte *)(lVar18 + 0x50d) ^ 0xff) & 6) == 0) {
            lVar25 = (**(code **)(**(long **)(*(long *)(lVar18 + 0x10) + 0x188) + 0x30))();
          }
          else {
            lVar25 = 0;
          }
          lVar18 = 0;
          if (lVar25 != 0) {
            lVar18 = lVar25 + 0xa8;
          }
        }
      }
      plVar29 = (long *)(lVar18 + 0x36520);
      lVar25 = *(long *)(lVar18 + 0x36540);
      if (lVar25 == 0) {
        uVar37 = 0;
      }
      else {
        if (*(undefined8 **)(lVar25 + 0x10) == (undefined8 *)0x0) {
          uVar37 = 0;
        }
        else {
          uVar37 = (**(code **)**(undefined8 **)(lVar25 + 0x10))();
          lVar25 = *(long *)(lVar18 + 0x36540);
          uVar37 = uVar37 & 0xffffffff;
          if (lVar25 == 0) goto LAB_037642dc;
        }
        plVar21 = *(long **)(lVar25 + 0x20);
        if (plVar21 != (long *)0x0) {
          local_80 = (undefined *)*plVar29;
          local_78 = *(char **)(lVar18 + 0x36528);
          local_70 = 0x408;
          (**(code **)(*plVar21 + 0x20))(plVar21,&local_80);
          lVar25 = *(long *)(lVar18 + 0x36540);
        }
      }
LAB_037642dc:
      puVar32 = (undefined *)*plVar29;
      pcVar33 = *(char **)(lVar18 + 0x36528);
      puVar28 = puVar32 + (long)pcVar33;
      sVar34 = *(short *)(puVar28 + 0x3f6);
      if ((lVar25 != 0) && (plVar21 = *(long **)(lVar25 + 0x20), plVar21 != (long *)0x0)) {
        local_70 = 0x408;
        local_80 = puVar32;
        local_78 = pcVar33;
        (**(code **)(*plVar21 + 0x20))(plVar21,&local_80);
        puVar32 = (undefined *)*plVar29;
        pcVar33 = *(char **)(lVar18 + 0x36528);
        puVar28 = puVar32 + (long)pcVar33;
      }
      if (sVar34 == -1) {
        if (*(short *)(puVar28 + 0x3f6) == -1) {
          *(ushort *)(puVar28 + 0x3f6) = local_90[0];
        }
      }
      else if (*(short *)(puVar28 + 0x3f8) == -1) {
        if ((*(long *)(lVar18 + 0x36540) != 0) &&
           (plVar21 = *(long **)(*(long *)(lVar18 + 0x36540) + 0x20), plVar21 != (long *)0x0)) {
          local_70 = 0x408;
          local_80 = puVar32;
          local_78 = pcVar33;
          (**(code **)(*plVar21 + 0x20))(plVar21,&local_80);
          puVar28 = (undefined *)(*(long *)(lVar18 + 0x36528) + *plVar29);
        }
        if ((*(short *)(puVar28 + 0x3f6) != -1) && (*(short *)(puVar28 + 0x3f8) == -1)) {
          *(ushort *)(puVar28 + 0x3f8) = local_90[0];
        }
      }
      if ((((uVar37 & 1) != 0) && (*(long *)(lVar18 + 0x36540) != 0)) &&
         (puVar20 = *(undefined8 **)(*(long *)(lVar18 + 0x36540) + 0x18),
         puVar20 != (undefined8 *)0x0)) {
        (**(code **)*puVar20)();
      }
    }
  }
  uVar10 = local_90[0];
  local_f8 = CONCAT44(local_f8._4_4_,uVar17) & 0xffffffff0000000f;
  uVar12 = uVar14 >> 4 & 0xf;
  uVar23 = uVar12;
  if ((int)local_f8 != 1) {
    uVar23 = 0;
  }
  local_f8 = CONCAT44(local_f8._4_4_,uVar23);
  if ((uVar23 == 2) && (lVar18 = *(long *)PTR_DAT_04bb46b0, lVar18 != 0)) {
    uVar37 = (ulong)local_90[0];
    local_f8 = CONCAT44(local_f8._4_4_,1);
    if ((((*(byte *)(lVar18 + 0x50d) ^ 0xff) & 6) == 0) &&
       ((lVar18 = (**(code **)(**(long **)(*(long *)(lVar18 + 0x10) + 0x188) + 0x30))(),
        uVar10 < 500 && (lVar18 != 0)))) {
      lVar18 = lVar18 + uVar37 * 0x2d48;
      if ((*(long **)(lVar18 + 0x4cc70) == (long *)0x0) ||
         (puVar20 = (undefined8 *)**(long **)(lVar18 + 0x4cc70), puVar20 == (undefined8 *)0x0)) {
        uVar37 = 0;
      }
      else {
        uVar37 = (**(code **)*puVar20)();
        uVar37 = uVar37 & 0xffffffff;
      }
      puVar38 = (ushort *)(*(long *)(lVar18 + 0x4cc58) + *(long *)(lVar18 + 0x4cc50));
      uVar10 = puVar38[1];
      if (puVar38[2] != 0xffff && (*puVar38 & 1) == 0) {
        uVar10 = puVar38[2];
      }
      if ((local_90[0] == uVar10) && (lVar25 = *(long *)PTR_DAT_04bb46b0, lVar25 != 0)) {
        local_f8 = CONCAT44(local_f8._4_4_,1);
        if ((((*(byte *)(lVar25 + 0x50d) ^ 0xff) & 6) == 0) &&
           (lVar25 = (**(code **)(**(long **)(*(long *)(lVar25 + 0x10) + 0x188) + 0x30))(),
           lVar25 != 0)) {
          lVar26 = *(long *)(lVar25 + 0x5dab50);
          if (lVar26 == 0) {
            uVar22 = 0;
          }
          else {
            if (*(undefined8 **)(lVar26 + 0x10) == (undefined8 *)0x0) {
              uVar22 = 0;
            }
            else {
              uVar22 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
              lVar26 = *(long *)(lVar25 + 0x5dab50);
              uVar22 = uVar22 & 0xffffffff;
              if (lVar26 == 0) goto LAB_03764580;
            }
            plVar29 = *(long **)(lVar26 + 0x20);
            if (plVar29 != (long *)0x0) {
              local_f8 = *(long *)(lVar25 + 0x5dab30);
              local_f0 = *(long **)(lVar25 + 0x5dab38);
              local_e8 = (undefined8 ****)0x7d0;
              (**(code **)(*plVar29 + 0x20))(plVar29,&local_f8);
            }
          }
LAB_03764580:
          puVar38 = (ushort *)(*(long *)(lVar18 + 0x4cc58) + *(long *)(lVar18 + 0x4cc50));
          uVar10 = puVar38[2];
          uVar30 = (uint)uVar10;
          bVar13 = (*puVar38 & 1) == 0;
          uVar31 = (uint)puVar38[1];
          uVar23 = uVar30;
          if (uVar30 != 0xffff && bVar13) {
            uVar23 = uVar31;
          }
          if (uVar30 != 0xffff && bVar13) {
            uVar31 = (uint)uVar10;
          }
          if ((uVar23 < 500) && (uVar31 < 500)) {
            lVar26 = *(long *)(lVar25 + 0x5dab38) + *(long *)(lVar25 + 0x5dab30);
            *(undefined4 *)(lVar26 + (ulong)uVar23 * 4) =
                 *(undefined4 *)(lVar26 + (ulong)uVar31 * 4);
          }
          if ((((uVar22 & 1) != 0) && (*(long *)(lVar25 + 0x5dab50) != 0)) &&
             (puVar20 = *(undefined8 **)(*(long *)(lVar25 + 0x5dab50) + 0x18),
             puVar20 != (undefined8 *)0x0)) {
            (**(code **)*puVar20)();
          }
        }
      }
      if ((((uVar37 & 1) != 0) && (*(long *)(lVar18 + 0x4cc70) != 0)) &&
         (puVar20 = *(undefined8 **)(*(long *)(lVar18 + 0x4cc70) + 8), puVar20 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar20)();
      }
    }
  }
  if ((*(long **)(lVar24 + 0x60) == (long *)0x0) ||
     (puVar20 = (undefined8 *)**(long **)(lVar24 + 0x60), puVar20 == (undefined8 *)0x0)) {
    uVar37 = 0;
  }
  else {
    uVar37 = (**(code **)*puVar20)();
    uVar37 = uVar37 & 0xffffffff;
  }
  lVar18 = *(long *)(lVar24 + 0x48) + *(long *)(lVar24 + 0x40);
  puVar5 = (undefined2 *)(lVar18 + 0x48b2);
  if ((*(byte *)(lVar18 + 0x48b5) & 1) != 0) {
    puVar5 = (undefined2 *)(lVar18 + 0x48b0);
  }
  FUN_03781640(*puVar5);
  if ((((uVar37 & 1) != 0) && (*(long *)(lVar24 + 0x60) != 0)) &&
     (puVar20 = *(undefined8 **)(*(long *)(lVar24 + 0x60) + 8), puVar20 != (undefined8 *)0x0)) {
    (**(code **)*puVar20)();
  }
  local_f8 = CONCAT44(local_f8._4_4_,uVar17) & 0xffffffff0000000f;
  if ((int)local_f8 - 3U < 2) {
    uVar37 = (ulong)local_90[0];
    if (uVar37 < 500) {
      lVar18 = *(long *)PTR_DAT_04bb46b0;
      if (lVar18 == 0) goto LAB_03764cc8;
      local_f8 = CONCAT44(local_f8._4_4_,1);
      if ((((*(byte *)(lVar18 + 0x50d) ^ 0xff) & 6) == 0) &&
         (lVar18 = (**(code **)(**(long **)(*(long *)(lVar18 + 0x10) + 0x188) + 0x30))(),
         lVar18 != 0)) {
        lVar18 = lVar18 + uVar37 * 0x2d48;
        lVar25 = lVar18 + 0x4cc10;
        if ((*(long **)(lVar18 + 0x4cc70) == (long *)0x0) ||
           (puVar20 = (undefined8 *)**(long **)(lVar18 + 0x4cc70), puVar20 == (undefined8 *)0x0)) {
          uVar37 = 0;
        }
        else {
          uVar37 = (**(code **)*puVar20)();
          uVar37 = uVar37 & 0xffffffff;
        }
        puVar38 = (ushort *)(*(long *)(lVar18 + 0x4cc58) + *(long *)(lVar18 + 0x4cc50));
        uVar10 = puVar38[2];
        lVar18 = lVar25;
        if (((uVar10 != 0xffff) && ((*puVar38 & 1) == 0)) &&
           (lVar26 = *(long *)PTR_DAT_04bb46b0, lVar26 != 0)) {
          local_f8 = CONCAT44(local_f8._4_4_,1);
          if (((((*(byte *)(lVar26 + 0x50d) ^ 0xff) & 6) == 0) &&
              (lVar26 = (**(code **)(**(long **)(*(long *)(lVar26 + 0x10) + 0x188) + 0x30))(),
              uVar10 < 500)) && (lVar26 != 0)) {
            lVar18 = lVar26 + (ulong)uVar10 * 0x2d48 + 0x4cc10;
          }
        }
LAB_0376495c:
        if ((((uVar37 & 1) != 0) && (*(long *)(lVar25 + 0x60) != 0)) &&
           (puVar20 = *(undefined8 **)(*(long *)(lVar25 + 0x60) + 8), puVar20 != (undefined8 *)0x0))
        {
          (**(code **)*puVar20)();
        }
        goto LAB_0376497c;
      }
    }
LAB_03764c74:
    lVar18 = *(long *)PTR_DAT_04bb46b0;
    if (lVar18 == 0) goto LAB_03764cc8;
    local_f8 = CONCAT44(local_f8._4_4_,1);
    if (((*(byte *)(lVar18 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar18 = (**(code **)(**(long **)(*(long *)(lVar18 + 0x10) + 0x188) + 0x30))();
    }
    else {
      lVar18 = 0;
    }
    lVar25 = 0;
    if (lVar18 != 0) {
      lVar25 = lVar18 + 0xa8;
    }
  }
  else {
    if ((int)local_f8 != 2) {
      if ((int)local_f8 == 1) {
        local_f8 = CONCAT44(local_f8._4_4_,uVar17) & 0xffffffff0000000f;
        if ((int)local_f8 != 1) {
          uVar12 = 0;
        }
        local_f8 = CONCAT44(local_f8._4_4_,uVar12);
        uVar37 = (ulong)local_90[0];
        if (uVar12 == 2) goto LAB_0376480c;
        if (local_90[0] < 500) {
          lVar18 = *(long *)PTR_DAT_04bb46b0;
          if (lVar18 == 0) goto LAB_03764cc8;
          local_f8 = CONCAT44(local_f8._4_4_,1);
          if ((((*(byte *)(lVar18 + 0x50d) ^ 0xff) & 6) == 0) &&
             (lVar18 = (**(code **)(**(long **)(*(long *)(lVar18 + 0x10) + 0x188) + 0x30))(),
             lVar18 != 0)) {
            lVar18 = lVar18 + uVar37 * 0x2d48;
            lVar25 = lVar18 + 0x4cc10;
            if ((*(long **)(lVar18 + 0x4cc70) == (long *)0x0) ||
               (puVar20 = (undefined8 *)**(long **)(lVar18 + 0x4cc70), puVar20 == (undefined8 *)0x0)
               ) {
              uVar37 = 0;
            }
            else {
              uVar37 = (**(code **)*puVar20)();
              uVar37 = uVar37 & 0xffffffff;
            }
            puVar38 = (ushort *)(*(long *)(lVar18 + 0x4cc58) + *(long *)(lVar18 + 0x4cc50));
            if ((puVar38[2] != 0xffff) && ((*puVar38 & 1) == 0)) {
              lVar18 = FUN_026853b0();
              if (lVar18 != 0) goto LAB_0376495c;
            }
            lVar18 = lVar25;
            goto LAB_0376495c;
          }
        }
      }
      goto LAB_03764c74;
    }
LAB_0376480c:
    uVar17 = (uint)local_90[0];
    lVar18 = *(long *)PTR_DAT_04bb46b0;
    if (lVar18 != 0) {
      local_f8 = CONCAT44(local_f8._4_4_,1);
      if (((((*(byte *)(lVar18 + 0x50d) ^ 0xff) & 6) != 0) ||
          (lVar18 = (**(code **)(**(long **)(*(long *)(lVar18 + 0x10) + 0x188) + 0x30))(),
          499 < uVar17)) || (lVar18 == 0)) goto LAB_03764c74;
      lVar18 = lVar18 + (ulong)uVar17 * 0x2d48 + 0x4cc10;
LAB_0376497c:
      if ((*(long *)(lVar18 + 0x1790) == 0) ||
         (puVar20 = *(undefined8 **)(*(long *)(lVar18 + 0x1790) + 0x10),
         puVar20 == (undefined8 *)0x0)) {
        uVar37 = 0;
        plVar29 = *(long **)(lVar24 + 0x98);
        if (plVar29 != (long *)0x0) goto LAB_037649b4;
LAB_037649d0:
        uVar22 = 0;
      }
      else {
        uVar37 = (**(code **)*puVar20)();
        uVar37 = uVar37 & 0xffffffff;
        plVar29 = *(long **)(lVar24 + 0x98);
        if (plVar29 == (long *)0x0) goto LAB_037649d0;
LAB_037649b4:
        if ((undefined8 *)*plVar29 == (undefined8 *)0x0) goto LAB_037649d0;
        uVar22 = (*(code *)**(undefined8 **)*plVar29)();
        uVar22 = uVar22 & 0xffffffff;
      }
      if ((*(long *)(lVar18 + 0x1790) != 0) &&
         (plVar29 = *(long **)(*(long *)(lVar18 + 0x1790) + 0x20), plVar29 != (long *)0x0)) {
        local_f8 = *(ulong *)(lVar18 + 6000);
        local_f0 = *(long **)(lVar18 + 0x1778);
        local_e8 = (undefined8 ****)0x48b0;
        (**(code **)(*plVar29 + 0x20))(plVar29,&local_f8);
      }
      memcpy((void *)(*(long *)(lVar18 + 0x1778) + *(long *)(lVar18 + 6000)),
             (void *)(*(long *)(lVar24 + 0x80) + *(long *)(lVar24 + 0x78)),0x48b0);
      if ((((uVar22 & 1) != 0) && (*(long *)(lVar24 + 0x98) != 0)) &&
         (puVar20 = *(undefined8 **)(*(long *)(lVar24 + 0x98) + 8), puVar20 != (undefined8 *)0x0)) {
        (**(code **)*puVar20)();
      }
      if ((((uVar37 & 1) != 0) && (*(long *)(lVar18 + 0x1790) != 0)) &&
         (puVar20 = *(undefined8 **)(*(long *)(lVar18 + 0x1790) + 0x18),
         puVar20 != (undefined8 *)0x0)) {
        (**(code **)*puVar20)();
      }
      if ((*(long *)(lVar18 + 0x1758) == 0) ||
         (puVar20 = *(undefined8 **)(*(long *)(lVar18 + 0x1758) + 0x10),
         puVar20 == (undefined8 *)0x0)) {
        uVar37 = 0;
        plVar29 = *(long **)(lVar24 + 0x1678);
        if (plVar29 != (long *)0x0) goto LAB_03764a9c;
LAB_03764ab8:
        uVar22 = 0;
      }
      else {
        uVar37 = (**(code **)*puVar20)();
        uVar37 = uVar37 & 0xffffffff;
        plVar29 = *(long **)(lVar24 + 0x1678);
        if (plVar29 == (long *)0x0) goto LAB_03764ab8;
LAB_03764a9c:
        if ((undefined8 *)*plVar29 == (undefined8 *)0x0) goto LAB_03764ab8;
        uVar22 = (*(code *)**(undefined8 **)*plVar29)();
        uVar22 = uVar22 & 0xffffffff;
      }
      if ((*(long *)(lVar18 + 0x1758) != 0) &&
         (plVar29 = *(long **)(*(long *)(lVar18 + 0x1758) + 0x20), plVar29 != (long *)0x0)) {
        local_f8 = *(ulong *)(lVar18 + 0x1738);
        local_f0 = *(long **)(lVar18 + 0x1740);
        local_e8 = (undefined8 ****)0x40;
        (**(code **)(*plVar29 + 0x20))(plVar29,&local_f8);
      }
      puVar20 = (undefined8 *)(*(long *)(lVar24 + 0x1660) + *(long *)(lVar24 + 0x1658));
      puVar4 = (undefined8 *)(*(long *)(lVar18 + 0x1740) + *(long *)(lVar18 + 0x1738));
      uVar7 = puVar20[7];
      uVar6 = puVar20[4];
      uVar8 = puVar20[5];
      puVar4[6] = puVar20[6];
      puVar4[7] = uVar7;
      puVar4[4] = uVar6;
      puVar4[5] = uVar8;
      uVar6 = *puVar20;
      uVar7 = puVar20[1];
      uVar8 = puVar20[3];
      puVar4[2] = puVar20[2];
      puVar4[3] = uVar8;
      *puVar4 = uVar6;
      puVar4[1] = uVar7;
      if ((((uVar22 & 1) != 0) && (*(long *)(lVar24 + 0x1678) != 0)) &&
         (puVar20 = *(undefined8 **)(*(long *)(lVar24 + 0x1678) + 8), puVar20 != (undefined8 *)0x0))
      {
        (**(code **)*puVar20)();
      }
      lVar25 = *(long *)PTR_DAT_04bb27f8;
      if (lVar25 != 0) {
        if ((*(long *)(lVar18 + 0x1758) != 0) &&
           (plVar29 = *(long **)(*(long *)(lVar18 + 0x1758) + 0x20), plVar29 != (long *)0x0)) {
          local_f8 = *(ulong *)(lVar18 + 0x1738);
          local_f0 = *(long **)(lVar18 + 0x1740);
          local_e8 = (undefined8 ****)0x40;
          (**(code **)(*plVar29 + 0x20))(plVar29,&local_f8);
        }
        lVar26 = *(long *)(lVar18 + 0x1740) + *(long *)(lVar18 + 0x1738);
        *(int *)(lVar26 + 0x3c) =
             *(int *)(lVar25 + 0x3a4) + *(int *)(lVar25 + 0x3a0) + *(int *)(lVar26 + 0x3c);
      }
      if ((((uVar37 & 1) != 0) && (*(long *)(lVar18 + 0x1758) != 0)) &&
         (puVar20 = *(undefined8 **)(*(long *)(lVar18 + 0x1758) + 0x18),
         puVar20 != (undefined8 *)0x0)) {
        (**(code **)*puVar20)();
      }
      lVar25 = *(long *)(lVar24 + 0x1678);
      if (lVar25 == 0) {
        sVar34 = *(short *)(*(long *)(lVar24 + 0x1660) + *(long *)(lVar24 + 0x1658) + 0x34);
      }
      else {
        if (*(undefined8 **)(lVar25 + 0x10) == (undefined8 *)0x0) {
          uVar37 = 0;
LAB_03764c14:
          plVar29 = *(long **)(lVar25 + 0x20);
          if (plVar29 != (long *)0x0) {
            local_f8 = *(ulong *)(lVar24 + 0x1658);
            local_f0 = *(long **)(lVar24 + 0x1660);
            local_e8 = (undefined8 ****)0x40;
            (**(code **)(*plVar29 + 0x20))(plVar29,&local_f8);
          }
        }
        else {
          uVar37 = (**(code **)**(undefined8 **)(lVar25 + 0x10))();
          lVar25 = *(long *)(lVar24 + 0x1678);
          uVar37 = uVar37 & 0xffffffff;
          if (lVar25 != 0) goto LAB_03764c14;
        }
        sVar34 = *(short *)(*(long *)(lVar24 + 0x1660) + *(long *)(lVar24 + 0x1658) + 0x34);
        if ((((uVar37 & 1) != 0) && (*(long *)(lVar24 + 0x1678) != 0)) &&
           (puVar20 = *(undefined8 **)(*(long *)(lVar24 + 0x1678) + 0x18),
           puVar20 != (undefined8 *)0x0)) {
          (**(code **)*puVar20)();
        }
      }
      puVar28 = PTR_DAT_04bb32e8;
      if (sVar34 == 0) {
        lVar25 = *(long *)(lVar18 + 0x1758);
        if (lVar25 == 0) {
          *(undefined8 *)(*(long *)(lVar18 + 0x1740) + *(long *)(lVar18 + 0x1738) + 0x34) =
               *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        }
        else {
          if (*(undefined8 **)(lVar25 + 0x10) == (undefined8 *)0x0) {
            uVar37 = 0;
LAB_03765070:
            plVar29 = *(long **)(lVar25 + 0x20);
            if (plVar29 != (long *)0x0) {
              local_f8 = *(ulong *)(lVar18 + 0x1738);
              local_f0 = *(long **)(lVar18 + 0x1740);
              local_e8 = (undefined8 ****)0x40;
              (**(code **)(*plVar29 + 0x20))(plVar29,&local_f8);
            }
          }
          else {
            uVar37 = (**(code **)**(undefined8 **)(lVar25 + 0x10))();
            lVar25 = *(long *)(lVar18 + 0x1758);
            uVar37 = uVar37 & 0xffffffff;
            if (lVar25 != 0) goto LAB_03765070;
          }
          *(undefined8 *)(*(long *)(lVar18 + 0x1740) + *(long *)(lVar18 + 0x1738) + 0x34) =
               *(undefined8 *)(*(long *)puVar28 + 0x4060);
          if ((((uVar37 & 1) != 0) && (*(long *)(lVar18 + 0x1758) != 0)) &&
             (puVar20 = *(undefined8 **)(*(long *)(lVar18 + 0x1758) + 0x18),
             puVar20 != (undefined8 *)0x0)) {
            (**(code **)*puVar20)();
          }
        }
      }
      goto LAB_03764c74;
    }
LAB_03764cc8:
    lVar25 = 0;
  }
  local_80 = (undefined *)CONCAT44(local_80._4_4_,0xffffffff);
  plVar29 = *(long **)(lVar24 + 0x60);
  if ((plVar29 == (long *)0x0) || ((undefined8 *)*plVar29 == (undefined8 *)0x0)) {
    uVar36 = *(undefined2 *)(*(long *)(lVar24 + 0x48) + *(long *)(lVar24 + 0x40) + 0x48b0);
LAB_03764d4c:
    local_110 = (undefined *)CONCAT62(local_110._2_6_,uVar36);
    if ((plVar29 != (long *)0x0) && (puVar20 = (undefined8 *)*plVar29, puVar20 != (undefined8 *)0x0)
       ) goto LAB_03764d5c;
LAB_03764da0:
    uVar36 = *(undefined2 *)(*(long *)(lVar24 + 0x48) + *(long *)(lVar24 + 0x40) + 0x48b2);
  }
  else {
    uVar37 = (*(code *)**(undefined8 **)*plVar29)();
    plVar29 = *(long **)(lVar24 + 0x60);
    uVar36 = *(undefined2 *)(*(long *)(lVar24 + 0x48) + *(long *)(lVar24 + 0x40) + 0x48b0);
    if ((uVar37 & 1) == 0) goto LAB_03764d4c;
    if (plVar29 == (long *)0x0) {
      local_110 = (undefined *)CONCAT62(local_110._2_6_,uVar36);
      goto LAB_03764da0;
    }
    if ((undefined8 *)plVar29[1] != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)plVar29[1])();
      plVar29 = *(long **)(lVar24 + 0x60);
      goto LAB_03764d4c;
    }
    local_110 = (undefined *)CONCAT62(local_110._2_6_,uVar36);
    puVar20 = (undefined8 *)*plVar29;
    if (puVar20 == (undefined8 *)0x0) goto LAB_03764da0;
LAB_03764d5c:
    uVar37 = (**(code **)*puVar20)();
    uVar36 = *(undefined2 *)(*(long *)(lVar24 + 0x48) + *(long *)(lVar24 + 0x40) + 0x48b2);
    if ((((uVar37 & 1) != 0) && (*(long *)(lVar24 + 0x60) != 0)) &&
       (puVar20 = *(undefined8 **)(*(long *)(lVar24 + 0x60) + 8), puVar20 != (undefined8 *)0x0)) {
      (**(code **)*puVar20)();
    }
  }
  puVar1 = (ulong *)(lVar25 + 0x36520);
  local_d8 = &local_d0;
  local_f8 = 0;
  local_f0 = (long *)0x0;
  local_d0 = &local_c8;
  local_c8 = &local_c0;
  local_e8 = &local_d8;
  local_c0 = 0;
  if (local_b8 != (long *)0x0) {
    local_f8 = 0x400000000;
    local_f0 = local_b8;
  }
  ppuVar35 = &local_110;
  ppppuStack_e0 = local_e8;
  uVar37 = FUN_03770770(&local_110,&local_f8);
  if ((uVar37 & 1) != 0) {
    uVar36 = 0xffff;
    ppuVar35 = (undefined **)*local_f0;
  }
  local_80 = (undefined *)CONCAT62(CONCAT42(local_80._4_4_,uVar36),*(undefined2 *)ppuVar35);
  lVar18 = *(long *)(lVar25 + 0x36540);
  if (lVar18 == 0) {
    uVar37 = 0;
  }
  else {
    if (*(undefined8 **)(lVar18 + 0x10) == (undefined8 *)0x0) {
      uVar37 = 0;
      plVar29 = *(long **)(lVar18 + 0x20);
    }
    else {
      uVar37 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      uVar37 = uVar37 & 0xffffffff;
      if (*(long *)(lVar25 + 0x36540) == 0) goto LAB_03764e88;
      plVar29 = *(long **)(*(long *)(lVar25 + 0x36540) + 0x20);
    }
    if (plVar29 != (long *)0x0) {
      local_f8 = *puVar1;
      local_f0 = *(long **)(lVar25 + 0x36528);
      local_e8 = (undefined8 ****)0x408;
      (**(code **)(*plVar29 + 0x20))(plVar29,&local_f8);
    }
  }
LAB_03764e88:
  FUN_028f6a60(*(long *)(lVar25 + 0x36528) + *puVar1,&local_80);
  lVar18 = *(long *)(lVar25 + 0x36540);
  if ((uVar37 & 1) == 0) {
LAB_03764ebc:
    if (lVar18 != 0) goto LAB_03764ec0;
LAB_03764eec:
    uVar37 = 0;
  }
  else {
    if (lVar18 == 0) goto LAB_03764eec;
    if (*(undefined8 **)(lVar18 + 0x18) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      lVar18 = *(long *)(lVar25 + 0x36540);
      goto LAB_03764ebc;
    }
LAB_03764ec0:
    if (*(undefined8 **)(lVar18 + 0x10) == (undefined8 *)0x0) {
      uVar37 = 0;
      plVar29 = *(long **)(lVar18 + 0x20);
    }
    else {
      uVar37 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      uVar37 = uVar37 & 0xffffffff;
      if (*(long *)(lVar25 + 0x36540) == 0) goto LAB_03764f24;
      plVar29 = *(long **)(*(long *)(lVar25 + 0x36540) + 0x20);
    }
    if (plVar29 != (long *)0x0) {
      local_f8 = *puVar1;
      local_f0 = *(long **)(lVar25 + 0x36528);
      local_e8 = (undefined8 ****)0x408;
      (**(code **)(*plVar29 + 0x20))(plVar29,&local_f8);
    }
  }
LAB_03764f24:
  lVar18 = *(long *)(lVar25 + 0x36528) + *puVar1;
  if ((*(long **)(lVar24 + 0x98) == (long *)0x0) ||
     (puVar20 = (undefined8 *)**(long **)(lVar24 + 0x98), puVar20 == (undefined8 *)0x0)) {
    uVar17 = 1;
  }
  else {
    uVar17 = (**(code **)*puVar20)();
    uVar17 = uVar17 ^ 1;
  }
  *(ulong *)(lVar18 + 0x400) =
       1L << ((ulong)*(ushort *)(*(long *)(lVar24 + 0x80) + *(long *)(lVar24 + 0x78) + 2) & 0x3f) |
       *(ulong *)(lVar18 + 0x400);
  if ((((uVar17 & 1) == 0) && (*(long *)(lVar24 + 0x98) != 0)) &&
     (puVar20 = *(undefined8 **)(*(long *)(lVar24 + 0x98) + 8), puVar20 != (undefined8 *)0x0)) {
    (**(code **)*puVar20)();
  }
  if ((((uVar37 & 1) != 0) && (*(long *)(lVar25 + 0x36540) != 0)) &&
     (puVar20 = *(undefined8 **)(*(long *)(lVar25 + 0x36540) + 0x18), puVar20 != (undefined8 *)0x0))
  {
    (**(code **)*puVar20)();
  }
LAB_03764fb4:
  local_f8 = CONCAT71(local_f8._1_7_,*param_1);
  FUN_037653b0(&local_f8);
  if ((((uVar19 & 1) != 0) && (*(long *)(lVar24 + 0x60) != 0)) &&
     (puVar20 = *(undefined8 **)(*(long *)(lVar24 + 0x60) + 8), puVar20 != (undefined8 *)0x0)) {
    (**(code **)*puVar20)();
  }
  return;
}

