
/* WARNING: Type propagation algorithm not settling */

bool FUN_009a6364(long param_1,undefined4 *param_2,byte *param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  long lVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  byte bVar10;
  undefined2 uVar11;
  undefined *puVar12;
  bool bVar13;
  undefined4 uVar14;
  int iVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  uint *puVar20;
  char *pcVar21;
  long *plVar22;
  undefined8 *puVar23;
  uint uVar24;
  undefined1 *__src;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 local_170;
  float local_168;
  float fStack_164;
  float local_160;
  undefined8 local_15c;
  undefined8 local_154;
  undefined8 local_14c;
  float fStack_144;
  undefined *local_140;
  undefined1 *puStack_138;
  int local_130;
  undefined1 local_12c [127];
  undefined1 local_ad;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  
  uVar14 = FUN_0277d6c4(param_2);
  puVar12 = PTR_DAT_04bb27c0;
  if (7 < (ulong)*param_3) {
    return false;
  }
  fVar25 = (float)param_2[2];
  fVar26 = (float)param_2[3];
  fVar27 = (float)param_2[4];
  uVar11 = *(undefined2 *)param_2;
  uVar8 = *(undefined1 *)((long)param_2 + 2);
  uVar9 = *(undefined1 *)((long)param_2 + 3);
  uVar7 = param_2[1];
  if (((fVar25 == 0.0) && (fVar26 == 0.0)) && (fVar27 == 0.0)) {
    puVar20 = (uint *)PTR_DAT_04bb3238;
    if (*(long *)PTR_DAT_04bb4718 != 0) {
      puVar20 = (uint *)(*(long *)PTR_DAT_04bb4718 + (ulong)*param_3 * 4 + 0xde8);
    }
    lVar19 = *(long *)PTR_DAT_04bb27c0;
    if (lVar19 == 0) {
      return false;
    }
    uVar24 = *puVar20;
    if (((uVar24 == 0) ||
        (plVar22 = *(long **)(*(long *)(*(long *)(lVar19 + 0x1c0) + 8) +
                             ((ulong)(uVar24 >> 0x11) & 0x7ff8)), plVar22 == (long *)0x0)) ||
       (((*(uint *)(plVar22 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar22 + 0x46) != uVar24)))) {
      plVar22 = (long *)0x0;
    }
    if ((*(int *)(lVar19 + 0x288) == 1) || (*(int *)(lVar19 + 0x288) == -1)) {
      plVar16 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar19 = *(long *)puVar12;
      iVar15 = (**(code **)(*plVar16 + 0x60))();
      if (iVar15 < 0x11) {
        uVar24 = 1;
      }
      else {
        if (4 < *(uint *)(lVar19 + 0x5e8)) goto LAB_009a64b0;
        uVar24 = 0x1aU >> (ulong)(*(uint *)(lVar19 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_009a64b0:
      uVar24 = 0;
    }
    if (plVar22 == (long *)0x0) {
      return false;
    }
    lVar19 = plVar22[0x2a];
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar15 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar17 = (**(code **)(*plVar22 + 0x20))(plVar22,PTR_DAT_04bb3770);
    uVar4 = 0;
    if ((int)lVar19 == 1) {
      uVar4 = uVar24;
    }
    if ((uVar17 & 1) == 0) {
      return false;
    }
    if (uVar4 == 0) {
      return false;
    }
    puVar23 = (undefined8 *)plVar22[0xc];
    if (puVar23 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar15 = __cxa_guard_acquire(&DAT_052461c0);
        puVar23 = &DAT_05240280;
        if (iVar15 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar23 = &DAT_05240280;
      }
    }
    FUN_016ff740(puVar23,2,&local_170);
    fVar25 = fStack_164 + local_170._4_4_ * 3.0 + (float)local_170 * 0.0 + local_168 * 3.0;
    fVar26 = (float)local_154 + (float)local_15c * 3.0 + local_160 * 0.0 + local_15c._4_4_ * 3.0;
    fVar27 = fStack_144 + (float)local_14c * 3.0 + local_154._4_4_ * 0.0 + local_14c._4_4_ * 3.0;
  }
  lVar19 = *(long *)puVar12;
  if (lVar19 == 0) {
    return false;
  }
  uVar24 = *(uint *)PTR_DAT_04bb6090;
  if ((((uVar24 == 0) ||
       (plVar22 = *(long **)(*(long *)(*(long *)(lVar19 + 0x1c0) + 8) +
                            ((ulong)(uVar24 >> 0x11) & 0x7ff8)), plVar22 == (long *)0x0)) ||
      ((*(uint *)(plVar22 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar22 + 0x46) != uVar24)) {
    plVar22 = (long *)0x0;
  }
  if (*(int *)(lVar19 + 0x288) == 1 || *(int *)(lVar19 + 0x288) == -1) {
    plVar16 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar19 = *(long *)puVar12;
    iVar15 = (**(code **)(*plVar16 + 0x60))();
    if (iVar15 < 0x11) {
      uVar24 = 1;
    }
    else {
      if (4 < *(uint *)(lVar19 + 0x5e8)) goto LAB_009a665c;
      uVar24 = 0x1aU >> (ulong)(*(uint *)(lVar19 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_009a665c:
    uVar24 = 0;
  }
  if (plVar22 == (long *)0x0) {
    return false;
  }
  lVar19 = plVar22[0x2a];
  if (((*PTR_DAT_04bb6038 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_04bb6038), iVar15 != 0)) {
    *(undefined **)PTR_DAT_04bb6030 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6038);
  }
  uVar17 = (**(code **)(*plVar22 + 0x20))(plVar22,PTR_DAT_04bb6030);
  uVar4 = 0;
  if ((int)lVar19 == 1) {
    uVar4 = uVar24;
  }
  if ((uVar17 & 1) == 0) {
    return false;
  }
  if (uVar4 == 0) {
    return false;
  }
  bVar10 = *param_3;
  puVar1 = (undefined2 *)(param_1 + 0x108);
  bVar13 = 7 < bVar10;
  if (bVar13) {
    bVar10 = 0xff;
  }
  puVar2 = puVar1 + (ulong)(uint)(int)(char)bVar10 * 10;
  if (bVar13) {
    puVar2 = puVar1;
  }
  *puVar2 = uVar11;
  *(undefined1 *)(puVar2 + 1) = uVar8;
  *(float *)(puVar2 + 4) = fVar25;
  *(float *)(puVar2 + 6) = fVar26;
  *(float *)(puVar2 + 8) = fVar27;
  *(undefined1 *)((long)puVar2 + 3) = uVar9;
  *(undefined4 *)(puVar2 + 2) = uVar7;
  uVar17 = (ulong)*param_3;
  if (uVar17 < 8) {
    plVar16 = plVar22 + uVar17 * 0x34 + 0x4f;
    plVar18 = plVar16 + 0x1d;
    if ((short)*plVar16 == -2) goto LAB_009a6748;
    puVar20 = (uint *)(plVar22 + uVar17 * 0x34 + 0x6e);
    lVar19 = uVar17 * 0x1a0 + 0x374;
    uVar17 = (**(code **)(*plVar18 + 0x28))
                       (plVar18,(long)plVar22 + (ulong)(*puVar20 & 1) * 0x18 + lVar19,plVar16);
    uVar24 = *puVar20 & 1;
    if ((uVar17 & 1) == 0) {
      uVar17 = (**(code **)(*plVar18 + 0x28))
                         (plVar18,(long)plVar22 + (ulong)(uVar24 ^ 1) * 0x18 + lVar19,plVar16);
      if ((uVar17 & 1) != 0) {
        uVar24 = ~*puVar20 & 1;
        goto LAB_009a6868;
      }
      puVar20 = (uint *)PTR_DAT_04bb3238;
    }
    else {
LAB_009a6868:
      puVar20 = (uint *)((long)plVar22 + (ulong)uVar24 * 0x18 + lVar19 + 0xc);
    }
    uVar24 = *puVar20;
  }
  else {
LAB_009a6748:
    uVar24 = *(uint *)PTR_DAT_04bb3238;
  }
  local_168 = fVar25;
  fStack_164 = fVar26;
  local_160 = fVar27;
  if (uVar24 == 0) {
    bVar10 = *param_3;
    puVar1 = (undefined2 *)(param_1 + 0x1a8);
    bVar13 = 7 < bVar10;
    if (bVar13) {
      bVar10 = 0xff;
    }
    puVar2 = puVar1 + (ulong)(uint)(int)(char)bVar10 * 0x58;
    if (bVar13) {
      puVar2 = puVar1;
    }
    uVar17 = FUN_009a46c4(puVar2 + 4,param_2);
    if ((uVar17 & 1) == 0) {
      return false;
    }
    bVar10 = *param_3;
    local_ad = 0;
    local_12c[0] = 0;
    bVar13 = 7 < bVar10;
    if (bVar13) {
      bVar10 = 0xff;
    }
    puVar2 = puVar1 + (ulong)(uint)(int)(char)bVar10 * 0x58;
    if (bVar13) {
      puVar2 = puVar1;
    }
    *puVar2 = *(undefined2 *)param_2;
    *(undefined1 *)(puVar2 + 1) = *(undefined1 *)((long)param_2 + 2);
    *(undefined1 *)((long)puVar2 + 3) = *(undefined1 *)((long)param_2 + 3);
    *(undefined4 *)(puVar2 + 2) = param_2[1];
    bVar10 = *param_3;
    bVar13 = 7 < bVar10;
    if (bVar13) {
      bVar10 = 0xff;
    }
    puVar2 = puVar1 + (ulong)(uint)(int)(char)bVar10 * 0x58;
    if (bVar13) {
      puVar2 = puVar1;
    }
    *(undefined8 *)(puVar2 + 0x50) = 0;
    *(undefined4 *)(puVar2 + 0x54) = 0;
    bVar10 = *param_3;
    bVar13 = 7 < bVar10;
    if (bVar13) {
      bVar10 = 0xff;
    }
    puVar2 = puVar1 + (ulong)(uint)(int)(char)bVar10 * 0x58;
    if (bVar13) {
      puVar2 = puVar1;
    }
    *(byte *)(puVar2 + 0x56) = bVar10;
    local_94 = *param_2;
    uStack_90 = param_2[1];
    local_8c = 0x29;
    local_170 = 0xffffffff00000000;
    local_130 = 0x80;
    local_a0 = 0;
    local_a4 = 0;
    local_154 = 0;
    local_14c = 0;
    local_140 = PTR_DAT_04bb2d88 + 0x10;
    local_a8 = 7;
    local_15c = 0x3f800000;
    bVar10 = *param_3;
    bVar13 = 7 < bVar10;
    if (bVar13) {
      bVar10 = 0xff;
    }
    puVar2 = puVar1 + (ulong)(uint)(int)(char)bVar10 * 0x58;
    if (bVar13) {
      puVar2 = puVar1;
    }
    plVar16 = (long *)(puVar2 + 4);
    puStack_138 = local_12c;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    __src = *(undefined1 **)(puVar2 + 8);
    if (local_12c != __src) {
      (**(code **)(*(long *)(puVar2 + 4) + 0x18))(plVar16);
      lVar19 = 0;
      do {
        if (*(char *)(*(long *)(puVar2 + 8) + lVar19) == '\0') goto LAB_009a6d14;
        lVar3 = *(long *)(puVar2 + 8) + lVar19;
        if (*(char *)(lVar3 + 1) == '\0') {
          lVar19 = lVar19 + 1;
          goto LAB_009a6d14;
        }
        if (*(char *)(lVar3 + 2) == '\0') {
          lVar19 = lVar19 + 2;
          goto LAB_009a6d14;
        }
        lVar19 = lVar19 + 3;
      } while (lVar19 != 0x80001);
      lVar19 = 0;
LAB_009a6d14:
      iVar15 = (int)lVar19;
      if (local_130 <= (int)lVar19) {
        iVar15 = local_130 + -1;
      }
      memcpy(local_12c,__src,(long)iVar15);
      local_12c[iVar15] = 0;
    }
    local_154 = CONCAT44(local_154._4_4_,uVar14);
    local_170 = CONCAT44(0x29,(float)local_170);
    bVar10 = *param_3;
    bVar13 = 7 < bVar10;
    if (bVar13) {
      bVar10 = 0xff;
    }
    puVar2 = puVar1 + (ulong)(uint)(int)(char)bVar10 * 0x58;
    if (bVar13) {
      puVar2 = puVar1;
    }
    plVar16 = (long *)(puVar2 + 4);
    local_14c._4_4_ = (float)(int)(char)bVar10;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcVar21 = *(char **)(puVar2 + 8);
    if (pcVar21 == "cvrt") {
      iVar15 = 2;
    }
    else if (((*pcVar21 == 'c') && (pcVar21[1] == 'v')) && (pcVar21[2] == 'r')) {
      iVar15 = (uint)(pcVar21[3] == 't') << 1;
    }
    else {
      iVar15 = 0;
    }
    local_154 = CONCAT44(iVar15,(float)local_154);
    local_14c = (ulong)(uint)local_14c._4_4_ << 0x20;
    iVar15 = FUN_0099f200(plVar22,param_3,&local_94,&local_170);
    if (iVar15 == 0) {
      FUN_0099f500(plVar22,param_3);
      FUN_009a4550(param_1,param_3);
      return false;
    }
    return iVar15 != 0;
  }
  lVar19 = *(long *)puVar12;
  if (lVar19 == 0) {
    return true;
  }
  plVar16 = *(long **)(*(long *)(*(long *)(lVar19 + 0x1c0) + 8) + ((ulong)(uVar24 >> 0x11) & 0x7ff8)
                      );
  if (((plVar16 == (long *)0x0) || ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar16 + 0x46) != uVar24)) {
    plVar16 = (long *)0x0;
  }
  if ((*(int *)(lVar19 + 0x288) == 1) || (*(int *)(lVar19 + 0x288) == -1)) {
    plVar18 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar19 = *(long *)puVar12;
    iVar15 = (**(code **)(*plVar18 + 0x60))();
    if (iVar15 < 0x11) {
      uVar24 = 1;
      goto LAB_009a6888;
    }
    if (*(uint *)(lVar19 + 0x5e8) < 5) {
      uVar24 = 0x1aU >> (ulong)(*(uint *)(lVar19 + 0x5e8) & 0x1f) & 1;
      goto LAB_009a6888;
    }
  }
  uVar24 = 0;
LAB_009a6888:
  if (plVar16 != (long *)0x0) {
    lVar19 = plVar16[0x2a];
    if (((*PTR_DAT_04bb4000 & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(PTR_DAT_04bb4000), iVar15 != 0)) {
      *(undefined **)PTR_DAT_04bb3ff8 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4000);
    }
    uVar17 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb3ff8);
    uVar4 = 0;
    if ((int)lVar19 == 1) {
      uVar4 = uVar24;
    }
    if ((uVar17 & 1) == 0) {
      return true;
    }
    if (uVar4 == 0) {
      return true;
    }
    *(undefined1 *)((long)plVar16 + 0x31a) = uVar8;
    *(float *)(plVar16 + 100) = fVar25;
    *(float *)((long)plVar16 + 0x324) = fVar26;
    *(float *)(plVar16 + 0x65) = fVar27;
    *(undefined2 *)(plVar16 + 99) = uVar11;
    *(undefined1 *)((long)plVar16 + 0x31b) = uVar9;
    *(undefined4 *)((long)plVar16 + 0x31c) = uVar7;
    FUN_0099acc0(plVar16);
    local_94 = 6;
    *(byte *)(plVar16 + 0x68) = *(byte *)(plVar16 + 0x68) | 0x40;
    local_170 = CONCAT44(local_170._4_4_,6);
    lVar19 = 0;
    if (plVar16[0xe] != 0) {
      lVar19 = plVar16[0xe] + 0x278;
    }
    if (*(int *)(lVar19 + 8) != 1) {
      FUN_03ebb160(lVar19,1);
    }
    bVar10 = *param_3;
    puVar2 = (undefined2 *)(param_1 + 0x1a8);
    bVar13 = 7 < bVar10;
    if (bVar13) {
      bVar10 = 0xff;
    }
    puVar5 = puVar2 + (ulong)(uint)(int)(char)bVar10 * 0x58;
    if (bVar13) {
      puVar5 = puVar2;
    }
    puVar6 = puVar1 + (ulong)(uint)(int)(char)bVar10 * 10;
    if (bVar13) {
      puVar6 = puVar1;
    }
    uVar17 = FUN_0277d7b4(puVar5,puVar6);
    if ((((uVar17 & 1) == 0) || (*(char *)((long)puVar5 + 3) != *(char *)((long)puVar6 + 3))) ||
       (*(int *)(puVar5 + 2) != *(int *)(puVar6 + 2))) {
      bVar10 = *param_3;
      bVar13 = 7 < bVar10;
      if (bVar13) {
        bVar10 = 0xff;
      }
      puVar1 = puVar2 + (ulong)(uint)(int)(char)bVar10 * 0x58;
      if (bVar13) {
        puVar1 = puVar2;
      }
      uVar17 = FUN_009a46c4(puVar1 + 4,param_2);
      if ((uVar17 & 1) != 0) {
        bVar10 = *param_3;
        bVar13 = 7 < bVar10;
        if (bVar13) {
          bVar10 = 0xff;
        }
        puVar1 = puVar2 + (ulong)(uint)(int)(char)bVar10 * 0x58;
        if (bVar13) {
          puVar1 = puVar2;
        }
        *puVar1 = *(undefined2 *)param_2;
        *(undefined1 *)(puVar1 + 1) = *(undefined1 *)((long)param_2 + 2);
        *(undefined1 *)((long)puVar1 + 3) = *(undefined1 *)((long)param_2 + 3);
        *(undefined4 *)(puVar1 + 2) = param_2[1];
        bVar10 = *param_3;
        bVar13 = 7 < bVar10;
        if (bVar13) {
          bVar10 = 0xff;
        }
        puVar1 = puVar2 + (ulong)(uint)(int)(char)bVar10 * 0x58;
        if (bVar13) {
          puVar1 = puVar2;
        }
        *(undefined8 *)(puVar1 + 0x50) = 0;
        *(undefined4 *)(puVar1 + 0x54) = 0;
        bVar10 = *param_3;
        bVar13 = 7 < bVar10;
        if (bVar13) {
          bVar10 = 0xff;
        }
        puVar1 = puVar2 + (ulong)(uint)(int)(char)bVar10 * 0x58;
        if (bVar13) {
          puVar1 = puVar2;
        }
        *(byte *)(puVar1 + 0x56) = bVar10;
        local_94 = *param_2;
        uStack_90 = param_2[1];
        local_8c = 0x29;
        FUN_007091b4(&local_170);
        local_15c = 0x3f800000;
        bVar10 = *param_3;
        bVar13 = 7 < bVar10;
        if (bVar13) {
          bVar10 = 0xff;
        }
        puVar1 = puVar2 + (ulong)(uint)(int)(char)bVar10 * 0x58;
        if (bVar13) {
          puVar1 = puVar2;
        }
        FUN_00709380(&local_170,puVar1 + 4);
        bVar10 = *param_3;
        local_170 = CONCAT44(0x29,(float)local_170);
        local_154 = CONCAT44(local_154._4_4_,uVar14);
        bVar13 = 7 < bVar10;
        if (bVar13) {
          bVar10 = 0xff;
        }
        local_14c._4_4_ = (float)(int)(char)bVar10;
        puVar1 = puVar2 + (ulong)(uint)local_14c._4_4_ * 0x58;
        if (bVar13) {
          puVar1 = puVar2;
        }
        uVar17 = FUN_009a4dec(puVar1 + 4);
        uVar14 = 2;
        if ((uVar17 & 1) == 0) {
          uVar14 = 0;
        }
        local_154 = CONCAT44(uVar14,(float)local_154);
        local_14c = (ulong)(uint)local_14c._4_4_ << 0x20;
        iVar15 = FUN_0099f200(plVar22,param_3,&local_94,&local_170);
        if (iVar15 != 0) {
          return true;
        }
        FUN_0099f500(plVar22,param_3);
        FUN_009a4550(param_1,param_3);
      }
      return false;
    }
  }
  return true;
}

