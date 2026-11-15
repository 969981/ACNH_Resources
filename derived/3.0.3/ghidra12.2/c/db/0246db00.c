
/* WARNING: Removing unreachable block (ram,0x0246db68) */
/* WARNING: Removing unreachable block (ram,0x0246dc4c) */

void FUN_0246db00(long param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  ulong uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  long lVar11;
  byte bVar12;
  byte bVar13;
  char *pcVar14;
  undefined8 *puVar15;
  long *plVar16;
  uint *puVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_6c;
  float local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_04bb2200;
  fVar18 = -20.0;
  puVar15 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar15 = *(undefined8 **)(param_1 + 0x4c8);
  }
  fVar20 = *(float *)((long)puVar15 + 0x27c);
  if ((*(long *)PTR_DAT_04bb2200 != 0) &&
     (lVar11 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar11 != 0)) {
    local_6c = 0.0;
    lVar11 = *(long *)(lVar11 + 0x118);
    if (lVar11 != 0) {
      lVar11 = *(long *)(lVar11 + 0x280);
      fVar18 = 0.0;
      if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 8), lVar11 != 0)) {
        pfVar7 = (float *)(**(code **)(*(long *)(lVar11 + 0x488) + 0xf0))(lVar11 + 0x488);
        fVar18 = *pfVar7;
      }
      lVar11 = FUN_0251e98c(1);
      pfVar7 = (float *)(**(code **)(*(long *)(lVar11 + 0x1590) + 0xf0))(lVar11 + 0x1590);
      fVar18 = fVar18 + *pfVar7;
    }
  }
  if (fVar18 <= fVar20) {
    if (fVar18 < fVar20) {
      fVar19 = fVar20 + -0.5;
      bVar4 = true;
      if ((fVar18 < fVar19) && (bVar4 = false, !NAN(fVar20) && !NAN(fVar19))) {
        bVar4 = fVar20 < fVar19;
      }
      goto LAB_0246dbf4;
    }
  }
  else {
    fVar19 = fVar20 + 0.5;
    bVar4 = true;
    if ((fVar19 < fVar18) && (bVar4 = false, !NAN(fVar19) && !NAN(fVar20))) {
      bVar4 = fVar19 < fVar20;
    }
LAB_0246dbf4:
    fVar20 = fVar18;
    if (!bVar4) {
      fVar20 = fVar19;
    }
  }
  puVar15 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar15 = *(undefined8 **)(param_1 + 0x4c8);
  }
  *(float *)((long)puVar15 + 0x27c) = fVar20;
  if (*(int *)(param_1 + 0x178) == 1) {
    return;
  }
  fVar18 = -20.0;
  puVar15 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar15 = *(undefined8 **)(param_1 + 0x4c8);
  }
  if ((*(long *)puVar2 != 0) && (lVar11 = *(long *)(*(long *)puVar2 + 0x50), lVar11 != 0)) {
    local_6c = 0.0;
    lVar11 = *(long *)(lVar11 + 0x118);
    if (lVar11 != 0) {
      lVar11 = *(long *)(lVar11 + 0x280);
      fVar18 = 0.0;
      if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 8), lVar11 != 0)) {
        pfVar7 = (float *)(**(code **)(*(long *)(lVar11 + 0x488) + 0xf0))(lVar11 + 0x488);
        fVar18 = *pfVar7;
      }
      lVar11 = FUN_0251e98c(1);
      pfVar7 = (float *)(**(code **)(*(long *)(lVar11 + 0x1560) + 0xf0))(lVar11 + 0x1560);
      fVar18 = fVar18 + *pfVar7;
    }
  }
  *(float *)((long)puVar15 + 0x2ec) = fVar18;
  *(undefined1 *)((long)puVar15 + 0x2e5) = 1;
  uVar8 = FUN_02464448(param_1);
  if ((uVar8 & 1) != 0) {
    return;
  }
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  local_58 = 0;
  uVar5 = (uint)*(byte *)(param_1 + 0x1900);
  if (3 < uVar5) {
    uVar5 = 0;
  }
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  local_48 = (ulong)(uint)local_48;
  if (puVar15[0x227] == 0) {
LAB_0246ddc0:
    fVar18 = 1.0;
  }
  else {
    lVar11 = *(long *)(puVar15[0x227] + 0x88);
    plVar16 = (long *)(lVar11 + 0x60);
    (**(code **)(*plVar16 + 0x18))(plVar16);
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pcVar14 = *(char **)(lVar11 + 0x68);
    if (pcVar14 != "PlayerDiveStride_FlapFoot") {
      if (*pcVar14 == 'P') {
        uVar8 = 0;
        do {
          uVar10 = uVar8;
          if ((uVar10 == 0x80000) ||
             (pcVar14[uVar10 + 1] != "PlayerDiveStride_FlapFoot"[uVar10 + 1])) goto LAB_0246ddc0;
          uVar8 = uVar10 + 1;
        } while (pcVar14[uVar10 + 1] != '\0');
        if (uVar10 >> 0x13 == 0) goto LAB_0246ddb0;
      }
      goto LAB_0246ddc0;
    }
LAB_0246ddb0:
    fVar18 = 0.8;
  }
  lVar11 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar11 + 0x1ad0) + 0xf0))(lVar11 + 0x1ad0);
  local_6c = fVar18 * *pfVar7;
  lVar11 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar11 + 0x1b00) + 0xf0))(lVar11 + 0x1b00);
  local_68 = fVar18 * *pfVar7;
  lVar11 = FUN_0251e98c(1);
  puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar11 + 0x1b30) + 0xf0))(lVar11 + 0x1b30);
  local_64 = *puVar9;
  lVar11 = FUN_0251e98c(1);
  puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar11 + 0x1b60) + 0xf0))(lVar11 + 0x1b60);
  local_60 = *puVar9;
  lVar11 = FUN_0251e98c(1);
  puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar11 + 0x1b90) + 0xf0))(lVar11 + 0x1b90);
  local_5c = *puVar9;
  local_54 = uVar5;
  lVar11 = FUN_0251e98c(1);
  puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar11 + 0x1a70) + 0xf0))(lVar11 + 0x1a70);
  local_50 = *puVar9;
  lVar11 = FUN_0251e98c(1);
  puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar11 + 0x1aa0) + 0xf0))(lVar11 + 0x1aa0);
  local_4c = *puVar9;
  uVar5 = FUN_02465878(param_1,&local_6c);
  if (uVar5 < 2) {
    lVar11 = *(long *)PTR_DAT_04bb39b0;
    if ((lVar11 != 0) && (*(int *)(lVar11 + 0x15c) != 0)) {
      pbVar1 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar11 + 0x15c) != 0) {
        pbVar1 = (byte *)(lVar11 + 0x158);
      }
      bVar13 = *(byte *)(param_1 + 0x1ee8);
      bVar12 = *pbVar1;
      if (7 < bVar12) {
        bVar12 = 0xff;
      }
      if (7 < bVar13) {
        bVar13 = 0xff;
      }
      if ((bVar12 != bVar13) &&
         (local_48 = local_48 & 0xffffffff, (*(byte *)(*(long *)PTR_DAT_04bb2230 + 0x3f0) & 1) != 0)
         ) goto LAB_0246dfe8;
    }
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_054f0960);
        puVar17 = (uint *)&DAT_054f0958;
        if (iVar6 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar17 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar17 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
      if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
        puVar17 = puVar17 + (ulong)*(byte *)(param_1 + 0x1ee8) * 2;
      }
    }
    uVar8 = local_48;
    uVar3 = (uint)local_48;
    local_48 = CONCAT44(0x19,(uint)local_48);
    if ((((*puVar17 >> 0x19 & 1) == 0) && (*(char *)(param_1 + 0x17ac) == '\0')) &&
       (((*(uint *)(param_1 + 0xed0) & 1) != 0 ||
        (local_48 = uVar8 & 0xffffffff, (*(uint *)(param_1 + 0xec8) & 1) != 0)))) {
      *(undefined8 *)(param_1 + 0x1980) = 0;
      *(undefined8 *)(param_1 + 0x1988) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      local_48._4_4_ = 0xfb;
      *(char *)(param_1 + 0x1980) = (char)uVar5;
      local_48._0_4_ = uVar3;
      goto LAB_0246e0a4;
    }
  }
LAB_0246dfe8:
  FUN_0231e48c(param_1);
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  local_48 = 0;
  if (puVar15[0x227] != 0) {
    uVar10 = FUN_03850368(puVar15[0x227],0);
    uVar8 = local_48;
    if (((((uVar10 & 1) == 0) && (puVar15[0x227] != 0)) &&
        (uVar10 = FUN_03850368(puVar15[0x227],local_48 & 0xffffffff), (uVar10 & 1) == 0)) &&
       (uVar8 = FUN_0384fca4(puVar15[0x227],uVar8 & 0xffffffff), (uVar8 & 1) == 0)) {
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined2 *)(param_1 + 0x1980) = 0xc01;
  local_48._4_4_ = 0xfa;
LAB_0246e0a4:
  if (local_48._4_4_ < 0x149) {
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
    FUN_03ebb160(lVar11,local_48._4_4_);
  }
  return;
}

