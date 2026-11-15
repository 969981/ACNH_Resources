
uint FUN_01fc1450(long param_1,long param_2,undefined4 *param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 ***pppuVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  uint *puVar17;
  undefined8 local_e8;
  short local_e0;
  undefined2 local_de;
  undefined4 local_dc;
  long local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined8 ***local_b8;
  undefined8 ***pppuStack_b0;
  undefined8 ***local_a8;
  undefined8 **local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined1 auStack_88 [32];
  long local_68;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar12 = *(long *)PTR_DAT_04bb4e28;
  if (*(int *)(lVar12 + 0xe0) != 0) {
    lVar15 = 0;
    lVar14 = 0;
    do {
      if (*(int *)(*(long *)(param_1 + 8) + 0x230) ==
          *(int *)(*(long *)(*(long *)(lVar12 + 0xe8) + lVar15 * 8) + 8)) {
        if ((*(uint *)(lVar12 + 0x1008) <= (uint)lVar15) ||
           (puVar17 = *(uint **)(*(long *)(lVar12 + 0x1010) - lVar14), puVar17 == (uint *)0x0))
        goto LAB_01fc1514;
        goto LAB_01fc150c;
      }
      lVar14 = lVar14 + -8;
      lVar15 = lVar15 + 1;
    } while (-lVar14 != (long)*(int *)(lVar12 + 0xe0) * 8);
  }
  if ((*(int *)(lVar12 + 0x1008) != 0) &&
     (puVar17 = (uint *)**(undefined8 **)(lVar12 + 0x1010), puVar17 != (uint *)0x0)) {
LAB_01fc150c:
    if ((char)puVar17[3] == '\0') {
      plVar16 = *(long **)(*(long *)(param_1 + 8) + 0x60);
      if (plVar16 == (long *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(&DAT_052461c0);
          plVar16 = &DAT_05240280;
          if (iVar7 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          plVar16 = &DAT_05240280;
        }
      }
      puVar4 = PTR_DAT_04bc0428;
      puVar3 = PTR_DAT_04bb43c0;
      uVar6 = puVar17[2];
      local_68 = param_2;
      if (((uVar6 == 0xffffffff) && (puVar17[1] == 0xffffffff)) && (*puVar17 == 0xffffffff)) {
        local_c8 = 0;
        local_c0 = (undefined1 *)0x0;
        local_a8 = &local_a0;
        local_a0 = &local_98;
        local_b8 = &local_a8;
        local_98 = &local_90;
        local_90 = 0;
        if (auStack_88 != (undefined1 *)0x0) {
          local_c8 = 0x400000000;
          local_c0 = auStack_88;
        }
        puVar1 = PTR_DAT_04bc0510 + 0x10;
        iVar7 = -1;
        pppuStack_b0 = local_b8;
        while( true ) {
          while( true ) {
            iVar10 = iVar7;
            uVar8 = local_c8;
            if (iVar10 != -1) break;
            iVar7 = 0;
          }
          if (iVar10 == 3) break;
          local_e8 = (undefined *)CONCAT44(local_e8._4_4_,iVar10);
          if (iVar10 == 2) {
            if (param_3 == (undefined4 *)0x0) {
LAB_01fc1834:
              pcVar13 = *(code **)(*plVar16 + 0x2f0);
LAB_01fc1864:
              (*pcVar13)(&local_d0,plVar16);
            }
            else {
              local_d0 = param_3[6];
              local_cc = param_3[7];
            }
          }
          else if (iVar10 == 1) {
            if (param_3 == (undefined4 *)0x0) {
              pcVar13 = *(code **)(*plVar16 + 0x2e0);
              goto LAB_01fc1864;
            }
            local_d0 = param_3[2];
            local_cc = param_3[3];
          }
          else {
            if (iVar10 != 0) goto LAB_01fc1834;
            if (param_3 == (undefined4 *)0x0) {
              pcVar13 = *(code **)(*plVar16 + 0x2d8);
              goto LAB_01fc1864;
            }
            local_d0 = *param_3;
            local_cc = param_3[1];
          }
          if ((short)local_d0 != -2) {
            local_e0 = (short)local_d0;
            local_d8 = 0;
            lVar12 = *(long *)puVar3;
            local_de = local_d0._2_2_;
            local_dc = local_cc;
            local_e8 = puVar1;
            uVar6 = FUN_0277d6c4(&local_e0);
            if (*(long *)puVar3 != 0) {
              lVar12 = *(long *)(lVar12 + 0x57e58);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                lVar12 = *(long *)puVar4;
                uVar6 = FUN_0277d6c4(&local_d0);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
                if (uVar6 < *(uint *)(lVar12 + 0x1d8)) {
                  lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8);
                  if (lVar12 != 0) {
                    local_d8 = lVar12;
                  }
                }
              }
            }
            iVar7 = FUN_01b11a90(&local_e8);
            pppuVar5 = local_b8;
            if (iVar7 != 0) {
              if ((int)local_c8 < local_c8._4_4_) {
                if (local_b8 != (undefined8 ***)0x0) {
                  local_b8 = (undefined8 ***)*local_b8;
                }
                *(int *)pppuVar5 = iVar10;
                if ((int)local_c8 < local_c8._4_4_) {
                  *(undefined8 ****)(local_c0 + (long)(int)local_c8 * 8) = pppuVar5;
                  local_c8 = CONCAT44(local_c8._4_4_,(int)local_c8 + 1);
                }
              }
            }
          }
          iVar7 = 3;
          if (iVar10 < 3) {
            iVar7 = iVar10 + 1;
          }
        }
        if ((int)local_c8 == 0) goto LAB_01fc1514;
        puVar17 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar6 = *puVar17 ^ *puVar17 << 0xb;
        uVar2 = puVar17[3];
        *puVar17 = puVar17[1];
        puVar17[1] = puVar17[2];
        uVar6 = uVar6 >> 8 ^ uVar2 >> 0x13 ^ uVar6 ^ uVar2;
        puVar17[2] = uVar2;
        puVar17[3] = uVar6;
        local_d0 = **(int **)(local_c0 + ((long)((uVar8 & 0xffffffff) * (ulong)uVar6) >> 0x20) * 8);
        if (local_d0 == 2) {
          if (param_3 != (undefined4 *)0x0) {
            uVar9 = param_3[6];
            uVar11 = param_3[7];
            goto LAB_01fc1a54;
          }
LAB_01fc1a5c:
          pcVar13 = *(code **)(*plVar16 + 0x2f0);
LAB_01fc1a7c:
          (*pcVar13)(&local_e8,plVar16);
        }
        else {
          if (local_d0 == 1) {
            if (param_3 == (undefined4 *)0x0) {
              pcVar13 = *(code **)(*plVar16 + 0x2e0);
              goto LAB_01fc1a7c;
            }
            uVar9 = param_3[2];
            uVar11 = param_3[3];
          }
          else {
            if (local_d0 != 0) goto LAB_01fc1a5c;
            if (param_3 == (undefined4 *)0x0) {
              pcVar13 = *(code **)(*plVar16 + 0x2d8);
              goto LAB_01fc1a7c;
            }
            uVar9 = *param_3;
            uVar11 = param_3[1];
          }
LAB_01fc1a54:
          local_e8 = (undefined *)CONCAT44(uVar11,uVar9);
        }
        uVar6 = FUN_01fc1b30(&local_68,&local_e8);
        goto LAB_01fc1518;
      }
      local_d0 = uVar6;
      if (param_3 == (undefined4 *)0x0) {
        if (uVar6 != 0xffffffff) {
          local_e8 = (undefined *)CONCAT44(local_e8._4_4_,uVar6);
          if (uVar6 < 3) {
            lVar12 = *(long *)(&DAT_04179440 + (long)(int)uVar6 * 8);
          }
          else {
            lVar12 = 0x5e;
          }
          (**(code **)(*plVar16 + lVar12 * 8))(&local_c8,plVar16);
          uVar8 = FUN_01fc1b30(&local_68,&local_c8);
          if ((uVar8 & 1) != 0) goto LAB_01fc1a38;
        }
        local_d0 = puVar17[1];
        if (local_d0 != 0xffffffff) {
          local_e8 = (undefined *)CONCAT44(local_e8._4_4_,local_d0);
          if (local_d0 < 3) {
            lVar12 = *(long *)(&DAT_04179440 + (long)(int)local_d0 * 8);
          }
          else {
            lVar12 = 0x5e;
          }
          (**(code **)(*plVar16 + lVar12 * 8))(&local_c8,plVar16);
          uVar8 = FUN_01fc1b30(&local_68,&local_c8);
          if ((uVar8 & 1) != 0) goto LAB_01fc1a38;
        }
        local_d0 = *puVar17;
        if (local_d0 == 0xffffffff) goto LAB_01fc1514;
        local_e8 = (undefined *)CONCAT44(local_e8._4_4_,local_d0);
        if (local_d0 < 3) {
          lVar12 = *(long *)(&DAT_04179440 + (long)(int)local_d0 * 8);
        }
        else {
          lVar12 = 0x5e;
        }
        pcVar13 = *(code **)(*plVar16 + lVar12 * 8);
LAB_01fc1a20:
        (*pcVar13)(&local_c8,plVar16);
LAB_01fc1a28:
        uVar8 = FUN_01fc1b30(&local_68,&local_c8);
        if ((uVar8 & 1) == 0) goto LAB_01fc1514;
      }
      else {
        if (uVar6 == 0xffffffff) {
LAB_01fc1674:
          local_d0 = puVar17[1];
          if (local_d0 != 0xffffffff) {
            local_e8 = (undefined *)CONCAT44(local_e8._4_4_,local_d0);
            if (local_d0 == 0) {
              uVar9 = *param_3;
              uVar11 = param_3[1];
LAB_01fc1714:
              local_c8 = CONCAT44(uVar11,uVar9);
            }
            else {
              if (local_d0 == 2) {
                uVar9 = param_3[6];
                uVar11 = param_3[7];
                goto LAB_01fc1714;
              }
              if (local_d0 == 1) {
                uVar9 = param_3[2];
                uVar11 = param_3[3];
                goto LAB_01fc1714;
              }
              (**(code **)(*plVar16 + 0x2f0))(&local_c8,plVar16);
            }
            uVar8 = FUN_01fc1b30(&local_68,&local_c8);
            if ((uVar8 & 1) != 0) goto LAB_01fc1a38;
          }
          local_d0 = *puVar17;
          if (local_d0 == 0xffffffff) goto LAB_01fc1514;
          local_e8 = (undefined *)CONCAT44(local_e8._4_4_,local_d0);
          if (local_d0 == 0) {
            uVar9 = *param_3;
            uVar11 = param_3[1];
          }
          else if (local_d0 == 2) {
            uVar9 = param_3[6];
            uVar11 = param_3[7];
          }
          else {
            if (local_d0 != 1) {
              pcVar13 = *(code **)(*plVar16 + 0x2f0);
              goto LAB_01fc1a20;
            }
            uVar9 = param_3[2];
            uVar11 = param_3[3];
          }
          local_c8 = CONCAT44(uVar11,uVar9);
          goto LAB_01fc1a28;
        }
        local_e8 = (undefined *)CONCAT44(local_e8._4_4_,uVar6);
        if (uVar6 == 2) {
          uVar9 = param_3[6];
          uVar11 = param_3[7];
LAB_01fc1648:
          local_c8 = CONCAT44(uVar11,uVar9);
        }
        else {
          if (uVar6 == 1) {
            uVar9 = param_3[2];
            uVar11 = param_3[3];
            goto LAB_01fc1648;
          }
          if (uVar6 == 0) {
            uVar9 = *param_3;
            uVar11 = param_3[1];
            goto LAB_01fc1648;
          }
          (**(code **)(*plVar16 + 0x2f0))(&local_c8,plVar16);
        }
        uVar8 = FUN_01fc1b30(&local_68,&local_c8);
        if ((uVar8 & 1) == 0) goto LAB_01fc1674;
      }
LAB_01fc1a38:
      uVar6 = 1;
      goto LAB_01fc1518;
    }
  }
LAB_01fc1514:
  uVar6 = 0;
LAB_01fc1518:
  return uVar6 & 1;
}

