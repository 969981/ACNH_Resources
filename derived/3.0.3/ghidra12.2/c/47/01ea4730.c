
void FUN_01ea4730(long *param_1)

{
  ulong *puVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  uint *puVar5;
  ushort uVar6;
  short sVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  byte bVar14;
  uint uVar15;
  long lVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  long *plVar19;
  undefined1 *puVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_4c;
  undefined8 local_48;
  
  puVar1 = (ulong *)(param_1 + 0x15ab);
  puVar3 = (uint *)(param_1 + 0xef6);
  uVar9 = *(uint *)(param_1[1] + 0x69c);
  uVar12 = (**(code **)(*(long *)param_1[1] + 0x180))();
  if (((uVar9 >> 3 & 1) == 0) && ((uVar12 & 1) != 0)) {
    *puVar1 = *puVar1 | 0x200000000;
    (**(code **)(*param_1 + 0xc0))(param_1);
    *puVar1 = *puVar1 & 0xfffffffdffffffff;
  }
  if (0 < (int)param_1[0x15c1]) {
    *(int *)(param_1 + 0x15c1) = (int)param_1[0x15c1] + -1;
  }
  if (4 < *puVar3 - 3) {
    lVar21 = param_1[3];
    FUN_02088260(lVar21);
    FUN_02088490(lVar21);
  }
  if ((char)param_1[0xfa2] != '\0') {
    *(char *)(param_1 + 0xfa2) = (char)param_1[0xfa2] + -1;
  }
  if ((uVar12 & 1) == 0) {
    uVar12 = *puVar1;
    if ((uVar12 >> 0x3e & 1) == 0) {
      iVar10 = (int)param_1[0xf8e];
      if (((uint)(uVar12 >> 0x11) & 1) != (uint)(iVar10 != 0)) {
        *puVar1 = uVar12 & 0xfffffffffffc0000 | uVar12 & 0x1ffff | (ulong)(iVar10 != 0) << 0x11;
        plVar19 = *(long **)(param_1[1] + 0x60);
        if (plVar19 != (long *)0x0) {
          if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar11 != 0)) {
            *(undefined **)PTR_DAT_04bb37b0 = PTR_DAT_04bb3070 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb37b8);
          }
          uVar12 = (**(code **)(*plVar19 + 0x10))(plVar19,PTR_DAT_04bb37b0);
          if ((uVar12 & 1) != 0) {
            uVar9 = (uint)(iVar10 != 0);
            local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar9);
            lVar21 = plVar19[0x227];
            goto joined_r0x01ea4a60;
          }
        }
      }
    }
    else {
      uVar9 = FUN_01e3f8bc(param_1[1]);
      if (((uint)(uVar12 >> 0x11) & 1) != (uVar9 & 1)) {
        uVar12 = 0x20000;
        if ((uVar9 & 1) == 0) {
          uVar12 = 0;
        }
        *puVar1 = *puVar1 & 0xfffffffffffdffff | uVar12;
        plVar19 = *(long **)(param_1[1] + 0x60);
        if (plVar19 != (long *)0x0) {
          if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar10 != 0)) {
            *(undefined **)PTR_DAT_04bb37b0 = PTR_DAT_04bb3070 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb37b8);
          }
          uVar12 = (**(code **)(*plVar19 + 0x10))(plVar19,PTR_DAT_04bb37b0);
          if ((uVar12 & 1) != 0) {
            local_70 = (undefined *)(CONCAT44(local_70._4_4_,uVar9) & 0xffffffff00000001);
            lVar21 = plVar19[0x227];
            uVar9 = (uint)local_70;
joined_r0x01ea4a60:
            local_58 = "IsTalking";
            local_60 = PTR_DAT_04bb2020 + 0x10;
            if (lVar21 != 0) {
              local_58 = "IsTalking";
              if ((*(long *)(lVar21 + 0x78) != 0) &&
                 (plVar19 = *(long **)(*(long *)(lVar21 + 0x78) + 0x48), plVar19 != (long *)0x0)) {
                (**(code **)(*plVar19 + 0x28))(plVar19,&local_60,uVar9);
              }
            }
          }
        }
      }
    }
    lVar21 = *(long *)(param_1[1] + 0x690);
    if (lVar21 != 0) {
      local_60 = (undefined *)
                 (CONCAT44(local_60._4_4_,(uint)*(byte *)(lVar21 + 0xc)) & 0xffffffff00000003);
      *(undefined4 *)((long)param_1 + 0xae8c) = (undefined4)local_60;
      lVar21 = *(long *)(param_1[1] + 0x690);
      if (lVar21 != 0) {
        lVar16 = **(long **)PTR_DAT_04bb27d0;
        bVar14 = *(byte *)(lVar16 + 0x473);
        uVar12 = (ulong)(char)bVar14;
        pbVar18 = PTR_DAT_04bc1220;
        if (uVar12 != 0xffffffffffffffff) {
          puVar3 = (uint *)(lVar16 + 0x48) + (uVar12 & 0xffffffff) * 0x20;
          if (7 < bVar14) {
            puVar3 = (uint *)(lVar16 + 0x48);
          }
          if ((*puVar3 & 8) != 0) {
            pbVar18 = (byte *)(lVar16 + 0x473);
          }
        }
        bVar8 = *(byte *)(lVar21 + 7) >> 4 & 3;
        if (bVar8 != 1) {
          if (bVar8 != 2) {
            if (bVar8 == 3) goto LAB_01ea4fbc;
            uVar6 = *(ushort *)(lVar21 + 5) >> 2;
            if ((ushort)*pbVar18 != (uVar6 & 0xff)) {
              if ((bVar14 == 0xff) || ((ushort)(byte)*PTR_DAT_04bb5018 != (uVar6 & 0xff))) {
                if ((ushort)(byte)*PTR_DAT_04bb5018 != (uVar6 & 0xff)) goto LAB_01ea4fbc;
              }
              else {
                pbVar18 = (byte *)(lVar16 + 0x48) + (uVar12 & 0xffffffff) * 0x80;
                if (7 < bVar14) {
                  pbVar18 = (byte *)(lVar16 + 0x48);
                }
                if ((*pbVar18 >> 3 & 1) != 0) {
                  lVar16 = (*(long **)PTR_DAT_04bb27d0)[2] + 0x108;
                  lVar4 = lVar16 + (uVar12 & 0xffffffff) * 0xc;
                  if (0xb < bVar14) {
                    lVar4 = lVar16;
                  }
                  if (*(char *)(lVar4 + 10) == '\0') goto LAB_01ea4fbc;
                }
              }
            }
          }
          *(byte *)(lVar21 + 0xc) = *(byte *)(lVar21 + 0xc) & 0xfc | (byte)local_60;
        }
      }
    }
