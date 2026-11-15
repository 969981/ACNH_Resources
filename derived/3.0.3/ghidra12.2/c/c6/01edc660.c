
/* WARNING: Removing unreachable block (ram,0x01edc6b4) */
/* WARNING: Removing unreachable block (ram,0x01edc6c4) */

undefined8
FUN_01edc660(long param_1,long param_2,undefined8 param_3,long param_4,long param_5,byte param_6)

{
  uint *puVar1;
  long *plVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  char cVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  short sVar13;
  int iVar14;
  int iVar15;
  undefined *puVar16;
  undefined *puVar17;
  bool bVar18;
  bool bVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  undefined8 *puVar25;
  uint uVar26;
  uint uVar27;
  undefined8 uVar28;
  ulong uVar29;
  long lVar30;
  uint uVar31;
  int iVar32;
  long lVar33;
  uint uVar34;
  int iVar35;
  ulong uVar36;
  undefined1 *puVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  int iVar41;
  float fVar42;
  float fVar43;
  undefined1 *local_f0;
  undefined **ppuStack_e8;
  long local_e0;
  long lStack_d8;
  undefined *local_d0;
  undefined4 local_c4;
  undefined8 *local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined *local_78;
  undefined1 *local_70;
  
  *(undefined8 *)(param_1 + 0x56ec) = 0;
  *(undefined4 *)(param_1 + 0x56f4) = 0;
  local_c0 = (undefined8 *)((ulong)local_c0 & 0xffffffff00000000);
  local_d0 = *(undefined **)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (local_d0 == (undefined *)0x0) {
    return 0;
  }
  puVar3 = (undefined1 *)(param_1 + 0x188);
  ppuStack_e8 = &local_d0;
  uVar28 = *(undefined8 *)(param_1 + 0x8940);
  local_f0 = puVar3;
  local_e0 = param_1;
  lStack_d8 = param_2;
  memset((void *)(param_1 + 0x5470),2,0x20d);
  memset(*(void **)(param_1 + 0x5690),0,(long)*(int *)(param_1 + 0x568c) << 2);
  *(undefined4 *)(param_1 + 0x5698) = 0;
  FUN_035a4230(puVar3);
  local_b0 = &local_78;
  puStack_a8 = PTR_DAT_04bbc1a0 + 0x10;
  local_a0 = PTR_DAT_04bb2010 + 0x10;
  uStack_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = (undefined1 *)(*(long *)PTR_DAT_04bb27c8 + 0x28);
  local_78 = local_d0;
  local_c0 = (undefined8 *)(PTR_DAT_04bc1990 + 0x10);
  uVar29 = *(ulong *)(param_1 + 0x1a0);
  local_b8 = puVar3;
  local_90 = local_a0;
  if (uVar29 != 0) {
    uVar9 = *(ushort *)(param_1 + 0x188);
    uVar36 = 0;
    iVar21 = *(int *)(param_1 + 0x194);
    uVar38 = (uint)*(ushort *)(param_1 + 0x18a);
    uVar40 = (uint)uVar9;
    do {
      iVar20 = uVar40 - *(ushort *)(param_1 + 0x188);
      if ((((-1 < iVar20) && (iVar20 < *(int *)(param_1 + 0x194))) &&
          (iVar41 = uVar38 - *(ushort *)(param_1 + 0x18a), -1 < iVar41)) &&
         ((iVar41 < *(int *)(param_1 + 0x198) && (*(long *)(param_1 + 0x1a8) != 0)))) {
        (*(code *)*local_c0)
                  (&local_c0,
                   *(long *)(param_1 + 0x1a8) +
                   (long)(iVar20 + *(int *)(param_1 + 0x194) * iVar41) * 0x28);
        uVar29 = *(ulong *)(param_1 + 0x1a0);
      }
      uVar36 = uVar36 + 1;
      bVar19 = uVar40 + 1 == iVar21 + (uint)uVar9;
      if (bVar19) {
        uVar38 = uVar38 + 1;
      }
      uVar39 = (uint)uVar9;
      if (!bVar19) {
        uVar39 = uVar40 + 1;
      }
      uVar40 = uVar39;
    } while (uVar36 < uVar29);
  }
  FUN_035a56c0(puVar3,0);
  local_c4 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x230);
  FUN_02146570(puVar3,&local_c4,PTR_DAT_04bb3238,0);
  uVar5 = *(undefined4 *)(param_2 + 8);
  uVar6 = *(undefined4 *)(param_2 + 0xc);
  *(undefined1 *)(param_1 + 0x1d0) = 1;
  FUN_035a8968(puVar3,uVar5,uVar6);
  FUN_035a81f0(puVar3,uVar5,uVar6,uVar28);
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  FUN_035ac520(puVar3,(void *)(param_1 + 0x5470),param_1 + 0x5680,puVar3,0,0,
               *(undefined2 *)(param_1 + 0x188),*(undefined2 *)(param_1 + 0x18a),0x19,0x15);
  puVar17 = PTR_DAT_04bb5ce0;
  puVar16 = PTR_DAT_04bb2720;
  if ((*(long *)PTR_DAT_04bb5ce0 == 0) || (sVar13 = *(short *)PTR_DAT_04bb6298, sVar13 == -1)) {
LAB_01edc98c:
    uVar29 = FUN_0180b7a0();
    if ((uVar29 & 1) != 0) goto LAB_01edcb74;
    lVar30 = *(long *)puVar16;
    iVar21 = 0;
    if (lVar30 != 0) {
      if (*(long *)(lVar30 + 0x330) == 0) {
        iVar21 = 0;
      }
      else {
        puVar25 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar30 + 0x338));
        iVar20 = FUN_006bd550(*puVar25,0);
        iVar21 = 0;
        if (iVar20 == 0x758f7eaf) {
          iVar21 = 0;
          if (*(long *)puVar16 != 0) {
            lVar30 = *(long *)(*(long *)puVar16 + 0x330);
            iVar21 = 0;
            if (lVar30 != 0) {
              iVar21 = *(int *)(lVar30 + 0x244);
            }
          }
        }
      }
    }
    if (*(int *)(PTR_DAT_04bbe4b0 + 0x84) == iVar21) goto LAB_01edcb74;
    lVar30 = *(long *)puVar16;
    if (lVar30 == 0) {
      puVar25 = &DAT_055c04a0;
    }
    else {
      puVar25 = &DAT_055c04a0;
      if (*(long *)(lVar30 + 0x330) != 0) {
        puVar25 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar30 + 0x338));
        iVar21 = FUN_006bd550(*puVar25,0);
        puVar25 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar21 != 0x758f7eaf) {
          puVar25 = &DAT_055c04a0;
        }
      }
    }
    iVar21 = *(int *)(puVar25 + 7);
    if ((((((DAT_05ac0a90 == iVar21) || (DAT_05ac0aa0 == iVar21)) || (DAT_05ac0ab0 == iVar21)) ||
         (((DAT_05ac0ac0 == iVar21 || (DAT_05ac0ad0 == iVar21)) ||
          ((DAT_05ac0ae0 == iVar21 || ((DAT_05ac0af0 == iVar21 || (DAT_05ac0b00 == iVar21)))))))) ||
        (DAT_05ac0b10 == iVar21)) || (DAT_05ac0b20 == iVar21)) goto LAB_01edcb74;
    lVar30 = *(long *)puVar16;
    iVar21 = 0;
    if (lVar30 != 0) {
      if (*(long *)(lVar30 + 0x330) == 0) {
        iVar21 = 0;
      }
      else {
        puVar25 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar30 + 0x338));
        iVar20 = FUN_006bd550(*puVar25,0);
        iVar21 = 0;
        if (iVar20 == 0x758f7eaf) {
          iVar21 = 0;
          if (*(long *)puVar16 != 0) {
            lVar30 = *(long *)(*(long *)puVar16 + 0x330);
            iVar21 = 0;
            if (lVar30 != 0) {
              iVar21 = *(int *)(lVar30 + 0x244);
            }
          }
        }
      }
    }
    if (*(int *)(PTR_DAT_04bbe4b0 + 0xcc) == iVar21) goto LAB_01edcb74;
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x17df00c3) {
      lVar30 = *(long *)PTR_DAT_04bb59d8;
      if (lVar30 != 0) {
        uVar38 = (uint)*(ushort *)(param_1 + 0x18c);
        uVar9 = *(ushort *)(param_1 + 400);
        if (*(ushort *)(param_1 + 0x18c) <= uVar9) {
          uVar10 = *(ushort *)(param_1 + 0x192);
          uVar11 = *(ushort *)(param_1 + 0x18e);
          if (uVar11 <= uVar10) {
            do {
              uVar40 = (uint)uVar11;
              do {
                if (((((int)uVar38 < *(int *)(lVar30 + 0x28)) ||
                     (*(int *)(lVar30 + 0x38) < (int)uVar38)) ||
                    ((int)uVar40 < *(int *)(lVar30 + 0x2c))) ||
                   (*(int *)(lVar30 + 0x3c) < (int)uVar40)) {
                  lVar33 = *(long *)(param_1 + 0x1c8);
                  uVar26 = (uVar38 - *(ushort *)(param_1 + 0x188)) +
                           *(int *)(lVar33 + 0x1c) * (uVar40 - *(ushort *)(param_1 + 0x18a));
                  uVar31 = 1 << (ulong)(uVar26 & 0x1f);
                  uVar39 = *(uint *)(*(long *)(lVar33 + 0x10) + (long)((int)uVar26 >> 5) * 4);
                  if ((uVar31 & uVar39) != 0) {
                    *(uint *)(*(long *)(lVar33 + 0x10) + ((long)((ulong)uVar26 << 0x20) >> 0x25) * 4
                             ) = uVar39 & (uVar31 ^ 0xffffffff);
                    *(int *)(lVar33 + 0x18) = *(int *)(lVar33 + 0x18) + -1;
                  }
                }
                uVar40 = uVar40 + 1;
              } while (uVar10 + 1 != uVar40);
              bVar19 = false;
              bVar18 = uVar38 != uVar9;
              uVar38 = uVar38 + 1;
            } while (bVar18);
            goto LAB_01edcc5c;
          }
        }
      }
      goto LAB_01edcc58;
    }
    local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,0x20);
    uVar29 = FUN_0290cbcc(&local_c0);
    if ((uVar29 & 1) != 0) {
      local_a0 = (undefined *)0x0;
      local_c0 = (undefined8 *)(PTR_DAT_04bbc1a0 + 0x10);
      local_b8 = PTR_DAT_04bb2010 + 0x10;
      local_b0 = (undefined **)0x0;
      puStack_a8 = local_b8;
      uVar29 = FUN_0138fbe0(*(long *)PTR_DAT_04bbc218 + 0x200,&local_c0);
      if ((uVar29 & 1) != 0) {
        if (local_a0._4_4_ + 1 != local_b0._4_4_) {
          uVar9 = *(ushort *)(param_1 + 0x18c);
          uVar10 = *(ushort *)(param_1 + 0x18e);
          uVar11 = *(ushort *)(param_1 + 400);
          uVar12 = *(ushort *)(param_1 + 0x192);
          iVar21 = local_b0._4_4_;
          iVar20 = (int)local_b0;
          do {
            if ((((int)(uint)uVar9 <= iVar20) && (iVar20 <= (int)(uint)uVar11)) &&
               (((int)(uint)uVar10 <= iVar21 && (iVar21 <= (int)(uint)uVar12)))) {
              lVar30 = *(long *)(param_1 + 0x1c8);
              uVar39 = (iVar20 - (uint)*(ushort *)(param_1 + 0x188)) +
                       *(int *)(lVar30 + 0x1c) * (iVar21 - (uint)*(ushort *)(param_1 + 0x18a));
              uVar40 = 1 << (ulong)(uVar39 & 0x1f);
              uVar38 = *(uint *)(*(long *)(lVar30 + 0x10) + (long)((int)uVar39 >> 5) * 4);
              if ((uVar40 & uVar38) != 0) {
                *(uint *)(*(long *)(lVar30 + 0x10) + ((long)((ulong)uVar39 << 0x20) >> 0x25) * 4) =
                     uVar38 & (uVar40 ^ 0xffffffff);
                *(int *)(lVar30 + 0x18) = *(int *)(lVar30 + 0x18) + -1;
              }
            }
            if (iVar20 < (int)local_a0) {
              iVar20 = iVar20 + 1;
            }
            else {
              iVar21 = iVar21 + 1;
              iVar20 = (int)local_b0;
            }
          } while ((int)local_b0 != iVar20 || local_a0._4_4_ + 1 != iVar21);
        }
      }
    }
    iVar21 = FUN_035acde0(puVar3,*(undefined8 *)(param_1 + 0x1c8),param_1 + 0x5680);
    if (iVar21 == 0) {
      if (*(char *)(param_1 + 0xae61) != '\0') {
        FUN_01ee12a0(&local_f0);
      }
      goto LAB_01edcc58;
    }
    bVar19 = true;
  }
  else {
    local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,6);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar13 * 8);
    if (0xff < (uint)(int)sVar13) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 6 & 1) == 0) {
      local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,7);
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar13 * 8);
      if (0xff < (uint)(int)sVar13) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 7 & 1) == 0) goto LAB_01edc98c;
    }
