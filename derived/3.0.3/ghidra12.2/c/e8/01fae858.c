
uint FUN_01fae858(long *param_1,float *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  uint *puVar10;
  undefined8 *puVar11;
  int *piVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long *plVar18;
  long lVar19;
  undefined *local_120;
  undefined *puStack_118;
  undefined8 local_110;
  undefined *local_108;
  undefined8 local_100;
  int local_f8;
  int local_f4;
  undefined *local_f0;
  int local_e8;
  int iStack_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 auStack_d0 [24];
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  byte local_a8;
  int local_a0 [2];
  undefined8 *local_98;
  undefined8 local_90;
  char local_88;
  undefined4 local_80;
  char local_7c;
  int local_78;
  char local_74;
  undefined4 local_44;
  
  puVar1 = PTR_DAT_04bb27c0;
  lVar13 = *(long *)PTR_DAT_04bb27c0;
  if (lVar13 != 0) {
    uVar6 = *(uint *)PTR_DAT_04bb32f8;
    if ((((uVar6 == 0) ||
         (plVar18 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                              ((ulong)(uVar6 >> 0x11) & 0x7ff8)), plVar18 == (long *)0x0)) ||
        ((*(uint *)(plVar18 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar18 + 0x46) != uVar6)) {
      plVar18 = (long *)0x0;
    }
    if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
      plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar13 = *(long *)puVar1;
      iVar4 = (**(code **)(*plVar8 + 0x60))();
      if (iVar4 < 0x11) {
        uVar6 = 1;
      }
      else {
        if (4 < *(uint *)(lVar13 + 0x5e8)) goto LAB_01fae930;
        uVar6 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_01fae930:
      uVar6 = 0;
    }
    if (plVar18 != (long *)0x0) {
      lVar13 = plVar18[0x2a];
      if (((*PTR_DAT_04bb3280 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3280);
      }
      uVar9 = (**(code **)(*plVar18 + 0x20))(plVar18,PTR_DAT_04bb3278);
      uVar7 = 0;
      uVar2 = 0;
      if ((int)lVar13 == 1) {
        uVar2 = uVar6;
      }
      if (((uVar9 & 1) == 0) || (uVar2 == 0)) goto LAB_01faea4c;
      FUN_008fbfa0(local_a0,plVar18);
      if (local_a0[0] == 3) {
        if ((local_7c != '\0') && (local_88 != '\0')) {
          local_b0 = 0;
          lVar13 = *(long *)PTR_DAT_04bb2720;
          if (lVar13 == 0) {
            puVar11 = &DAT_055c04a0;
          }
          else {
            puVar11 = &DAT_055c04a0;
            if (*(long *)(lVar13 + 0x330) != 0) {
              puVar11 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
              iVar4 = FUN_006bd550(*puVar11,0);
              puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar4 != 0x758f7eaf) {
                puVar11 = &DAT_055c04a0;
              }
            }
          }
          local_ac = *(undefined4 *)(puVar11 + 7);
          local_a8 = FUN_017baf44();
          local_a8 = local_a8 & 1;
          local_b8 = PTR_DAT_04bb3140 + 0x10;
          if (local_7c == '\0') {
            local_80 = 0;
          }
          if (local_88 == '\0') {
            local_98 = (undefined8 *)(PTR_DAT_04bb2010 + 0x10);
            local_90 = 0;
          }
          piVar12 = (int *)FUN_01a5010c(&local_b8,local_80,&local_98);
          puVar1 = PTR_DAT_04bb43c0;
          lVar13 = *(long *)PTR_DAT_04bb43c0;
          uVar6 = FUN_0277d6c4();
          lVar19 = *(long *)puVar1;
          if (lVar19 == 0) {
LAB_01faef08:
            lVar13 = *(long *)PTR_DAT_04bbbc68;
            if (((lVar13 != 0) &&
                ((((*(long *)(lVar13 + 0xb0) != 0 && (*(long *)(*(long *)(lVar13 + 0xb0) + 8) != 0))
                  && (*(long *)(lVar13 + 0x488) != 0)) &&
                 ((*(long *)(*(long *)(lVar13 + 0x488) + 8) != 0 && (*(long *)(lVar13 + 0x2b0) != 0)
                  ))))) && (*(long *)(*(long *)(lVar13 + 0x2b0) + 8) != 0)) {
              uVar6 = FUN_0277d6c4(piVar12);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar13 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                lVar19 = *(long *)puVar1;
                goto LAB_01faed2c;
              }
            }
          }
          else {
            lVar13 = *(long *)(lVar13 + 0x57e58);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            if ((*(uint *)(lVar13 + 0x1d8) <= uVar6) ||
               (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) == 0))
            goto LAB_01faef08;
LAB_01faed2c:
            puVar10 = (uint *)(param_1 + 0x15f6);
            uVar6 = FUN_0277d6c4(piVar12);
            if (*(long *)puVar1 != 0) {
              lVar13 = *(long *)(lVar19 + 0x57e58);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar13 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                FUN_01ad5d04(auStack_d0,piVar12);
                puVar1 = PTR_DAT_04bb2010 + 0x10;
                local_d8 = *(undefined4 *)PTR_DAT_04bb3238;
                iVar4 = (int)local_90;
                iVar14 = local_90._4_4_;
                local_f8 = *piVar12;
                local_f4 = piVar12[1];
                local_e8 = (int)local_90;
                iStack_e4 = local_90._4_4_;
                local_dc = local_80;
                local_f0 = puVar1;
                local_e0 = FUN_01ae98d0(auStack_d0);
                local_44 = FUN_01b0e240(auStack_d0);
                local_110 = 0;
                local_100 = 0;
                local_120 = PTR_DAT_04bbc1a0 + 0x10;
                puStack_118 = puVar1;
                local_108 = puVar1;
                FUN_01afb480(auStack_d0,&local_120);
                local_110 = CONCAT44(local_110._4_4_ + iVar14,(int)local_110 + iVar4);
                local_100 = CONCAT44(local_100._4_4_ + iVar14,(int)local_100 + iVar4);
                uVar7 = (**(code **)(*param_1 + 0x570))
                                  (param_1,param_2,&local_f8,&local_44,&local_120);
                if ((uVar7 & 1) != 0) {
                  iVar4 = FUN_006f0400(((float)(int)local_110 * 5.0 +
                                       (float)(int)local_100 * 5.0 + 5.0) * 0.5 - *param_2,
                                       ((float)local_110._4_4_ * 5.0 +
                                       (float)local_100._4_4_ * 5.0 + 5.0) * 0.5 - param_2[2]);
                  *param_3 = (int)(long)((float)(iVar4 + 0x20000000U >> 0x1e) * 90.0 * 11930465.0);
                  FUN_01facbc0(param_1,&local_f8);
                  *puVar10 = *puVar10 | 0x200;
                }
                goto joined_r0x01faef00;
              }
            }
            uVar9 = FUN_0277db54(piVar12);
            if ((uVar9 & 1) == 0) goto LAB_01faf050;
            uVar9 = FUN_01fabf28(param_1,param_2,param_3,piVar12,&local_98);
            if ((uVar9 & 1) != 0) {
              *(short *)(param_1 + 0x23f9) = (short)*piVar12;
              *(undefined1 *)((long)param_1 + 0x11fca) = *(undefined1 *)((long)piVar12 + 2);
              *(undefined1 *)((long)param_1 + 0x11fcb) = *(undefined1 *)((long)piVar12 + 3);
              iVar4 = piVar12[1];
              *(int *)(param_1 + 0x23fc) = (int)local_90;
              *(int *)((long)param_1 + 0x11fe4) = local_90._4_4_;
              *(int *)(param_1 + 0x23fe) = (int)local_90 + 1;
              *(int *)((long)param_1 + 0x11ff4) = local_90._4_4_ + 1;
              *(undefined4 *)(param_1 + 0x2400) = 0;
              uVar7 = 1;
              *(undefined4 *)(param_1 + 0x23ff) = local_80;
              *(int *)((long)param_1 + 0x11fcc) = iVar4;
              *puVar10 = *puVar10 | 0x200;
              *(float *)((long)param_1 + 0x11ffc) =
                   ((float)(int)local_90 * 5.0 + (float)((int)local_90 + 1) * 5.0 + 5.0) * 0.5;
              *(float *)((long)param_1 + 0x12004) =
                   ((float)local_90._4_4_ * 5.0 + (float)(local_90._4_4_ + 1) * 5.0 + 5.0) * 0.5;
              goto joined_r0x01faef00;
            }
          }
        }
        uVar7 = 0;
      }
      else if (local_a0[0] == 2) {
        if (local_74 == '\0') {
          uVar9 = FUN_01fae650(param_1);
          if ((uVar9 & 1) != 0) {
            iVar4 = *(int *)(param_1[1] + 0x230);
            goto LAB_01faeb20;
          }
        }
        else {
          iVar4 = *(int *)(param_1[1] + 0x230);
          if (iVar4 == local_78) {
LAB_01faeb20:
            local_f8 = iVar4;
            uVar9 = FUN_03773c20(param_2,&local_f8,1,0);
            if ((uVar9 & 1) == 0) {
              FUN_01faf130(param_1,param_2);
            }
            puVar3 = PTR_DAT_04bb5ce0;
            puVar1 = PTR_DAT_04bb2720;
            if (((*(long *)PTR_DAT_04bb5ce0 == 0) ||
                (lVar13 = *(long *)PTR_DAT_04bb2720, lVar13 == 0)) ||
               (*(long *)(lVar13 + 0x330) == 0)) {
LAB_01faebec:
              lVar13 = *(long *)PTR_DAT_04bb59d8;
              if (lVar13 == 0) {
                iVar4 = 0;
                iVar16 = 0;
                iVar14 = 0;
                iVar15 = 0;
              }
              else {
                iVar4 = *(int *)(lVar13 + 0x28);
                iVar16 = *(int *)(lVar13 + 0x2c);
                iVar14 = *(int *)(lVar13 + 0x38);
                iVar15 = *(int *)(lVar13 + 0x3c);
              }
            }
            else {
              puVar11 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
              iVar4 = FUN_006bd550(*puVar11,0);
              if (((iVar4 != 0x758f7eaf) || (*(long *)puVar1 == 0)) ||
                 ((lVar13 = *(long *)(*(long *)puVar1 + 0x330), lVar13 == 0 ||
                  (*(int *)(lVar13 + 0x244) == 0)))) goto LAB_01faebec;
              lVar13 = *(long *)puVar3;
              if (lVar13 == 0) {
                iVar14 = 0;
                iVar15 = 0;
                iVar17 = 0x10;
                iVar16 = 0x10;
              }
              else {
                iVar14 = *(int *)(lVar13 + 0xd88);
                iVar15 = *(int *)(lVar13 + 0xd8c);
                iVar16 = *(int *)(lVar13 + 0xd98);
                iVar17 = *(int *)(lVar13 + 0xd9c);
              }
              iVar4 = iVar14;
              if (iVar16 <= iVar14) {
                iVar4 = iVar16;
              }
              if (iVar14 <= iVar16) {
                iVar14 = iVar16;
              }
              iVar16 = iVar15;
              if (iVar17 <= iVar15) {
                iVar16 = iVar17;
              }
              if (iVar15 <= iVar17) {
                iVar15 = iVar17;
              }
            }
            uVar5 = FUN_006f0400(((float)iVar4 * 5.0 + (float)iVar14 * 5.0 + 5.0) * 0.5 - *param_2,
                                 ((float)iVar16 * 5.0 + (float)iVar15 * 5.0 + 5.0) * 0.5 -
                                 param_2[2]);
            *param_3 = uVar5;
            goto joined_r0x01faec74;
          }
        }
        uVar7 = 1;
      }
      else if (local_a0[0] == 0) {
        local_f8 = *(int *)(param_1[1] + 0x230);
        uVar9 = FUN_03773c20(param_2,&local_f8,1,0);
        if ((uVar9 & 1) == 0) {
          FUN_01faf130(param_1,param_2);
        }
        puVar10 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar7 = puVar10[3];
        uVar6 = *puVar10 ^ *puVar10 << 0xb;
        *puVar10 = puVar10[1];
        puVar10[1] = puVar10[2];
        uVar2 = uVar6 ^ uVar7;
        puVar10[2] = uVar7;
        puVar10[3] = uVar6 >> 8 ^ uVar7 >> 0x13 ^ uVar2;
        *param_3 = (int)(long)((float)(uVar2 >> 0x1d) * 45.0 * 11930465.0);
joined_r0x01faec74:
        uVar7 = 1;
      }
      else {
LAB_01faf050:
        uVar7 = 0;
        lVar13 = *(long *)(param_1[1] + 0x68);
        *param_2 = *(float *)(lVar13 + 0x278);
        param_2[1] = *(float *)(lVar13 + 0x27c);
        param_2[2] = *(float *)(lVar13 + 0x280);
        *param_3 = *(undefined4 *)(*(long *)(param_1[1] + 0x68) + 0x2b4);
      }
joined_r0x01faef00:
      if (local_74 != '\0') {
        local_74 = '\0';
      }
      if (local_7c != '\0') {
        local_7c = '\0';
      }
      if (local_88 != '\0') {
        (*(code *)*local_98)(&local_98);
      }
      goto LAB_01faea4c;
    }
  }
  uVar7 = 0;
LAB_01faea4c:
  return uVar7 & 1;
}