LAB_01ea4fbc:
    FUN_01ea510c(param_1);
    return;
  }
  if ((uVar9 >> 3 & 1) == 0) {
    uVar12 = *puVar1;
    if ((uVar12 >> 0x3e & 1) != 0) {
      lVar21 = param_1[0xf8e];
      *puVar1 = uVar12 & 0xfffffffffffc0000 | uVar12 & 0x1ffff | (ulong)((int)lVar21 != 0) << 0x11;
      plVar19 = *(long **)(param_1[1] + 0x60);
      if (plVar19 != (long *)0x0) {
        if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar10 != 0)) {
          *(undefined **)PTR_DAT_04bb37b0 = PTR_DAT_04bb3070 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb37b8);
        }
        uVar12 = (**(code **)(*plVar19 + 0x10))(plVar19,PTR_DAT_04bb37b0);
        if ((uVar12 & 1) != 0) {
          uVar9 = (uint)((int)lVar21 != 0);
          local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar9);
          local_60 = PTR_DAT_04bb2020 + 0x10;
          local_58 = "IsTalking";
          if (((plVar19[0x227] != 0) && (lVar21 = *(long *)(plVar19[0x227] + 0x78), lVar21 != 0)) &&
             (plVar19 = *(long **)(lVar21 + 0x48), plVar19 != (long *)0x0)) {
            (**(code **)(*plVar19 + 0x28))(plVar19,&local_60,uVar9);
          }
        }
      }
    }
    if ((param_1[0x10f6] != 0) && (*(int *)(param_1[0x10f6] + 4) == 1)) {
      return;
    }
  }
  if ((*(byte *)((long)param_1 + 0xad5a) >> 5 & 1) != 0) {
    uVar12 = (**(code **)(param_1[0xfdf] + 0x10))(param_1 + 0xfdf);
    if ((uVar12 & 1) != 0) {
      pbVar18 = (byte *)((long)param_1 + 0x7d6a);
      uVar12 = (**(code **)param_1[0xfdf])(param_1 + 0xfdf,pbVar18);
      if ((uVar12 & 1) == 0) {
        return;
      }
      uVar6 = *(ushort *)(param_1[1] + 0x284);
      if (uVar6 < 1000) {
        if ((*(int *)PTR_DAT_04bb6260 < (int)(short)uVar6) ||
           (*(int *)(PTR_DAT_04bb6258 + ((long)(short)uVar6 & 0xffffffffU) * 0x10) == 0)) {
          uVar13 = 0xffffffffffffffff;
        }
        else {
          uVar13 = *(undefined8 *)(PTR_DAT_04bb6258 + (long)(short)uVar6 * 0x10 + 8);
        }
        FUN_00a77b40(pbVar18,uVar13);
      }
      bVar14 = *PTR_DAT_04bb32e0;
      if (7 < bVar14) {
        bVar14 = 0xff;
      }
      *pbVar18 = bVar14;
    }
  }
  if ((*(byte *)((long)param_1 + 0xad59) >> 3 & 1) != 0) {
    if (((*PTR_DAT_04bb6860 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb6860), iVar10 != 0)) {
      *(undefined **)PTR_DAT_04bb6858 = PTR_DAT_04bb4100 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6860);
    }
    uVar12 = (**(code **)*param_1)(param_1,PTR_DAT_04bb6858);
    if (((((uVar12 & 1) != 0) && (uVar9 = *(uint *)(param_1[1] + 0x508), uVar9 < 10)) &&
        ((&DAT_053fee41)[(ulong)uVar9 * 0xba0] != '\0')) &&
       ((&DAT_053fedf2)[(ulong)uVar9 * 0xba0] != '\0')) {
      FUN_01ea1c90(param_1);
      (&DAT_053fedf2)[(ulong)uVar9 * 0xba0] = 0;
      if (4 < *puVar3 - 3) {
        FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,1,PTR_DAT_04bb32e0);
      }
    }
  }
  FUN_01ea510c(param_1);
  sVar7 = *(short *)PTR_DAT_04bb6298;
  if (sVar7 != -1) {
    local_60 = (undefined *)CONCAT44(local_60._4_4_,1);
    puVar5 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
    if (0xff < (uint)(int)sVar7) {
      puVar5 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar5 >> 1 & 1) != 0) {
      FUN_0220f56c(param_1 + 0x15a6);
    }
  }
  *(undefined2 *)((long)param_1 + 0xac52) = 0;
  *puVar1 = *puVar1 | 0x2000000;
  FUN_0212e744(param_1 + 0x154a);
  FUN_0212e7e0(param_1 + 0x154a);
  if ((int)param_1[0x1599] != 0) {
    lVar21 = (long)(int)param_1[0x1599] << 3;
    puVar17 = (undefined8 *)param_1[0x159a];
    do {
      (*(code *)**(undefined8 **)*puVar17)();
      lVar21 = lVar21 + -8;
      puVar17 = puVar17 + 1;
    } while (lVar21 != 0);
  }
  *puVar1 = *puVar1 & 0xfffffffffdffffff;
  (**(code **)(*param_1 + 0x300))(param_1);
  uVar9 = *puVar3;
  if (((uVar9 - 3 < 5) && ((*puVar1 >> 0x2c & 1) == 0)) &&
     (((*puVar1 >> 0x29 & 1) == 0 || ((int)param_1[0xf8e] != 0)))) {
    *(undefined1 *)((long)param_1 + 0x77c9) = 0;
LAB_01ea4e24:
    uVar15 = *(uint *)(param_1 + 0xefa);
    lVar21 = param_1[0xefb];
LAB_01ea4e2c:
    if (uVar15 <= uVar9) {
      uVar9 = 0;
    }
    lVar21 = *(long *)(lVar21 + (long)(int)uVar9 * 0x40);
    if ((lVar21 != 0) && ((**(code **)(lVar21 + 8))(), *(char *)((long)param_1 + 0x77c9) != '\0'))
    goto LAB_01ea4e60;
  }
  else {
    if ((int)param_1[0x15da] != 0) {
      *(int *)(param_1 + 0x15da) = (int)param_1[0x15da] + -1;
    }
    (**(code **)(*param_1 + 0xe0))(param_1);
    *puVar1 = *puVar1 & 0xfffffdffffffffff;
    uVar9 = *puVar3;
    if ((uVar9 == 0xffffffff) && ((char)param_1[0xef9] != '\0')) {
      *(undefined4 *)((long)param_1 + 0x77bc) = *(undefined4 *)((long)param_1 + 0x77b4);
      uVar9 = *(uint *)(param_1 + 0xef8);
      *puVar3 = uVar9;
      puVar20 = (undefined1 *)((long)param_1 + 0x77c9);
      *puVar20 = 1;
      *(undefined8 *)((long)param_1 + 0x77b4) = 0xffffffff00000000;
      if (uVar9 != 0xffffffff) {
        uVar15 = *(uint *)(param_1 + 0xefa);
        lVar21 = param_1[0xefb];
        uVar2 = uVar9;
        if (uVar15 <= uVar9) {
          uVar2 = 0;
        }
        puVar17 = *(undefined8 **)(lVar21 + (long)(int)uVar2 * 0x40);
        if (puVar17 != (undefined8 *)0x0) {
          (*(code *)*puVar17)();
          uVar9 = *puVar3;
          goto LAB_01ea4e00;
        }
        *puVar20 = 0;
        goto LAB_01ea4e2c;
      }
      *puVar20 = 0;
    }
    else {
LAB_01ea4e00:
      *(undefined1 *)((long)param_1 + 0x77c9) = 0;
      if (uVar9 != 0xffffffff) goto LAB_01ea4e24;
    }
  }
  *(int *)((long)param_1 + 0x77b4) = *(int *)((long)param_1 + 0x77b4) + 1;