LAB_01edcb74:
    lVar30 = *(long *)puVar17;
    if (lVar30 == 0) {
      iVar20 = 0;
      iVar21 = 0;
      iVar41 = 0x10;
      iVar35 = 0x10;
      lVar30 = *(long *)puVar16;
      iVar32 = 0;
      if (lVar30 != 0) goto LAB_01edcbb4;
    }
    else {
      iVar21 = *(int *)(lVar30 + 0xd88);
      iVar20 = *(int *)(lVar30 + 0xd8c);
      iVar41 = *(int *)(lVar30 + 0xd98);
      iVar35 = *(int *)(lVar30 + 0xd9c);
      lVar30 = *(long *)puVar16;
      if (lVar30 == 0) {
        iVar32 = 0;
      }
      else {
LAB_01edcbb4:
        if (*(long *)(lVar30 + 0x330) == 0) {
          iVar32 = 0;
        }
        else {
          puVar25 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar30 + 0x338));
          iVar22 = FUN_006bd550(*puVar25,0);
          iVar32 = 0;
          if (iVar22 == 0x758f7eaf) {
            iVar32 = 0;
            if (*(long *)puVar16 != 0) {
              lVar30 = *(long *)(*(long *)puVar16 + 0x330);
              iVar32 = 0;
              if (lVar30 != 0) {
                iVar32 = *(int *)(lVar30 + 0x244);
              }
            }
          }
        }
      }
    }
    uVar9 = *(ushort *)(param_1 + 400);
    iVar22 = iVar35 + 4;
    if ((*(int *)(PTR_DAT_04bbe4b0 + 0xcc) == iVar32 & param_6) == 0) {
      iVar22 = iVar35;
    }
    uVar38 = (uint)*(ushort *)(param_1 + 0x18c);
    if (*(ushort *)(param_1 + 0x18c) <= uVar9) {
      uVar10 = *(ushort *)(param_1 + 0x192);
      uVar11 = *(ushort *)(param_1 + 0x18e);
      if (uVar11 <= uVar10) {
        do {
          uVar40 = (uint)uVar11;
          do {
            if (((int)uVar40 < iVar20 || ((int)uVar38 < iVar21 || iVar41 < (int)uVar38)) ||
               (iVar22 < (int)uVar40)) {
              lVar30 = *(long *)(param_1 + 0x1c8);
              uVar26 = (uVar38 - *(ushort *)(param_1 + 0x188)) +
                       *(int *)(lVar30 + 0x1c) * (uVar40 - *(ushort *)(param_1 + 0x18a));
              uVar31 = 1 << (ulong)(uVar26 & 0x1f);
              uVar39 = *(uint *)(*(long *)(lVar30 + 0x10) + (long)((int)uVar26 >> 5) * 4);
              if ((uVar31 & uVar39) != 0) {
                *(uint *)(*(long *)(lVar30 + 0x10) + ((long)((ulong)uVar26 << 0x20) >> 0x25) * 4) =
                     uVar39 & (uVar31 ^ 0xffffffff);
                *(int *)(lVar30 + 0x18) = *(int *)(lVar30 + 0x18) + -1;
              }
            }
            uVar40 = uVar40 + 1;
          } while (uVar10 + 1 != uVar40);
          bVar19 = uVar38 != uVar9;
          uVar38 = uVar38 + 1;
        } while (bVar19);
      }
    }
