
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016c6f10(uint param_1)

{
  undefined1 *puVar1;
  void *pvVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 *******pppppppuVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  long *plVar13;
  uint uVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined4 uVar19;
  undefined1 *puVar20;
  long lVar21;
  uint uVar22;
  undefined *local_150;
  char *local_148;
  undefined8 local_140;
  undefined1 local_135;
  uint local_130;
  int iStack_12c;
  undefined8 local_128;
  undefined1 *local_120;
  undefined8 *******local_118;
  undefined8 *******pppppppuStack_110;
  undefined8 *******local_108;
  undefined8 ******local_100;
  undefined8 *****local_f8;
  undefined8 ****local_f0;
  undefined8 ***local_e8;
  undefined8 **local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [64];
  undefined *local_88;
  undefined1 *local_80;
  undefined4 local_78;
  undefined1 local_74 [7];
  undefined1 local_6d;
  
  if (7 < param_1) {
    return 0;
  }
  if (DAT_05574040 == 0) {
LAB_016c6fb8:
    lVar21 = 0;
    lVar10 = _DAT_00000028;
    if (_DAT_00000028 != 0) goto LAB_016c6fc4;
LAB_016c6fb0:
    uVar18 = 0;
  }
  else {
    puVar15 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar10 = (**(code **)(*(long *)*puVar15 + 0x38))();
      if (lVar10 == 0) goto LAB_016c6fb8;
      lVar10 = lVar10 + 0x70;
    }
    else if (((puVar15 == (undefined8 *)0x0) || ((long *)puVar15[0x26] == (long *)0x0)) ||
            (lVar10 = (**(code **)(*(long *)puVar15[0x26] + 0x38))(), lVar10 == 0))
    goto LAB_016c6fb8;
    lVar10 = lVar10 + (ulong)param_1 * 0xc40;
    lVar21 = lVar10 + 0x20b9e8;
    lVar10 = *(long *)(lVar10 + 0x20ba10);
    if (lVar10 == 0) goto LAB_016c6fb0;
LAB_016c6fc4:
    if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
      uVar18 = 0;
      plVar13 = *(long **)(lVar10 + 0x20);
joined_r0x016c72b4:
      if (plVar13 != (long *)0x0) {
        local_128 = *(ulong *)(lVar21 + 8);
        local_120 = *(undefined1 **)(lVar21 + 0x10);
        local_118 = (undefined8 *******)0x158c;
        (**(code **)(*plVar13 + 0x20))(plVar13,&local_128);
      }
    }
    else {
      uVar18 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      uVar18 = uVar18 & 0xffffffff;
      if (*(long *)(lVar21 + 0x28) != 0) {
        plVar13 = *(long **)(*(long *)(lVar21 + 0x28) + 0x20);
        goto joined_r0x016c72b4;
      }
    }
  }
  puVar6 = PTR_DAT_04bb3768;
  if ((*(byte *)(*(long *)(lVar21 + 0x10) + *(long *)(lVar21 + 8)) & 1) != 0) {
    local_6d = 0;
    local_78 = 8;
    local_80 = local_74;
    local_74[0] = 0;
    local_88 = PTR_DAT_04bb3768 + 0x10;
    if ((*(long **)(lVar21 + 0x6f0) == (long *)0x0) ||
       (puVar15 = (undefined8 *)**(long **)(lVar21 + 0x6f0), puVar15 == (undefined8 *)0x0)) {
      FUN_02774cf0(*(long *)(lVar21 + 0x6d8) + *(long *)(lVar21 + 0x6d0),&local_88);
    }
    else {
      uVar11 = (**(code **)*puVar15)();
      FUN_02774cf0(*(long *)(lVar21 + 0x6d8) + *(long *)(lVar21 + 0x6d0),&local_88);
      if ((((uVar11 & 1) != 0) && (*(long *)(lVar21 + 0x6f0) != 0)) &&
         (puVar15 = *(undefined8 **)(*(long *)(lVar21 + 0x6f0) + 8), puVar15 != (undefined8 *)0x0))
      {
        (**(code **)*puVar15)();
      }
    }
    iVar9 = FUN_021d7e50(&local_88);
    if (iVar9 == -1) {
      uVar19 = 0;
      goto LAB_016c78f4;
    }
    if (iVar9 < 8) {
      local_128 = 0;
      local_120 = (undefined1 *)0x0;
      local_108 = &local_100;
      local_100 = &local_f8;
      local_118 = &local_108;
      local_f8 = &local_f0;
      local_f0 = &local_e8;
      local_e8 = &local_e0;
      local_e0 = &local_d8;
      local_d8 = &local_d0;
      local_d0 = 0;
      if (auStack_c8 != (undefined1 *)0x0) {
        local_128 = 0x800000000;
        local_120 = auStack_c8;
      }
      iVar9 = 0;
      pppppppuStack_110 = local_118;
      do {
        local_130 = local_130 & 0xffffff00;
        iStack_12c = iVar9;
        uVar11 = FUN_016cedbc(&local_130);
        if ((uVar11 & 1) != 0) {
          if ((iStack_12c == -1) || (DAT_05574040 == 0)) {
LAB_016c71c4:
            lVar10 = 0;
          }
          else {
            puVar15 = *(undefined8 **)(DAT_05574040 + 0x10);
            if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
              lVar10 = (**(code **)(*(long *)*puVar15 + 0x38))();
              if (lVar10 == 0) goto LAB_016c71c4;
              lVar10 = lVar10 + 0x70;
            }
            else if (((puVar15 == (undefined8 *)0x0) || ((long *)puVar15[0x26] == (long *)0x0)) ||
                    (lVar10 = (**(code **)(*(long *)puVar15[0x26] + 0x38))(), lVar10 == 0))
            goto LAB_016c71c4;
            if ((char)local_130 == '\0') {
              uVar14 = 0x57b0;
            }
            else {
              uVar14 = 0xb9e8;
            }
            lVar10 = lVar10 + (long)iStack_12c * 0xc40 + (ulong)(uVar14 | 0x200000);
          }
          local_135 = 0;
          local_140 = CONCAT35(local_140._5_3_,8);
          local_150 = puVar6 + 0x10;
          local_148 = (char *)((long)&local_140 + 4);
          if ((*(long **)(lVar10 + 0x6f0) == (long *)0x0) ||
             (puVar15 = (undefined8 *)**(long **)(lVar10 + 0x6f0), puVar15 == (undefined8 *)0x0)) {
            FUN_02774cf0(*(long *)(lVar10 + 0x6d8) + *(long *)(lVar10 + 0x6d0),&local_150);
          }
          else {
            uVar11 = (**(code **)*puVar15)();
            FUN_02774cf0(*(long *)(lVar10 + 0x6d8) + *(long *)(lVar10 + 0x6d0),&local_150);
            if ((((uVar11 & 1) != 0) && (*(long *)(lVar10 + 0x6f0) != 0)) &&
               (puVar15 = *(undefined8 **)(*(long *)(lVar10 + 0x6f0) + 8),
               puVar15 != (undefined8 *)0x0)) {
              (**(code **)*puVar15)();
            }
          }
          pppppppuVar7 = local_118;
          if (*local_148 == '\0') {
            if ((int)local_128 < local_128._4_4_) {
              if (local_118 != (undefined8 *******)0x0) {
                local_118 = (undefined8 *******)*local_118;
              }
              *pppppppuVar7 = (undefined8 ******)CONCAT44(iStack_12c,local_130);
              if ((int)local_128 < local_128._4_4_) {
                *(undefined8 ********)(local_120 + (long)(int)local_128 * 8) = pppppppuVar7;
                local_128 = CONCAT44(local_128._4_4_,(int)local_128 + 1);
              }
            }
          }
        }
        uVar11 = local_128;
        iVar9 = iVar9 + 1;
      } while (iVar9 != 8);
      uVar19 = 0;
      if ((int)local_128 == 0) goto LAB_016c78f4;
      puVar12 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar14 = *puVar12 ^ *puVar12 << 0xb;
      uVar22 = puVar12[3];
      *puVar12 = puVar12[1];
      puVar12[1] = puVar12[2];
      uVar14 = uVar14 >> 8 ^ uVar22 >> 0x13 ^ uVar14 ^ uVar22;
      puVar12[2] = uVar22;
      puVar12[3] = uVar14;
      uVar11 = **(ulong **)(local_120 + ((long)((uVar11 & 0xffffffff) * (ulong)uVar14) >> 0x20) * 8)
      ;
      if ((uVar11 < 0xffffffff00000000) && (DAT_05574040 != 0)) {
        puVar15 = *(undefined8 **)(DAT_05574040 + 0x10);
        if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
          lVar10 = (**(code **)(*(long *)*puVar15 + 0x38))();
          if (lVar10 == 0) goto LAB_016c7454;
          lVar10 = lVar10 + 0x70;
        }
        else if (((puVar15 == (undefined8 *)0x0) || ((long *)puVar15[0x26] == (long *)0x0)) ||
                (lVar10 = (**(code **)(*(long *)puVar15[0x26] + 0x38))(), lVar10 == 0))
        goto LAB_016c7454;
        lVar10 = lVar10 + (long)(int)(uVar11 >> 0x20) * 0xc40;
        if ((uVar11 & 0xff) == 0) {
          puVar20 = &LAB_002057b0 + lVar10;
          lVar10 = *(long *)(lVar10 + 0x205ea0);
          goto joined_r0x016c745c;
        }
        puVar20 = (undefined1 *)(lVar10 + 0x20b9e8);
        lVar10 = *(long *)(lVar10 + 0x20c0d8);
        if (lVar10 == 0) goto LAB_016c74c8;
LAB_016c7460:
        if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
          uVar11 = 0;
        }
        else {
          uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
          lVar10 = *(long *)(puVar20 + 0x6f0);
          uVar11 = uVar11 & 0xffffffff;
          if (lVar10 == 0) goto LAB_016c74cc;
        }
        plVar13 = *(long **)(lVar10 + 0x20);
        if (plVar13 != (long *)0x0) {
          local_150 = *(undefined **)(puVar20 + 0x6d0);
          local_148 = *(char **)(puVar20 + 0x6d8);
          local_140 = 5;
          (**(code **)(*plVar13 + 0x20))(plVar13,&local_150);
        }
      }
      else {
LAB_016c7454:
        puVar20 = (undefined1 *)0x0;
        lVar10 = lRam00000000000006f0;
joined_r0x016c745c:
        if (lVar10 != 0) goto LAB_016c7460;
LAB_016c74c8:
        uVar11 = 0;
      }