LAB_01ea4e60:
  FUN_01ea4530(param_1);
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x6efba09b) {
    fVar22 = *(float *)(*(long *)(param_1[1] + 0x68) + 0x278);
    fVar23 = *(float *)(*(long *)(param_1[1] + 0x68) + 0x280);
    local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
    local_48 = 0;
    local_4c = 0;
    local_60 = PTR_DAT_04bb2010 + 0x10;
    local_58 = (char *)CONCAT44((int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0),
                                (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0));
    lVar21 = *(long *)PTR_DAT_04bb27c8;
    if (((((((lVar21 != 0) && (*(long *)(lVar21 + 0xa8) != 0)) &&
           (uVar12 = FUN_009493f8(lVar21 + 0x28,&local_60,&local_70,(long)&local_48 + 4,&local_48,
                                  &local_4c), (uVar12 & 1) != 0)) &&
          ((((uint)local_70 == 0xc || ((uint)local_70 == 5)) &&
           ((local_48._4_4_ == 0xc || (local_48._4_4_ == 5)))))) &&
         (((int)local_48 == 5 || ((int)local_48 == 0xc)))) && ((local_4c == 0xc || (local_4c == 5)))
        ) && ((*(int *)(param_1[1] + 0x500) == 0 &&
              (lVar21 = *(long *)(*(long *)(param_1[1] + 0x60) + 0x1138), lVar21 != 0)))) {
      FUN_03850078(lVar21,0);
      local_70 = PTR_DAT_04bb2020 + 0x10;
      pcStack_68 = "FloatFrame";
      if ((*(long *)(lVar21 + 0x78) != 0) &&
         (plVar19 = *(long **)(*(long *)(lVar21 + 0x78) + 0x48), plVar19 != (long *)0x0)) {
        (**(code **)(*plVar19 + 0x30))(plVar19,&local_70);
      }
    }
  }
  return;
}