LAB_01edcc58:
    bVar19 = false;
  }
LAB_01edcc5c:
  if (param_4 != 0) {
    iVar21 = *(int *)(param_4 + 0x24) + 1;
    iVar20 = *(int *)(param_4 + 0x14);
    if (iVar21 != iVar20) {
      iVar41 = *(int *)(param_4 + 0x10);
      iVar35 = iVar41;
      iVar32 = iVar41;
      do {
        iVar22 = iVar32 - (uint)*(ushort *)(param_1 + 0x188);
        if ((((-1 < iVar22) && (iVar22 < *(int *)(param_1 + 0x194))) &&
            (iVar23 = iVar20 - (uint)*(ushort *)(param_1 + 0x18a), -1 < iVar23)) &&
           (iVar23 < *(int *)(param_1 + 0x198))) {
          lVar30 = *(long *)(param_1 + 0x1c8);
          uVar39 = iVar22 + *(int *)(lVar30 + 0x1c) * iVar23;
          uVar40 = 1 << (ulong)(uVar39 & 0x1f);
          uVar38 = *(uint *)(*(long *)(lVar30 + 0x10) + (long)((int)uVar39 >> 5) * 4);
          if ((uVar40 & uVar38) != 0) {
            *(uint *)(*(long *)(lVar30 + 0x10) + ((long)((ulong)uVar39 << 0x20) >> 0x25) * 4) =
                 uVar38 & (uVar40 ^ 0xffffffff);
            *(int *)(lVar30 + 0x18) = *(int *)(lVar30 + 0x18) + -1;
            iVar35 = *(int *)(param_4 + 0x10);
          }
        }
        if (iVar32 < *(int *)(param_4 + 0x20)) {
          iVar32 = iVar32 + 1;
        }
        else {
          iVar20 = iVar20 + 1;
          iVar32 = iVar35;
        }
      } while (iVar41 != iVar32 || iVar21 != iVar20);
    }
  }
  if (param_5 != 0) {
    iVar21 = *(int *)(param_5 + 0x24) + 1;
    iVar20 = *(int *)(param_5 + 0x14);
    if (iVar21 != iVar20) {
      iVar41 = *(int *)(param_5 + 0x10);
      iVar35 = iVar41;
      iVar32 = iVar41;
      do {
        iVar22 = iVar32 - (uint)*(ushort *)(param_1 + 0x188);
        if (((-1 < iVar22) && (iVar22 < *(int *)(param_1 + 0x194))) &&
           ((iVar23 = iVar20 - (uint)*(ushort *)(param_1 + 0x18a), -1 < iVar23 &&
            (iVar23 < *(int *)(param_1 + 0x198))))) {
          lVar30 = *(long *)(param_1 + 0x1c8);
          uVar39 = iVar22 + *(int *)(lVar30 + 0x1c) * iVar23;
          uVar40 = 1 << (ulong)(uVar39 & 0x1f);
          uVar38 = *(uint *)(*(long *)(lVar30 + 0x10) + (long)((int)uVar39 >> 5) * 4);
          if ((uVar40 & uVar38) != 0) {
            *(uint *)(*(long *)(lVar30 + 0x10) + ((long)((ulong)uVar39 << 0x20) >> 0x25) * 4) =
                 uVar38 & (uVar40 ^ 0xffffffff);
            *(int *)(lVar30 + 0x18) = *(int *)(lVar30 + 0x18) + -1;
            iVar35 = *(int *)(param_5 + 0x10);
          }
        }
        if (iVar32 < *(int *)(param_5 + 0x20)) {
          iVar32 = iVar32 + 1;
        }
        else {
          iVar20 = iVar20 + 1;
          iVar32 = iVar35;
        }
      } while (iVar41 != iVar32 || iVar21 != iVar20);
    }
  }
  if ((param_6 & 1) != 0) {
    lVar30 = *(long *)puVar16;
    iVar21 = 0;
    if (lVar30 != 0) {
      if (*(long *)(lVar30 + 0x330) == 0) {
        iVar21 = 0;
      }
      else {
        puVar25 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar30 + 0x338));
        iVar20 = FUN_006bd550(*puVar25,0);
        iVar21 = 0;
        if (iVar20 == 0x758f7eaf) {
          iVar21 = 0;
          if (*(long *)puVar16 != 0) {
            lVar30 = *(long *)(*(long *)puVar16 + 0x330);
            iVar21 = 0;
            if (lVar30 != 0) {
              iVar21 = *(int *)(lVar30 + 0x244);
            }
          }
        }
      }
    }
    puVar16 = PTR_DAT_04bb2020;
    if (*(int *)(PTR_DAT_04bbe4b0 + 0xcc) == iVar21) {
      lVar30 = *(long *)(param_1 + 8);
      local_c0 = (undefined8 *)(PTR_DAT_04bb2020 + 0x10);
      local_b8 = &DAT_040716fb;
      (**(code **)(*(long *)(lVar30 + 0x3e0) + 0x18))(lVar30 + 0x3e0);
      (**(code **)(*(long *)(lVar30 + 0x3e0) + 0x18))(lVar30 + 0x3e0);
      puVar37 = *(undefined1 **)(lVar30 + 1000);
      (*(code *)local_c0[3])(&local_c0);
      if (puVar37 != local_b8) {
        uVar29 = 0;
        bVar18 = true;
        do {
          cVar8 = *(char *)(*(long *)(lVar30 + 1000) + uVar29);
          if (cVar8 != local_b8[uVar29]) break;
          if (cVar8 == '\0') {
            if (bVar18) goto LAB_01edd040;
            break;
          }
          bVar18 = uVar29 < 0x80000;
          uVar29 = uVar29 + 1;
        } while (uVar29 != 0x80001);
        lVar30 = *(long *)(param_1 + 8);
        local_78 = puVar16 + 0x10;
        local_70 = &DAT_040aaf55;
        (**(code **)(*(long *)(lVar30 + 0x3e0) + 0x18))(lVar30 + 0x3e0);
        (**(code **)(*(long *)(lVar30 + 0x3e0) + 0x18))(lVar30 + 0x3e0);
        puVar37 = *(undefined1 **)(lVar30 + 1000);
        (**(code **)(local_78 + 0x18))(&local_78);
        if (puVar37 != local_70) {
          uVar29 = 0;
          bVar18 = true;
          do {
            cVar8 = *(char *)(*(long *)(lVar30 + 1000) + uVar29);
            if (cVar8 != local_70[uVar29]) break;
            if (cVar8 == '\0') {
              if (bVar18) goto LAB_01edd040;
              break;
            }
            bVar18 = uVar29 < 0x80000;
            uVar29 = uVar29 + 1;
          } while (uVar29 != 0x80001);
          goto LAB_01eddbe4;
        }
      }
LAB_01edd040:
      uVar9 = *(ushort *)(param_1 + 0x18a);
      uVar10 = *(ushort *)(param_1 + 0x188);
      lVar30 = *(long *)(*(long *)(param_1 + 8) + 0x68);
      fVar42 = *(float *)(lVar30 + 0x278) + 2.5;
      fVar43 = *(float *)(lVar30 + 0x280) + 2.5;
      lVar30 = *(long *)(param_1 + 0x1c8);
      iVar21 = *(int *)(lVar30 + 0x1c);
      uVar38 = ((((int)((float)(int)fVar43 / 5.0) - (uint)(fVar43 < 0.0) & 0xffff) - (uint)uVar9) *
                iVar21 - (uint)uVar10) +
               ((int)((float)(int)fVar42 / 5.0) - (uint)(fVar42 < 0.0) & 0xffff);
      lVar33 = *(long *)(lVar30 + 0x10);
      uVar40 = *(uint *)(lVar33 + (long)((int)uVar38 >> 5) * 4);
      uVar39 = 1 << (ulong)(uVar38 & 0x1f);
      if ((uVar39 & uVar40) != 0) {
        *(uint *)(lVar33 + ((long)((ulong)uVar38 << 0x20) >> 0x25) * 4) =
             uVar40 & (uVar39 ^ 0xffffffff);
        *(int *)(lVar30 + 0x18) = *(int *)(lVar30 + 0x18) + -1;
        lVar30 = *(long *)(param_1 + 0x1c8);
        uVar10 = *(ushort *)(param_1 + 0x188);
        uVar9 = *(ushort *)(param_1 + 0x18a);
        iVar21 = *(int *)(lVar30 + 0x1c);
        lVar33 = *(long *)(lVar30 + 0x10);
      }
      uVar39 = (*(int *)(param_2 + 8) - (uint)uVar10) +
               iVar21 * (*(int *)(param_2 + 0xc) - (uint)uVar9);
      uVar40 = 1 << (ulong)(uVar39 & 0x1f);
      uVar38 = *(uint *)(lVar33 + (long)((int)uVar39 >> 5) * 4);
      if ((uVar40 & uVar38) != 0) {
        *(uint *)(lVar33 + ((long)((ulong)uVar39 << 0x20) >> 0x25) * 4) =
             uVar38 & (uVar40 ^ 0xffffffff);
        *(int *)(lVar30 + 0x18) = *(int *)(lVar30 + 0x18) + -1;
      }
      goto LAB_01edd140;
    }
  }
