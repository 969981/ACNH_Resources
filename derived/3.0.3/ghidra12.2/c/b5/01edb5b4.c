
/* WARNING: Removing unreachable block (ram,0x01edb678) */

void FUN_01edb5b4(long *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  code *pcVar18;
  int *piVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  int local_e0;
  int iStack_dc;
  undefined *local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  int iStack_c4;
  undefined *local_c0;
  int local_b8;
  int iStack_b4;
  undefined1 auStack_b0 [8];
  int local_a8;
  int local_a4;
  undefined *local_a0;
  int local_98;
  int iStack_94;
  uint local_8c [3];
  
  if ((param_1[0x1549] != 0) && (*(int *)(param_1[0x1549] + 0x69c) == 3)) {
    return;
  }
  iVar13 = *(int *)((long)param_1 + 0xae5c) + -1;
  if ((0 < *(int *)((long)param_1 + 0xae5c)) &&
     (*(int *)((long)param_1 + 0xae5c) = iVar13, iVar13 != 0)) {
    if (*(char *)((long)param_1 + 0x789f) == '\0') {
      puVar23 = *(undefined8 **)(param_1[1] + 0x60);
      if (puVar23 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar13 = __cxa_guard_acquire(&DAT_052461c0);
          puVar23 = &DAT_05240280;
          if (iVar13 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar23 = &DAT_05240280;
        }
      }
      uVar16 = 0;
      if (puVar23[0x227] != 0) {
        local_d8 = (undefined *)CONCAT44(local_d8._4_4_,1);
        uVar16 = *(uint *)(puVar23 + 0x2d3) >> 1 & 1;
      }
      uVar14 = FUN_0170a6d0(puVar23,uVar16);
      if ((uVar14 & 1) != 0) goto LAB_01edb694;
    }
    if (*(char *)((long)param_1 + 0x789c) == '\0') {
      return;
    }
  }
LAB_01edb694:
  iVar13 = *(int *)((long)param_1 + 0x77b4);
  if ((0 < *(int *)((long)param_1 + 0x787c)) && (*(int *)((long)param_1 + 0x787c) <= iVar13)) {
    FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
    return;
  }
  if (*(char *)((long)param_1 + 0x789d) == '\0') {
    if (*(char *)((long)param_1 + 0x789c) != '\0') {
      if ((*(byte *)((long)param_1 + 0xaa44) >> 5 & 1) == 0) {
        if ((*(byte *)((long)param_1 + 0xaa44) >> 2 & 1) == 0) {
          FUN_020d1018();
          return;
        }
        FUN_020d0f98(param_1 + 0x1133);
        *(undefined1 *)((long)param_1 + 0x789d) = 1;
        *(undefined4 *)((long)param_1 + 0x788c) = 0x43160000;
        return;
      }
      piVar19 = *(int **)PTR_DAT_04bb47d0;
      if (((piVar19 != (int *)0x0) && (*piVar19 != 0 || piVar19[2] != 0)) &&
         (*piVar19 == (int)param_1[0x1134])) {
        *(undefined1 *)(piVar19 + 0x2c) = 1;
      }
      uVar27 = DAT_053e0cf4;
      uVar7 = DAT_053e0cec;
      uVar6 = DAT_053e0ce4;
      *(undefined4 *)(param_1 + 0x1543) = DAT_053e0cf8;
      *(undefined8 *)((long)param_1 + 0xaa04) = uVar6;
      *(undefined8 *)((long)param_1 + 0xaa0c) = uVar7;
      uVar25 = DAT_053e0cfc;
      param_1[0x153f] = 0;
      param_1[0x153e] = 0;
      *(undefined4 *)((long)param_1 + 0xaa14) = uVar27;
      *(undefined4 *)((long)param_1 + 0xaa1c) = uVar25;
      uVar27 = DAT_053e0d00;
      *(undefined1 *)((long)param_1 + 0xaa44) = 0;
      *(undefined1 *)((long)param_1 + 0x789c) = 0;
      *(undefined4 *)(param_1 + 0x1540) = 3;
      *(undefined4 *)(param_1 + 0x1544) = uVar27;
    }
    fVar24 = *(float *)(param_1 + 0xf06);
    uVar16 = *(uint *)(param_1 + 0xf10);
    local_a0 = PTR_DAT_04bb2010 + 0x10;
    iVar3 = *(int *)((long)param_1 + 0x7884);
    iVar5 = (int)param_1[0xf11];
    iVar17 = iVar3;
    if (0x18 < iVar3) {
      iVar17 = 0x19;
    }
    iVar20 = iVar5;
    if (0x14 < iVar5) {
      iVar20 = 0x15;
    }
    if (iVar3 < 1) {
      iVar17 = 0x19;
    }
    if (iVar5 < 1) {
      iVar20 = 0x15;
    }
    iVar3 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0);
    iVar5 = (int)((float)(int)*(float *)(param_1 + 0xf07) / 5.0) -
            (uint)(*(float *)(param_1 + 0xf07) < 0.0);
    local_98 = iVar3;
    iStack_94 = iVar5;
    local_8c[0] = uVar16;
    FUN_01edbd98(auStack_b0,param_1,local_8c,&local_a0,iVar17,iVar20);
    lVar21 = param_1[1];
    fVar24 = *(float *)(*(long *)(lVar21 + 0x68) + 0x278) + 2.5;
    fVar26 = *(float *)(*(long *)(lVar21 + 0x68) + 0x280) + 2.5;
    uVar1 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0) & 0xffff;
    uVar2 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0) & 0xffff;
    bVar8 = false;
    bVar10 = true;
    if (uVar2 <= *(ushort *)((long)param_1 + 0x192)) {
      bVar10 = uVar2 <= *(ushort *)((long)param_1 + 0x18e);
      bVar8 = *(ushort *)((long)param_1 + 0x18e) == uVar2;
    }
    bVar9 = false;
    bVar11 = true;
    if ((!bVar10 || bVar8) && uVar1 <= *(ushort *)(param_1 + 0x32)) {
      bVar11 = uVar1 <= *(ushort *)((long)param_1 + 0x18c);
      bVar9 = *(ushort *)((long)param_1 + 0x18c) == uVar1;
    }
    if ((bVar11 && !bVar9) && (1 < uVar16)) {
      local_d0 = PTR_DAT_04bb2010 + 0x10;
      local_d8 = PTR_DAT_04bbc1a0 + 0x10;
      fVar26 = ((float)iVar3 * 5.0 + 2.5) - ((float)iVar17 * 0.5 * 5.0 + -2.5);
      fVar24 = ((float)iVar5 * 5.0 + 2.5) - ((float)iVar20 * 0.5 * 5.0 + -2.5);
      local_c8 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
      iStack_c4 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0);
      local_b8 = iVar17 + local_c8 + -1;
      iStack_b4 = iVar20 + iStack_c4 + -1;
      local_f8 = CONCAT44(local_f8._4_4_,*(undefined4 *)(lVar21 + 0x230));
      local_c0 = local_d0;
      uVar14 = FUN_021fead0(&iStack_dc,&local_e0,&local_f8,&local_d8);
      lVar21 = param_1[0x1548];
      local_108 = param_1[0xf06];
      local_f8 = *(undefined8 *)((long)param_1 + 0xaa24);
      uStack_f0 = *(undefined8 *)((long)param_1 + 0xaa2c);
      lVar22 = param_1[0x1547];
      uVar27 = *(undefined4 *)((long)param_1 + 0xaa3c);
      local_e8 = *(undefined4 *)((long)param_1 + 0xaa34);
      local_100 = *(float *)(param_1 + 0xf07);
      if ((uVar14 & 1) != 0) {
        local_100 = (float)local_e0 * 5.0;
        uVar14 = (ulong)local_108 >> 0x20;
        local_108 = CONCAT44((int)uVar14,(float)iStack_dc * 5.0);
        uVar25 = FUN_0097a900(&local_108,0);
        local_108 = CONCAT44(uVar25,(undefined4)local_108);
      }
      *(undefined1 *)((long)param_1 + 0x789c) = 1;
      FUN_02077fb0(param_1[0x1137]);
      *(undefined8 *)((long)param_1 + 0xa9fc) = 0;
      *(int *)(param_1 + 0x1543) = (int)lVar22;
      *(undefined4 *)((long)param_1 + 0xaa1c) = uVar27;
      *(int *)(param_1 + 0x1544) = (int)lVar21;
      *(undefined1 *)((long)param_1 + 0xaa44) = 0;
      *(float *)(param_1 + 0x153f) = local_100;
      *(undefined4 *)((long)param_1 + 0xaa14) = local_e8;
      param_1[0x153e] = local_108;
      *(undefined8 *)((long)param_1 + 0xaa04) = local_f8;
      *(undefined8 *)((long)param_1 + 0xaa0c) = uStack_f0;
      FUN_020d1018(param_1 + 0x1133);
      goto LAB_01edbd24;
    }
    if ((local_a8 == *(int *)(PTR_DAT_04bb5d40 + 8)) &&
       (local_a4 == *(int *)(PTR_DAT_04bb5d40 + 0xc))) {
      lVar21 = *param_1;
      param_2 = param_3;
    }
    else {
      (**(code **)(*(long *)(lVar21 + 0x3e0) + 0x18))(lVar21 + 0x3e0);
      (**(code **)(*(long *)(lVar21 + 0x3e0) + 0x18))(lVar21 + 0x3e0);
      lVar22 = *(long *)(lVar21 + 1000);
      (**(code **)(DAT_0539ef08 + 0x18))(&DAT_0539ef08);
      if (lVar22 == DAT_0539ef10) {
        if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x6622bd46) goto LAB_01edbc4c;
LAB_01edbbdc:
        lVar21 = FUN_026eebf4(*(undefined8 *)PTR_DAT_04bb46b0);
        local_d0 = (undefined *)(lVar21 + 0x1bf238);
        local_c8 = CONCAT31(local_c8._1_3_,1);
        if (*(long **)(lVar21 + 0x1bf260) == (long *)0x0) {
          uVar12 = 0;
        }
        else {
          puVar23 = (undefined8 *)**(long **)(lVar21 + 0x1bf260);
          uVar12 = 0;
          if (puVar23 != (undefined8 *)0x0) {
            uVar12 = (**(code **)*puVar23)();
          }
        }
        local_c8 = CONCAT22(local_c8._2_2_,CONCAT11(uVar12,(undefined1)local_c8)) & 0xffff01ff;
        local_d8 = PTR_DAT_04bb5028 + 0x10;
        uVar14 = FUN_028d7740(*(long *)(lVar21 + 0x1bf248) + *(long *)(lVar21 + 0x1bf240));
        if ((uVar14 & 1) != 0) {
          FUN_028d53e4(*(long *)(lVar21 + 0x1bf248) + *(long *)(lVar21 + 0x1bf240));
        }
        FUN_01edc660(param_1,auStack_b0);
        FUN_02640184(&local_d8);
      }
      else {
        uVar14 = 0;
        bVar8 = true;
        do {
          cVar4 = *(char *)(*(long *)(lVar21 + 1000) + uVar14);
          if (cVar4 != *(char *)(DAT_0539ef10 + uVar14)) break;
          if (cVar4 == '\0') {
            if ((bool)(bVar8 & *(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x6622bd46)) goto LAB_01edbbdc;
            break;
          }
          bVar8 = uVar14 < 0x80000;
          uVar14 = uVar14 + 1;
        } while (uVar14 != 0x80001);
LAB_01edbc4c:
        uVar14 = FUN_01edc660(param_1,auStack_b0);
        uVar15 = FUN_0180b660();
        if (((uVar14 & 1) == 0) && ((uVar15 & 1) != 0)) {
          FUN_01edc660(param_1,auStack_b0);
        }
      }
      lVar21 = *param_1;
    }
    uVar12 = *(undefined1 *)((long)param_1 + 0x7b41);
    pcVar18 = *(code **)(lVar21 + 0x38);
  }
  else {
    fVar24 = *(float *)((long)param_1 + 0x788c) + -1.0;
    *(float *)((long)param_1 + 0x788c) = fVar24;
    if (0.0 < fVar24) {
      return;
    }
    *(undefined2 *)((long)param_1 + 0x789c) = 0;
    uVar12 = *(undefined1 *)((long)param_1 + 0x7b41);
    pcVar18 = *(code **)(*param_1 + 0x38);
  }
  (*pcVar18)(param_1,param_2,param_1 + 0xf00,uVar12);
LAB_01edbd24:
  *(int *)((long)param_1 + 0x77b4) = iVar13;
  return;
}

