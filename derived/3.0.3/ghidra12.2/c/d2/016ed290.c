
/* WARNING: Type propagation algorithm not settling */

int FUN_016ed290(float *param_1,float *param_2,undefined1 *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  short sVar17;
  int iVar18;
  undefined *puVar19;
  undefined1 uVar20;
  bool bVar21;
  undefined1 uVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  long lVar27;
  float *pfVar28;
  char *pcVar29;
  ulong uVar30;
  undefined8 *puVar31;
  long lVar32;
  long lVar33;
  long *plVar34;
  int iVar35;
  uint uVar36;
  int iVar37;
  long lVar38;
  undefined *puVar39;
  float fVar40;
  float fVar41;
  undefined8 local_110;
  float local_fc;
  float fStack_f8;
  float local_f4;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  int local_d0;
  int iStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  int local_90;
  int iStack_8c;
  
  local_c8 = *(undefined8 *)param_1;
  local_c0 = *(undefined8 *)(param_1 + 2);
  local_b8 = *(ulong *)(param_1 + 4);
  local_b0 = param_1[6];
  if (0.0 <= param_1[3]) {
    pfVar28 = (float *)((long)&local_c0 + 4);
  }
  else {
    lVar27 = FUN_0251e98c(1);
    pfVar28 = (float *)(**(code **)(*(long *)(lVar27 + 0x210) + 0xf0))(lVar27 + 0x210);
  }
  local_c0 = CONCAT44(*pfVar28 * (float)local_b8,(float)local_c0);
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 1;
  }
  puVar6 = PTR_DAT_04bb27c8;
  if ((local_b8 & 0x100000000) == 0) {
LAB_016ed404:
    iVar25 = 0;
  }
  else {
    local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
    local_a8 = (undefined *)((ulong)local_a8 & 0xffffffff00000000);
    FUN_0093b024(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_c8,&local_98);
    FUN_0093a950(*(long *)puVar6 + 0x28,&local_c8,&local_a8);
    local_f0 = (undefined *)CONCAT44(local_f0._4_4_,(int)local_98);
    lVar27 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,(ulong)local_98 & 0xffffffff);
    if (((lVar27 == 0) ||
        (pcVar29 = (char *)FUN_009823a0(lVar27,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10),
        pcVar29 == (char *)0x0)) || (*pcVar29 == '\0')) goto LAB_016ed404;
    if ((int)local_98 != (int)local_a8) goto LAB_016ed404;
    if (param_2 != (float *)0x0) {
      param_2[2] = (float)local_c0;
      *(undefined8 *)param_2 = local_c8;
    }
    iVar25 = 1;
    if (param_3 == (undefined1 *)0x0) {
      return 1;
    }
  }
  if ((local_b8._5_1_ >> 3 & 1) != 0) {
    lVar27 = *(long *)PTR_DAT_04bb2720;
    if (lVar27 == 0) {
      puVar31 = &DAT_055c04a0;
    }
    else {
      puVar31 = &DAT_055c04a0;
      if (*(long *)(lVar27 + 0x330) != 0) {
        puVar31 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar27 + 0x338));
        iVar23 = FUN_006bd550(*puVar31,0);
        puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar23 != 0x758f7eaf) {
          puVar31 = &DAT_055c04a0;
        }
      }
    }
    if (*(int *)(puVar31 + 7) == -0x17df00c3) {
      iVar35 = (int)((float)(int)(float)local_c8 / 5.0) - (uint)((float)local_c8 < 0.0);
      iVar18 = (int)((float)(int)(float)local_c0 / 5.0) - (uint)((float)local_c0 < 0.0);
      iVar26 = (int)((float)(int)((float)local_c8 + 0.0) / 5.0) -
               (uint)((float)local_c8 + 0.0 < 0.0);
      iVar37 = (int)((float)(int)((float)local_c0 + 0.0) / 5.0) -
               (uint)((float)local_c0 + 0.0 < 0.0);
      iVar23 = iVar35;
      if (iVar26 <= iVar35) {
        iVar23 = iVar26;
      }
      if (iVar35 <= iVar26) {
        iVar35 = iVar26;
      }
      iVar26 = iVar18;
      if (iVar37 <= iVar18) {
        iVar26 = iVar37;
      }
      if (iVar18 <= iVar37) {
        iVar18 = iVar37;
      }
      lVar27 = *(long *)PTR_DAT_04bb59d8;
      iVar16 = *(int *)(lVar27 + 0x50);
      iVar10 = *(int *)(lVar27 + 0x60);
      iVar12 = *(int *)(lVar27 + 100);
      iVar13 = *(int *)(lVar27 + 0x2c);
      iVar37 = iVar16;
      if (iVar10 <= iVar16) {
        iVar37 = iVar10;
      }
      if (iVar16 <= iVar10) {
        iVar16 = iVar10;
      }
      iVar10 = iVar13;
      if (iVar12 <= iVar13) {
        iVar10 = iVar12;
      }
      iVar11 = iVar13;
      if (iVar13 <= iVar12) {
        iVar11 = iVar12;
      }
      if ((((iVar23 < *(int *)(lVar27 + 0x28)) || (*(int *)(lVar27 + 0x38) < iVar35)) ||
          ((iVar26 < iVar13 || (*(int *)(lVar27 + 0x3c) < iVar18)))) &&
         (((iVar23 < iVar37 || (iVar16 < iVar35)) || ((iVar26 < iVar10 || (iVar11 < iVar18)))))) {
        iVar23 = iVar25;
        if (param_2 == (float *)0x0) {
          iVar23 = 1;
        }
        bVar21 = iVar25 != 0;
        iVar25 = 0x800;
        if (bVar21) {
          iVar25 = 1;
        }
        if (iVar23 == 0) {
          iVar25 = 0x800;
          param_2[2] = (float)local_c0;
          *param_2 = (float)local_c8;
          param_2[1] = local_c8._4_4_;
        }
        if (param_3 == (undefined1 *)0x0) {
          return 0x800;
        }
      }
    }
  }
  if ((local_b8._4_1_ >> 1 & 1) != 0) {
    fVar40 = (float)(int)((int)((float)(int)(float)local_c8 / 5.0) - (uint)((float)local_c8 < 0.0))
             * 0.5;
    local_f0 = PTR_DAT_04bb2018 + 0x10;
    uVar24 = 0;
    if (fVar40 != (float)(int)fVar40) {
      uVar24 = (uint)(fVar40 < 0.0);
    }
    fVar41 = (float)(int)((int)((float)(int)(float)local_c0 / 5.0) - (uint)((float)local_c0 < 0.0))
             * 0.5;
    uVar36 = 0;
    if (fVar41 != (float)(int)fVar41) {
      uVar36 = (uint)(fVar41 < 0.0);
    }
    local_e8 = (undefined *)CONCAT44((int)fVar41 - uVar36,(int)fVar40 - uVar24);
    uVar30 = FUN_01318220(&local_f0);
    if ((uVar30 & 1) != 0) {
      iVar23 = iVar25;
      if (iVar25 == 0) {
        iVar23 = 2;
      }
      if ((param_2 != (float *)0x0) && (iVar25 == 0)) {
        *(undefined8 *)param_2 = local_c8;
        param_2[2] = (float)local_c0;
        iVar23 = 2;
      }
      iVar25 = iVar23;
      if (param_3 == (undefined1 *)0x0) {
        return 2;
      }
    }
  }
  puVar6 = PTR_DAT_04bb2720;
  if ((((local_b8 & 0x10000000000) != 0) && (lVar27 = *(long *)PTR_DAT_04bb2720, lVar27 != 0)) &&
     (*(long *)(lVar27 + 0x330) != 0)) {
    puVar31 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar27 + 0x338));
    iVar23 = FUN_006bd550(*puVar31,0);
    if (((iVar23 == 0x758f7eaf) && (*(long *)puVar6 != 0)) &&
       ((lVar27 = *(long *)(*(long *)puVar6 + 0x330), lVar27 != 0 &&
        (lVar38 = *(long *)(lVar27 + 600), lVar38 != lVar27 + 0x250)))) {
      lVar32 = lVar38 + -0x40;
      do {
        uVar30 = FUN_02932e20(lVar32,&local_c8);
        if ((uVar30 & 1) != 0) {
          iVar23 = iVar25;
          if (iVar25 == 0) {
            iVar23 = 0x100;
          }
          if ((param_2 != (float *)0x0) && (iVar25 == 0)) {
            *(undefined8 *)param_2 = local_c8;
            param_2[2] = (float)local_c0;
            iVar23 = 0x100;
          }
          iVar25 = iVar23;
          if (param_3 == (undefined1 *)0x0) {
            return 0x100;
          }
          break;
        }
        lVar38 = *(long *)(lVar38 + 8);
        lVar32 = lVar38 + -0x40;
      } while (lVar32 != lVar27 + 0x210);
    }
  }
  if (((local_b8._5_1_ >> 2 & 1) != 0) && (uVar30 = FUN_016ed09c(&local_c8), (uVar30 & 1) != 0)) {
    iVar23 = iVar25;
    if (iVar25 == 0) {
      iVar23 = 0x400;
    }
    if ((param_2 != (float *)0x0) && (iVar25 == 0)) {
      *(undefined8 *)param_2 = local_c8;
      param_2[2] = (float)local_c0;
      iVar23 = 0x400;
    }
    iVar25 = iVar23;
    if (param_3 == (undefined1 *)0x0) {
      return 0x400;
    }
  }
  if ((local_b8._4_1_ >> 5 & 1) != 0) {
    local_f0 = (undefined *)((ulong)local_f0 & 0xffffffff00000000);
    FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_c8,&local_f0);
    if ((int)local_f0 == 0x2e) {
      iVar23 = iVar25;
      if (iVar25 == 0) {
        iVar23 = 0x20;
      }
      if ((param_2 != (float *)0x0) && (iVar25 == 0)) {
        *(undefined8 *)param_2 = local_c8;
        param_2[2] = (float)local_c0;
        iVar23 = 0x20;
      }
      iVar25 = iVar23;
      if (param_3 == (undefined1 *)0x0) {
        return 0x20;
      }
    }
  }
  if ((local_b8._4_1_ >> 6 & 1) != 0) {
    local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
    FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_c8,&local_98);
    local_f0 = (undefined *)CONCAT44(local_f0._4_4_,(int)local_98);
    lVar27 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,(ulong)local_98 & 0xffffffff);
    if (((lVar27 != 0) &&
        (pcVar29 = (char *)FUN_009823a0(lVar27,0xb,0xe7e965db,*(undefined8 *)PTR_DAT_04bb5d28),
        pcVar29 != (char *)0x0)) && (*pcVar29 != '\0')) {
      iVar23 = iVar25;
      if (iVar25 == 0) {
        iVar23 = 0x40;
      }
      if ((param_2 != (float *)0x0) && (iVar25 == 0)) {
        *(undefined8 *)param_2 = local_c8;
        param_2[2] = (float)local_c0;
        iVar23 = 0x40;
      }
      iVar25 = iVar23;
      if (param_3 == (undefined1 *)0x0) {
        return 0x40;
      }
    }
  }
  if (((char)local_b8._4_1_ < '\0') && (sVar17 = *(short *)PTR_DAT_04bb6298, sVar17 != -1)) {
    local_f0 = (undefined *)((ulong)local_f0 & 0xffffffff00000000);
    puVar8 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar17 * 8);
    if (0xff < (uint)(int)sVar17) {
      puVar8 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar8 & 1) != 0) {
      lVar27 = *(long *)PTR_DAT_04bb2720;
      if (lVar27 == 0) {
        puVar31 = &DAT_055c04a0;
      }
      else {
        puVar31 = &DAT_055c04a0;
        if (*(long *)(lVar27 + 0x330) != 0) {
          puVar31 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar27 + 0x338));
          iVar23 = FUN_006bd550(*puVar31,0);
          puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar23 != 0x758f7eaf) {
            puVar31 = &DAT_055c04a0;
          }
        }
      }
      FUN_017baf44(*(undefined4 *)(puVar31 + 7));
      puVar6 = PTR_DAT_04bb3238;
      fVar40 = local_c0._4_4_ * 0.97;
      iVar18 = (int)((float)(int)((float)local_c8 - fVar40) / 5.0) -
               (uint)((float)local_c8 - fVar40 < 0.0);
      iVar23 = (int)((float)(int)((float)local_c0 - fVar40) / 5.0) -
               (uint)((float)local_c0 - fVar40 < 0.0);
      iVar26 = (int)((float)(int)(fVar40 + (float)local_c8) / 5.0) -
               (uint)(fVar40 + (float)local_c8 < 0.0);
      iVar35 = iVar18;
      if (iVar26 <= iVar18) {
        iVar35 = iVar26;
      }
      if (iVar18 <= iVar26) {
        iVar18 = iVar26;
      }
      iVar37 = (int)((float)(int)(fVar40 + (float)local_c0) / 5.0) -
               (uint)(fVar40 + (float)local_c0 < 0.0);
      iVar26 = iVar23;
      if (iVar23 <= iVar37) {
        iVar26 = iVar37;
      }
      if (iVar37 <= iVar23) {
        iVar23 = iVar37;
      }
      iVar26 = iVar26 + 1;
      if (param_2 == (float *)0x0) {
        if (iVar26 != iVar23) {
          puVar1 = PTR_DAT_04bb2010 + 0x10;
          iVar37 = iVar35;
          do {
            local_e8 = (undefined *)CONCAT44(iVar23,iVar37);
            local_f0 = puVar1;
            uVar30 = FUN_01512308(&local_f0,*(undefined4 *)puVar6);
            if ((uVar30 & 1) != 0) {
              iVar16 = 0x80;
              if (iVar25 != 0) {
                iVar16 = iVar25;
              }
              iVar25 = iVar16;
              if (param_3 == (undefined1 *)0x0) {
                return 0x80;
              }
            }
            if (iVar37 < iVar18) {
              iVar37 = iVar37 + 1;
            }
            else {
              iVar23 = iVar23 + 1;
              iVar37 = iVar35;
            }
          } while ((iVar35 != iVar37) || (iVar26 != iVar23));
        }
      }
      else if (iVar26 != iVar23) {
        puVar1 = PTR_DAT_04bb2010 + 0x10;
        iVar37 = iVar35;
        do {
          local_e8 = (undefined *)CONCAT44(iVar23,iVar37);
          local_f0 = puVar1;
          uVar30 = FUN_01512308(&local_f0,*(undefined4 *)puVar6);
          if ((uVar30 & 1) != 0) {
            if (iVar25 == 0) {
              iVar25 = 0x80;
              param_2[2] = (float)local_c0;
              *(undefined8 *)param_2 = local_c8;
            }
            if (param_3 == (undefined1 *)0x0) {
              return 0x80;
            }
          }
          if (iVar37 < iVar18) {
            iVar37 = iVar37 + 1;
          }
          else {
            iVar23 = iVar23 + 1;
            iVar37 = iVar35;
          }
        } while ((iVar35 != iVar37) || (iVar26 != iVar23));
      }
    }
  }
  puVar6 = PTR_DAT_04bb2010;
  if ((local_b8._4_4_ >> 3 & 1) != 0) {
    local_f0 = PTR_DAT_04bbfe68 + 0x10;
    local_a8 = PTR_DAT_04bb2010 + 0x10;
    local_e8 = (undefined *)((ulong)local_e8 & 0xffffffff00000000);
    local_a0 = 0;
    local_90 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
    iStack_8c = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
    lVar27 = *(long *)PTR_DAT_04bb2720;
    local_98 = local_a8;
    if (lVar27 == 0) {
      puVar31 = &DAT_055c04a0;
    }
    else {
      puVar31 = &DAT_055c04a0;
      if (*(long *)(lVar27 + 0x330) != 0) {
        puVar31 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar27 + 0x338));
        iVar23 = FUN_006bd550(*puVar31,0);
        puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar23 != 0x758f7eaf) {
          puVar31 = &DAT_055c04a0;
        }
      }
    }
    local_e8 = (undefined *)CONCAT44(*(undefined4 *)(puVar31 + 7),(undefined4)local_e8);
    uVar22 = FUN_017baf44();
    local_e0 = CONCAT71(local_e0._1_7_,uVar22) & 0xffffffffffffff01;
    plVar34 = (long *)FUN_01a5190c(&local_f0,0,&local_98,&local_a8);
    puVar1 = PTR_DAT_04bb43c0;
    lVar38 = *(long *)PTR_DAT_04bb43c0;
    uVar24 = FUN_0277d6c4();
    lVar27 = *(long *)puVar1;
    if (lVar27 != 0) {
      lVar38 = *(long *)(lVar38 + 0x57e58);
      uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar38 + 0x1f8);
      if ((uVar24 < *(uint *)(lVar38 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar38 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
        local_f0 = PTR_DAT_04bc0510 + 0x10;
        local_e8 = (undefined *)*plVar34;
        local_e0 = 0;
        uVar24 = FUN_0277d6c4(&local_e8);
        if (*(long *)puVar1 != 0) {
          lVar27 = *(long *)(lVar27 + 0x57e58);
          uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
          if ((uVar24 < *(uint *)(lVar27 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
            lVar27 = *(long *)PTR_DAT_04bc0428;
            uVar24 = FUN_0277d6c4(plVar34);
            uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
            if (uVar24 < *(uint *)(lVar27 + 0x1d8)) {
              uVar30 = *(ulong *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar24 * 8);
              if (uVar30 != 0) {
                local_e0 = uVar30;
              }
            }
          }
        }
        uVar30 = FUN_0277e294(plVar34);
        if (((uVar30 & 1) != 0) && (uVar30 = FUN_01ae6020(&local_f0), (uVar30 & 1) != 0)) {
          local_98 = puVar6 + 0x10;
          local_90 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
          iStack_8c = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
          uVar30 = FUN_0097b830(&local_98);
          if ((uVar30 & 1) != 0) {
            iVar23 = iVar25;
            if (iVar25 == 0) {
              iVar23 = 8;
            }
            if ((param_2 != (float *)0x0) && (iVar25 == 0)) {
              *param_2 = *param_1;
              param_2[1] = param_1[1];
              param_2[2] = param_1[2];
              iVar23 = 8;
            }
            iVar25 = iVar23;
            if (param_3 == (undefined1 *)0x0) {
              return 8;
            }
          }
        }
      }
    }
  }
  if ((local_b8._4_4_ >> 2 & 1) != 0) {
    local_b0._3_1_ = (undefined1)((uint)local_b0 >> 0x18);
    uVar22 = local_b0._3_1_;
    uVar20 = (undefined1)local_b0;
    uVar30 = FUN_016e11a0(&local_c8,uVar20,uVar22);
    if ((uVar30 & 1) != 0) {
      if ((param_2 == (float *)0x0) || (iVar25 != 0)) {
        if (iVar25 == 0) {
          iVar25 = 4;
        }
      }
      else {
        iVar25 = 4;
        param_2[2] = (float)local_c0;
        *param_2 = (float)local_c8;
        param_2[1] = local_c8._4_4_;
      }
      local_e8 = (undefined *)((ulong)local_e8 & 0xffffffff00000000);
      local_a8 = PTR_DAT_04bb2010 + 0x10;
      local_f0 = PTR_DAT_04bbfe68 + 0x10;
      local_a0 = 0;
      local_90 = (int)((float)(int)(float)local_c8 / 5.0) - (uint)((float)local_c8 < 0.0);
      iStack_8c = (int)((float)(int)(float)local_c0 / 5.0) - (uint)((float)local_c0 < 0.0);
      lVar27 = *(long *)PTR_DAT_04bb2720;
      local_98 = local_a8;
      if (lVar27 == 0) {
        puVar31 = &DAT_055c04a0;
      }
      else {
        puVar31 = &DAT_055c04a0;
        if (*(long *)(lVar27 + 0x330) != 0) {
          puVar31 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar27 + 0x338));
          iVar23 = FUN_006bd550(*puVar31,0);
          puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar23 != 0x758f7eaf) {
            puVar31 = &DAT_055c04a0;
          }
        }
      }
      local_e8 = (undefined *)CONCAT44(*(undefined4 *)(puVar31 + 7),(undefined4)local_e8);
      uVar22 = FUN_017baf44();
      local_e0 = CONCAT71(local_e0._1_7_,uVar22) & 0xffffffffffffff01;
      FUN_01a5190c(&local_f0,0,&local_98,&local_a8);
      local_110 = CONCAT44((int)local_a0,local_a0._4_4_);
      if (((param_4 == 0) || (*(int *)(param_4 + 8) != (int)local_a0)) ||
         (*(int *)(param_4 + 0xc) != local_a0._4_4_)) {
        if (*(int *)(PTR_DAT_04bb5d40 + 8) != 0 || *(int *)(PTR_DAT_04bb5d40 + 0xc) != 0) {
          if ((int)local_a0 != 0 || local_a0._4_4_ != 0) {
            if (param_3 == (undefined1 *)0x0) {
              return 4;
            }
            local_110 = 0;
            *param_3 = 0;
            goto LAB_016ede78;
          }
          goto LAB_016efa60;
        }
      }
      else {
LAB_016efa60:
        local_110 = 0;
      }
      if (param_3 == (undefined1 *)0x0) {
        return 4;
      }
      goto LAB_016ede78;
    }
  }
  local_110 = 0;
