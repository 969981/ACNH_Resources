
void FUN_0249f8fc(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ushort uVar3;
  byte bVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  undefined4 *puVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  char *pcVar15;
  uint *puVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  short local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  
  puVar19 = *(undefined8 **)(param_1 + 0x60);
  if (puVar19 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar19 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar19 = &DAT_05240280;
    }
  }
  local_78 = PTR_DAT_04bb2020 + 0x10;
  local_70 = "CommonNetSwing";
  FUN_017081d0(puVar19,&local_78,6,1,0);
  puVar19 = *(undefined8 **)(param_1 + 0x60);
  if (puVar19 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar19 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar19 = &DAT_05240280;
    }
  }
  FUN_016ff740(puVar19,6,&local_78);
  fVar20 = local_70._4_4_ +
           local_78._4_4_ * -6.605859 + (float)local_78 * -6.5778484 + (float)local_70 * 0.0;
  fVar21 = fStack_5c + local_68._4_4_ * -6.605859 + (float)local_68 * -6.5778484 + local_60 * 0.0;
  fVar22 = fStack_4c + fStack_54 * -6.605859 + local_58 * -6.5778484 + local_50 * 0.0;
  if ((*(int *)(param_1 + 0x178) == 0) && (lVar8 = FUN_024a00b0(param_1), lVar8 != 0)) {
    *(float *)(lVar8 + 0x390) = fVar20;
    *(float *)(lVar8 + 0x398) = fVar22;
    *(undefined1 **)(lVar8 + 0x39c) = &DAT_3f8000003f800000;
    *(float *)(lVar8 + 0x394) = fVar21 + -5.0;
    lVar12 = *(long *)PTR_DAT_04bb27c8;
    if (lVar12 != 0) {
      if (*(long *)(lVar8 + 0x278) != 0) {
        plVar17 = (long *)(lVar12 + 0x10);
        lVar14 = *plVar17;
        plVar18 = (long *)((long)*(int *)(lVar12 + 0x24) + *(long *)(lVar8 + 0x278));
        *plVar17 = (long)plVar18;
        *plVar18 = lVar14;
        plVar18[1] = (long)plVar17;
        if (lVar14 != 0) {
          *(long **)(lVar14 + 8) = plVar18;
        }
        *(int *)(lVar12 + 0x20) = *(int *)(lVar12 + 0x20) + 1;
      }
      *(undefined1 *)(lVar8 + 0x289) = 1;
    }
    *(long *)(lVar8 + 0x308) = param_1;
    *(code **)(lVar8 + 0x310) = FUN_0249e868;
    *(undefined8 *)(lVar8 + 0x318) = 0;
    *(undefined ***)(lVar8 + 0x300) = &PTR_LAB_04a814c0;
  }
  lVar8 = FUN_024a0450(param_1);
  if (lVar8 != 0) {
    *(float *)(lVar8 + 0x390) = fVar20;
    *(float *)(lVar8 + 0x398) = fVar22;
    *(undefined1 **)(lVar8 + 0x39c) = &DAT_3f8000003f800000;
    *(float *)(lVar8 + 0x394) = fVar21 + -5.0;
    lVar12 = *(long *)PTR_DAT_04bb27c8;
    if (lVar12 != 0) {
      if (*(long *)(lVar8 + 0x278) != 0) {
        plVar17 = (long *)(lVar12 + 0x10);
        lVar14 = *plVar17;
        plVar18 = (long *)((long)*(int *)(lVar12 + 0x24) + *(long *)(lVar8 + 0x278));
        *plVar17 = (long)plVar18;
        *plVar18 = lVar14;
        plVar18[1] = (long)plVar17;
        if (lVar14 != 0) {
          *(long **)(lVar14 + 8) = plVar18;
        }
        *(int *)(lVar12 + 0x20) = *(int *)(lVar12 + 0x20) + 1;
      }
      *(undefined1 *)(lVar8 + 0x289) = 1;
    }
    *(long *)(lVar8 + 0x308) = param_1;
    *(code **)(lVar8 + 0x310) = FUN_0249e868;
    *(undefined8 *)(lVar8 + 0x318) = 0;
    *(undefined ***)(lVar8 + 0x300) = &PTR_LAB_04a814c0;
    puVar5 = PTR_DAT_04bb27d0;
    if (((*(long *)PTR_DAT_04bb39b0 == 0) || (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0)) &&
       (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476))) {
      pcVar9 = (char *)FUN_02582a24(param_1 + 0x1ee8);
      lVar12 = **(long **)puVar5;
      bVar4 = *(byte *)(lVar12 + 0x473);
      pcVar15 = PTR_DAT_04bc1220;
      if ((long)(char)bVar4 != 0xffffffffffffffff) {
        puVar13 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
        if (7 < bVar4) {
          puVar13 = (uint *)(lVar12 + 0x48);
        }
        if ((*puVar13 & 8) != 0) {
          pcVar15 = (char *)(lVar12 + 0x472);
        }
      }
      if (*pcVar9 != *pcVar15) {
        *(byte *)(*(long *)(lVar8 + 0x278) + 0x18) = *(byte *)(*(long *)(lVar8 + 0x278) + 0x18) | 8;
      }
    }
  }
  if ((*(int *)(param_1 + 0x178) == 0) && (lVar8 = FUN_024a07f0(param_1), lVar8 != 0)) {
    *(float *)(lVar8 + 0x390) = fVar20;
    *(float *)(lVar8 + 0x398) = fVar22;
    *(undefined1 **)(lVar8 + 0x39c) = &DAT_3f8000003f800000;
    *(float *)(lVar8 + 0x394) = fVar21 + -5.0;
    lVar12 = *(long *)PTR_DAT_04bb27c8;
    if (lVar12 != 0) {
      if (*(long *)(lVar8 + 0x278) != 0) {
        plVar17 = (long *)(lVar12 + 0x10);
        lVar14 = *plVar17;
        plVar18 = (long *)((long)*(int *)(lVar12 + 0x24) + *(long *)(lVar8 + 0x278));
        *plVar17 = (long)plVar18;
        *plVar18 = lVar14;
        plVar18[1] = (long)plVar17;
        if (lVar14 != 0) {
          *(long **)(lVar14 + 8) = plVar18;
        }
        *(int *)(lVar12 + 0x20) = *(int *)(lVar12 + 0x20) + 1;
      }
      *(undefined1 *)(lVar8 + 0x289) = 1;
    }
    *(long *)(lVar8 + 0x308) = param_1;
    *(code **)(lVar8 + 0x310) = FUN_0249e868;
    *(undefined8 *)(lVar8 + 0x318) = 0;
    *(undefined ***)(lVar8 + 0x300) = &PTR_LAB_04a814c0;
  }
  puVar5 = PTR_DAT_04bb3238;
  *(undefined4 *)(param_1 + 0xb00) = 0xbf800000;
  uVar2 = *(undefined4 *)puVar5;
  *(undefined4 *)(param_1 + 0xb04) = uVar2;
  *(undefined4 *)(param_1 + 0xb08) = uVar2;
  *(undefined4 *)(param_1 + 0xb0c) = uVar2;
  *(undefined4 *)(param_1 + 0xb10) = uVar2;
  puVar5 = PTR_DAT_04bb43c0;
  if (*(int *)(param_1 + 0x178) != 1) {
    return;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    return;
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x60) + 0x1480);
  if (*(char *)(lVar8 + 0xee) == '\0') {
    return;
  }
  lVar8 = lVar8 + ((ulong)*(uint *)(lVar8 + 0x10) & 1) * 0x20;
  local_48 = *(short *)(lVar8 + 0x14);
  local_46 = *(undefined1 *)(lVar8 + 0x16);
  local_45 = *(undefined1 *)(lVar8 + 0x17);
  local_44 = *(undefined4 *)(lVar8 + 0x18);
  local_70 = *(char **)(lVar8 + 0x14);
  if (local_48 == -2) {
    return;
  }
  local_78 = PTR_DAT_04bc0510 + 0x10;
  local_68 = 0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar5 == 0) {
    return;
  }
  lVar8 = *(long *)(lVar8 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
  if (*(uint *)(lVar8 + 0x1d8) <= uVar6) {
    return;
  }
  if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) == 0) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_04bc0428;
  uVar6 = FUN_0277d6c4(&local_48);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
  if (*(uint *)(lVar8 + 0x1d8) <= uVar6) {
    return;
  }
  puVar13 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8);
  if (puVar13 == (uint *)0x0) {
    return;
  }
  uVar6 = *puVar13;
  if (uVar6 == 0) {
    return;
  }
  if (puVar13 == (uint *)(ulong)uVar6) {
    return;
  }
  puVar16 = (uint *)((long)puVar13 - (long)(ulong)uVar6);
  if (*puVar16 == 0) {
    return;
  }
  uVar6 = puVar16[1];
  if (uVar6 == 0) {
    return;
  }
  if ((ulong)(ushort)puVar16[2] == 0) {
    return;
  }
  lVar8 = 0xc;
  if (*(char *)((long)puVar16 + 10) != '\0') {
    lVar8 = 0x1c;
  }
  lVar8 = (long)puVar16 + lVar8 + (ulong)(ushort)puVar16[2] * 8;
  if (lVar8 == 0) {
    return;
  }
  uVar1 = 0;
  if ((ulong)uVar6 != 0) {
    uVar1 = (uint)((ulong)((long)puVar13 - lVar8) / (ulong)uVar6);
  }
  if (*puVar16 <= uVar1) {
    uVar1 = 0xffffffff;
  }
  if (*(uint *)PTR_DAT_04bc00c8 <= uVar1) {
    return;
  }
  uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2);
  if (0xbc < uVar3) {
    return;
  }
  if (uVar3 != 0x19) {
    return;
  }
  puVar19 = *(undefined8 **)(param_1 + 0x60);
  if (puVar19 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar19 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar19 = &DAT_05240280;
    }
  }
  puVar5 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  uVar6 = *(uint *)(puVar19[0x290] + ((ulong)*(uint *)(puVar19[0x290] + 0x10) & 1) * 0x20 + 0x28);
  if (((uVar6 == 0) ||
      (plVar18 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                           ((ulong)(uVar6 >> 0x11) & 0x7ff8)), plVar18 == (long *)0x0)) ||
     (((*(uint *)(plVar18 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar18 + 0x46) != uVar6)))) {
    plVar18 = (long *)0x0;
  }
  if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
    plVar17 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar5;
    iVar7 = (**(code **)(*plVar17 + 0x60))();
    if (iVar7 < 0x11) {
      uVar6 = 1;
      goto LAB_0249ff10;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar6 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto LAB_0249ff10;
    }
  }
  uVar6 = 0;
LAB_0249ff10:
  if (plVar18 != (long *)0x0) {
    lVar8 = plVar18[0x2a];
    if (((*PTR_DAT_04bbe298 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbe298), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bbe290 = PTR_DAT_04bbe250 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe298);
    }
    uVar10 = (**(code **)(*plVar18 + 0x20))(plVar18,PTR_DAT_04bbe290);
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar6;
    }
    if (((uVar10 & 1) != 0) && (uVar1 != 0)) {
      lVar8 = FUN_0251e98c(1);
      puVar11 = (undefined4 *)(**(code **)(*(long *)(lVar8 + 0x840) + 0xf0))(lVar8 + 0x840);
      *(undefined4 *)((long)plVar18 + 0x3f4) = *puVar11;
    }
  }
  return;
}

