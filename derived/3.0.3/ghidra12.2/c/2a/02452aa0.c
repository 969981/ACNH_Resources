
void FUN_02452aa0(long param_1,long param_2)

{
  long lVar1;
  uint *puVar2;
  char cVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  float *pfVar8;
  undefined4 *puVar9;
  short sVar10;
  long lVar11;
  int iVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined1 *__src;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined *local_e0;
  undefined1 *puStack_d8;
  undefined4 local_d0;
  undefined1 auStack_cc [31];
  undefined1 local_ad;
  undefined *local_a0;
  undefined1 *puStack_98;
  int local_90;
  undefined1 auStack_8c [31];
  undefined1 local_6d;
  int local_68;
  
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  *(undefined2 *)(param_1 + 0x1998) = *(undefined2 *)(param_2 + 0xe);
  lVar11 = *(long *)(param_1 + 0x68);
  *(int *)(param_1 + 0x198e) = (int)(*(float *)(lVar11 + 0x278) * 999.99994);
  iVar12 = (int)(*(float *)(lVar11 + 0x27c) * 4.0);
  if (0x7ffe < iVar12) {
    iVar12 = 0x7fff;
  }
  if (iVar12 < -0x7fff) {
    iVar12 = -0x8000;
  }
  *(short *)(param_1 + 0x1992) = (short)iVar12;
  *(int *)(param_1 + 0x1994) = (int)(*(float *)(lVar11 + 0x280) * 999.99994);
  fVar17 = *(float *)(lVar11 + 0x27c);
  fVar18 = *(float *)(lVar11 + 0x280);
  pfVar8 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(param_2 + 0xc) >> 0x14) & 0xff0));
  fVar16 = (float)(*(uint *)(param_2 + 0xc) & 0xffffff) * 5.9604645e-08;
  fVar19 = *pfVar8 + fVar16 * pfVar8[1];
  fVar16 = pfVar8[2] + fVar16 * pfVar8[3];
  fVar20 = fVar19 * 0.0;
  *(int *)(param_1 + 0x1980) =
       (int)((*(float *)(lVar11 + 0x278) + fVar20 * 0.0 + fVar16 * 0.0 + (fVar19 + 0.0) * 50.0) *
            999.99994);
  iVar12 = (int)((fVar17 + (fVar20 * 0.0 + 1.0) * 0.0 + fVar16 * 0.0 * 0.0 + fVar20 * 50.0) * 4.0);
  if (0x7ffe < iVar12) {
    iVar12 = 0x7fff;
  }
  if (iVar12 < -0x7fff) {
    iVar12 = -0x8000;
  }
  *(int *)(param_1 + 0x1986) =
       (int)((fVar18 + (fVar16 * 0.0 * 0.0 - fVar19 * 0.0) + fVar16 * 50.0) * 999.99994);
  *(short *)(param_1 + 0x1984) = (short)iVar12;
  uVar4 = *(undefined2 *)(param_2 + 0xe);
  *(undefined1 *)(param_1 + 0x198c) = 0;
  *(undefined2 *)(param_1 + 0x198a) = uVar4;
  puVar5 = PTR_DAT_04bb2720;
  if (*(char *)(param_2 + 0x10) == '\0') goto LAB_02453098;
  lVar11 = *(long *)PTR_DAT_04bb2720;
  if (lVar11 == 0) {
    plVar14 = &DAT_055c04a0;
  }
  else {
    plVar14 = &DAT_055c04a0;
    if (*(long *)(lVar11 + 0x330) != 0) {
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
      iVar12 = FUN_006bd550(*puVar7,0);
      plVar14 = (long *)PTR_DAT_04bc3a80;
      if (iVar12 != 0x758f7eaf) {
        plVar14 = &DAT_055c04a0;
      }
    }
  }
  puVar6 = PTR_DAT_04bb2a08;
  local_90 = 0x20;
  local_6d = 0;
  local_a0 = PTR_DAT_04bb2a08 + 0x10;
  puStack_98 = auStack_8c;
  (**(code **)(*plVar14 + 0x18))(plVar14);
  __src = (undefined1 *)plVar14[1];
  if (auStack_8c != __src) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
    lVar11 = 0;
    do {
      if (*(char *)(plVar14[1] + lVar11) == '\0') goto LAB_02452d5c;
      lVar1 = plVar14[1] + lVar11;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_02452d5c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_02452d5c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_02452d5c:
    iVar12 = (int)lVar11;
    if (local_90 <= (int)lVar11) {
      iVar12 = local_90 + -1;
    }
    memcpy(auStack_8c,__src,(long)iVar12);
    auStack_8c[iVar12] = 0;
  }
  local_a0 = PTR_DAT_04bb2028 + 0x10;
  local_68 = (int)plVar14[7];
  sVar10 = *(short *)PTR_DAT_04bb6298;
  if (sVar10 == -1) {
LAB_02452fb8:
    *(undefined1 *)(param_1 + 0x198c) = 1;
    iVar12 = *(int *)(param_1 + 0x178);
  }
  else {
    local_e0 = (undefined *)CONCAT44(local_e0._4_4_,6);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar10 * 8);
    if (0xff < (uint)(int)sVar10) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 6 & 1) != 0) {
      if (local_68 < -0x3e8226e) {
        if (local_68 < -0x5e569ee0) {
          if (local_68 != -0x73926596) {
            iVar12 = -0x68c74790;
            goto LAB_02452fb0;
          }
        }
        else if (local_68 != -0x5e569ee0) {
          iVar12 = -0x36f63c09;
          goto LAB_02452fb0;
        }
      }
      else if (local_68 < 0x41f58673) {
        if (local_68 != -0x3e8226e) {
          iVar12 = -0x34ef0c3;
          goto LAB_02452fb0;
        }
      }
      else if (local_68 != 0x41f58673) {
        iVar12 = 0x4ef823a6;
LAB_02452fb0:
        if (local_68 != iVar12) goto LAB_02452f84;
      }
      goto LAB_02452fb8;
    }
    local_e0 = (undefined *)CONCAT44(local_e0._4_4_,0x13);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar10 * 8);
    if (0xff < (uint)(int)sVar10) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x13 & 1) == 0) goto LAB_02452fb8;
    lVar11 = *(long *)puVar5;
    if (lVar11 == 0) {
      plVar14 = &DAT_055c04a0;
    }
    else {
      plVar14 = &DAT_055c04a0;
      if (*(long *)(lVar11 + 0x330) != 0) {
        puVar7 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
        iVar12 = FUN_006bd550(*puVar7,0);
        plVar14 = (long *)PTR_DAT_04bc3a80;
        if (iVar12 != 0x758f7eaf) {
          plVar14 = &DAT_055c04a0;
        }
      }
    }
    local_ad = 0;
    local_d0 = 0x20;
    local_e0 = puVar6 + 0x10;
    puStack_d8 = auStack_cc;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    if (auStack_cc != (undefined1 *)plVar14[1]) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    if (((int)plVar14[7] == 0x66eec322) || ((int)plVar14[7] == 0x593d97a5)) {
      *(undefined1 *)(param_1 + 0x198c) = 1;
    }