LAB_016ede78:
  if ((local_b8._4_4_ >> 9 & 1) != 0) {
    fVar40 = local_c0._4_4_ * 0.98 * 0.97;
    local_f0 = PTR_DAT_04bbc1a0 + 0x10;
    local_d0 = (int)((float)(int)((float)local_c8 - fVar40) / 5.0) -
               (uint)((float)local_c8 - fVar40 < 0.0);
    iStack_cc = (int)((float)(int)((float)local_c0 - fVar40) / 5.0) -
                (uint)((float)local_c0 - fVar40 < 0.0);
    iVar35 = (int)((float)(int)((float)local_c8 + fVar40) / 5.0) -
             (uint)((float)local_c8 + fVar40 < 0.0);
    iVar18 = (int)((float)(int)(fVar40 + (float)local_c0) / 5.0) -
             (uint)(fVar40 + (float)local_c0 < 0.0);
    local_e8 = PTR_DAT_04bb2010 + 0x10;
    iVar23 = local_d0;
    if (iVar35 <= local_d0) {
      iVar23 = iVar35;
    }
    if (local_d0 <= iVar35) {
      local_d0 = iVar35;
    }
    iVar35 = iStack_cc;
    if (iVar18 <= iStack_cc) {
      iVar35 = iVar18;
    }
    if (iStack_cc <= iVar18) {
      iStack_cc = iVar18;
    }
    local_e0 = CONCAT44(iVar35,iVar23);
    local_d8 = local_e8;
    if (((*(long *)PTR_DAT_04bb27c8 != 0) &&
        (lVar27 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar27 != 0)) &&
       (uVar30 = FUN_009721a0(lVar27,&local_f0,0), (uVar30 & 1) != 0)) {
      iVar23 = iVar25;
      if (iVar25 == 0) {
        iVar23 = 0x200;
      }
      if ((param_2 != (float *)0x0) && (iVar25 == 0)) {
        *(undefined8 *)param_2 = local_c8;
        param_2[2] = (float)local_c0;
        iVar23 = 0x200;
      }
      iVar25 = iVar23;
      if (param_3 == (undefined1 *)0x0) {
        return 0x200;
      }
    }
  }
  if ((local_b8._4_4_ >> 4 & 1) != 0) {
    uVar30 = FUN_016ec764(&local_c8,(undefined1)local_b0);
    if ((uVar30 & 1) != 0) {
      iVar23 = iVar25;
      if (iVar25 == 0) {
        iVar23 = 0x10;
      }
      if ((param_2 != (float *)0x0) && (iVar25 == 0)) {
        *param_2 = *param_1;
        param_2[1] = param_1[1];
        param_2[2] = param_1[2];
        iVar23 = 0x10;
      }
      iVar25 = iVar23;
      if (param_3 == (undefined1 *)0x0) {
        return 0x10;
      }
    }
  }
  puVar1 = PTR_DAT_04bb27c8;
  puVar6 = PTR_DAT_04bb2720;
  fVar40 = -local_c0._4_4_;
  if (0.0 <= local_c0._4_4_) {
    fVar40 = local_c0._4_4_;
  }
  if (1.1920929e-07 <= fVar40) {
    if (*(char *)((long)param_1 + 0x19) == '\0') {
      iVar23 = 0;
      iVar35 = 8;
      if (local_b0._2_1_ != '\0') {
        iVar35 = 0x10;
      }
      piVar9 = &DAT_05240230;
      if (local_b0._2_1_ != '\0') {
        piVar9 = &DAT_05240234;
      }
      iVar18 = *piVar9;
      puVar6 = PTR_DAT_04bbc1a0 + 0x10;
      puVar2 = PTR_DAT_04bb2010 + 0x10;
      puVar3 = PTR_DAT_04bbfe68 + 0x10;
      puVar4 = PTR_DAT_04bc0510 + 0x10;
      puVar5 = PTR_DAT_04bb2018 + 0x10;
      puVar39 = PTR_DAT_04bb2d00;
      do {
        pfVar28 = (float *)(puVar39 + (ulong)((uint)(iVar23 * iVar18) >> 0x18) * 0x10);
        fVar40 = (float)(iVar23 * iVar18 & 0xffffff) * 5.9604645e-08;
        fStack_f8 = local_c0._4_4_ * 0.0 + local_c8._4_4_;
        local_fc = local_c0._4_4_ * (*pfVar28 + fVar40 * pfVar28[1]) + (float)local_c8;
        local_f4 = local_c0._4_4_ * (pfVar28[2] + fVar40 * pfVar28[3]) + (float)local_c0;
        if ((local_b8 & 0x100000000) != 0) {
          local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
          local_a8 = (undefined *)((ulong)local_a8 & 0xffffffff00000000);
          FUN_0093b024(*(long *)puVar1 + 0x28,&local_fc,&local_98);
          FUN_0093a950(*(long *)puVar1 + 0x28,&local_fc,&local_a8);
          local_f0 = (undefined *)CONCAT44(local_f0._4_4_,(int)local_98);
          lVar27 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,(ulong)local_98 & 0xffffffff);
          if (((lVar27 != 0) &&
              (pcVar29 = (char *)FUN_009823a0(lVar27,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10)
              , pcVar29 != (char *)0x0)) && (*pcVar29 != '\0')) {
            if ((int)local_98 == (int)local_a8) {
              iVar26 = iVar25;
              if (iVar25 == 0) {
                iVar26 = 1;
              }
              if ((param_2 != (float *)0x0) && (iVar25 == 0)) {
                *(ulong *)param_2 = CONCAT44(fStack_f8,local_fc);
                param_2[2] = local_f4;
                iVar26 = 1;
              }
              iVar25 = iVar26;
              if (param_3 == (undefined1 *)0x0) {
                return 1;
              }
            }
          }
        }
        if ((local_b8._5_1_ >> 3 & 1) != 0) {
          lVar27 = *(long *)PTR_DAT_04bb2720;
          if ((lVar27 == 0) || (*(long *)(lVar27 + 0x330) == 0)) {
            puVar31 = &DAT_055c04a0;
          }
          else {
            puVar31 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar27 + 0x338));
            iVar26 = FUN_006bd550(*puVar31,0);
            puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar26 != 0x758f7eaf) {
              puVar31 = &DAT_055c04a0;
            }
          }
          if (*(int *)(puVar31 + 7) == -0x17df00c3) {
            iVar37 = (int)((float)(int)local_fc / 5.0) - (uint)(local_fc < 0.0);
            iVar16 = (int)((float)(int)local_f4 / 5.0) - (uint)(local_f4 < 0.0);
            iVar10 = (int)((float)(int)(local_fc + 0.0) / 5.0) - (uint)(local_fc + 0.0 < 0.0);
            iVar12 = (int)((float)(int)(local_f4 + 0.0) / 5.0) - (uint)(local_f4 + 0.0 < 0.0);
            iVar26 = iVar37;
            if (iVar10 <= iVar37) {
              iVar26 = iVar10;
            }
            if (iVar37 <= iVar10) {
              iVar37 = iVar10;
            }
            iVar10 = iVar16;
            if (iVar12 <= iVar16) {
              iVar10 = iVar12;
            }
            if (iVar16 <= iVar12) {
              iVar16 = iVar12;
            }
            lVar27 = *(long *)PTR_DAT_04bb59d8;
            iVar13 = *(int *)(lVar27 + 0x50);
            iVar11 = *(int *)(lVar27 + 0x60);
            iVar14 = *(int *)(lVar27 + 100);
            iVar15 = *(int *)(lVar27 + 0x2c);
            iVar12 = iVar13;
            if (iVar11 <= iVar13) {
              iVar12 = iVar11;
            }
            if (iVar13 <= iVar11) {
              iVar13 = iVar11;
            }
            iVar11 = iVar15;
            if (iVar14 <= iVar15) {
              iVar11 = iVar14;
            }
            iVar7 = iVar15;
            if (iVar15 <= iVar14) {
              iVar7 = iVar14;
            }
            if (((((iVar26 < *(int *)(lVar27 + 0x28)) || (*(int *)(lVar27 + 0x38) < iVar37)) ||
                 (iVar10 < iVar15)) || (*(int *)(lVar27 + 0x3c) < iVar16)) &&
               (((iVar26 < iVar12 || (iVar13 < iVar37)) || ((iVar10 < iVar11 || (iVar7 < iVar16)))))
               ) {
              iVar26 = iVar25;
              if (iVar25 == 0) {
                iVar26 = 0x800;
              }
              if ((param_2 != (float *)0x0) && (iVar25 == 0)) {
                param_2[2] = local_f4;
                *param_2 = local_fc;
                param_2[1] = fStack_f8;
                iVar26 = 0x800;
              }
              iVar25 = iVar26;
              if (param_3 == (undefined1 *)0x0) {
                return 0x800;
              }
            }
          }
        }
        if ((local_b8._4_1_ >> 1 & 1) != 0) {
          fVar40 = (float)(int)((int)((float)(int)local_fc / 5.0) - (uint)(local_fc < 0.0)) * 0.5;
          uVar24 = 0;
          if (fVar40 != (float)(int)fVar40) {
            uVar24 = (uint)(fVar40 < 0.0);
          }
          fVar41 = (float)(int)((int)((float)(int)local_f4 / 5.0) - (uint)(local_f4 < 0.0)) * 0.5;
          uVar36 = 0;
          if (fVar41 != (float)(int)fVar41) {
            uVar36 = (uint)(fVar41 < 0.0);
          }
          local_e8 = (undefined *)CONCAT44((int)fVar41 - uVar36,(int)fVar40 - uVar24);
          local_f0 = puVar5;
          uVar30 = FUN_01318220(&local_f0);
          if ((uVar30 & 1) != 0) {
            iVar26 = iVar25;
            if (iVar25 == 0) {
              iVar26 = 2;
            }
            if ((param_2 != (float *)0x0) && (iVar25 == 0)) {
              *(ulong *)param_2 = CONCAT44(fStack_f8,local_fc);
              param_2[2] = local_f4;
              iVar26 = 2;
            }
            iVar25 = iVar26;
            if (param_3 == (undefined1 *)0x0) {
              return 2;
            }
          }
        }
        if ((((local_b8 & 0x10000000000) != 0) && (lVar27 = *(long *)PTR_DAT_04bb2720, lVar27 != 0))
           && (*(long *)(lVar27 + 0x330) != 0)) {
          puVar31 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar27 + 0x338));
          iVar26 = FUN_006bd550(*puVar31,0);
          if (((iVar26 == 0x758f7eaf) && (*(long *)PTR_DAT_04bb2720 != 0)) &&
             ((lVar27 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330), lVar27 != 0 &&
              (lVar38 = *(long *)(lVar27 + 600), lVar38 != lVar27 + 0x250)))) {
            lVar32 = lVar38 + -0x40;
            do {
              uVar30 = FUN_02932e20(lVar32,&local_c8);
              if ((uVar30 & 1) != 0) {
                iVar26 = iVar25;
                if (iVar25 == 0) {
                  iVar26 = 0x100;
                }
                if ((param_2 != (float *)0x0) && (iVar25 == 0)) {
                  *(ulong *)param_2 = CONCAT44(fStack_f8,local_fc);
                  param_2[2] = local_f4;
                  iVar26 = 0x100;
                }
                iVar25 = iVar26;
                if (param_3 == (undefined1 *)0x0) {
                  return 0x100;
                }
                break;
              }
              lVar38 = *(long *)(lVar38 + 8);
              lVar32 = lVar38 + -0x40;
            } while (lVar32 != lVar27 + 0x210);
          }
        }
        if ((local_b8._4_1_ >> 5 & 1) != 0) {
          local_f0 = (undefined *)((ulong)local_f0 & 0xffffffff00000000);
          FUN_0093a950(*(long *)puVar1 + 0x28,&local_fc,&local_f0);
          if ((int)local_f0 == 0x2e) {
            iVar26 = iVar25;
            if (iVar25 == 0) {
              iVar26 = 0x20;
            }
            if ((param_2 != (float *)0x0) && (iVar25 == 0)) {
              *(ulong *)param_2 = CONCAT44(fStack_f8,local_fc);
              param_2[2] = local_f4;
              iVar26 = 0x20;
            }
            iVar25 = iVar26;
            if (param_3 == (undefined1 *)0x0) {
              return 0x20;
            }
          }
        }
        if ((local_b8._4_1_ >> 6 & 1) != 0) {
          local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
          FUN_0093a950(*(long *)puVar1 + 0x28,&local_fc,&local_98);
          local_f0 = (undefined *)CONCAT44(local_f0._4_4_,(int)local_98);
          lVar27 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,(ulong)local_98 & 0xffffffff);
          if (((lVar27 != 0) &&
              (pcVar29 = (char *)FUN_009823a0(lVar27,0xb,0xe7e965db,*(undefined8 *)PTR_DAT_04bb5d28)
              , pcVar29 != (char *)0x0)) && (*pcVar29 != '\0')) {
            iVar26 = iVar25;
            if (iVar25 == 0) {
              iVar26 = 0x40;
            }
            if ((param_2 != (float *)0x0) && (iVar25 == 0)) {
              *(ulong *)param_2 = CONCAT44(fStack_f8,local_fc);
              param_2[2] = local_f4;
              iVar26 = 0x40;
            }
            iVar25 = iVar26;
            if (param_3 == (undefined1 *)0x0) {
              return 0x40;
            }
          }
        }
        if ((local_b8._4_4_ >> 3 & 1) != 0) {
          local_a8 = PTR_DAT_04bb2010 + 0x10;
          local_a0 = 0;
          local_e8 = (undefined *)((ulong)local_e8 & 0xffffffff00000000);
          local_f0 = PTR_DAT_04bbfe68 + 0x10;
          local_90 = (int)((float)(int)local_fc / 5.0) - (uint)(local_fc < 0.0);
          iStack_8c = (int)((float)(int)local_f4 / 5.0) - (uint)(local_f4 < 0.0);
          lVar27 = *(long *)PTR_DAT_04bb2720;
          local_98 = local_a8;
          if ((lVar27 == 0) || (*(long *)(lVar27 + 0x330) == 0)) {
            puVar31 = &DAT_055c04a0;
          }
          else {
            puVar31 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar27 + 0x338));
            iVar26 = FUN_006bd550(*puVar31,0);
            puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar26 != 0x758f7eaf) {
              puVar31 = &DAT_055c04a0;
            }
          }
          local_e8 = (undefined *)CONCAT44(*(undefined4 *)(puVar31 + 7),(undefined4)local_e8);
          uVar22 = FUN_017baf44();
          local_e0 = CONCAT71(local_e0._1_7_,uVar22) & 0xffffffffffffff01;
          plVar34 = (long *)FUN_01a5190c(&local_f0,0,&local_98,&local_a8);
          puVar19 = PTR_DAT_04bb43c0;
          lVar27 = *(long *)PTR_DAT_04bb43c0;
          uVar24 = FUN_0277d6c4();
          puVar39 = PTR_DAT_04bb2d00;
          lVar38 = *(long *)puVar19;
          if (lVar38 != 0) {
            lVar27 = *(long *)(lVar27 + 0x57e58);
            uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
            if ((uVar24 < *(uint *)(lVar27 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
              local_e8 = (undefined *)*plVar34;
              local_e0 = 0;
              local_f0 = puVar4;
              uVar24 = FUN_0277d6c4(&local_e8);
              if (*(long *)PTR_DAT_04bb43c0 != 0) {
                lVar27 = *(long *)(lVar38 + 0x57e58);
                uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
                if ((uVar24 < *(uint *)(lVar27 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
                  lVar27 = *(long *)PTR_DAT_04bc0428;
                  uVar24 = FUN_0277d6c4(plVar34);
                  uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
                  if (uVar24 < *(uint *)(lVar27 + 0x1d8)) {
                    uVar30 = *(ulong *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar24 * 8);
                    if (uVar30 != 0) {
                      local_e0 = uVar30;
                    }
                  }
                }
              }
              uVar30 = FUN_0277e294(plVar34);
              if (((uVar30 & 1) != 0) && (uVar30 = FUN_01ae6020(&local_f0), (uVar30 & 1) != 0)) {
                local_98 = PTR_DAT_04bb2010 + 0x10;
                local_90 = (int)((float)(int)local_fc / 5.0) - (uint)(local_fc < 0.0);
                iStack_8c = (int)((float)(int)local_f4 / 5.0) - (uint)(local_f4 < 0.0);
                uVar30 = FUN_0097b830(&local_98);
                if ((uVar30 & 1) != 0) {
                  iVar26 = iVar25;
                  if (iVar25 == 0) {
                    iVar26 = 8;
                  }
                  if ((param_2 != (float *)0x0) && (iVar25 == 0)) {
                    *(ulong *)param_2 = CONCAT44(fStack_f8,local_fc);
                    param_2[2] = local_f4;
                    iVar26 = 8;
                  }
                  iVar25 = iVar26;
                  if (param_3 == (undefined1 *)0x0) {
                    return 8;
                  }
                }
              }
            }
          }
        }
        if ((local_b8._4_4_ >> 2 & 1) == 0) {
LAB_016ef6b0:
          uVar24 = local_b8._4_4_;
        }
        else {
          uVar30 = FUN_016e11a0(&local_fc,(undefined1)local_b0,local_b0._3_1_);
          if ((uVar30 & 1) == 0) goto LAB_016ef6b0;
          iVar26 = iVar25;
          if (iVar25 == 0) {
            iVar26 = 4;
          }
          if ((param_2 != (float *)0x0) && (iVar25 == 0)) {
            iVar26 = 4;
            param_2[2] = local_f4;
            *param_2 = local_fc;
            param_2[1] = fStack_f8;
          }
          puVar19 = PTR_DAT_04bb5d40;
          local_e8 = (undefined *)((ulong)local_e8 & 0xffffffff00000000);
          local_a8 = PTR_DAT_04bb2010 + 0x10;
          local_a0 = 0;
          local_90 = (int)((float)(int)local_fc / 5.0) - (uint)(local_fc < 0.0);
          iStack_8c = (int)((float)(int)local_f4 / 5.0) - (uint)(local_f4 < 0.0);
          lVar27 = *(long *)PTR_DAT_04bb2720;
          local_f0 = puVar3;
          local_98 = local_a8;
          if (lVar27 == 0) {
            puVar31 = &DAT_055c04a0;
          }
          else if (*(long *)(lVar27 + 0x330) == 0) {
            puVar31 = &DAT_055c04a0;
          }
          else {
            puVar31 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar27 + 0x338));
            iVar25 = FUN_006bd550(*puVar31,0);
            puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar25 != 0x758f7eaf) {
              puVar31 = &DAT_055c04a0;
            }
          }
          local_e8 = (undefined *)CONCAT44(*(undefined4 *)(puVar31 + 7),(undefined4)local_e8);
          uVar22 = FUN_017baf44();
          local_e0 = CONCAT71(local_e0._1_7_,uVar22) & 0xffffffffffffff01;
          FUN_01a5190c(&local_f0,0,&local_98,&local_a8);
          iVar25 = iVar26;
          uVar24 = local_b8._4_4_;
          if (((param_4 == 0) || (*(int *)(param_4 + 8) != (int)local_a0)) ||
             (*(int *)(param_4 + 0xc) != local_a0._4_4_)) {
            if ((local_110._4_4_ == *(int *)(puVar19 + 8)) &&
               ((int)local_110 == *(int *)(puVar19 + 0xc))) {
              local_110 = CONCAT44((int)local_a0,local_a0._4_4_);
              goto LAB_016ef768;
            }
            if ((local_110._4_4_ == (int)local_a0) && ((int)local_110 == local_a0._4_4_))
            goto LAB_016ef768;
            if (param_3 == (undefined1 *)0x0) {
              return 4;
            }
            *param_3 = 0;
          }
          else {
LAB_016ef768:
            if (param_3 == (undefined1 *)0x0) {
              return 4;
            }
          }
        }
        if ((uVar24 >> 9 & 1) != 0) {
          local_d0 = (int)((float)(int)local_fc / 5.0) - (uint)(local_fc < 0.0);
          iStack_cc = (int)((float)(int)local_f4 / 5.0) - (uint)(local_f4 < 0.0);
          iVar37 = (int)((float)(int)(local_fc + 0.0) / 5.0) - (uint)(local_fc + 0.0 < 0.0);
          iVar16 = (int)((float)(int)(local_f4 + 0.0) / 5.0) - (uint)(local_f4 + 0.0 < 0.0);
          iVar26 = local_d0;
          if (iVar37 <= local_d0) {
            iVar26 = iVar37;
          }
          if (local_d0 <= iVar37) {
            local_d0 = iVar37;
          }
          iVar37 = iStack_cc;
          if (iVar16 <= iStack_cc) {
            iVar37 = iVar16;
          }
          if (iStack_cc <= iVar16) {
            iStack_cc = iVar16;
          }
          local_e0 = CONCAT44(iVar37,iVar26);
          local_f0 = puVar6;
          local_e8 = puVar2;
          local_d8 = puVar2;
          iVar26 = iVar25;
          if (((*(long *)puVar1 != 0) && (lVar27 = *(long *)(*(long *)puVar1 + 0xa8), lVar27 != 0))
             && (uVar30 = FUN_009721a0(lVar27,&local_f0,0), (uVar30 & 1) != 0)) {
            if (iVar25 == 0) {
              iVar26 = 0x200;
            }
            if ((param_2 != (float *)0x0) && (iVar25 == 0)) {
              *(undefined8 *)param_2 = local_c8;
              iVar26 = 0x200;
              param_2[2] = (float)local_c0;
            }
            if (param_3 == (undefined1 *)0x0) {
              return 0x200;
            }
          }
          iVar25 = iVar26;
          uVar24 = local_b8._4_4_;
        }
        if ((uVar24 >> 4 & 1) != 0) {
          uVar30 = FUN_016ec764(&local_fc,(undefined1)local_b0);
          if ((uVar30 & 1) != 0) {
            iVar26 = iVar25;
            if (iVar25 == 0) {
              iVar26 = 0x10;
            }
            if ((param_2 != (float *)0x0) && (iVar25 == 0)) {
              *(ulong *)param_2 = CONCAT44(fStack_f8,local_fc);
              param_2[2] = local_f4;
              iVar26 = 0x10;
            }
            iVar25 = iVar26;
            if (param_3 == (undefined1 *)0x0) {
              return 0x10;
            }
          }
        }
        iVar23 = iVar23 + 1;
      } while (iVar23 != iVar35);
    }
    else {
      puVar2 = PTR_DAT_04bbc1a0 + 0x10;
      lVar27 = 0;
      puVar3 = PTR_DAT_04bb2010 + 0x10;
      puVar4 = PTR_DAT_04bbfe68 + 0x10;
      puVar5 = PTR_DAT_04bc0510 + 0x10;
      puVar39 = PTR_DAT_04bb2018 + 0x10;
      do {
        fStack_f8 = local_c0._4_4_ * 0.0 + local_c8._4_4_;
        local_fc = (float)(&DAT_04176b4c)[lVar27 * 3] * local_c0._4_4_ + (float)local_c8;
        local_f4 = (float)(&DAT_04176b54)[lVar27 * 3] * local_c0._4_4_ + (float)local_c0;
        if ((local_b8 & 0x100000000) == 0) {
LAB_016ee1e0:
        }
        else {
          local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
          local_a8 = (undefined *)((ulong)local_a8 & 0xffffffff00000000);
          FUN_0093b024(*(long *)puVar1 + 0x28,&local_fc,&local_98);
          FUN_0093a950(*(long *)puVar1 + 0x28,&local_fc,&local_a8);
          local_f0 = (undefined *)CONCAT44(local_f0._4_4_,(int)local_98);
          lVar38 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,(ulong)local_98 & 0xffffffff);
          if (((lVar38 == 0) ||
              (pcVar29 = (char *)FUN_009823a0(lVar38,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10)
              , pcVar29 == (char *)0x0)) || (*pcVar29 == '\0')) goto LAB_016ee1e0;
          if (((int)local_98 == (int)local_a8) && (iVar25 == 0)) {
            if (param_2 != (float *)0x0) {
              param_2[2] = local_f4;
              *(ulong *)param_2 = CONCAT44(fStack_f8,local_fc);
            }
            iVar25 = 1;
            if (param_3 == (undefined1 *)0x0) {
              return 1;
            }
          }
        }
        if ((local_b8._5_1_ >> 3 & 1) != 0) {
          lVar38 = *(long *)puVar6;
          if ((lVar38 == 0) || (*(long *)(lVar38 + 0x330) == 0)) {
            puVar31 = &DAT_055c04a0;
          }
          else {
            puVar31 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar38 + 0x338));
            iVar23 = FUN_006bd550(*puVar31,0);
            puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar23 != 0x758f7eaf) {
              puVar31 = &DAT_055c04a0;
            }
          }
          if (*(int *)(puVar31 + 7) == -0x17df00c3) {
            iVar35 = (int)((float)(int)local_fc / 5.0) - (uint)(local_fc < 0.0);
            iVar18 = (int)((float)(int)local_f4 / 5.0) - (uint)(local_f4 < 0.0);
            iVar26 = (int)((float)(int)(local_fc + 0.0) / 5.0) - (uint)(local_fc + 0.0 < 0.0);
            iVar37 = (int)((float)(int)(local_f4 + 0.0) / 5.0) - (uint)(local_f4 + 0.0 < 0.0);
            iVar23 = iVar35;
            if (iVar26 <= iVar35) {
              iVar23 = iVar26;
            }
            if (iVar35 <= iVar26) {
              iVar35 = iVar26;
            }
            iVar26 = iVar18;
            if (iVar37 <= iVar18) {
              iVar26 = iVar37;
            }
            if (iVar18 <= iVar37) {
              iVar18 = iVar37;
            }
            lVar38 = *(long *)PTR_DAT_04bb59d8;
            iVar16 = *(int *)(lVar38 + 0x50);
            iVar10 = *(int *)(lVar38 + 0x60);
            iVar12 = *(int *)(lVar38 + 100);
            iVar13 = *(int *)(lVar38 + 0x2c);
            iVar37 = iVar16;
            if (iVar10 <= iVar16) {
              iVar37 = iVar10;
            }
            if (iVar16 <= iVar10) {
              iVar16 = iVar10;
            }
            iVar10 = iVar13;
            if (iVar12 <= iVar13) {
              iVar10 = iVar12;
            }
            iVar11 = iVar13;
            if (iVar13 <= iVar12) {
              iVar11 = iVar12;
            }
            if (((((iVar23 < *(int *)(lVar38 + 0x28)) || (*(int *)(lVar38 + 0x38) < iVar35)) ||
                 (iVar26 < iVar13)) || (*(int *)(lVar38 + 0x3c) < iVar18)) &&
               (((((iVar11 < iVar18 || iVar26 < iVar10) || iVar16 < iVar35) || iVar37 != iVar23) &&
                 (((iVar18 <= iVar11 && iVar10 <= iVar26) && iVar35 <= iVar16) &&
                 iVar37 - iVar23 < 0) ==
                 (((iVar18 <= iVar11 && iVar10 <= iVar26) && iVar35 <= iVar16) &&
                 SBORROW4(iVar37,iVar23)) && (iVar25 == 0)))) {
              if (param_2 != (float *)0x0) {
                param_2[2] = local_f4;
                *param_2 = local_fc;
                param_2[1] = fStack_f8;
              }
              iVar25 = 0x800;
              if (param_3 == (undefined1 *)0x0) {
                return 0x800;
              }
            }
          }
        }
        if ((local_b8._4_1_ >> 1 & 1) != 0) {
          fVar40 = (float)(int)((int)((float)(int)local_fc / 5.0) - (uint)(local_fc < 0.0)) * 0.5;
          uVar24 = 0;
          if (fVar40 != (float)(int)fVar40) {
            uVar24 = (uint)(fVar40 < 0.0);
          }
          fVar41 = (float)(int)((int)((float)(int)local_f4 / 5.0) - (uint)(local_f4 < 0.0)) * 0.5;
          uVar36 = 0;
          if (fVar41 != (float)(int)fVar41) {
            uVar36 = (uint)(fVar41 < 0.0);
          }
          local_e8 = (undefined *)CONCAT44((int)fVar41 - uVar36,(int)fVar40 - uVar24);
          local_f0 = puVar39;
          uVar30 = FUN_01318220(&local_f0);
          if (((uVar30 & 1) != 0) && (iVar25 == 0)) {
            if (param_2 != (float *)0x0) {
              param_2[2] = local_f4;
              *(ulong *)param_2 = CONCAT44(fStack_f8,local_fc);
            }
            iVar25 = 2;
            if (param_3 == (undefined1 *)0x0) {
              return 2;
            }
          }
        }
        if ((((local_b8._5_1_ >> 2 & 1) != 0) &&
            (uVar30 = FUN_016ed09c(&local_fc), (uVar30 & 1) != 0)) && (iVar25 == 0)) {
          if (param_2 != (float *)0x0) {
            param_2[2] = local_f4;
            *(ulong *)param_2 = CONCAT44(fStack_f8,local_fc);
          }
          iVar25 = 0x400;
          if (param_3 == (undefined1 *)0x0) {
            return 0x400;
          }
        }
        if ((((local_b8 & 0x10000000000) != 0) && (lVar38 = *(long *)puVar6, lVar38 != 0)) &&
           (*(long *)(lVar38 + 0x330) != 0)) {
          puVar31 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar38 + 0x338));
          iVar23 = FUN_006bd550(*puVar31,0);
          if (((iVar23 == 0x758f7eaf) && (*(long *)puVar6 != 0)) &&
             ((lVar38 = *(long *)(*(long *)puVar6 + 0x330), lVar38 != 0 &&
              (lVar32 = *(long *)(lVar38 + 600), lVar32 != lVar38 + 0x250)))) {
            lVar33 = lVar32 + -0x40;
            do {
              uVar30 = FUN_02932e20(lVar33,&local_c8);
              if ((uVar30 & 1) != 0) {
                iVar23 = iVar25;
                if (iVar25 == 0) {
                  iVar23 = 0x100;
                }
                if ((param_2 != (float *)0x0) && (iVar25 == 0)) {
                  *(ulong *)param_2 = CONCAT44(fStack_f8,local_fc);
                  param_2[2] = local_f4;
                  iVar23 = 0x100;
                }
                iVar25 = iVar23;
                if (param_3 == (undefined1 *)0x0) {
                  return 0x100;
                }
                break;
              }
              lVar32 = *(long *)(lVar32 + 8);
              lVar33 = lVar32 + -0x40;
            } while (lVar33 != lVar38 + 0x210);
          }
        }
        if ((local_b8._4_1_ >> 5 & 1) != 0) {
          local_f0 = (undefined *)((ulong)local_f0 & 0xffffffff00000000);
          FUN_0093a950(*(long *)puVar1 + 0x28,&local_fc,&local_f0);
          if ((int)local_f0 == 0x2e) {
            iVar23 = iVar25;
            if (iVar25 == 0) {
              iVar23 = 0x20;
            }
            if ((param_2 != (float *)0x0) && (iVar25 == 0)) {
              *(ulong *)param_2 = CONCAT44(fStack_f8,local_fc);
              param_2[2] = local_f4;
              iVar23 = 0x20;
            }
            iVar25 = iVar23;
            if (param_3 == (undefined1 *)0x0) {
              return 0x20;
            }
          }
        }
        if ((local_b8._4_1_ >> 6 & 1) != 0) {
          local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
          FUN_0093a950(*(long *)puVar1 + 0x28,&local_fc,&local_98);
          local_f0 = (undefined *)CONCAT44(local_f0._4_4_,(int)local_98);
          lVar38 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,(ulong)local_98 & 0xffffffff);
          if (((lVar38 != 0) &&
              (pcVar29 = (char *)FUN_009823a0(lVar38,0xb,0xe7e965db,*(undefined8 *)PTR_DAT_04bb5d28)
              , pcVar29 != (char *)0x0)) && (*pcVar29 != '\0')) {
            iVar23 = iVar25;
            if (iVar25 == 0) {
              iVar23 = 0x40;
            }
            if ((param_2 != (float *)0x0) && (iVar25 == 0)) {
              *(ulong *)param_2 = CONCAT44(fStack_f8,local_fc);
              param_2[2] = local_f4;
              iVar23 = 0x40;
            }
            iVar25 = iVar23;
            if (param_3 == (undefined1 *)0x0) {
              return 0x40;
            }
          }
        }
        if ((local_b8._4_4_ >> 3 & 1) != 0) {
          local_a8 = PTR_DAT_04bb2010 + 0x10;
          local_a0 = 0;
          local_e8 = (undefined *)((ulong)local_e8 & 0xffffffff00000000);
          local_f0 = PTR_DAT_04bbfe68 + 0x10;
          local_90 = (int)((float)(int)local_fc / 5.0) - (uint)(local_fc < 0.0);
          iStack_8c = (int)((float)(int)local_f4 / 5.0) - (uint)(local_f4 < 0.0);
          lVar38 = *(long *)puVar6;
          local_98 = local_a8;
          if ((lVar38 == 0) || (*(long *)(lVar38 + 0x330) == 0)) {
            puVar31 = &DAT_055c04a0;
          }
          else {
            puVar31 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar38 + 0x338));
            iVar23 = FUN_006bd550(*puVar31,0);
            puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar23 != 0x758f7eaf) {
              puVar31 = &DAT_055c04a0;
            }
          }
          local_e8 = (undefined *)CONCAT44(*(undefined4 *)(puVar31 + 7),(undefined4)local_e8);
          uVar22 = FUN_017baf44();
          local_e0 = CONCAT71(local_e0._1_7_,uVar22) & 0xffffffffffffff01;
          plVar34 = (long *)FUN_01a5190c(&local_f0,0,&local_98,&local_a8);
          puVar19 = PTR_DAT_04bb43c0;
          lVar32 = *(long *)PTR_DAT_04bb43c0;
          uVar24 = FUN_0277d6c4();
          lVar38 = *(long *)puVar19;
          if (lVar38 != 0) {
            lVar32 = *(long *)(lVar32 + 0x57e58);
            uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
            if ((uVar24 < *(uint *)(lVar32 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
              local_e8 = (undefined *)*plVar34;
              local_e0 = 0;
              local_f0 = puVar5;
              uVar24 = FUN_0277d6c4(&local_e8);
              if (*(long *)PTR_DAT_04bb43c0 != 0) {
                lVar38 = *(long *)(lVar38 + 0x57e58);
                uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar38 + 0x1f8);
                if ((uVar24 < *(uint *)(lVar38 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar38 + 0x1e0) + (long)(int)uVar24 * 8) != 0)) {
                  lVar38 = *(long *)PTR_DAT_04bc0428;
                  uVar24 = FUN_0277d6c4(plVar34);
                  uVar24 = (uVar24 & 0xffff) - (uint)*(ushort *)(lVar38 + 0x1f8);
                  if (uVar24 < *(uint *)(lVar38 + 0x1d8)) {
                    uVar30 = *(ulong *)(*(long *)(lVar38 + 0x1e0) + (long)(int)uVar24 * 8);
                    if (uVar30 != 0) {
                      local_e0 = uVar30;
                    }
                  }
                }
              }
              uVar30 = FUN_0277e294(plVar34);
              if (((uVar30 & 1) != 0) && (uVar30 = FUN_01ae6020(&local_f0), (uVar30 & 1) != 0)) {
                local_98 = PTR_DAT_04bb2010 + 0x10;
                local_90 = (int)((float)(int)local_fc / 5.0) - (uint)(local_fc < 0.0);
                iStack_8c = (int)((float)(int)local_f4 / 5.0) - (uint)(local_f4 < 0.0);
                uVar30 = FUN_0097b830(&local_98);
                if ((uVar30 & 1) != 0) {
                  iVar23 = iVar25;
                  if (iVar25 == 0) {
                    iVar23 = 8;
                  }
                  if ((param_2 != (float *)0x0) && (iVar25 == 0)) {
                    *(ulong *)param_2 = CONCAT44(fStack_f8,local_fc);
                    param_2[2] = local_f4;
                    iVar23 = 8;
                  }
                  iVar25 = iVar23;
                  if (param_3 == (undefined1 *)0x0) {
                    return 8;
                  }
                }
              }
            }
          }
        }
        if ((local_b8._4_4_ >> 2 & 1) == 0) {
LAB_016eea20:
          uVar24 = local_b8._4_4_;
        }
        else {
          uVar30 = FUN_016e11a0(&local_fc,(undefined1)local_b0,local_b0._3_1_);
          if ((uVar30 & 1) == 0) goto LAB_016eea20;
          iVar23 = iVar25;
          if (iVar25 == 0) {
            iVar23 = 4;
          }
          if ((param_2 != (float *)0x0) && (iVar25 == 0)) {
            iVar23 = 4;
            param_2[2] = local_f4;
            *param_2 = local_fc;
            param_2[1] = fStack_f8;
          }
          puVar19 = PTR_DAT_04bb5d40;
          local_e8 = (undefined *)((ulong)local_e8 & 0xffffffff00000000);
          local_a8 = PTR_DAT_04bb2010 + 0x10;
          local_a0 = 0;
          local_90 = (int)((float)(int)local_fc / 5.0) - (uint)(local_fc < 0.0);
          iStack_8c = (int)((float)(int)local_f4 / 5.0) - (uint)(local_f4 < 0.0);
          lVar38 = *(long *)puVar6;
          local_f0 = puVar4;
          local_98 = local_a8;
          if (lVar38 == 0) {
            puVar31 = &DAT_055c04a0;
          }
          else if (*(long *)(lVar38 + 0x330) == 0) {
            puVar31 = &DAT_055c04a0;
          }
          else {
            puVar31 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar38 + 0x338));
            iVar25 = FUN_006bd550(*puVar31,0);
            puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar25 != 0x758f7eaf) {
              puVar31 = &DAT_055c04a0;
            }
          }
          local_e8 = (undefined *)CONCAT44(*(undefined4 *)(puVar31 + 7),(undefined4)local_e8);
          uVar22 = FUN_017baf44();
          local_e0 = CONCAT71(local_e0._1_7_,uVar22) & 0xffffffffffffff01;
          FUN_01a5190c(&local_f0,0,&local_98,&local_a8);
          iVar25 = iVar23;
          uVar24 = local_b8._4_4_;
          if (((param_4 == 0) || (*(int *)(param_4 + 8) != (int)local_a0)) ||
             (*(int *)(param_4 + 0xc) != local_a0._4_4_)) {
            if ((local_110._4_4_ == *(int *)(puVar19 + 8)) &&
               ((int)local_110 == *(int *)(puVar19 + 0xc))) {
              local_110 = CONCAT44((int)local_a0,local_a0._4_4_);
              goto LAB_016eead0;
            }
            if ((local_110._4_4_ == (int)local_a0) && ((int)local_110 == local_a0._4_4_))
            goto LAB_016eead0;
            if (param_3 == (undefined1 *)0x0) {
              return 4;
            }
            *param_3 = 0;
          }
          else {
LAB_016eead0:
            if (param_3 == (undefined1 *)0x0) {
              return 4;
            }
          }
        }
        if ((uVar24 >> 9 & 1) != 0) {
          local_d0 = (int)((float)(int)local_fc / 5.0) - (uint)(local_fc < 0.0);
          iStack_cc = (int)((float)(int)local_f4 / 5.0) - (uint)(local_f4 < 0.0);
          iVar35 = (int)((float)(int)(local_fc + 0.0) / 5.0) - (uint)(local_fc + 0.0 < 0.0);
          iVar18 = (int)((float)(int)(local_f4 + 0.0) / 5.0) - (uint)(local_f4 + 0.0 < 0.0);
          iVar23 = local_d0;
          if (iVar35 <= local_d0) {
            iVar23 = iVar35;
          }
          if (local_d0 <= iVar35) {
            local_d0 = iVar35;
          }
          iVar35 = iStack_cc;
          if (iVar18 <= iStack_cc) {
            iVar35 = iVar18;
          }
          if (iStack_cc <= iVar18) {
            iStack_cc = iVar18;
          }
          local_e0 = CONCAT44(iVar35,iVar23);
          local_f0 = puVar2;
          local_e8 = puVar3;
          local_d8 = puVar3;
          iVar23 = iVar25;
          if (((*(long *)puVar1 != 0) && (lVar38 = *(long *)(*(long *)puVar1 + 0xa8), lVar38 != 0))
             && (uVar30 = FUN_009721a0(lVar38,&local_f0,0), (uVar30 & 1) != 0)) {
            if (iVar25 == 0) {
              iVar23 = 0x200;
            }
            if ((param_2 != (float *)0x0) && (iVar25 == 0)) {
              *(undefined8 *)param_2 = local_c8;
              iVar23 = 0x200;
              param_2[2] = (float)local_c0;
            }
            if (param_3 == (undefined1 *)0x0) {
              return 0x200;
            }
          }
          iVar25 = iVar23;
          uVar24 = local_b8._4_4_;
        }
        if ((uVar24 >> 4 & 1) != 0) {
          uVar30 = FUN_016ec764(&local_fc,(undefined1)local_b0);
          if ((uVar30 & 1) != 0) {
            iVar23 = iVar25;
            if (iVar25 == 0) {
              iVar23 = 0x10;
            }
            if ((param_2 != (float *)0x0) && (iVar25 == 0)) {
              *(ulong *)param_2 = CONCAT44(fStack_f8,local_fc);
              param_2[2] = local_f4;
              iVar23 = 0x10;
            }
            iVar25 = iVar23;
            if (param_3 == (undefined1 *)0x0) {
              return 0x10;
            }
          }
        }
        lVar27 = lVar27 + 1;
      } while (lVar27 != 8);
    }
  }
  else {
    iVar25 = 0;
  }
  return iVar25;
}

