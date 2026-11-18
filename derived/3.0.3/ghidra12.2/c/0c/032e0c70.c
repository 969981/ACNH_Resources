
ulong FUN_032e0c70(long param_1,long *param_2,long *param_3,uint param_4,long *param_5)

{
  uint *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  bool bVar7;
  uint uVar8;
  void *__dest;
  ushort *puVar9;
  ushort uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint uVar17;
  int iVar18;
  undefined8 *puVar19;
  ushort *puVar20;
  uint uVar21;
  long lVar22;
  ushort *puVar23;
  long *plVar24;
  ushort *puVar25;
  long lVar26;
  uint local_7c;
  undefined **local_78;
  ushort *local_70;
  undefined8 uStack_68;
  
  puVar19 = (undefined8 *)(param_1 + 0xa0);
  *puVar19 = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (0 < (int)param_4) {
    uVar12 = 0;
    puVar14 = puVar19;
    do {
      uVar21 = *(uint *)(param_5 + 3);
      if (((int)uVar21 < 0) && (*(uint *)(param_5 + 3) = uVar21 + 8, uVar21 < 0xfffffff9)) {
        puVar16 = (undefined8 *)(param_5[1] + (long)(int)uVar21);
      }
      else {
        puVar16 = (undefined8 *)*param_5;
        *param_5 = (long)(puVar16 + 1);
      }
      bVar7 = 0xb < uVar12;
      uVar12 = uVar12 + 1;
      puVar3 = puVar14;
      if (bVar7) {
        puVar3 = puVar19;
      }
      puVar14 = puVar14 + 1;
      *puVar3 = *puVar16;
    } while (param_4 != uVar12);
  }
  (**(code **)(*param_3 + 0x18))(param_3);
  (**(code **)(*param_3 + 0x18))(param_3);
  uVar10 = *(ushort *)param_3[1];
  if (uVar10 == 0) {
    uVar21 = 0;
LAB_032e1a14:
    return (ulong)uVar21;
  }
  uVar21 = 0;
  puVar20 = (ushort *)param_3[1];
LAB_032e0da4:
  if ((uVar10 & 0xfffe) == 0xe) {
    if (uVar10 == 0xe) {
      puVar25 = (ushort *)((long)puVar20 + (ulong)puVar20[3] + 8);
LAB_032e0e3c:
      puVar23 = puVar20;
    }
    else {
      if (uVar10 == 0xf) {
        puVar25 = puVar20 + 3;
        goto LAB_032e0e3c;
      }
      puVar23 = (ushort *)0x0;
      puVar25 = puVar20;
    }
    if (puVar23[1] == 2) {
      if (param_4 == 0) {
LAB_032e1474:
        uVar8 = 0;
        goto LAB_032e1478;
      }
      uVar10 = puVar23[2];
      puVar1 = (uint *)(puVar23 + 4);
      uVar17 = uVar21;
      if (uVar10 < 0xc) {
        uVar13 = (ulong)*puVar1;
        uVar12 = 0;
        if (0xb < *puVar1) {
          uVar13 = 0;
        }
        puVar23 = *(ushort **)(puVar19[uVar13] + 8);
        puVar20 = puVar23 + 1;
        do {
          if (puVar20[-1] == 0) goto LAB_032e1348;
          if (*puVar20 == 0) {
            uVar12 = uVar12 + 1;
            goto LAB_032e1348;
          }
          if (puVar20[1] == 0) {
            uVar12 = uVar12 + 2;
            goto LAB_032e1348;
          }
          uVar12 = uVar12 + 3;
          puVar20 = puVar20 + 3;
        } while (uVar12 != 0x80001);
        uVar12 = 0;
LAB_032e1348:
        uVar8 = (uint)uVar12;
        lVar22 = param_2[1];
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar26 = 0;
        do {
          if (*(short *)(param_2[1] + lVar26 * 2) == 0) goto LAB_032e139c;
          lVar2 = param_2[1] + lVar26 * 2;
          if (*(short *)(lVar2 + 2) == 0) {
            lVar26 = lVar26 + 1;
            goto LAB_032e139c;
          }
          if (*(short *)(lVar2 + 4) == 0) {
            lVar26 = lVar26 + 2;
            goto LAB_032e139c;
          }
          lVar26 = lVar26 + 3;
        } while (lVar26 != 0x80001);
        lVar26 = 0;
LAB_032e139c:
        iVar18 = (int)lVar26;
        iVar11 = iVar18 + uVar21;
        if (iVar11 < 0 != SCARRY4(iVar18,uVar21)) {
          iVar11 = -1;
        }
        if ((int)uVar21 < 0) {
          uVar17 = iVar11 + 1;
        }
        uVar12 = uVar12 & 0xffffffff;
        if ((int)uVar8 < 0) {
          uVar12 = 0;
          do {
            if (puVar23[uVar12] == 0) goto LAB_032e13b4;
            if (puVar23[uVar12 + 1] == 0) {
              uVar12 = uVar12 + 1;
              goto LAB_032e13b4;
            }
            if (puVar23[uVar12 + 2] == 0) {
              uVar12 = uVar12 + 2;
              goto LAB_032e13b4;
            }
            uVar12 = uVar12 + 3;
          } while (uVar12 != 0x80001);
          uVar12 = 0;
        }
LAB_032e13b4:
        uVar15 = (uint)uVar12;
        if ((int)((int)param_2[2] - uVar17) <= (int)(uint)uVar12) {
          uVar15 = (int)param_2[2] + ~uVar17;
        }
        if ((int)uVar15 < 1) goto LAB_032e1478;
        __dest = (void *)(lVar22 + (long)(int)uVar17 * 2);
LAB_032e13e0:
        memcpy(__dest,puVar23,(ulong)uVar15 << 1);
        if (iVar18 < (int)(uVar15 + uVar17)) {
          *(undefined2 *)(lVar22 + (long)(int)(uVar15 + uVar17) * 2) = 0;
        }
        goto LAB_032e1478;
      }
      if (uVar10 == 0x15) {
        uVar10 = puVar23[4];
        puVar23 = puVar23 + 5;
        uVar4 = *(ushort *)((long)puVar23 + (ulong)uVar10);
        (**(code **)(*param_2 + 0x18))(param_2);
        puVar20 = (ushort *)param_2[1];
        if ((puVar20[(long)(int)uVar21 + -1] == 0x31) &&
           (puVar20[(long)(int)uVar21 + -2] - 0x3a < 0xfffffff6)) {
          uVar8 = (uint)(uVar10 >> 1);
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar26 = 0;
          do {
            if (*(short *)(param_2[1] + lVar26 * 2) == 0) goto LAB_032e14f4;
            lVar22 = param_2[1] + lVar26 * 2;
            if (*(short *)(lVar22 + 2) == 0) goto LAB_032e14e8;
            if (*(short *)(lVar22 + 4) == 0) goto LAB_032e14f0;
            lVar26 = lVar26 + 3;
          } while (lVar26 != 0x80001);
        }
        else {
          uVar8 = (uint)(uVar4 >> 1);
          puVar23 = (ushort *)((long)puVar1 + (ulong)uVar10 + 4);
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar26 = 0;
          do {
            if (*(short *)(param_2[1] + lVar26 * 2) == 0) goto LAB_032e14f4;
            lVar22 = param_2[1] + lVar26 * 2;
            if (*(short *)(lVar22 + 2) == 0) goto LAB_032e14e8;
            if (*(short *)(lVar22 + 4) == 0) goto LAB_032e14f0;
            lVar26 = lVar26 + 3;
          } while (lVar26 != 0x80001);
        }
        lVar26 = 0;
        goto LAB_032e14f4;
      }
      if (uVar10 == 0x13) {
        puVar20 = puVar23 + 4;
        uVar12 = (ulong)*puVar20;
        uVar10 = *(ushort *)((long)puVar23 + uVar12 + 10);
        lVar26 = uVar10 + uVar12;
        if ((*(short *)((long)puVar20 + lVar26 + 4) == 0xe) &&
           (*(ushort *)((long)puVar20 + lVar26 + 8) < 0xc)) {
          uVar17 = *(uint *)((long)puVar20 + lVar26 + 0xc);
          uVar13 = (ulong)uVar17;
          if (0xb < uVar17) {
            uVar13 = 0;
          }
          plVar24 = (long *)puVar19[uVar13];
          (**(code **)(*plVar24 + 0x18))(plVar24);
          if (*(ushort *)plVar24[1] - 0x41 < 0x138) {
                    /* WARNING: Could not recover jumptable at 0x032e101c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar12 = (*(code *)(&UNK_032e1020 +
                               (ulong)(byte)(&DAT_041848c0)[*(ushort *)plVar24[1] - 0x41] * 4))();
            return uVar12;
          }
        }
        uVar8 = (uint)(uVar10 >> 1);
        lVar22 = param_2[1];
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar26 = 0;
        do {
          if (*(short *)(param_2[1] + lVar26 * 2) == 0) goto LAB_032e1540;
          lVar2 = param_2[1] + lVar26 * 2;
          if (*(short *)(lVar2 + 2) == 0) {
            lVar26 = lVar26 + 1;
            goto LAB_032e1540;
          }
          if (*(short *)(lVar2 + 4) == 0) {
            lVar26 = lVar26 + 2;
            goto LAB_032e1540;
          }
          lVar26 = lVar26 + 3;
        } while (lVar26 != 0x80001);
        lVar26 = 0;
LAB_032e1540:
        iVar18 = (int)lVar26;
        iVar11 = iVar18 + uVar21;
        if (iVar11 < 0 != SCARRY4(iVar18,uVar21)) {
          iVar11 = -1;
        }
        uVar17 = uVar21;
        if ((int)uVar21 < 0) {
          uVar17 = iVar11 + 1;
        }
        uVar15 = uVar8;
        if ((int)((int)param_2[2] - uVar17) <= (int)uVar8) {
          uVar15 = (int)param_2[2] + ~uVar17;
        }
        if (0 < (int)uVar15) {
          memcpy((void *)(lVar22 + (ulong)uVar17 * 2),(void *)((long)puVar1 + uVar12 + 4),
                 (ulong)uVar15 << 1);
          if (iVar18 < (int)(uVar15 + uVar17)) {
            *(undefined2 *)(lVar22 + (ulong)(uVar15 + uVar17) * 2) = 0;
          }
        }
        goto LAB_032e1478;
      }
      if ((uVar10 & 0xfffe) != 0x16) {
        if (uVar10 != 0x14) goto LAB_032e1474;
        uVar8 = 0;
        if ((*(long *)PTR_DAT_04bc9298 != 0) && (DAT_0572cca8 != (long *)0x0)) {
          if (*(int *)(*(long *)(*(long *)PTR_DAT_04bc9298 + 0x210) + 0x60) == 10) {
            uVar8 = 0;
          }
          else {
            uVar8 = (**(code **)(*DAT_0572cca8 + 0x60))();
            uVar8 = uVar8 ^ 1;
          }
        }
        uStack_68 = 2;
        local_78 = (undefined **)&DAT_04b1c250;
        local_7c = 0x20;
        switch((char)puVar23[6]) {
        case '\0':
          if ((uVar8 & 1) == 0) {
            uVar10 = 0xe0a0;
          }
          else {
            uVar10 = 0xe0ab;
          }
          break;
        case '\x01':
          if ((uVar8 & 1) == 0) {
            uVar10 = 0xe0a1;
          }
          else {
            uVar10 = 0xe0ac;
          }
          break;
        case '\x02':
          if ((uVar8 & 1) == 0) {
            uVar10 = 0xe0a2;
          }
          else {
            uVar10 = 0xe0ad;
          }
          break;
        case '\x03':
          if ((uVar8 & 1) == 0) {
            uVar10 = 0xe0a3;
          }
          else {
            uVar10 = 0xe0ae;
          }
          break;
        default:
          goto switchD_032e1700_default;
        }
        local_7c = (uint)uVar10;
switchD_032e1700_default:
        local_70 = (ushort *)((long)&uStack_68 + 4);
        FUN_038d1540(&local_78,&DAT_04169b80,&local_7c);
        (*(code *)local_78[3])(&local_78);
        uVar12 = 0;
        do {
          if (local_70[uVar12] == 0) goto LAB_032e1900;
          if (local_70[uVar12 + 1] == 0) {
            uVar12 = uVar12 + 1;
            goto LAB_032e1900;
          }
          if (local_70[uVar12 + 2] == 0) {
            uVar12 = uVar12 + 2;
            goto LAB_032e1900;
          }
          uVar12 = uVar12 + 3;
        } while (uVar12 != 0x80001);
        uVar12 = 0;
LAB_032e1900:
        uVar8 = (uint)uVar12;
        lVar22 = param_2[1];
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar26 = 0;
        do {
          if (*(short *)(param_2[1] + lVar26 * 2) == 0) goto LAB_032e195c;
          lVar2 = param_2[1] + lVar26 * 2;
          if (*(short *)(lVar2 + 2) == 0) {
            lVar26 = lVar26 + 1;
            goto LAB_032e195c;
          }
          if (*(short *)(lVar2 + 4) == 0) {
            lVar26 = lVar26 + 2;
            goto LAB_032e195c;
          }
          lVar26 = lVar26 + 3;
        } while (lVar26 != 0x80001);
        lVar26 = 0;
LAB_032e195c:
        iVar18 = (int)lVar26;
        iVar11 = iVar18 + uVar21;
        if (iVar11 < 0 != SCARRY4(iVar18,uVar21)) {
          iVar11 = -1;
        }
        if ((int)uVar21 < 0) {
          uVar17 = iVar11 + 1;
        }
        uVar12 = uVar12 & 0xffffffff;
        if ((int)uVar8 < 0) {
          (*(code *)local_78[3])(&local_78);
          uVar12 = 0;
          do {
            if (local_70[uVar12] == 0) goto LAB_032e1974;
            if (local_70[uVar12 + 1] == 0) {
              uVar12 = uVar12 + 1;
              goto LAB_032e1974;
            }
            if (local_70[uVar12 + 2] == 0) {
              uVar12 = uVar12 + 2;
              goto LAB_032e1974;
            }
            uVar12 = uVar12 + 3;
          } while (uVar12 != 0x80001);
          uVar12 = 0;
        }
LAB_032e1974:
        uVar15 = (uint)uVar12;
        if ((int)((int)param_2[2] - uVar17) <= (int)(uint)uVar12) {
          uVar15 = (int)param_2[2] + ~uVar17;
        }
        if ((int)uVar15 < 1) goto LAB_032e1478;
        __dest = (void *)(lVar22 + (long)(int)uVar17 * 2);
        (*(code *)local_78[3])(&local_78);
        puVar23 = local_70;
        goto LAB_032e13e0;
      }
      uVar6 = (ushort)*puVar1;
      uVar4 = *(ushort *)((long)puVar1 + (ulong)uVar6 + 2);
      (**(code **)(*param_2 + 0x18))(param_2);
      puVar20 = (ushort *)param_2[1];
      if (uVar21 != 0) {
        uVar8 = 0;
        puVar9 = puVar20;
        do {
          uVar5 = *puVar9;
          uVar15 = (uint)uVar5;
          if ((uVar5 & 0xfffe) == 0xe) {
            if (uVar15 == 0xf) {
              puVar9 = puVar9 + 3;
            }
            else if (uVar15 == 0xe) {
              puVar9 = (ushort *)((long)puVar9 + (ulong)puVar9[3] + 8);
            }
          }
          else {
            if (((0x20 < uVar5) || ((1L << ((ulong)uVar5 & 0x3f) & 0x100002400U) == 0)) &&
               (uVar5 != 0x3000)) {
              uVar8 = uVar15;
            }
            puVar9 = puVar9 + 1;
          }
        } while (puVar9 < puVar20 + uVar21);
        if (uVar8 != 0) {
          if ((uVar8 + 0x5400 >> 2 & 0x3fff) < 0xae9) {
            uVar8 = (uVar8 - 0xac00) % 0x1c;
            if (uVar8 != 8 || uVar10 != 0x17) {
joined_r0x032e17a4:
              if (uVar8 != 0) goto LAB_032e17a8;
            }
          }
          else {
            if ((9 < (uVar8 - 0x30 & 0xffff)) && (9 < (uVar8 + 0xf0 & 0xffff))) {
LAB_032e17a8:
              uVar8 = (uint)(uVar6 >> 1);
              (**(code **)(*param_2 + 0x18))(param_2);
              lVar26 = 0;
              do {
                if (*(short *)(param_2[1] + lVar26 * 2) == 0) goto LAB_032e1824;
                lVar22 = param_2[1] + lVar26 * 2;
                if (*(short *)(lVar22 + 2) == 0) {
                  lVar26 = lVar26 + 1;
                  goto LAB_032e1824;
                }
                if (*(short *)(lVar22 + 4) == 0) {
                  lVar26 = lVar26 + 2;
                  goto LAB_032e1824;
                }
                lVar26 = lVar26 + 3;
              } while (lVar26 != 0x80001);
              lVar26 = 0;
LAB_032e1824:
              iVar18 = (int)lVar26;
              iVar11 = iVar18 + uVar21;
              if (iVar11 < 0 != SCARRY4(iVar18,uVar21)) {
                iVar11 = -1;
              }
              uVar17 = uVar21;
              if ((int)uVar21 < 0) {
                uVar17 = iVar11 + 1;
              }
              uVar15 = uVar8;
              if ((int)((int)param_2[2] - uVar17) <= (int)uVar8) {
                uVar15 = (int)param_2[2] + ~uVar17;
              }
              if (0 < (int)uVar15) {
                memcpy(puVar20 + uVar17,puVar23 + 5,(ulong)uVar15 << 1);
                if (iVar18 < (int)(uVar15 + uVar17)) {
                  puVar20[uVar15 + uVar17] = 0;
                }
              }
              goto LAB_032e1478;
            }
            iVar11 = -0x30;
            if (0x39 < uVar8) {
              iVar11 = -0xff10;
            }
            uVar8 = iVar11 + uVar8;
            if (uVar10 == 0x17) {
              if (uVar8 < 7) {
                uVar8 = 1 << (ulong)(uVar8 & 0x1f) & 0x49;
                goto joined_r0x032e17a4;
              }
            }
            else if ((9 < uVar8) || ((1 << (ulong)(uVar8 & 0x1f) & 0x234U) == 0)) goto LAB_032e17a8;
          }
        }
      }
      puVar23 = (ushort *)((long)puVar1 + (ulong)uVar6 + 4);
      uVar8 = (uint)(uVar4 >> 1);
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar26 = 0;
      do {
        if (*(short *)(param_2[1] + lVar26 * 2) == 0) goto LAB_032e1650;
        lVar22 = param_2[1] + lVar26 * 2;
        if (*(short *)(lVar22 + 2) == 0) {
          lVar26 = lVar26 + 1;
          goto LAB_032e1650;
        }
        if (*(short *)(lVar22 + 4) == 0) {
          lVar26 = lVar26 + 2;
          goto LAB_032e1650;
        }
        lVar26 = lVar26 + 3;
      } while (lVar26 != 0x80001);
      lVar26 = 0;
LAB_032e1650:
      iVar18 = (int)lVar26;
      iVar11 = iVar18 + uVar21;
      if (iVar11 < 0 != SCARRY4(iVar18,uVar21)) {
        iVar11 = -1;
      }
      if ((int)uVar21 < 0) {
        uVar17 = iVar11 + 1;
      }
      uVar15 = uVar8;
      if ((int)((int)param_2[2] - uVar17) <= (int)uVar8) {
        uVar15 = (int)param_2[2] + ~uVar17;
      }
      if ((int)uVar15 < 1) goto LAB_032e1478;
      puVar9 = puVar20 + uVar17;
      goto LAB_032e1690;
    }
    uVar12 = (ulong)((long)puVar25 - (long)puVar20) >> 1;
    uVar8 = (uint)uVar12;
    local_78 = &PTR_LAB_04952fa8;
    lVar22 = param_2[1];
    local_70 = puVar20;
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar26 = 0;
    do {
      if (*(short *)(param_2[1] + lVar26 * 2) == 0) goto LAB_032e1080;
      lVar2 = param_2[1] + lVar26 * 2;
      if (*(short *)(lVar2 + 2) == 0) {
        lVar26 = lVar26 + 1;
        goto LAB_032e1080;
      }
      if (*(short *)(lVar2 + 4) == 0) {
        lVar26 = lVar26 + 2;
        goto LAB_032e1080;
      }
      lVar26 = lVar26 + 3;
    } while (lVar26 != 0x80001);
    lVar26 = 0;
LAB_032e1080:
    iVar18 = (int)lVar26;
    iVar11 = iVar18 + uVar21;
    if (iVar11 < 0 != SCARRY4(iVar18,uVar21)) {
      iVar11 = -1;
    }
    uVar17 = uVar21;
    if ((int)uVar21 < 0) {
      uVar17 = iVar11 + 1;
    }
    uVar12 = uVar12 & 0xffffffff;
    if ((int)uVar8 < 0) {
      (*(code *)local_78[3])(&local_78);
      uVar12 = 0;
      do {
        if (local_70[uVar12] == 0) goto LAB_032e1098;
        if (local_70[uVar12 + 1] == 0) {
          uVar12 = uVar12 + 1;
          goto LAB_032e1098;
        }
        if (local_70[uVar12 + 2] == 0) {
          uVar12 = uVar12 + 2;
          goto LAB_032e1098;
        }
        uVar12 = uVar12 + 3;
      } while (uVar12 != 0x80001);
      uVar12 = 0;
    }
LAB_032e1098:
    uVar15 = (uint)uVar12;
    if ((int)((int)param_2[2] - uVar17) <= (int)(uint)uVar12) {
      uVar15 = (int)param_2[2] + ~uVar17;
    }
    if (0 < (int)uVar15) {
      (*(code *)local_78[3])(&local_78);
      memcpy((void *)(lVar22 + (long)(int)uVar17 * 2),local_70,(ulong)uVar15 << 1);
      if (iVar18 < (int)(uVar15 + uVar17)) {
        *(undefined2 *)(lVar22 + (long)(int)(uVar15 + uVar17) * 2) = 0;
      }
    }
    goto LAB_032e1478;
  }
  local_78 = (undefined **)(PTR_DAT_04bb8610 + 0x10);
  lVar22 = param_2[1];
  local_70 = puVar20;
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar26 = 0;
  do {
    if (*(short *)(param_2[1] + lVar26 * 2) == 0) goto LAB_032e0f2c;
    lVar2 = param_2[1] + lVar26 * 2;
    if (*(short *)(lVar2 + 2) == 0) {
      lVar26 = lVar26 + 1;
      goto LAB_032e0f2c;
    }
    if (*(short *)(lVar2 + 4) == 0) {
      lVar26 = lVar26 + 2;
      goto LAB_032e0f2c;
    }
    lVar26 = lVar26 + 3;
  } while (lVar26 != 0x80001);
  lVar26 = 0;
LAB_032e0f2c:
  iVar18 = (int)lVar26;
  iVar11 = iVar18 + uVar21;
  if (iVar11 < 0 != SCARRY4(iVar18,uVar21)) {
    iVar11 = -1;
  }
  uVar17 = uVar21;
  if ((int)uVar21 < 0) {
    uVar17 = iVar11 + 1;
  }
  uVar8 = (int)param_2[2] + ~uVar17;
  if (1 < (int)((int)param_2[2] - uVar17)) {
    uVar8 = 1;
  }
  if (0 < (int)uVar8) {
    (*(code *)local_78[3])(&local_78);
    memcpy((void *)(lVar22 + (long)(int)uVar17 * 2),local_70,(ulong)uVar8 << 1);
    if (iVar18 < (int)(uVar8 + uVar17)) {
      *(undefined2 *)(lVar22 + (long)(int)(uVar8 + uVar17) * 2) = 0;
    }
  }
  uVar21 = uVar21 + 1;
  puVar25 = puVar20 + 1;
  goto LAB_032e0d98;
LAB_032e14e8:
  lVar26 = lVar26 + 1;
  goto LAB_032e14f4;
LAB_032e14f0:
  lVar26 = lVar26 + 2;
LAB_032e14f4:
  iVar18 = (int)lVar26;
  iVar11 = iVar18 + uVar21;
  if (iVar11 < 0 != SCARRY4(iVar18,uVar21)) {
    iVar11 = -1;
  }
  if ((int)uVar21 < 0) {
    uVar17 = iVar11 + 1;
  }
  uVar15 = uVar8;
  if ((int)((int)param_2[2] - uVar17) <= (int)uVar8) {
    uVar15 = (int)param_2[2] + ~uVar17;
  }
  if (0 < (int)uVar15) {
    puVar9 = puVar20 + uVar17;
LAB_032e1690:
    memcpy(puVar9,puVar23,(ulong)uVar15 << 1);
    if (iVar18 < (int)(uVar15 + uVar17)) {
      puVar20[uVar15 + uVar17] = 0;
    }
  }
LAB_032e1478:
  uVar21 = uVar8 + uVar21;
LAB_032e0d98:
  uVar10 = *puVar25;
  puVar20 = puVar25;
  if (uVar10 == 0) goto LAB_032e1a14;
  goto LAB_032e0da4;
}