LAB_02452f84:
    if (*(char *)(param_1 + 0x198c) == '\0') goto LAB_02453098;
    iVar12 = *(int *)(param_1 + 0x178);
  }
  if (iVar12 == 0) {
    lVar11 = *(long *)puVar5;
    if (lVar11 == 0) {
      puVar7 = &DAT_055c04a0;
    }
    else {
      puVar7 = &DAT_055c04a0;
      if (*(long *)(lVar11 + 0x330) != 0) {
        puVar7 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
        iVar12 = FUN_006bd550(*puVar7,0);
        puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar12 != 0x758f7eaf) {
          puVar7 = &DAT_055c04a0;
        }
      }
    }
    if (DAT_055c1b60 != &DAT_055c1b58) {
      sVar10 = 0;
      puVar13 = DAT_055c1b60;
      do {
        if (*(int *)(puVar13 + -1) == *(int *)(puVar7 + 7)) {
          if (sVar10 != -1) goto LAB_02453088;
          break;
        }
        puVar13 = (undefined8 *)puVar13[1];
        sVar10 = sVar10 + 1;
      } while (puVar13 != &DAT_055c1b58);
    }
    sVar10 = 0;
LAB_02453088:
    local_e0 = (undefined *)CONCAT62(local_e0._2_6_,sVar10);
    FUN_02544b38(param_1 + 0x1ee8,&local_e0);
  }
LAB_02453098:
  local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x3c);
  *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
  *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
  *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
  *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
  *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
  *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
  *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
  *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
  *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
  *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
  *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
  *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
  *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
  *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
  *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
  *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
  lVar11 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar11 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar11,0x3c);
  cVar3 = *(char *)(param_2 + 0x11);
  lVar11 = FUN_0251e98c(1);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar11 + 0x840) + 0xf0))(lVar11 + 0x840);
  fVar16 = *pfVar8;
  if (0.0 <= fVar16) {
    fVar16 = -fVar16;
  }
  *(float *)(param_1 + 0x182c) = fVar16;
  *(float *)(param_1 + 0x1828) = fVar16;
  lVar11 = FUN_0251e98c(1);
  puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar11 + 0x810) + 0xf0))(lVar11 + 0x810);
  *(undefined4 *)(param_1 + 0x1830) = *puVar9;
  if (cVar3 == '\0') {
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(undefined4 *)(param_1 + 0x1bf8) = 5;
  }
  lVar11 = *(long *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x924) = *(undefined4 *)(lVar11 + 0x278);
  *(undefined4 *)(param_1 + 0x928) = *(undefined4 *)(lVar11 + 0x27c);
  *(undefined4 *)(param_1 + 0x92c) = *(undefined4 *)(lVar11 + 0x280);
  uVar15 = FUN_0231eef4(param_1,param_1 + 0x924,0);
  *(undefined4 *)(param_1 + 0x928) = uVar15;
  puVar7 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(param_1 + 0x4c8);
  }
  *(undefined4 *)(puVar7 + 0x5d) = *(undefined4 *)(param_1 + 0x924);
  *(undefined1 *)((long)puVar7 + 0x2e4) = 1;
  uVar15 = *(undefined4 *)(param_1 + 0x928);
  *(undefined1 *)((long)puVar7 + 0x2e5) = 1;
  *(undefined4 *)((long)puVar7 + 0x2ec) = uVar15;
  uVar15 = *(undefined4 *)(param_1 + 0x92c);
  *(undefined1 *)((long)puVar7 + 0x2e6) = 1;
  *(undefined4 *)(puVar7 + 0x5e) = uVar15;
  return;
}

