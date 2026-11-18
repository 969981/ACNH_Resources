
/* WARNING: Removing unreachable block (ram,0x0376808c) */
/* WARNING: Removing unreachable block (ram,0x03766ff4) */
/* WARNING: Removing unreachable block (ram,0x03767650) */
/* WARNING: Removing unreachable block (ram,0x03766e14) */
/* WARNING: Removing unreachable block (ram,0x0376748c) */
/* WARNING: Removing unreachable block (ram,0x03768008) */
/* WARNING: Removing unreachable block (ram,0x03766e98) */
/* WARNING: Removing unreachable block (ram,0x03766f38) */

void FUN_03766dc0(uint *param_1)

{
  uint *puVar1;
  char cVar2;
  undefined *puVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined2 uVar18;
  undefined **ppuVar19;
  long *plVar20;
  undefined **local_280;
  undefined8 *local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  undefined *local_250;
  undefined1 *puStack_248;
  undefined4 local_240;
  undefined1 local_23c [63];
  undefined1 local_1fd;
  undefined *local_1f8;
  undefined1 *puStack_1f0;
  undefined4 local_1e8;
  undefined1 local_1e4 [63];
  undefined1 local_1a5;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  uint local_a0 [2];
  long local_98;
  undefined *local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined4 local_64;
  
  puVar3 = PTR_DAT_04bb46b0;
  cVar2 = *(char *)((long)param_1 + 6);
  lVar16 = *(long *)PTR_DAT_04bb46b0;
  if (lVar16 == 0) {
    if (cVar2 == '\0') {
      return;
    }
    lVar16 = 0;
  }
  else {
    local_280 = (undefined **)CONCAT44(local_280._4_4_,1);
    if (((*(byte *)(lVar16 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar7 = (**(code **)(**(long **)(*(long *)(lVar16 + 0x10) + 0x188) + 0x30))();
    }
    else {
      lVar7 = 0;
    }
    lVar16 = 0;
    if (lVar7 != 0) {
      lVar16 = lVar7 + 0x365f8;
    }
    if (cVar2 == '\0') {
      if (lVar7 == 0) {
        return;
      }
      plVar15 = (long *)(lVar7 + 0x36600);
      local_a0[0] = (ushort)param_1[1] & 0xf;
      if (local_a0[0] == 1) {
        lVar16 = *(long *)puVar3;
        if (lVar16 == 0) {
          return;
        }
        local_280 = (undefined **)CONCAT44(local_280._4_4_,1);
        if (((*(byte *)(lVar16 + 0x50d) ^ 0xff) & 6) != 0) {
          return;
        }
        lVar16 = (**(code **)(**(long **)(*(long *)(lVar16 + 0x10) + 0x188) + 0x30))();
        if (lVar16 == 0) {
          return;
        }
        if (4 < *param_1) {
          return;
        }
        switch(*param_1) {
        case 0:
          local_270 = local_270 & 0xffffffffffffff00;
          local_278 = (undefined8 *)(lVar16 + 0x39068);
          if (*(long *)(lVar16 + 0x39090) == 0) {
            uVar5 = 0;
          }
          else {
            puVar11 = *(undefined8 **)(*(long *)(lVar16 + 0x39090) + 0x10);
            uVar5 = 0;
            if (puVar11 != (undefined8 *)0x0) {
              uVar5 = (**(code **)*puVar11)();
            }
          }
          local_270 = CONCAT62(local_270._2_6_,CONCAT11(uVar5,(undefined1)local_270)) &
                      0xffffffffffff01ff;
          local_280 = &PTR_FUN_04b46a48;
          pvVar9 = (void *)FUN_03768358(&local_280);
          memset(pvVar9,0,0x408c);
          FUN_028ee9e8(pvVar9);
          break;
        case 1:
          local_270 = (ulong)local_270._1_7_ << 8;
          local_278 = (undefined8 *)(lVar16 + 0x3a450);
          if (*(long *)(lVar16 + 0x3a478) == 0) {
            uVar5 = 0;
          }
          else {
            puVar11 = *(undefined8 **)(*(long *)(lVar16 + 0x3a478) + 0x10);
            uVar5 = 0;
            if (puVar11 != (undefined8 *)0x0) {
              uVar5 = (**(code **)*puVar11)();
            }
          }
          local_270 = CONCAT62(local_270._2_6_,CONCAT11(uVar5,(undefined1)local_270)) &
                      0xffffffffffff01ff;
          local_280 = &PTR_FUN_04b46a68;
          pvVar9 = (void *)FUN_037683b4(&local_280);
          memset(pvVar9,0,0x408c);
          FUN_028e3b58(pvVar9);
          break;
        case 2:
          local_270 = (ulong)local_270._1_7_ << 8;
          local_278 = (undefined8 *)(lVar16 + 0x3b838);
          if (*(long *)(lVar16 + 0x3b860) == 0) {
            uVar5 = 0;
          }
          else {
            puVar11 = *(undefined8 **)(*(long *)(lVar16 + 0x3b860) + 0x10);
            uVar5 = 0;
            if (puVar11 != (undefined8 *)0x0) {
              uVar5 = (**(code **)*puVar11)();
            }
          }
          local_270 = CONCAT62(local_270._2_6_,CONCAT11(uVar5,(undefined1)local_270)) &
                      0xffffffffffff01ff;
          local_280 = &PTR_FUN_04b46a88;
          pvVar9 = (void *)FUN_03768410(&local_280);
          memset(pvVar9,0,0x408c);
          FUN_028ee744(pvVar9);
          break;
        case 3:
          local_270 = (ulong)local_270._1_7_ << 8;
          local_278 = (undefined8 *)(lVar16 + 0x3cc20);
          if (*(long *)(lVar16 + 0x3cc48) == 0) {
            uVar5 = 0;
          }
          else {
            puVar11 = *(undefined8 **)(*(long *)(lVar16 + 0x3cc48) + 0x10);
            uVar5 = 0;
            if (puVar11 != (undefined8 *)0x0) {
              uVar5 = (**(code **)*puVar11)();
            }
          }
          local_270 = CONCAT62(local_270._2_6_,CONCAT11(uVar5,(undefined1)local_270)) &
                      0xffffffffffff01ff;
          local_280 = &PTR_FUN_04b46aa8;
          pvVar9 = (void *)FUN_0376846c(&local_280);
          memset(pvVar9,0,0x408c);
          FUN_028e3774(pvVar9);
          break;
        case 4:
          local_270 = (ulong)local_270._1_7_ << 8;
          local_278 = (undefined8 *)(lVar16 + 0x3e008);
          if (*(long *)(lVar16 + 0x3e030) == 0) {
            uVar5 = 0;
          }
          else {
            puVar11 = *(undefined8 **)(*(long *)(lVar16 + 0x3e030) + 0x10);
            uVar5 = 0;
            if (puVar11 != (undefined8 *)0x0) {
              uVar5 = (**(code **)*puVar11)();
            }
          }
          local_270 = CONCAT62(local_270._2_6_,CONCAT11(uVar5,(undefined1)local_270)) &
                      0xffffffffffff01ff;
          local_280 = &PTR_FUN_04b46ac8;
          pvVar9 = (void *)FUN_037684c8(&local_280);
          memset(pvVar9,0,0x408c);
          FUN_028eec88(pvVar9);
        }
        FUN_02640184(&local_280);
        local_90 = (undefined *)CONCAT44(local_90._4_4_,*param_1);
        if ((*param_1 == 5) || (lVar16 = *(long *)puVar3, lVar16 == 0))
        goto switchD_0376703c_default;
        local_280 = (undefined **)CONCAT44(local_280._4_4_,1);
        if ((((*(byte *)(lVar16 + 0x50d) ^ 0xff) & 6) != 0) ||
           (lVar16 = (**(code **)(**(long **)(*(long *)(lVar16 + 0x10) + 0x188) + 0x30))(),
           lVar16 == 0)) goto switchD_0376703c_default;
        switch((ulong)local_90 & 0xffffffff) {
        case 0:
          lVar16 = lVar16 + 0x390a0;
          break;
        case 1:
          lVar16 = lVar16 + 0x3a488;
          break;
        case 2:
          lVar16 = lVar16 + 0x3b870;
          break;
        case 3:
          lVar16 = lVar16 + 0x3cc58;
          break;
        case 4:
          lVar16 = lVar16 + 0x3e040;
          break;
        default:
          goto switchD_0376703c_default;
        }
        if ((*(long *)(lVar7 + 0x37ce0) == 0) ||
           (puVar11 = *(undefined8 **)(*(long *)(lVar7 + 0x37ce0) + 0x10),
           puVar11 == (undefined8 *)0x0)) {
          uVar10 = 0;
        }
        else {
          uVar10 = (**(code **)*puVar11)();
          uVar10 = uVar10 & 0xffffffff;
        }
        if ((*(long **)(lVar16 + 0x28) == (long *)0x0) ||
           (puVar11 = (undefined8 *)**(long **)(lVar16 + 0x28), puVar11 == (undefined8 *)0x0)) {
          uVar8 = 0;
        }
        else {
          uVar8 = (**(code **)*puVar11)();
          uVar8 = uVar8 & 0xffffffff;
        }
        if ((*(long *)(lVar7 + 0x37ce0) != 0) &&
           (plVar13 = *(long **)(*(long *)(lVar7 + 0x37ce0) + 0x20), plVar13 != (long *)0x0)) {
          local_280 = *(undefined ***)(lVar7 + 0x37cc0);
          local_278 = *(undefined8 **)(lVar7 + 0x37cc8);
          local_270 = 0x408c;
          (**(code **)(*plVar13 + 0x20))(plVar13,&local_280);
        }
        memcpy((void *)(*(long *)(lVar7 + 0x37cc8) + *(long *)(lVar7 + 0x37cc0)),
               (void *)(*(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8)),0x408c);
        if ((((uVar8 & 1) != 0) && (*(long *)(lVar16 + 0x28) != 0)) &&
           (puVar11 = *(undefined8 **)(*(long *)(lVar16 + 0x28) + 8), puVar11 != (undefined8 *)0x0))
        {
          (**(code **)*puVar11)();
        }
        if (((uVar10 & 1) == 0) || (lVar16 = *(long *)(lVar7 + 0x37ce0), lVar16 == 0))
        goto switchD_0376703c_default;
LAB_0376785c:
        if (*(undefined8 **)(lVar16 + 0x18) != (undefined8 *)0x0) {
          (**(code **)**(undefined8 **)(lVar16 + 0x18))();
        }
      }
      else {
        local_90 = (undefined *)CONCAT44(local_90._4_4_,*param_1);
        if (((*param_1 != 5) &&
            ((lVar16 = *(long *)puVar3, lVar16 != 0 &&
             (local_280 = (undefined **)CONCAT44(local_280._4_4_,1),
             ((*(byte *)(lVar16 + 0x50d) ^ 0xff) & 6) == 0)))) &&
           (lVar16 = (**(code **)(**(long **)(*(long *)(lVar16 + 0x10) + 0x188) + 0x30))(),
           lVar16 != 0)) {
          switch((ulong)local_90 & 0xffffffff) {
          case 0:
            lVar16 = lVar16 + 0x390a0;
            break;
          case 1:
            lVar16 = lVar16 + 0x3a488;
            break;
          case 2:
            lVar16 = lVar16 + 0x3b870;
            break;
          case 3:
            lVar16 = lVar16 + 0x3cc58;
            break;
          case 4:
            lVar16 = lVar16 + 0x3e040;
            break;
          default:
            goto switchD_0376703c_default;
          }
          if ((*(long *)(lVar7 + 0x37ce0) == 0) ||
             (puVar11 = *(undefined8 **)(*(long *)(lVar7 + 0x37ce0) + 0x10),
             puVar11 == (undefined8 *)0x0)) {
            uVar10 = 0;
          }
          else {
            uVar10 = (**(code **)*puVar11)();
            uVar10 = uVar10 & 0xffffffff;
          }
          if ((*(long **)(lVar16 + 0x28) == (long *)0x0) ||
             (puVar11 = (undefined8 *)**(long **)(lVar16 + 0x28), puVar11 == (undefined8 *)0x0)) {
            uVar8 = 0;
          }
          else {
            uVar8 = (**(code **)*puVar11)();
            uVar8 = uVar8 & 0xffffffff;
          }
          if ((*(long *)(lVar7 + 0x37ce0) != 0) &&
             (plVar13 = *(long **)(*(long *)(lVar7 + 0x37ce0) + 0x20), plVar13 != (long *)0x0)) {
            local_280 = *(undefined ***)(lVar7 + 0x37cc0);
            local_278 = *(undefined8 **)(lVar7 + 0x37cc8);
            local_270 = 0x408c;
            (**(code **)(*plVar13 + 0x20))(plVar13,&local_280);
          }
          memcpy((void *)(*(long *)(lVar7 + 0x37cc8) + *(long *)(lVar7 + 0x37cc0)),
                 (void *)(*(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8)),0x408c);
          if ((((uVar8 & 1) != 0) && (*(long *)(lVar16 + 0x28) != 0)) &&
             (puVar11 = *(undefined8 **)(*(long *)(lVar16 + 0x28) + 8), puVar11 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar11)();
          }
          if ((((uVar10 & 1) != 0) && (*(long *)(lVar7 + 0x37ce0) != 0)) &&
             (puVar11 = *(undefined8 **)(*(long *)(lVar7 + 0x37ce0) + 0x18),
             puVar11 != (undefined8 *)0x0)) {
            (**(code **)*puVar11)();
          }
          if ((*param_1 == 4) && (lVar16 = *(long *)puVar3, lVar16 != 0)) {
            local_280 = (undefined **)CONCAT44(local_280._4_4_,1);
            if ((((*(byte *)(lVar16 + 0x50d) ^ 0xff) & 6) == 0) &&
               (lVar16 = (**(code **)(**(long **)(*(long *)(lVar16 + 0x10) + 0x188) + 0x30))(),
               lVar16 != 0)) {
              lVar14 = *(long *)(lVar7 + 0x37ca8);
              if (lVar14 == 0) {
                uVar10 = 0;
              }
              else {
                if (*(undefined8 **)(lVar14 + 0x10) == (undefined8 *)0x0) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
                  lVar14 = *(long *)(lVar7 + 0x37ca8);
                  uVar10 = uVar10 & 0xffffffff;
                  if (lVar14 == 0) goto LAB_037677dc;
                }
                plVar13 = *(long **)(lVar14 + 0x20);
                if (plVar13 != (long *)0x0) {
                  local_280 = *(undefined ***)(lVar7 + 0x37c88);
                  local_278 = *(undefined8 **)(lVar7 + 0x37c90);
                  local_270 = 0x4098;
                  (**(code **)(*plVar13 + 0x20))(plVar13,&local_280);
                }
              }
LAB_037677dc:
              lVar14 = *(long *)(lVar7 + 0x37c88);
              lVar17 = *(long *)(lVar7 + 0x37c90);
              if (*(long **)(lVar16 + 0x5d4598) == (long *)0x0) {
                uVar8 = 0;
              }
              else {
                puVar11 = (undefined8 *)**(long **)(lVar16 + 0x5d4598);
                uVar8 = 0;
                if (puVar11 != (undefined8 *)0x0) {
                  uVar8 = (**(code **)*puVar11)();
                }
              }
              uVar6 = (uint)*(byte *)(*(long *)(lVar16 + 0x5d4580) + *(long *)(lVar16 + 0x5d4578) +
                                     0x200);
              if (5 < uVar6) {
                uVar6 = 0;
              }
              local_280 = (undefined **)CONCAT44(local_280._4_4_,uVar6);
              *(char *)(lVar17 + lVar14 + 0x4094) = (char)uVar6;
              if ((((uVar8 & 1) != 0) && (*(long *)(lVar16 + 0x5d4598) != 0)) &&
                 (puVar11 = *(undefined8 **)(*(long *)(lVar16 + 0x5d4598) + 8),
                 puVar11 != (undefined8 *)0x0)) {
                (**(code **)*puVar11)();
              }
              if (((uVar10 & 1) != 0) && (lVar16 = *(long *)(lVar7 + 0x37ca8), lVar16 != 0))
              goto LAB_0376785c;
            }
          }
        }
      }
switchD_0376703c_default:
      lVar16 = *(long *)(lVar7 + 0x37ce0);
      if (lVar16 == 0) {
        *(ushort *)(*(long *)(lVar7 + 0x37cc8) + *(long *)(lVar7 + 0x37cc0)) =
             *(ushort *)(*(long *)(lVar7 + 0x37cc8) + *(long *)(lVar7 + 0x37cc0)) & 0xfffb;
      }
      else {
        if (*(undefined8 **)(lVar16 + 0x10) == (undefined8 *)0x0) {
          uVar10 = 0;
LAB_037678c8:
          plVar13 = *(long **)(lVar16 + 0x20);
          if (plVar13 == (long *)0x0) goto LAB_0376790c;
          local_280 = *(undefined ***)(lVar7 + 0x37cc0);
          local_278 = *(undefined8 **)(lVar7 + 0x37cc8);
          local_270 = 0x408c;
          (**(code **)(*plVar13 + 0x20))(plVar13,&local_280);
          lVar16 = *(long *)(lVar7 + 0x37cc0);
        }
        else {
          uVar10 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
          lVar16 = *(long *)(lVar7 + 0x37ce0);
          uVar10 = uVar10 & 0xffffffff;
          if (lVar16 != 0) goto LAB_037678c8;
LAB_0376790c:
          lVar16 = *(long *)(lVar7 + 0x37cc0);
        }
        *(ushort *)(*(long *)(lVar7 + 0x37cc8) + lVar16) =
             *(ushort *)(*(long *)(lVar7 + 0x37cc8) + lVar16) & 0xfffb;
        if ((((uVar10 & 1) != 0) && (*(long *)(lVar7 + 0x37ce0) != 0)) &&
           (puVar11 = *(undefined8 **)(*(long *)(lVar7 + 0x37ce0) + 0x18),
           puVar11 != (undefined8 *)0x0)) {
          (**(code **)*puVar11)();
        }
      }
      plVar20 = (long *)(lVar7 + 0x37cc8);
      plVar13 = (long *)(lVar7 + 0x37cc0);
      if (local_a0[0] == 3) {
        lVar16 = *(long *)(lVar7 + 0x37ce0);
        if (lVar16 == 0) {
          *(ushort *)(*plVar20 + *plVar13) = *(ushort *)(*plVar20 + *plVar13) | 2;
        }
        else {
          if (*(undefined8 **)(lVar16 + 0x10) == (undefined8 *)0x0) {
            uVar10 = 0;
LAB_037679a4:
            plVar12 = *(long **)(lVar16 + 0x20);
            if (plVar12 != (long *)0x0) {
              local_280 = (undefined **)*plVar13;
              local_278 = (undefined8 *)*plVar20;
              local_270 = 0x408c;
              (**(code **)(*plVar12 + 0x20))(plVar12,&local_280);
            }
          }
          else {
            uVar10 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
            lVar16 = *(long *)(lVar7 + 0x37ce0);
            uVar10 = uVar10 & 0xffffffff;
            if (lVar16 != 0) goto LAB_037679a4;
          }
          *(ushort *)(*plVar20 + *plVar13) = *(ushort *)(*plVar20 + *plVar13) | 2;
          if ((((uVar10 & 1) != 0) && (*(long *)(lVar7 + 0x37ce0) != 0)) &&
             (puVar11 = *(undefined8 **)(*(long *)(lVar7 + 0x37ce0) + 0x18),
             puVar11 != (undefined8 *)0x0)) {
            (**(code **)*puVar11)();
          }
        }
      }
      lVar16 = *(long *)(lVar7 + 0x36620);
      if (lVar16 == 0) {
        local_280 = (undefined **)CONCAT44(local_280._4_4_,2);
        *(undefined1 *)(*(long *)(lVar7 + 0x36608) + *plVar15) = 2;
      }
      else {
        if (*(undefined8 **)(lVar16 + 0x10) == (undefined8 *)0x0) {
          uVar10 = 0;
LAB_03767a4c:
          plVar13 = *(long **)(lVar16 + 0x20);
          if (plVar13 != (long *)0x0) {
            local_280 = (undefined **)*plVar15;
            local_278 = *(undefined8 **)(lVar7 + 0x36608);
            local_270 = 0x89a8;
            (**(code **)(*plVar13 + 0x20))(plVar13,&local_280);
          }
        }
        else {
          uVar10 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
          lVar16 = *(long *)(lVar7 + 0x36620);
          uVar10 = uVar10 & 0xffffffff;
          if (lVar16 != 0) goto LAB_03767a4c;
        }
        local_280 = (undefined **)CONCAT44(local_280._4_4_,2);
        *(undefined1 *)(*(long *)(lVar7 + 0x36608) + *plVar15) = 2;
        if ((((uVar10 & 1) != 0) && (*(long *)(lVar7 + 0x36620) != 0)) &&
           (puVar11 = *(undefined8 **)(*(long *)(lVar7 + 0x36620) + 0x18),
           puVar11 != (undefined8 *)0x0)) {
          (**(code **)*puVar11)();
        }
      }
      lVar16 = *(long *)(lVar7 + 0x37ca8);
      if (lVar16 == 0) {
        uVar10 = 0;
        local_90 = (undefined *)CONCAT44(local_90._4_4_,*param_1);
        uVar18 = (undefined2)param_1[1];
      }
      else {
        if (*(undefined8 **)(lVar16 + 0x10) == (undefined8 *)0x0) {
          uVar10 = 0;
          local_90 = (undefined *)CONCAT44(local_90._4_4_,*param_1);
          uVar18 = (undefined2)param_1[1];
        }
        else {
          uVar10 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
          lVar16 = *(long *)(lVar7 + 0x37ca8);
          uVar10 = uVar10 & 0xffffffff;
          local_90 = (undefined *)CONCAT44(local_90._4_4_,*param_1);
          uVar18 = (undefined2)param_1[1];
          if (lVar16 == 0) goto LAB_03767b34;
        }
        plVar15 = *(long **)(lVar16 + 0x20);
        if (plVar15 != (long *)0x0) {
          local_280 = *(undefined ***)(lVar7 + 0x37c88);
          local_278 = *(undefined8 **)(lVar7 + 0x37c90);
          local_270 = 0x4098;
          (**(code **)(*plVar15 + 0x20))(plVar15,&local_280);
        }
      }
LAB_03767b34:
      lVar16 = *(long *)(lVar7 + 0x37c90) + *(long *)(lVar7 + 0x37c88);
      *(short *)(lVar16 + 0x408c) = (short)local_90;
      *(undefined2 *)(lVar16 + 0x4084) = uVar18;
      if ((((uVar10 & 1) != 0) && (*(long *)(lVar7 + 0x37ca8) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(lVar7 + 0x37ca8) + 0x18),
         puVar11 != (undefined8 *)0x0)) {
        (**(code **)*puVar11)();
      }
      if (((local_a0[0] == 1) || (local_a0[0] == 3)) &&
         (uVar6 = FUN_0377fc30(*param_1,1), 0 < (int)uVar6)) {
        lVar16 = *(long *)(lVar7 + 0x37d50);
        if (lVar16 == 0) {
          uVar10 = 0;
        }
        else {
          if (*(undefined8 **)(lVar16 + 0x10) == (undefined8 *)0x0) {
            uVar10 = 0;
          }
          else {
            uVar10 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
            lVar16 = *(long *)(lVar7 + 0x37d50);
            uVar10 = uVar10 & 0xffffffff;
            if (lVar16 == 0) goto LAB_03767c08;
          }
          plVar15 = *(long **)(lVar16 + 0x20);
          if (plVar15 != (long *)0x0) {
            local_280 = *(undefined ***)(lVar7 + 0x37d30);
            local_278 = *(undefined8 **)(lVar7 + 0x37d38);
            local_270 = 0x155c;
            (**(code **)(*plVar15 + 0x20))(plVar15,&local_280);
          }
        }
LAB_03767c08:
        local_280 = (undefined **)((ulong)local_280 & 0xffffffff00000000);
        lVar16 = *(long *)(lVar7 + 0x37d38) + *(long *)(lVar7 + 0x37d30);
        *(ushort *)(lVar16 + 0x153c) = *(ushort *)(lVar16 + 0x153c) | 1;
        lVar16 = *(long *)(lVar7 + 0x37d50);
        if ((uVar10 & 1) == 0) {
LAB_03767c54:
          if (lVar16 != 0) goto LAB_03767c58;
LAB_03767c7c:
          uVar10 = 0;
        }
        else {
          if (lVar16 == 0) goto LAB_03767c7c;
          if (*(undefined8 **)(lVar16 + 0x18) != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)(lVar16 + 0x18))();
            lVar16 = *(long *)(lVar7 + 0x37d50);
            goto LAB_03767c54;
          }
LAB_03767c58:
          if (*(undefined8 **)(lVar16 + 0x10) == (undefined8 *)0x0) {
            uVar10 = 0;
          }
          else {
            uVar10 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
            lVar16 = *(long *)(lVar7 + 0x37d50);
            uVar10 = uVar10 & 0xffffffff;
            if (lVar16 == 0) goto LAB_03767cb4;
          }
          plVar15 = *(long **)(lVar16 + 0x20);
          if (plVar15 != (long *)0x0) {
            local_280 = *(undefined ***)(lVar7 + 0x37d30);
            local_278 = *(undefined8 **)(lVar7 + 0x37d38);
            local_270 = 0x155c;
            (**(code **)(*plVar15 + 0x20))(plVar15,&local_280);
          }
        }
LAB_03767cb4:
        lVar16 = *(long *)(lVar7 + 0x37d38) + *(long *)(lVar7 + 0x37d30);
        local_280 = (undefined **)CONCAT44(local_280._4_4_,2);
        *(ushort *)(lVar16 + 0x153c) = *(ushort *)(lVar16 + 0x153c) | 4;
        if ((((uVar10 & 1) != 0) && (*(long *)(lVar7 + 0x37d50) != 0)) &&
           (puVar11 = *(undefined8 **)(*(long *)(lVar7 + 0x37d50) + 0x18),
           puVar11 != (undefined8 *)0x0)) {
          (**(code **)*puVar11)();
        }
        if (uVar6 != 1) {
          lVar16 = *(long *)(lVar7 + 0x383a8);
          if (lVar16 == 0) {
            uVar10 = 0;
          }
          else {
            if (*(undefined8 **)(lVar16 + 0x10) == (undefined8 *)0x0) {
              uVar10 = 0;
            }
            else {
              uVar10 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
              lVar16 = *(long *)(lVar7 + 0x383a8);
              uVar10 = uVar10 & 0xffffffff;
              if (lVar16 == 0) goto LAB_03767d6c;
            }
            plVar15 = *(long **)(lVar16 + 0x20);
            if (plVar15 != (long *)0x0) {
              local_280 = *(undefined ***)(lVar7 + 0x38388);
              local_278 = *(undefined8 **)(lVar7 + 0x38390);
              local_270 = 0x155c;
              (**(code **)(*plVar15 + 0x20))(plVar15,&local_280);
            }
          }
LAB_03767d6c:
          local_280 = (undefined **)((ulong)local_280 & 0xffffffff00000000);
          lVar16 = *(long *)(lVar7 + 0x38390) + *(long *)(lVar7 + 0x38388);
          *(ushort *)(lVar16 + 0x153c) = *(ushort *)(lVar16 + 0x153c) | 1;
          lVar16 = *(long *)(lVar7 + 0x383a8);
          if ((uVar10 & 1) == 0) {
LAB_03767db8:
            if (lVar16 != 0) goto LAB_03767dbc;
LAB_03767de0:
            uVar10 = 0;
          }
          else {
            if (lVar16 == 0) goto LAB_03767de0;
            if (*(undefined8 **)(lVar16 + 0x18) != (undefined8 *)0x0) {
              (**(code **)**(undefined8 **)(lVar16 + 0x18))();
              lVar16 = *(long *)(lVar7 + 0x383a8);
              goto LAB_03767db8;
            }
LAB_03767dbc:
            if (*(undefined8 **)(lVar16 + 0x10) == (undefined8 *)0x0) {
              uVar10 = 0;
            }
            else {
              uVar10 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
              lVar16 = *(long *)(lVar7 + 0x383a8);
              uVar10 = uVar10 & 0xffffffff;
              if (lVar16 == 0) goto LAB_03767e18;
            }
            plVar15 = *(long **)(lVar16 + 0x20);
            if (plVar15 != (long *)0x0) {
              local_280 = *(undefined ***)(lVar7 + 0x38388);
              local_278 = *(undefined8 **)(lVar7 + 0x38390);
              local_270 = 0x155c;
              (**(code **)(*plVar15 + 0x20))(plVar15,&local_280);
            }
          }
LAB_03767e18:
          lVar16 = *(long *)(lVar7 + 0x38390) + *(long *)(lVar7 + 0x38388);
          local_280 = (undefined **)CONCAT44(local_280._4_4_,2);
          *(ushort *)(lVar16 + 0x153c) = *(ushort *)(lVar16 + 0x153c) | 4;
          if ((((uVar10 & 1) != 0) && (*(long *)(lVar7 + 0x383a8) != 0)) &&
             (puVar11 = *(undefined8 **)(*(long *)(lVar7 + 0x383a8) + 0x18),
             puVar11 != (undefined8 *)0x0)) {
            (**(code **)*puVar11)();
          }
          if (uVar6 != 2) {
            lVar16 = *(long *)(lVar7 + 0x38a00);
            if (lVar16 == 0) {
              uVar10 = 0;
            }
            else {
              if (*(undefined8 **)(lVar16 + 0x10) == (undefined8 *)0x0) {
                uVar10 = 0;
              }
              else {
                uVar10 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
                lVar16 = *(long *)(lVar7 + 0x38a00);
                uVar10 = uVar10 & 0xffffffff;
                if (lVar16 == 0) goto LAB_03767ed0;
              }
              plVar15 = *(long **)(lVar16 + 0x20);
              if (plVar15 != (long *)0x0) {
                local_280 = *(undefined ***)(lVar7 + 0x389e0);
                local_278 = *(undefined8 **)(lVar7 + 0x389e8);
                local_270 = 0x155c;
                (**(code **)(*plVar15 + 0x20))(plVar15,&local_280);
              }
            }
LAB_03767ed0:
            local_280 = (undefined **)((ulong)local_280 & 0xffffffff00000000);
            lVar16 = *(long *)(lVar7 + 0x389e8) + *(long *)(lVar7 + 0x389e0);
            *(ushort *)(lVar16 + 0x153c) = *(ushort *)(lVar16 + 0x153c) | 1;
            lVar16 = *(long *)(lVar7 + 0x38a00);
            if ((uVar10 & 1) == 0) {
LAB_03767f1c:
              if (lVar16 != 0) goto LAB_03767f20;
LAB_03767f44:
              uVar10 = 0;
            }
            else {
              if (lVar16 == 0) goto LAB_03767f44;
              if (*(undefined8 **)(lVar16 + 0x18) != (undefined8 *)0x0) {
                (**(code **)**(undefined8 **)(lVar16 + 0x18))();
                lVar16 = *(long *)(lVar7 + 0x38a00);
                goto LAB_03767f1c;
              }
LAB_03767f20:
              if (*(undefined8 **)(lVar16 + 0x10) == (undefined8 *)0x0) {
                uVar10 = 0;
              }
              else {
                uVar10 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
                lVar16 = *(long *)(lVar7 + 0x38a00);
                uVar10 = uVar10 & 0xffffffff;
                if (lVar16 == 0) goto LAB_03767f7c;
              }
              plVar15 = *(long **)(lVar16 + 0x20);
              if (plVar15 != (long *)0x0) {
                local_280 = *(undefined ***)(lVar7 + 0x389e0);
                local_278 = *(undefined8 **)(lVar7 + 0x389e8);
                local_270 = 0x155c;
                (**(code **)(*plVar15 + 0x20))(plVar15,&local_280);
              }
            }
LAB_03767f7c:
            lVar16 = *(long *)(lVar7 + 0x389e8) + *(long *)(lVar7 + 0x389e0);
            local_280 = (undefined **)CONCAT44(local_280._4_4_,2);
            *(ushort *)(lVar16 + 0x153c) = *(ushort *)(lVar16 + 0x153c) | 4;
            if ((((uVar10 & 1) != 0) && (*(long *)(lVar7 + 0x38a00) != 0)) &&
               (puVar11 = *(undefined8 **)(*(long *)(lVar7 + 0x38a00) + 0x18),
               puVar11 != (undefined8 *)0x0)) {
              (**(code **)*puVar11)();
            }
            if (uVar6 != 3) {
              lVar16 = (ulong)uVar6 - 3;
              do {
                lVar14 = *(long *)(lVar7 + 0x37d50);
                if (lVar14 == 0) {
                  uVar10 = 0;
                }
                else {
                  if (*(undefined8 **)(lVar14 + 0x10) == (undefined8 *)0x0) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
                    lVar14 = *(long *)(lVar7 + 0x37d50);
                    uVar10 = uVar10 & 0xffffffff;
                    if (lVar14 == 0) goto LAB_0376826c;
                  }
                  plVar15 = *(long **)(lVar14 + 0x20);
                  if (plVar15 != (long *)0x0) {
                    local_280 = *(undefined ***)(lVar7 + 0x37d30);
                    local_278 = *(undefined8 **)(lVar7 + 0x37d38);
                    local_270 = 0x155c;
                    (**(code **)(*plVar15 + 0x20))(plVar15,&local_280);
                  }
                }
LAB_0376826c:
                local_280 = (undefined **)((ulong)local_280 & 0xffffffff00000000);
                lVar14 = *(long *)(lVar7 + 0x37d38) + *(long *)(lVar7 + 0x37d30);
                *(ushort *)(lVar14 + 0x153c) = *(ushort *)(lVar14 + 0x153c) | 1;
                lVar14 = *(long *)(lVar7 + 0x37d50);
                if ((uVar10 & 1) == 0) {
LAB_037682b4:
                  if (lVar14 != 0) goto LAB_037682b8;
LAB_037682dc:
                  uVar10 = 0;
                }
                else {
                  if (lVar14 == 0) goto LAB_037682dc;
                  if (*(undefined8 **)(lVar14 + 0x18) != (undefined8 *)0x0) {
                    (**(code **)**(undefined8 **)(lVar14 + 0x18))();
                    lVar14 = *(long *)(lVar7 + 0x37d50);
                    goto LAB_037682b4;
                  }
LAB_037682b8:
                  if (*(undefined8 **)(lVar14 + 0x10) == (undefined8 *)0x0) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
                    lVar14 = *(long *)(lVar7 + 0x37d50);
                    uVar10 = uVar10 & 0xffffffff;
                    if (lVar14 == 0) goto LAB_03768310;
                  }
                  plVar15 = *(long **)(lVar14 + 0x20);
                  if (plVar15 != (long *)0x0) {
                    local_280 = *(undefined ***)(lVar7 + 0x37d30);
                    local_278 = *(undefined8 **)(lVar7 + 0x37d38);
                    local_270 = 0x155c;
                    (**(code **)(*plVar15 + 0x20))(plVar15,&local_280);
                  }
                }
LAB_03768310:
                local_280 = (undefined **)CONCAT44(local_280._4_4_,2);
                lVar14 = *(long *)(lVar7 + 0x37d38) + *(long *)(lVar7 + 0x37d30);
                *(ushort *)(lVar14 + 0x153c) = *(ushort *)(lVar14 + 0x153c) | 4;
                if ((((uVar10 & 1) != 0) && (*(long *)(lVar7 + 0x37d50) != 0)) &&
                   (puVar11 = *(undefined8 **)(*(long *)(lVar7 + 0x37d50) + 0x18),
                   puVar11 != (undefined8 *)0x0)) {
                  (**(code **)*puVar11)();
                }
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
          }
        }
      }
      uVar6 = *param_1;
      if (2 < uVar6 - 1) {
        return;
      }
      lVar16 = *(long *)puVar3;
      local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
      if (lVar16 == 0) {
        lVar7 = 0;
      }
      else {
        local_280 = (undefined **)CONCAT44(local_280._4_4_,1);
        if (((*(byte *)(lVar16 + 0x50d) ^ 0xff) & 6) == 0) {
          lVar14 = (**(code **)(**(long **)(*(long *)(lVar16 + 0x10) + 0x188) + 0x30))();
          lVar16 = *(long *)puVar3;
        }
        else {
          lVar14 = 0;
        }
        lVar7 = 0;
        if (lVar14 != 0) {
          lVar7 = lVar14 + 0xa8;
        }
      }
      puVar3 = local_90;
      uVar4 = (uint)local_90;
      local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar6);
      lVar14 = lVar7 + 0x49d78 + ((ulong)puVar3 & 0xffffffff) * 0xb60;
      if (3 < uVar4) {
        lVar14 = lVar7 + 0x49d78;
      }
      lVar7 = 0;
      if (lVar16 != 0) {
        local_280 = (undefined **)CONCAT44(local_280._4_4_,1);
        if (((*(byte *)(lVar16 + 0x50d) ^ 0xff) & 6) == 0) {
          lVar16 = (**(code **)(**(long **)(*(long *)(lVar16 + 0x10) + 0x188) + 0x38))();
        }
        else {
          lVar16 = 0;
        }
        lVar7 = 0;
        if (lVar16 != 0) {
          lVar7 = lVar16 + 0xa8;
        }
      }
      lVar16 = lVar7 + 0x49d78 + ((ulong)local_90 & 0xffffffff) * 0xb60;
      if (3 < (uint)local_90) {
        lVar16 = lVar7 + 0x49d78;
      }
      if ((*(long **)(lVar16 + 0x28) == (long *)0x0) ||
         (puVar11 = (undefined8 *)**(long **)(lVar16 + 0x28), puVar11 == (undefined8 *)0x0)) {
        uVar6 = 1;
      }
      else {
        uVar6 = (**(code **)*puVar11)();
        uVar6 = uVar6 ^ 1;
      }
      lVar7 = *(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8);
      lVar17 = *(long *)(lVar14 + 0x28);
      if (lVar17 == 0) {
        FUN_027c1640(*(long *)(lVar14 + 0x10) + *(long *)(lVar14 + 8),lVar7);
      }
      else {
        if (*(undefined8 **)(lVar17 + 0x10) == (undefined8 *)0x0) {
          uVar10 = 0;
LAB_03768154:
          plVar15 = *(long **)(lVar17 + 0x20);
          if (plVar15 != (long *)0x0) {
            local_280 = *(undefined ***)(lVar14 + 8);
            local_278 = *(undefined8 **)(lVar14 + 0x10);
            local_270 = 0x2a8;
            (**(code **)(*plVar15 + 0x20))(plVar15,&local_280);
          }
        }
        else {
          uVar10 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
          lVar17 = *(long *)(lVar14 + 0x28);
          uVar10 = uVar10 & 0xffffffff;
          if (lVar17 != 0) goto LAB_03768154;
        }
        FUN_027c1640(*(long *)(lVar14 + 0x10) + *(long *)(lVar14 + 8),lVar7);
        if ((((uVar10 & 1) != 0) && (*(long *)(lVar14 + 0x28) != 0)) &&
           (puVar11 = *(undefined8 **)(*(long *)(lVar14 + 0x28) + 0x18),
           puVar11 != (undefined8 *)0x0)) {
          (**(code **)*puVar11)();
        }
      }
      if ((uVar6 & 1) != 0) {
        return;
      }
      if (*(long *)(lVar16 + 0x28) == 0) {
        return;
      }
      puVar11 = *(undefined8 **)(*(long *)(lVar16 + 0x28) + 8);
      goto joined_r0x03767288;
    }
  }
  local_90 = (undefined *)CONCAT44(local_90._4_4_,*param_1);
  if (*param_1 == 5) {
    return;
  }
  lVar7 = *(long *)puVar3;
  if (lVar7 == 0) {
    return;
  }
  local_280 = (undefined **)CONCAT44(local_280._4_4_,1);
  if (((*(byte *)(lVar7 + 0x50d) ^ 0xff) & 6) != 0) {
    return;
  }
  lVar7 = (**(code **)(**(long **)(*(long *)(lVar7 + 0x10) + 0x188) + 0x30))();
  if (lVar7 == 0) {
    return;
  }
  switch((ulong)local_90 & 0xffffffff) {
  case 0:
    lVar7 = lVar7 + 0x390a0;
    break;
  case 1:
    lVar7 = lVar7 + 0x3a488;
    break;
  case 2:
    lVar7 = lVar7 + 0x3b870;
    break;
  case 3:
    lVar7 = lVar7 + 0x3cc58;
    break;
  case 4:
    lVar7 = lVar7 + 0x3e040;
    break;
  default:
    return;
  }
  if (lVar16 == 0) {
    return;
  }
  local_270._4_4_ = local_270._4_4_ & 0xffffff00;
  local_270 = CONCAT44(local_270._4_4_,0x80);
  local_268 = 0xffffffff;
  uStack_260 = 0xffffffff00000000;
  local_278 = &local_1a0;
  local_258 = 0xffffffff;
  puStack_248 = local_23c;
  local_240 = 0x40;
  local_1fd = 0;
  local_23c[0] = 0;
  local_250 = PTR_DAT_04bb2bc0 + 0x10;
  local_1e8 = 0x40;
  local_1a5 = 0;
  local_1e4[0] = 0;
  puStack_1f0 = local_1e4;
  ppuVar19 = (undefined **)(PTR_DAT_04bb6b38 + 0x10);
  local_b0 = 0;
  uStack_a8 = 0;
  puVar1 = local_a0;
  if (local_a0 <= (uint *)((long)&local_1a0 + 2U)) {
    puVar1 = (uint *)((long)&local_1a0 + 2U);
  }
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_280 = ppuVar19;
  local_1f8 = local_250;
  memset(local_278,0,(long)puVar1 + (-0xe0 - (long)&local_280));
  if ((*(long **)(lVar7 + 0x13a0) == (long *)0x0) ||
     (puVar11 = (undefined8 *)**(long **)(lVar7 + 0x13a0), puVar11 == (undefined8 *)0x0)) {
    uVar6 = 1;
  }
  else {
    uVar6 = (**(code **)*puVar11)();
    uVar6 = uVar6 ^ 1;
    ppuVar19 = local_280;
  }
  local_a0[0] = 0x17;
  local_98 = *(long *)(lVar7 + 5000) + *(long *)(lVar7 + 0x1380);
  (*(code *)ppuVar19[7])(&local_280);
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_68 = 1;
  local_64 = 0;
  local_90 = PTR_DAT_04bc0cd8 + 0x10;
  local_88 = 0;
  FUN_02906b00(&local_90,&local_280,local_a0);
  if ((((uVar6 & 1) == 0) && (*(long *)(lVar7 + 0x13a0) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar7 + 0x13a0) + 8), puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
  lVar7 = *(long *)(lVar16 + 0x2a60);
  if (lVar7 == 0) {
    uVar10 = 0;
  }
  else {
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      lVar7 = *(long *)(lVar16 + 0x2a60);
      uVar10 = uVar10 & 0xffffffff;
      if (lVar7 == 0) goto LAB_03767258;
    }
    plVar15 = *(long **)(lVar7 + 0x20);
    if (plVar15 != (long *)0x0) {
      local_90 = *(undefined **)(lVar16 + 0x2a40);
      local_88 = *(undefined8 *)(lVar16 + 0x2a48);
      local_80 = 0x6c;
      (**(code **)(*plVar15 + 0x20))(plVar15,&local_90);
    }
  }
LAB_03767258:
  local_90 = (undefined *)CONCAT44(local_90._4_4_,0x17);
  local_88 = *(long *)(lVar16 + 0x2a48) + *(long *)(lVar16 + 0x2a40);
  FUN_02906c90(&local_90,&local_280);
  if ((uVar10 & 1) == 0) {
    return;
  }
  if (*(long *)(lVar16 + 0x2a60) == 0) {
    return;
  }
  puVar11 = *(undefined8 **)(*(long *)(lVar16 + 0x2a60) + 0x18);
joined_r0x03767288:
  if (puVar11 != (undefined8 *)0x0) {
    (**(code **)*puVar11)();
  }
  return;
}