LAB_01eddbe4:
  lVar30 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  fVar42 = *(float *)(lVar30 + 0x278) + -2.5;
  fVar43 = *(float *)(lVar30 + 0x280) + -2.5;
  FUN_035a9090(puVar3,(int)((float)(int)fVar42 / 5.0) - (uint)(fVar42 < 0.0) & 0xffff,
               (int)((float)(int)fVar43 / 5.0) - (uint)(fVar43 < 0.0) & 0xffff,0);
  iVar20 = *(int *)(param_2 + 8);
  iVar41 = *(int *)(param_2 + 0xc);
  iVar21 = -2;
  do {
    uVar38 = iVar21 + iVar20;
    iVar35 = -2;
    do {
      uVar9 = *(ushort *)(param_1 + 0x188);
      if (((uint)uVar9 <= (uVar38 & 0xffff)) &&
         ((uVar38 & 0xffff) <= (((uint)uVar9 + (uint)*(ushort *)(param_1 + 0x194)) - 1 & 0xffff))) {
        uVar10 = *(ushort *)(param_1 + 0x18a);
        uVar40 = iVar41 + iVar35;
        if (((uint)uVar10 <= (uVar40 & 0xffff)) &&
           ((uVar40 & 0xffff) <= (((uint)uVar10 + (uint)*(ushort *)(param_1 + 0x198)) - 1 & 0xffff))
           ) {
          lVar30 = *(long *)(param_1 + 0x1c8);
          uVar31 = ((uVar38 & 0xffff) - (uint)uVar9) +
                   *(int *)(lVar30 + 0x1c) * ((uVar40 & 0xffff) - (uint)uVar10);
          uVar39 = 1 << (ulong)(uVar31 & 0x1f);
          uVar40 = *(uint *)(*(long *)(lVar30 + 0x10) + (long)((int)uVar31 >> 5) * 4);
          if ((uVar39 & uVar40) != 0) {
            *(uint *)(*(long *)(lVar30 + 0x10) + ((long)((ulong)uVar31 << 0x20) >> 0x25) * 4) =
                 uVar40 & (uVar39 ^ 0xffffffff);
            *(int *)(lVar30 + 0x18) = *(int *)(lVar30 + 0x18) + -1;
          }
        }
      }
      iVar35 = iVar35 + 1;
    } while (iVar35 != 3);
    bVar18 = iVar21 != 2;
    iVar21 = iVar21 + 1;
  } while (bVar18);
