
void FUN_01ea60c0(long *param_1,byte *param_2)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  short *psVar11;
  long *plVar12;
  ulong uVar13;
  char *pcVar14;
  int *piVar15;
  uint *puVar16;
  byte bVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  long *plVar22;
  char *pcVar23;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  undefined **local_80;
  undefined8 local_78;
  
  bVar17 = *param_2;
  local_88 = 0xffffffff;
  if (7 < bVar17) {
    bVar17 = 0xff;
  }
  *(byte *)(param_1 + 0xfad) = bVar17;
  if (((uint)param_1[0x15ab] >> 0x1d & 1) == 0) {
    lVar21 = param_1[0x1549];
    if ((lVar21 != 0) && (**(char **)(lVar21 + 0x798) != '\0')) {
      uVar5 = FUN_01ad5de0(lVar21 + 0x790);
      local_80 = (undefined **)(ulong)uVar5;
      FUN_0277d4ac(&local_80);
      uVar9 = FUN_01e57b44(*(undefined8 *)(*(long *)(lVar21 + 8) + 0x3b0));
      uVar10 = FUN_0277d7b4(uVar9,&local_80);
      if (((uVar10 & 1) == 0) || ((*(byte *)(param_1[0x1549] + 0x7f1) & 0x48) != 0))
      goto LAB_01ea6178;
LAB_01ea61b0:
      if (((*(byte *)((long)param_1 + 0xad5f) >> 2 & 1) != 0) && (*(int *)(param_1[1] + 0x750) != 0)
         ) {
        (**(code **)(*param_1 + 0x38))(param_1,0x1f,0,0);
        param_1[0x15ab] = param_1[0x15ab] | 0x40000;
        return;
      }
      lVar21 = *param_1;
      uVar9 = 0x1f;
      goto LAB_01ea6208;
    }
LAB_01ea6178:
    if ((*(byte *)((long)param_1 + 0xad5f) >> 2 & 1) != 0) {
      psVar11 = (short *)FUN_01e57b44(param_1[2]);
      uVar10 = FUN_0277d7b4(psVar11,(long)param_1 + 0xae84);
      if (((uVar10 & 1) == 0) && (*psVar11 != -2)) goto LAB_01ea61b0;
    }
    if ((*(int *)(param_1[1] + 0x750) != 2) || ((*(byte *)((long)param_1 + 0xad5e) >> 1 & 1) == 0))
    {
      uVar10 = (**(code **)(*param_1 + 0x2f8))(param_1,&local_88);
      uVar13 = param_1[0x15ab];
      if ((uVar10 & 1) != 0) {
        param_1[0x15ab] = uVar13 | 0x40000;
        (**(code **)(*param_1 + 0x38))(param_1,local_88,0,1);
        return;
      }
      if (((((uVar13 >> 0x27 & 1) == 0) && ((uVar13 & 0x180000) != 0x80000)) &&
          (param_1[0x10ed] == 0)) &&
         (plVar22 = *(long **)(param_1[1] + 0x80), plVar22 != (long *)0x0)) {
        if (((*PTR_DAT_04bb40e0 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb40e0), iVar6 != 0)) {
          *(undefined **)PTR_DAT_04bb40d8 = PTR_DAT_04bb40e8 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb40e0);
        }
        uVar10 = (**(code **)(*plVar22 + 0x10))(plVar22,PTR_DAT_04bb40d8);
        if ((uVar10 & 1) != 0) {
          *(undefined1 *)((long)plVar22 + 0x3a3) = 1;
        }
      }
      if ((*(byte *)((long)param_1 + 0xad5d) >> 5 & 1) != 0) {
        lVar21 = param_1[2];
        local_80 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_78 = "cDefault";
        uVar20 = 0;
        do {
          pcVar23 = "";
          if (uVar20 < 0x36) {
            pcVar23 = *(char **)(PTR_s_cDefault_04bc1610 + (ulong)uVar20 * 8 + 0x370);
          }
          (*(code *)local_80[3])(&local_80);
          if (pcVar23 == local_78) {
LAB_01ea63dc:
            *(uint *)(lVar21 + 0x56c) = uVar20;
            break;
          }
          if (*pcVar23 == *local_78) {
            if (*pcVar23 == '\0') goto LAB_01ea63dc;
            lVar19 = 0x7fffe;
            pcVar14 = local_78;
            while( true ) {
              if (pcVar23[1] != pcVar14[1]) break;
              if (pcVar23[1] == '\0') goto LAB_01ea63dc;
              if (pcVar23[2] != pcVar14[2]) break;
              if (pcVar23[2] == '\0') goto LAB_01ea63dc;
              if ((lVar19 == 0) || (cVar2 = pcVar23[3], cVar2 != pcVar14[3])) break;
              lVar19 = lVar19 + -3;
              pcVar14 = pcVar14 + 3;
              pcVar23 = pcVar23 + 3;
              if (cVar2 == '\0') goto LAB_01ea63dc;
            }
          }
          uVar8 = 0x36;
          if ((int)uVar20 < 0x36) {
            uVar8 = uVar20 + 1;
          }
          uVar20 = uVar8;
        } while (uVar8 != 0x36);
      }
      puVar3 = PTR_DAT_04bb27c0;
      if (((ulong)*(byte *)(param_1 + 0xfad) < 8) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        puVar16 = (uint *)(*(long *)PTR_DAT_04bb4718 + (ulong)*(byte *)(param_1 + 0xfad) * 4 + 0xde8
                          );
      }
      else {
        puVar16 = (uint *)PTR_DAT_04bb3238;
      }
      lVar21 = *(long *)PTR_DAT_04bb27c0;
      if (lVar21 != 0) {
        uVar20 = *puVar16;
        if ((((uVar20 == 0) ||
             (plVar22 = *(long **)(*(long *)(*(long *)(lVar21 + 0x1c0) + 8) +
                                  ((ulong)(uVar20 >> 0x11) & 0x7ff8)), plVar22 == (long *)0x0)) ||
            ((*(uint *)(plVar22 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar22 + 0x46) != uVar20)) {
          plVar22 = (long *)0x0;
        }
        if (*(int *)(lVar21 + 0x288) == 1 || *(int *)(lVar21 + 0x288) == -1) {
          plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar21 = *(long *)puVar3;
          iVar6 = (**(code **)(*plVar12 + 0x60))();
          if (iVar6 < 0x11) {
            uVar20 = 1;
          }
          else {
            if (4 < *(uint *)(lVar21 + 0x5e8)) goto LAB_01ea64c4;
            uVar20 = 0x1aU >> (ulong)(*(uint *)(lVar21 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_01ea64c4:
          uVar20 = 0;
        }
        if (plVar22 != (long *)0x0) {
          lVar21 = plVar22[0x2a];
          if (((*PTR_DAT_04bb3760 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar6 != 0)) {
            *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb3760);
          }
          uVar10 = (**(code **)(*plVar22 + 0x20))(plVar22,PTR_DAT_04bb3758);
          uVar8 = 0;
          if ((int)lVar21 == 1) {
            uVar8 = uVar20;
          }
          if (((uVar10 & 1) != 0) && (uVar8 != 0)) {
            lVar21 = *(long *)(param_1[1] + 0x68);
            uVar8 = *(uint *)(lVar21 + 0x2b4);
            uVar7 = FUN_006f0400(*(float *)(plVar22[0xd] + 0x278) - *(float *)(lVar21 + 0x278),
                                 *(float *)(plVar22[0xd] + 0x280) - *(float *)(lVar21 + 0x280));
            uVar20 = uVar8 - uVar7;
            if (uVar20 != 0) {
              uVar1 = uVar20;
              if (uVar8 <= uVar7) {
                uVar1 = uVar7 - uVar8;
              }
              uVar20 = -uVar1;
              if (uVar1 < 0x80000001) {
                uVar20 = uVar1;
              }
            }
            *(uint *)(param_1 + 0x15ad) = uVar20;
          }
        }
      }
      puVar4 = PTR_DAT_04bb3968;
      lVar19 = *(long *)PTR_DAT_04bb3968;
      *(undefined8 *)(lVar19 + 0xa20) = 0;
      *(undefined8 *)(lVar19 + 0xa28) = 0;
      *(undefined8 *)(lVar19 + 0xa30) = 0;
      *(undefined8 *)(lVar19 + 0xa38) = 0;
      *(undefined8 *)(lVar19 + 0xa40) = 0;
      *(undefined8 *)(lVar19 + 0xa48) = 0;
      *(undefined8 *)(lVar19 + 0xa50) = 0;
      *(undefined8 *)(lVar19 + 0xa58) = 0;
      *(undefined8 *)(lVar19 + 0xa60) = 0;
      *(undefined4 *)(lVar19 + 0xd20) = 0xffffffff;
      *(undefined4 *)(lVar19 + 0xce8) = 0;
      *(undefined4 *)(lVar19 + 0xb80) = 0;
      (**(code **)(**(long **)(lVar19 + 0xb78) + 0x58))();
      lVar21 = *(long *)puVar3;
      *(undefined4 *)(lVar19 + 0xd64) = 0;
      *(undefined4 *)(lVar19 + 0xd80) = 0;
      if (lVar21 != 0) {
        uVar20 = *(uint *)((long)param_1 + 0x7d6c);
        if ((((uVar20 == 0) ||
             (plVar22 = *(long **)(*(long *)(*(long *)(lVar21 + 0x1c0) + 8) +
                                  ((ulong)(uVar20 >> 0x11) & 0x7ff8)), plVar22 == (long *)0x0)) ||
            ((*(uint *)(plVar22 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar22 + 0x46) != uVar20)) {
          plVar22 = (long *)0x0;
        }
        if ((*(int *)(lVar21 + 0x288) == 1) || (*(int *)(lVar21 + 0x288) == -1)) {
          plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar21 = *(long *)puVar3;
          iVar6 = (**(code **)(*plVar12 + 0x60))();
          if (iVar6 < 0x11) {
            uVar20 = 1;
          }
          else {
            if (4 < *(uint *)(lVar21 + 0x5e8)) goto LAB_01ea6658;
            uVar20 = 0x1aU >> (ulong)(*(uint *)(lVar21 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_01ea6658:
          uVar20 = 0;
        }
        if (plVar22 != (long *)0x0) {
          lVar21 = plVar22[0x2a];
          if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0)) {
            *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb37d8);
          }
          uVar10 = (**(code **)(*plVar22 + 0x20))(plVar22,PTR_DAT_04bb37d0);
          uVar8 = 0;
          if ((int)lVar21 == 1) {
            uVar8 = uVar20;
          }
          if (((uVar10 & 1) != 0) && (uVar8 != 0)) {
            *(undefined4 *)(lVar19 + 0xa20) = *(undefined4 *)(param_1[1] + 0x230);
            *(undefined4 *)(lVar19 + 0xa24) = *(undefined4 *)((long)param_1 + 0x7d6c);
            bVar17 = *param_2;
            if (7 < bVar17) {
              bVar17 = 0xff;
            }
            *(byte *)(plVar22[0x77] + 0x7d68) = bVar17;
            goto LAB_01ea67b8;
          }
        }
      }
      *(undefined4 *)(lVar19 + 0xa20) = *(undefined4 *)(param_1[1] + 0x230);
      if (*(char *)param_1[0x10f0] != '\0') {
        (**(code **)(param_1[0x10ef] + 0x18))(param_1 + 0x10ef);
        uVar8 = FUN_006bd550(param_1[0x10f0],0);
        uVar20 = *(uint *)(lVar19 + 0x4f08);
        if (uVar20 != 0) {
          lVar21 = *(long *)(lVar19 + 0x4f10);
          if ((int)uVar20 < 2) {
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            iVar6 = uVar20 - 1;
            do {
              uVar1 = iVar6 + uVar7;
              if ((int)uVar1 < 0 != SCARRY4(iVar6,uVar7)) {
                uVar1 = uVar1 + 1;
              }
              uVar18 = (int)uVar1 >> 1;
              uVar1 = *(uint *)(lVar21 + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x20 + 0x18);
              if (uVar1 == uVar8) goto LAB_01ea679c;
              if (uVar1 < uVar8) {
                uVar7 = uVar18 + 1;
              }
              else {
                iVar6 = uVar18 - 1;
              }
            } while ((int)uVar7 < iVar6);
          }
          uVar18 = uVar7;
          if (*(uint *)(lVar21 + (long)(int)uVar7 * 0x20 + 0x18) == uVar8) {
LAB_01ea679c:
            if (-1 < (int)uVar18) {
              if (uVar20 <= uVar18) {
                uVar18 = 0;
              }
              (**(code **)(lVar21 + (ulong)uVar18 * 0x20))(lVar19);
            }
          }
        }
      }
LAB_01ea67b8:
      param_1[0x15ab] = param_1[0x15ab] | 0x20000;
      plVar22 = *(long **)(param_1[1] + 0x60);
      if (plVar22 != (long *)0x0) {
        if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar6 != 0)) {
          *(undefined **)PTR_DAT_04bb37b0 = PTR_DAT_04bb3070 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb37b8);
        }
        uVar10 = (**(code **)(*plVar22 + 0x10))(plVar22,PTR_DAT_04bb37b0);
        if ((uVar10 & 1) != 0) {
          local_84 = 1;
          local_80 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
          local_78 = "IsTalking";
          if (((plVar22[0x227] != 0) && (lVar21 = *(long *)(plVar22[0x227] + 0x78), lVar21 != 0)) &&
             (plVar22 = *(long **)(lVar21 + 0x48), plVar22 != (long *)0x0)) {
            (**(code **)(*plVar22 + 0x28))(plVar22,&local_80,1);
          }
        }
      }
      if ((*(byte *)((long)param_1 + 0xad5b) >> 4 & 1) != 0) {
        lVar21 = param_1[3];
        uVar8 = *(byte *)(lVar21 + 0x290) & 0xffffffef;
        *(char *)(lVar21 + 0x290) = (char)uVar8;
        uVar20 = 3;
        if (((uVar8 >> 3 & 1) == 0) && (uVar20 = 2, (uVar8 >> 2 & 1) == 0)) {
          uVar20 = uVar8 >> 1 & 1;
        }
        local_80 = (undefined **)CONCAT44(local_80._4_4_,uVar20);
        *(uint *)(lVar21 + 0x294) = uVar20;
        param_1[0x15ab] = param_1[0x15ab] & 0xffffffffefffffff;
      }
      (**(code **)(*param_1 + 0x38))(param_1,3,0,1);
      bVar17 = *param_2;
      local_80 = &PTR_FUN_04a73148;
      if (7 < bVar17) {
        bVar17 = 0xff;
      }
      local_78 = (char *)CONCAT71(local_78._1_7_,bVar17);
      local_78 = (char *)CONCAT44(*(undefined4 *)(param_1[1] + 0x230),(undefined4)local_78);
      FUN_020b020c(*(undefined8 *)puVar4,&local_80);
      uVar10 = (**(code **)(param_1[0xfa5] + 0x10))(param_1 + 0xfa5);
      if ((uVar10 & 1) != 0) {
        (**(code **)param_1[0xfa5])(param_1 + 0xfa5);
        *(undefined1 *)(param_1 + 0xfa2) = 0xc;
      }
      if (((ulong)*(byte *)(param_1 + 0xfad) < 8) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        piVar15 = (int *)(*(long *)PTR_DAT_04bb4718 + (ulong)*(byte *)(param_1 + 0xfad) * 4 + 0xde8)
        ;
      }
      else {
        piVar15 = (int *)PTR_DAT_04bb3238;
      }
      local_84 = *piVar15;
      local_8c = *(undefined4 *)(param_1[1] + 0x230);
      FUN_0071cb58(&local_80,&local_84,&local_8c,0);
      if ((((local_80 == (undefined **)0x0) || ((char)local_78 == '\0')) || (local_78._2_1_ == '\0')
          ) || (((*(byte *)(param_1 + 0x15ab) & 1) == 0 || (*(int *)(param_1[1] + 0x750) != 0)))) {
        *(undefined1 *)(param_1 + 0xfa1) = 1;
        FUN_03ebb160(param_1 + 0xf8d,2);
      }
      else {
        FUN_0204ec5c(param_1 + 0xf8b,&local_84);
      }
      if ((int)param_1[0xf8e] != 2) {
        if (local_84 != 0) {
          FUN_0204ee04(param_1 + 0xf8b,&local_84);
          return;
        }
        *(undefined1 *)(param_1 + 0xfa1) = 1;
      }
      FUN_03ebb160(param_1 + 0xf8d,4);
      return;
    }
  }
  else {
    param_1[0x15ab] = param_1[0x15ab] | 0x40000;
  }
  lVar21 = *param_1;
  uVar9 = 5;
LAB_01ea6208:
                    /* WARNING: Could not recover jumptable at 0x01ea6230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar21 + 0x38))(param_1,uVar9,0,1);
  return;
}