LAB_016c74cc:
      puVar1 = (undefined1 *)(*(long *)(puVar20 + 0x6d8) + *(long *)(puVar20 + 0x6d0));
      (**(code **)(local_88 + 0x18))(&local_88);
      lVar10 = 0;
      do {
        if (local_80[lVar10] == '\0') {
LAB_016c7538:
          if (5 < (int)lVar10) goto LAB_016c77ec;
          break;
        }
        if (local_80[lVar10 + 1] == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_016c7538;
        }
        if (local_80[lVar10 + 2] == '\0') {
          lVar10 = lVar10 + 2;
          goto LAB_016c7538;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      (**(code **)(local_88 + 0x18))(&local_88);
      lVar10 = 0;
      do {
        if (local_80[lVar10] == '\0') {
LAB_016c759c:
          uVar22 = (uint)lVar10;
          uVar14 = uVar22;
          if (4 < (int)uVar22) {
            uVar14 = 5;
          }
          if ((int)uVar22 < 1) goto LAB_016c77d4;
          uVar4 = uVar14;
          if ((int)uVar14 < 2) {
            uVar4 = 1;
          }
          (**(code **)(local_88 + 0x18))(&local_88);
          lVar10 = 0;
          goto LAB_016c75d4;
        }
        if (local_80[lVar10 + 1] == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_016c759c;
        }
        if (local_80[lVar10 + 2] == '\0') {
          lVar10 = lVar10 + 2;
          goto LAB_016c759c;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      uVar14 = 0;
      goto LAB_016c77d4;
    }
    lVar10 = FUN_021c9770(iVar9,0);
    if (lVar10 != 0) {
      FUN_0219f688();
    }
    lVar10 = FUN_016c91a4(iVar9);
    if (lVar10 != 0) {
      lVar16 = *(long *)(lVar10 + 0x28);
      if (lVar16 == 0) {
        uVar11 = 0;
      }
      else {
        if (*(undefined8 **)(lVar16 + 0x10) == (undefined8 *)0x0) {
          uVar11 = 0;
        }
        else {
          uVar11 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
          lVar16 = *(long *)(lVar10 + 0x28);
          uVar11 = uVar11 & 0xffffffff;
          if (lVar16 == 0) goto LAB_016c73d4;
        }
        plVar13 = *(long **)(lVar16 + 0x20);
        if (plVar13 != (long *)0x0) {
          local_128 = *(ulong *)(lVar10 + 8);
          local_120 = *(undefined1 **)(lVar10 + 0x10);
          local_118 = (undefined8 *******)0x1638;
          (**(code **)(*plVar13 + 0x20))(plVar13,&local_128);
        }
      }
LAB_016c73d4:
      pvVar2 = (void *)(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8));
      memset(pvVar2,0,0x1638);
      *(undefined4 *)((long)pvVar2 + 0x1630) = 7;
      *(undefined1 *)((long)pvVar2 + 0x1635) = 4;
      if ((uVar11 & 1) != 0) {
        lVar10 = *(long *)(lVar10 + 0x28);
        goto joined_r0x016c77f4;
      }
    }
    goto LAB_016c780c;
  }
  goto LAB_016c78f0;
LAB_016c75d4:
  if ((local_80[lVar10] == '\0') || (local_80[lVar10 + 1] == '\0')) goto LAB_016c75fc;
  if ((local_80[lVar10 + 2] == '\0') || (bVar8 = lVar10 == 0x7fffe, lVar10 = lVar10 + 3, bVar8))
  goto LAB_016c75fc;
  goto LAB_016c75d4;
LAB_016c75fc:
  *puVar1 = *local_80;
  if (1 < (int)uVar14) {
    (**(code **)(local_88 + 0x18))(&local_88);
    puVar3 = PTR_DAT_04bb2120;
    lVar10 = 0;
    do {
      if (local_80[lVar10] == '\0') goto LAB_016c7660;
      if (local_80[lVar10 + 1] == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_016c7660;
      }
      if (local_80[lVar10 + 2] == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_016c7660;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_016c7660:
    puVar5 = PTR_DAT_04bb2120;
    if ((int)lVar10 != 0) {
      puVar5 = local_80 + 1;
    }
    puVar1[1] = *puVar5;
    if (uVar4 != 2) {
      (**(code **)(local_88 + 0x18))(&local_88);
      uVar17 = 0;
      do {
        if (local_80[uVar17] == '\0') goto LAB_016c76d4;
        if (local_80[uVar17 + 1] == '\0') {
          uVar17 = uVar17 + 1;
          goto LAB_016c76d4;
        }
        if (local_80[uVar17 + 2] == '\0') {
          uVar17 = uVar17 + 2;
          goto LAB_016c76d4;
        }
        uVar17 = uVar17 + 3;
      } while (uVar17 != 0x80001);
      uVar17 = 0;
LAB_016c76d4:
      puVar5 = puVar3;
      if ((uVar17 & 0xfffffffe) != 0) {
        puVar5 = local_80 + 2;
      }
      puVar1[2] = *puVar5;
      if (uVar4 != 3) {
        (**(code **)(local_88 + 0x18))(&local_88);
        uVar17 = 0;
        do {
          if (local_80[uVar17] == '\0') goto LAB_016c7744;
          if (local_80[uVar17 + 1] == '\0') {
            uVar17 = uVar17 + 1;
            goto LAB_016c7744;
          }
          if (local_80[uVar17 + 2] == '\0') {
            uVar17 = uVar17 + 2;
            goto LAB_016c7744;
          }
          uVar17 = uVar17 + 3;
        } while (uVar17 != 0x80001);
        uVar17 = 0;
LAB_016c7744:
        puVar5 = puVar3;
        if (2 < (uVar17 & 0xffffffff)) {
          puVar5 = local_80 + 3;
        }
        puVar1[3] = *puVar5;
        if (uVar4 != 4) {
          (**(code **)(local_88 + 0x18))(&local_88);
          uVar17 = 0;
          do {
            if (local_80[uVar17] == '\0') goto LAB_016c77b8;
            if (local_80[uVar17 + 1] == '\0') {
              uVar17 = uVar17 + 1;
              goto LAB_016c77b8;
            }
            if (local_80[uVar17 + 2] == '\0') {
              uVar17 = uVar17 + 2;
              goto LAB_016c77b8;
            }
            uVar17 = uVar17 + 3;
          } while (uVar17 != 0x80001);
          uVar17 = 0;
LAB_016c77b8:
          if ((uVar17 & 0xfffffffc) != 0) {
            puVar3 = local_80 + 4;
          }
          puVar1[4] = *puVar3;
        }
      }
    }
  }
  if ((int)uVar22 < 5) {
LAB_016c77d4:
    memset(puVar1 + uVar14,0,5 - (ulong)uVar14);
  }
LAB_016c77ec:
  if ((uVar11 & 1) != 0) {
    lVar10 = *(long *)(puVar20 + 0x6f0);
joined_r0x016c77f4:
    if ((lVar10 != 0) && (*(undefined8 **)(lVar10 + 0x18) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(lVar10 + 0x18))();
    }
  }
LAB_016c780c:
  lVar10 = *(long *)(lVar21 + 0x28);
  if (lVar10 == 0) {
    uVar11 = 0;
  }
  else {
    if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      lVar10 = *(long *)(lVar21 + 0x28);
      uVar11 = uVar11 & 0xffffffff;
      if (lVar10 == 0) goto LAB_016c786c;
    }
    plVar13 = *(long **)(lVar10 + 0x20);
    if (plVar13 != (long *)0x0) {
      local_128 = *(ulong *)(lVar21 + 8);
      local_120 = *(undefined1 **)(lVar21 + 0x10);
      local_118 = (undefined8 *******)0x158c;
      (**(code **)(*plVar13 + 0x20))(plVar13,&local_128);
    }
  }
LAB_016c786c:
  pvVar2 = (void *)(*(long *)(lVar21 + 0x10) + *(long *)(lVar21 + 8));
  memset(pvVar2,0,0x158c);
  *(undefined2 *)((long)pvVar2 + 2) = 0xffff;
  FUN_028f8bb0((long)pvVar2 + 4);
  *(undefined8 *)((long)pvVar2 + 0x1578) = 0;
  *(undefined4 *)((long)pvVar2 + 0x1560) = 0;
  *(undefined1 *)((long)pvVar2 + 0x1564) = 0;
  *(undefined8 *)((long)pvVar2 + 0x157e) = 0;
  *(undefined8 *)((long)pvVar2 + 0x1568) = 0;
  *(undefined8 *)((long)pvVar2 + 0x1570) = 0;
  *(undefined4 *)((long)pvVar2 + 0x1586) = 0x101;
  *(undefined1 *)((long)pvVar2 + 0x158a) = 0;
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar21 + 0x28) != 0)) &&
     (puVar15 = *(undefined8 **)(*(long *)(lVar21 + 0x28) + 0x18), puVar15 != (undefined8 *)0x0)) {
    (**(code **)*puVar15)();
  }
LAB_016c78f0:
  uVar19 = 1;
LAB_016c78f4:
  if ((((uVar18 & 1) != 0) && (*(long *)(lVar21 + 0x28) != 0)) &&
     (puVar15 = *(undefined8 **)(*(long *)(lVar21 + 0x28) + 0x18), puVar15 != (undefined8 *)0x0)) {
    (**(code **)*puVar15)();
  }
  return uVar19;
}