LAB_01edd140:
  lVar30 = *(long *)(param_1 + 0x89b8);
  if (*(char *)(lVar30 + 0x170) != '\0') {
    iVar41 = *(int *)(lVar30 + 0xb8) + -1;
    iVar35 = *(int *)(lVar30 + 200);
    iVar32 = *(int *)(lVar30 + 0xcc);
    iVar21 = *(int *)(lVar30 + 0xbc) + -1;
    iVar20 = iVar41;
    if (iVar35 + 1 <= iVar41) {
      iVar20 = iVar35 + 1;
    }
    if (iVar41 <= iVar35 + 1) {
      iVar41 = iVar35 + 1;
    }
    iVar35 = iVar21;
    if (iVar32 + 1 <= iVar21) {
      iVar35 = iVar32 + 1;
    }
    if (iVar21 <= iVar32 + 1) {
      iVar21 = iVar32 + 1;
    }
    iVar21 = iVar21 + 1;
    if (iVar21 != iVar35) {
      lVar33 = *(long *)(param_1 + 0x1c8);
      iVar22 = *(int *)(lVar33 + 0x18);
      iVar32 = iVar35;
      iVar23 = iVar20;
      do {
        iVar14 = iVar23 - (uint)*(ushort *)(param_1 + 0x188);
        if ((((-1 < iVar14) && (iVar14 < *(int *)(param_1 + 0x194))) &&
            (iVar15 = iVar32 - (uint)*(ushort *)(param_1 + 0x18a), -1 < iVar15)) &&
           (iVar15 < *(int *)(param_1 + 0x198))) {
          uVar38 = iVar14 + *(int *)(lVar33 + 0x1c) * iVar15;
          iVar22 = iVar22 - (*(uint *)(*(long *)(lVar33 + 0x10) + (long)((int)uVar38 >> 5) * 4) >>
                             (ulong)(uVar38 & 0x1f) & 1);
        }
        if (iVar23 < iVar41) {
          iVar23 = iVar23 + 1;
        }
        else {
          iVar32 = iVar32 + 1;
          iVar23 = iVar20;
        }
      } while ((iVar20 != iVar23) || (iVar21 != iVar32));
      if (0 < iVar22) {
        iVar32 = iVar20;
        do {
          iVar22 = iVar32 - (uint)*(ushort *)(param_1 + 0x188);
          if (((-1 < iVar22) && (iVar22 < *(int *)(param_1 + 0x194))) &&
             ((iVar23 = iVar35 - (uint)*(ushort *)(param_1 + 0x18a), -1 < iVar23 &&
              (iVar23 < *(int *)(param_1 + 0x198))))) {
            lVar30 = *(long *)(param_1 + 0x1c8);
            uVar39 = iVar22 + *(int *)(lVar30 + 0x1c) * iVar23;
            uVar40 = 1 << (ulong)(uVar39 & 0x1f);
            uVar38 = *(uint *)(*(long *)(lVar30 + 0x10) + (long)((int)uVar39 >> 5) * 4);
            if ((uVar40 & uVar38) != 0) {
              *(uint *)(*(long *)(lVar30 + 0x10) + ((long)((ulong)uVar39 << 0x20) >> 0x25) * 4) =
                   uVar38 & (uVar40 ^ 0xffffffff);
              *(int *)(lVar30 + 0x18) = *(int *)(lVar30 + 0x18) + -1;
            }
          }
          if (iVar32 < iVar41) {
            iVar32 = iVar32 + 1;
          }
          else {
            iVar35 = iVar35 + 1;
            iVar32 = iVar20;
          }
        } while ((iVar20 != iVar32) || (iVar21 != iVar35));
        lVar30 = *(long *)(param_1 + 0x89b8);
      }
    }
  }
  if (*(char *)(lVar30 + 0x171) != '\0') {
    iVar41 = *(int *)(lVar30 + 0xe0) + -1;
    iVar35 = *(int *)(lVar30 + 0xf0);
    iVar32 = *(int *)(lVar30 + 0xf4);
    iVar21 = *(int *)(lVar30 + 0xe4) + -1;
    iVar20 = iVar41;
    if (iVar35 + 1 <= iVar41) {
      iVar20 = iVar35 + 1;
    }
    if (iVar41 <= iVar35 + 1) {
      iVar41 = iVar35 + 1;
    }
    iVar35 = iVar21;
    if (iVar32 + 1 <= iVar21) {
      iVar35 = iVar32 + 1;
    }
    if (iVar21 <= iVar32 + 1) {
      iVar21 = iVar32 + 1;
    }
    iVar21 = iVar21 + 1;
    if (iVar21 != iVar35) {
      lVar33 = *(long *)(param_1 + 0x1c8);
      iVar22 = *(int *)(lVar33 + 0x18);
      iVar32 = iVar35;
      iVar23 = iVar20;
      do {
        iVar14 = iVar23 - (uint)*(ushort *)(param_1 + 0x188);
        if ((((-1 < iVar14) && (iVar14 < *(int *)(param_1 + 0x194))) &&
            (iVar15 = iVar32 - (uint)*(ushort *)(param_1 + 0x18a), -1 < iVar15)) &&
           (iVar15 < *(int *)(param_1 + 0x198))) {
          uVar38 = iVar14 + *(int *)(lVar33 + 0x1c) * iVar15;
          iVar22 = iVar22 - (*(uint *)(*(long *)(lVar33 + 0x10) + (long)((int)uVar38 >> 5) * 4) >>
                             (ulong)(uVar38 & 0x1f) & 1);
        }
        if (iVar23 < iVar41) {
          iVar23 = iVar23 + 1;
        }
        else {
          iVar32 = iVar32 + 1;
          iVar23 = iVar20;
        }
      } while ((iVar20 != iVar23) || (iVar21 != iVar32));
      if (0 < iVar22) {
        iVar32 = iVar20;
        do {
          iVar22 = iVar32 - (uint)*(ushort *)(param_1 + 0x188);
          if (((-1 < iVar22) && (iVar22 < *(int *)(param_1 + 0x194))) &&
             ((iVar23 = iVar35 - (uint)*(ushort *)(param_1 + 0x18a), -1 < iVar23 &&
              (iVar23 < *(int *)(param_1 + 0x198))))) {
            lVar30 = *(long *)(param_1 + 0x1c8);
            uVar39 = iVar22 + *(int *)(lVar30 + 0x1c) * iVar23;
            uVar40 = 1 << (ulong)(uVar39 & 0x1f);
            uVar38 = *(uint *)(*(long *)(lVar30 + 0x10) + (long)((int)uVar39 >> 5) * 4);
            if ((uVar40 & uVar38) != 0) {
              *(uint *)(*(long *)(lVar30 + 0x10) + ((long)((ulong)uVar39 << 0x20) >> 0x25) * 4) =
                   uVar38 & (uVar40 ^ 0xffffffff);
              *(int *)(lVar30 + 0x18) = *(int *)(lVar30 + 0x18) + -1;
            }
          }
          if (iVar32 < iVar41) {
            iVar32 = iVar32 + 1;
          }
          else {
            iVar35 = iVar35 + 1;
            iVar32 = iVar20;
          }
        } while ((iVar20 != iVar32) || (iVar21 != iVar35));
        lVar30 = *(long *)(param_1 + 0x89b8);
      }
    }
  }
  if (*(char *)(lVar30 + 0x172) != '\0') {
    iVar41 = *(int *)(lVar30 + 0x108) + -1;
    iVar35 = *(int *)(lVar30 + 0x118);
    iVar32 = *(int *)(lVar30 + 0x11c);
    iVar21 = *(int *)(lVar30 + 0x10c) + -1;
    iVar20 = iVar41;
    if (iVar35 + 1 <= iVar41) {
      iVar20 = iVar35 + 1;
    }
    if (iVar41 <= iVar35 + 1) {
      iVar41 = iVar35 + 1;
    }
    iVar35 = iVar21;
    if (iVar32 + 1 <= iVar21) {
      iVar35 = iVar32 + 1;
    }
    if (iVar21 <= iVar32 + 1) {
      iVar21 = iVar32 + 1;
    }
    iVar21 = iVar21 + 1;
    if (iVar21 != iVar35) {
      lVar33 = *(long *)(param_1 + 0x1c8);
      iVar22 = *(int *)(lVar33 + 0x18);
      iVar32 = iVar35;
      iVar23 = iVar20;
      do {
        iVar14 = iVar23 - (uint)*(ushort *)(param_1 + 0x188);
        if ((((-1 < iVar14) && (iVar14 < *(int *)(param_1 + 0x194))) &&
            (iVar15 = iVar32 - (uint)*(ushort *)(param_1 + 0x18a), -1 < iVar15)) &&
           (iVar15 < *(int *)(param_1 + 0x198))) {
          uVar38 = iVar14 + *(int *)(lVar33 + 0x1c) * iVar15;
          iVar22 = iVar22 - (*(uint *)(*(long *)(lVar33 + 0x10) + (long)((int)uVar38 >> 5) * 4) >>
                             (ulong)(uVar38 & 0x1f) & 1);
        }
        if (iVar23 < iVar41) {
          iVar23 = iVar23 + 1;
        }
        else {
          iVar32 = iVar32 + 1;
          iVar23 = iVar20;
        }
      } while ((iVar20 != iVar23) || (iVar21 != iVar32));
      if (0 < iVar22) {
        iVar32 = iVar20;
        do {
          iVar22 = iVar32 - (uint)*(ushort *)(param_1 + 0x188);
          if (((-1 < iVar22) && (iVar22 < *(int *)(param_1 + 0x194))) &&
             ((iVar23 = iVar35 - (uint)*(ushort *)(param_1 + 0x18a), -1 < iVar23 &&
              (iVar23 < *(int *)(param_1 + 0x198))))) {
            lVar30 = *(long *)(param_1 + 0x1c8);
            uVar39 = iVar22 + *(int *)(lVar30 + 0x1c) * iVar23;
            uVar40 = 1 << (ulong)(uVar39 & 0x1f);
            uVar38 = *(uint *)(*(long *)(lVar30 + 0x10) + (long)((int)uVar39 >> 5) * 4);
            if ((uVar40 & uVar38) != 0) {
              *(uint *)(*(long *)(lVar30 + 0x10) + ((long)((ulong)uVar39 << 0x20) >> 0x25) * 4) =
                   uVar38 & (uVar40 ^ 0xffffffff);
              *(int *)(lVar30 + 0x18) = *(int *)(lVar30 + 0x18) + -1;
            }
          }
          if (iVar32 < iVar41) {
            iVar32 = iVar32 + 1;
          }
          else {
            iVar35 = iVar35 + 1;
            iVar32 = iVar20;
          }
        } while ((iVar20 != iVar32) || (iVar21 != iVar35));
        lVar30 = *(long *)(param_1 + 0x89b8);
      }
    }
  }
  if (*(char *)(lVar30 + 0x173) != '\0') {
    iVar41 = *(int *)(lVar30 + 0x130) + -1;
    iVar35 = *(int *)(lVar30 + 0x140);
    iVar32 = *(int *)(lVar30 + 0x144);
    iVar21 = *(int *)(lVar30 + 0x134) + -1;
    iVar20 = iVar41;
    if (iVar35 + 1 <= iVar41) {
      iVar20 = iVar35 + 1;
    }
    if (iVar41 <= iVar35 + 1) {
      iVar41 = iVar35 + 1;
    }
    iVar35 = iVar21;
    if (iVar32 + 1 <= iVar21) {
      iVar35 = iVar32 + 1;
    }
    if (iVar21 <= iVar32 + 1) {
      iVar21 = iVar32 + 1;
    }
    iVar21 = iVar21 + 1;
    if (iVar21 != iVar35) {
      lVar33 = *(long *)(param_1 + 0x1c8);
      iVar22 = *(int *)(lVar33 + 0x18);
      iVar32 = iVar35;
      iVar23 = iVar20;
      do {
        iVar14 = iVar23 - (uint)*(ushort *)(param_1 + 0x188);
        if ((((-1 < iVar14) && (iVar14 < *(int *)(param_1 + 0x194))) &&
            (iVar15 = iVar32 - (uint)*(ushort *)(param_1 + 0x18a), -1 < iVar15)) &&
           (iVar15 < *(int *)(param_1 + 0x198))) {
          uVar38 = iVar14 + *(int *)(lVar33 + 0x1c) * iVar15;
          iVar22 = iVar22 - (*(uint *)(*(long *)(lVar33 + 0x10) + (long)((int)uVar38 >> 5) * 4) >>
                             (ulong)(uVar38 & 0x1f) & 1);
        }
        if (iVar23 < iVar41) {
          iVar23 = iVar23 + 1;
        }
        else {
          iVar32 = iVar32 + 1;
          iVar23 = iVar20;
        }
      } while ((iVar20 != iVar23) || (iVar21 != iVar32));
      if (0 < iVar22) {
        iVar32 = iVar20;
        do {
          iVar22 = iVar32 - (uint)*(ushort *)(param_1 + 0x188);
          if (((-1 < iVar22) && (iVar22 < *(int *)(param_1 + 0x194))) &&
             ((iVar23 = iVar35 - (uint)*(ushort *)(param_1 + 0x18a), -1 < iVar23 &&
              (iVar23 < *(int *)(param_1 + 0x198))))) {
            lVar30 = *(long *)(param_1 + 0x1c8);
            uVar39 = iVar22 + *(int *)(lVar30 + 0x1c) * iVar23;
            uVar40 = 1 << (ulong)(uVar39 & 0x1f);
            uVar38 = *(uint *)(*(long *)(lVar30 + 0x10) + (long)((int)uVar39 >> 5) * 4);
            if ((uVar40 & uVar38) != 0) {
              *(uint *)(*(long *)(lVar30 + 0x10) + ((long)((ulong)uVar39 << 0x20) >> 0x25) * 4) =
                   uVar38 & (uVar40 ^ 0xffffffff);
              *(int *)(lVar30 + 0x18) = *(int *)(lVar30 + 0x18) + -1;
            }
          }
          if (iVar32 < iVar41) {
            iVar32 = iVar32 + 1;
          }
          else {
            iVar35 = iVar35 + 1;
            iVar32 = iVar20;
          }
        } while ((iVar20 != iVar32) || (iVar21 != iVar35));
        lVar30 = *(long *)(param_1 + 0x89b8);
      }
    }
  }
  if (*(char *)(lVar30 + 0x174) != '\0') {
    iVar41 = *(int *)(lVar30 + 0x158) + -1;
    iVar35 = *(int *)(lVar30 + 0x168);
    iVar32 = *(int *)(lVar30 + 0x16c);
    iVar21 = *(int *)(lVar30 + 0x15c) + -1;
    iVar20 = iVar41;
    if (iVar35 + 1 <= iVar41) {
      iVar20 = iVar35 + 1;
    }
    if (iVar41 <= iVar35 + 1) {
      iVar41 = iVar35 + 1;
    }
    iVar35 = iVar21;
    if (iVar21 <= iVar32 + 1) {
      iVar35 = iVar32 + 1;
    }
    if (iVar32 + 1 <= iVar21) {
      iVar21 = iVar32 + 1;
    }
    iVar35 = iVar35 + 1;
    if (iVar35 != iVar21) {
      lVar30 = *(long *)(param_1 + 0x1c8);
      iVar22 = *(int *)(lVar30 + 0x18);
      iVar32 = iVar21;
      iVar23 = iVar20;
      do {
        iVar14 = iVar23 - (uint)*(ushort *)(param_1 + 0x188);
        if ((((-1 < iVar14) && (iVar14 < *(int *)(param_1 + 0x194))) &&
            (iVar15 = iVar32 - (uint)*(ushort *)(param_1 + 0x18a), -1 < iVar15)) &&
           (iVar15 < *(int *)(param_1 + 0x198))) {
          uVar38 = iVar14 + *(int *)(lVar30 + 0x1c) * iVar15;
          iVar22 = iVar22 - (*(uint *)(*(long *)(lVar30 + 0x10) + (long)((int)uVar38 >> 5) * 4) >>
                             (ulong)(uVar38 & 0x1f) & 1);
        }
        if (iVar23 < iVar41) {
          iVar23 = iVar23 + 1;
        }
        else {
          iVar32 = iVar32 + 1;
          iVar23 = iVar20;
        }
      } while ((iVar20 != iVar23) || (iVar35 != iVar32));
      if (0 < iVar22) {
        iVar32 = iVar20;
        do {
          iVar22 = iVar32 - (uint)*(ushort *)(param_1 + 0x188);
          if (((-1 < iVar22) && (iVar22 < *(int *)(param_1 + 0x194))) &&
             ((iVar23 = iVar21 - (uint)*(ushort *)(param_1 + 0x18a), -1 < iVar23 &&
              (iVar23 < *(int *)(param_1 + 0x198))))) {
            lVar30 = *(long *)(param_1 + 0x1c8);
            uVar39 = iVar22 + *(int *)(lVar30 + 0x1c) * iVar23;
            uVar40 = 1 << (ulong)(uVar39 & 0x1f);
            uVar38 = *(uint *)(*(long *)(lVar30 + 0x10) + (long)((int)uVar39 >> 5) * 4);
            if ((uVar40 & uVar38) != 0) {
              *(uint *)(*(long *)(lVar30 + 0x10) + ((long)((ulong)uVar39 << 0x20) >> 0x25) * 4) =
                   uVar38 & (uVar40 ^ 0xffffffff);
              *(int *)(lVar30 + 0x18) = *(int *)(lVar30 + 0x18) + -1;
            }
          }
          if (iVar32 < iVar41) {
            iVar32 = iVar32 + 1;
          }
          else {
            iVar21 = iVar21 + 1;
            iVar32 = iVar20;
          }
        } while ((iVar20 != iVar32) || (iVar35 != iVar21));
      }
    }
  }
  uVar38 = nn::os::GetSystemTick();
  uVar40 = (uVar38 ^ uVar38 >> 0x1e) * 0x6c078965 + 1;
  uVar39 = (uVar40 ^ uVar40 >> 0x1e) * 0x6c078965 + 2;
  uVar31 = (uVar39 ^ uVar39 >> 0x1e) * 0x6c078965 + 3;
  uVar38 = uVar31 ^ uVar31 >> 0x1e;
  uVar26 = uVar38 * 0x6c078965 + 4;
  uVar29 = *(ulong *)(param_1 + 0x1c8);
  if (bVar19) {
    puVar1 = (uint *)(uVar29 + 0x20);
    if ((int)*puVar1 < 1) {
      return 0;
    }
    uVar7 = *(uint *)(uVar29 + 0x1c);
    if ((int)uVar7 < 1) {
      return 0;
    }
    iVar41 = 0;
    iVar20 = 0;
    plVar2 = (long *)(uVar29 + 0x10);
    uVar34 = 0;
    bVar19 = false;
    uVar24 = 0;
    do {
      uVar27 = 0;
      do {
        if (((*(uint *)(*plVar2 + (long)((int)(iVar41 + uVar27) >> 5) * 4) >>
              (ulong)(iVar41 + uVar27 & 0x1f) & 1) != 0) &&
           ((*(uint *)(*(long *)(param_1 + 0x5690) + (long)((int)(iVar20 + uVar27) >> 5) * 4) >>
             (ulong)(iVar20 + uVar27 & 0x1f) & 1) == 0)) {
          uVar40 = uVar40 ^ uVar40 << 0xb;
          uVar24 = uVar24 + 1;
          uVar4 = uVar26 >> 0x13 ^ uVar40 >> 8 ^ uVar26 ^ uVar40;
          if (((ulong)uVar4 * (ulong)uVar24 & 0xffffffff00000000) == 0) {
            bVar19 = true;
            uVar29 = (ulong)uVar34;
            uVar38 = uVar27;
          }
          uVar40 = uVar39;
          uVar39 = uVar31;
          uVar31 = uVar26;
          uVar26 = uVar4;
        }
        iVar21 = (int)uVar29;
        uVar27 = uVar27 + 1;
      } while (uVar7 != uVar27);
      uVar34 = uVar34 + 1;
      iVar20 = iVar20 + *(int *)(param_1 + 0x569c);
      iVar41 = iVar41 + uVar7;
    } while (uVar34 != *puVar1);
    if (bVar19) {
LAB_01edd9fc:
      local_b0 = (undefined **)0x0;
      puStack_a8 = (undefined1 *)0x0;
      local_a0 = (undefined *)0x0;
      uStack_98 = 0;
      local_90 = (undefined *)0x0;
      iVar21 = iVar21 + (uint)*(ushort *)(param_1 + 0x18a);
      local_88 = CONCAT71(local_88._1_7_,*(undefined1 *)(param_1 + 0x56e8));
      uVar38 = uVar38 + *(ushort *)(param_1 + 0x188);
      local_c0 = (undefined8 *)(PTR_DAT_04bc2170 + 0x10);
      local_b8 = puVar3;
      iVar20 = FUN_035a6520(puVar3,*(int *)(param_2 + 0xc) << 0x10 | (uint)*(ushort *)(param_2 + 8),
                            uVar38 & 0xffff | iVar21 * 0x10000,&local_c0);
      if ((iVar20 == 2) && (lVar30 = *(long *)(param_1 + 0x1c0), lVar30 != 0)) {
        iVar20 = 1;
        lVar33 = lVar30;
        do {
          lVar33 = *(long *)(lVar33 + 0x18);
          iVar20 = iVar20 + -1;
        } while (lVar33 != 0);
        if (iVar20 != 0) {
          *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(lVar30 + 0x18);
          *(float *)(param_1 + 0x56ec) = (float)(int)uVar38 * 5.0;
          *(float *)(param_1 + 0x56f4) = (float)iVar21 * 5.0;
          return 1;
        }
      }
    }
  }
  else if (0 < (int)*(uint *)(uVar29 + 8)) {
    uVar40 = uVar40 ^ uVar40 * 0x800;
    uVar38 = 0;
    uVar36 = (ulong)*(uint *)(uVar29 + 0x18) *
             (ulong)(uVar40 >> 8 ^ uVar26 >> 0x13 ^ uVar40 ^ uVar26) >> 0x20;
    do {
      if ((*(uint *)(*(long *)(uVar29 + 0x10) + (ulong)(uVar38 >> 5) * 4) >> (ulong)(uVar38 & 0x1f)
          & 1) != 0) {
        if ((int)uVar36 == 0) {
          iVar20 = *(int *)(uVar29 + 0x1c);
          iVar21 = 0;
          if (iVar20 != 0) {
            iVar21 = (int)uVar38 / iVar20;
          }
          uVar38 = uVar38 - iVar20 * iVar21;
          goto LAB_01edd9fc;
        }
        uVar36 = (ulong)((int)uVar36 - 1);
      }
      uVar38 = uVar38 + 1;
    } while (*(uint *)(uVar29 + 8) != uVar38);
  }
  return 0;
}

