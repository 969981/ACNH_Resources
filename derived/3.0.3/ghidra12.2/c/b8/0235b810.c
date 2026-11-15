
bool FUN_0235b810(long param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  float fVar6;
  byte bVar7;
  undefined2 uVar8;
  ushort uVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  long *plVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  char *pcVar18;
  short sVar19;
  float fVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  char cVar26;
  ulong uVar27;
  int *piVar28;
  short sVar29;
  float fVar30;
  undefined8 *puVar31;
  float local_80;
  int iStack_7c;
  undefined4 local_78;
  float local_74;
  float fStack_70;
  float local_6c;
  float local_68;
  uint local_64;
  
  puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
  puVar10 = PTR_DAT_04bb4718;
  if (*(int *)(param_1 + 0x178) == 0) {
    return false;
  }
  if (param_2 == (undefined8 *)0x0) {
    uVar27 = (ulong)*(byte *)(param_1 + 0x1ee8);
    puVar31 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x2e8);
    if (uVar27 < 8) {
      puVar31 = puVar31 + uVar27 * 0x10;
      uVar24 = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar27 * 0x30 + 0x18);
      uVar4 = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar27 * 0x30 + 8);
      uVar25 = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar27 * 0x30 + 0x10);
      *(undefined4 *)((long)puVar31 + 0x17) =
           *(undefined4 *)(PTR_DAT_04bc31b0 + uVar27 * 0x30 + 0x1f);
      puVar31[1] = uVar25;
      puVar31[2] = uVar24;
      *puVar31 = uVar4;
      bVar7 = *(byte *)(param_1 + 0x1ee8);
      bVar11 = 7 < bVar7;
      if (bVar11) {
        bVar7 = 0xff;
      }
      puVar1 = PTR_DAT_04bc31b8 + (ulong)(uint)(int)(char)bVar7 * 0x70;
      if (bVar11) {
        puVar1 = PTR_DAT_04bc31b8;
      }
      uVar25 = *(undefined8 *)(puVar1 + 0x18);
      uVar4 = *(undefined8 *)(puVar1 + 0x10);
      puVar31[4] = *(undefined8 *)(puVar1 + 8);
      puVar31[5] = uVar4;
      puVar31[6] = uVar25;
      uVar4 = *(undefined8 *)(puVar1 + 0x20);
      uVar25 = *(undefined8 *)(puVar1 + 0x28);
      uVar24 = *(undefined8 *)(puVar1 + 0x38);
      puVar31[9] = *(undefined8 *)(puVar1 + 0x30);
      puVar31[10] = uVar24;
      puVar31[7] = uVar4;
      puVar31[8] = uVar25;
      uVar24 = *(undefined8 *)(puVar1 + 0x50);
      uVar4 = *(undefined8 *)(puVar1 + 0x40);
      uVar25 = *(undefined8 *)(puVar1 + 0x48);
      *(undefined8 *)((long)puVar31 + 0x6e) = *(undefined8 *)(puVar1 + 0x56);
      puVar31[0xc] = uVar25;
      puVar31[0xd] = uVar24;
      puVar31[0xb] = uVar4;
    }
    local_64 = *(byte *)(puVar31 + 3) & 0xf;
    if (*(int *)((long)puVar23 + 0x38) == 0x55b5d9de) {
      if (local_64 - 2 < 3) {
        fVar30 = *(float *)(&DAT_0417a704 + (long)(int)(local_64 - 2) * 4);
      }
      else {
        fVar30 = 3.22299e-43;
      }
    }
    else {
      fVar30 = (float)(uint)*(ushort *)((long)puVar31 + 3);
      local_74 = fVar30;
      if (((DAT_054f0b68 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_054f0b68), iVar12 != 0)) {
        DAT_054f0b60 = 0;
        __cxa_guard_release(&DAT_054f0b68);
      }
      if (*(long *)puVar10 == 0) {
        puVar13 = &DAT_054f0b60;
      }
      else {
        lVar22 = *(long *)puVar10 + 0x20;
        puVar13 = (uint *)FUN_0250f090(lVar22,fVar30);
        if (puVar13 == (uint *)0x0) {
          puVar14 = (uint *)FUN_0250f090(lVar22,0);
          puVar13 = &DAT_054f0b60;
          if (puVar14 != (uint *)0x0) {
            puVar13 = puVar14;
          }
        }
      }
      puVar14 = (uint *)((long)puVar13 - (ulong)*puVar13);
      if ((((*puVar13 != 0) && (puVar14 != (uint *)0x0)) && (*puVar14 != 0)) &&
         ((uVar5 = puVar14[1], uVar5 != 0 && ((ulong)(ushort)puVar14[2] != 0)))) {
        lVar22 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          lVar22 = 0x1c;
        }
        lVar22 = (long)puVar14 + lVar22 + (ulong)(ushort)puVar14[2] * 8;
        if (lVar22 != 0) {
          uVar3 = 0;
          if ((ulong)uVar5 != 0) {
            uVar3 = (uint)((ulong)((long)puVar13 - lVar22) / (ulong)uVar5);
          }
          if (*puVar14 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < *(uint *)PTR_DAT_04bc30f0) &&
             (*(short *)(*(long *)(PTR_DAT_04bc30f0 + 8) + (long)(int)uVar3 * 2) == 1)) {
            fVar30 = 1.96182e-44;
          }
        }
      }
    }
    if (0x148 < (uint)fVar30) {
      return false;
    }
    sVar29 = *(short *)((long)puVar31 + 1);
    local_74 = 1.70958e-43;
    local_80 = 0.0;
    if (*(long *)(param_1 + 0x70) != 0) {
      fVar20 = *(float *)(*(long *)(param_1 + 0x70) + 0x280);
      local_80 = 0.0;
      if ((uint)fVar20 < 0x149) {
        local_80 = fVar20;
      }
    }
    local_68 = fVar30;
    if (local_80 == 1.70958e-43) {
      plVar15 = *(long **)(param_1 + 0x60);
      if (plVar15 == (long *)0x0) {
        if (((DAT_052461c0 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_052461c0), iVar12 != 0))
        {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
          plVar15 = &DAT_05240280;
        }
        else {
          plVar15 = &DAT_05240280;
        }
      }
      uVar27 = (**(code **)(*plVar15 + 0x100))();
      if ((uVar27 & 1) != 0) {
        return false;
      }
    }
    if (*(int *)((long)puVar23 + 0x38) == 0x55b5d9de) {
      bVar11 = DAT_055c1b60 == &DAT_055c1b58;
      puVar23 = DAT_055c1b60 + -8;
      if ((sVar29 != 0) && (puVar21 = DAT_055c1b60, puVar23 != &DAT_055c1b18)) {
        do {
          puVar21 = (undefined8 *)puVar21[1];
          sVar29 = sVar29 + -1;
          bVar11 = puVar21 == &DAT_055c1b58;
        } while (!bVar11 && sVar29 != 0);
        puVar23 = puVar21 + -8;
      }
      puVar21 = &DAT_055c04a0;
      if (!bVar11) {
        puVar21 = puVar23;
      }
      if (*(int *)(puVar21 + 7) != 0x6622bd46) {
        return false;
      }
    }
    else {
      lVar22 = *(long *)PTR_DAT_04bb2720;
      if (lVar22 == 0) {
        puVar21 = &DAT_055c04a0;
      }
      else {
        puVar21 = &DAT_055c04a0;
        if (*(long *)(lVar22 + 0x330) != 0) {
          puVar21 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar22 + 0x338));
          iVar12 = FUN_006bd550(*puVar21,0);
          if (iVar12 != 0x758f7eaf) {
            puVar23 = &DAT_055c04a0;
          }
          puVar21 = puVar23;
        }
      }
      if (DAT_055c1b60 != &DAT_055c1b58) {
        sVar19 = 0;
        puVar23 = DAT_055c1b60;
        do {
          if (*(int *)(puVar23 + -1) == *(int *)(puVar21 + 7)) {
            if (sVar19 != -1) goto LAB_0235bf54;
            break;
          }
          puVar23 = (undefined8 *)puVar23[1];
          sVar19 = sVar19 + 1;
        } while (puVar23 != &DAT_055c1b58);
      }
      sVar19 = 0;
LAB_0235bf54:
      if (sVar29 != sVar19) {
        local_74 = 0.0;
        local_80 = 0.0;
        if (*(long *)(param_1 + 0x70) != 0) {
          fVar30 = *(float *)(*(long *)(param_1 + 0x70) + 0x280);
          local_80 = 0.0;
          if ((uint)fVar30 < 0x149) {
            local_80 = fVar30;
          }
        }
        if (local_80 == 0.0) {
          return false;
        }
        uVar27 = FUN_016e6850(sVar29);
        if ((uVar27 & 1) == 0) {
          FUN_02372704(param_1,0,0,1);
          return true;
        }
        return false;
      }
    }
    if (*(ushort *)(param_1 + 0x17de) != (ushort)*(byte *)((long)puVar31 + 0x13)) {
      fVar20 = 0.0;
      if (*(long *)(param_1 + 0x70) != 0) {
        fVar6 = *(float *)(*(long *)(param_1 + 0x70) + 0x280);
        fVar20 = 0.0;
        if ((uint)fVar6 < 0x149) {
          fVar20 = fVar6;
        }
      }
      local_74 = fVar20;
      if (((DAT_054f0b68 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_054f0b68), iVar12 != 0)) {
        DAT_054f0b60 = 0;
        __cxa_guard_release(&DAT_054f0b68);
      }
      if (*(long *)puVar10 == 0) {
        puVar16 = &DAT_054f0b60;
      }
      else {
        lVar22 = *(long *)puVar10 + 0x20;
        puVar16 = (undefined4 *)FUN_0250f090(lVar22,fVar20);
        if (puVar16 == (undefined4 *)0x0) {
          puVar17 = (undefined4 *)FUN_0250f090(lVar22,0);
          puVar16 = &DAT_054f0b60;
          if (puVar17 != (undefined4 *)0x0) {
            puVar16 = puVar17;
          }
        }
      }
      if ((((param_3 & 1) != 0) &&
          (pcVar18 = (char *)FUN_02329bf0(puVar16,0x16,0x35fd6466,*(undefined8 *)PTR_DAT_04bc2fd8),
          pcVar18 != (char *)0x0)) && (*pcVar18 != '\0')) {
        return false;
      }
      lVar22 = *(long *)(param_1 + 0x70);
      if (lVar22 == 0) {
        local_80 = 0.0;
      }
      else {
        local_80 = 0.0;
        if ((uint)*(float *)(lVar22 + 0x280) < 0x149) {
          local_80 = *(float *)(lVar22 + 0x280);
        }
      }
      if ((fVar30 == 1.96182e-44) && (local_80 == 1.96182e-44)) {
        uVar4 = *puVar31;
        uVar24 = puVar31[1];
        uVar25 = puVar31[2];
        *(undefined8 *)(param_1 + 0x18f8) = puVar31[3];
        *(undefined8 *)(param_1 + 0x18f0) = uVar25;
        *(undefined8 *)(param_1 + 0x18e8) = uVar24;
        *(undefined8 *)(param_1 + 0x18e0) = uVar4;
        uVar4 = puVar31[4];
        uVar24 = puVar31[5];
        uVar25 = puVar31[6];
        *(undefined8 *)(param_1 + 0x1918) = puVar31[7];
        *(undefined8 *)(param_1 + 0x1910) = uVar25;
        *(undefined8 *)(param_1 + 0x1908) = uVar24;
        *(undefined8 *)(param_1 + 0x1900) = uVar4;
        uVar4 = puVar31[8];
        uVar24 = puVar31[9];
        uVar25 = puVar31[10];
        *(undefined8 *)(param_1 + 0x1938) = puVar31[0xb];
        *(undefined8 *)(param_1 + 0x1930) = uVar25;
        *(undefined8 *)(param_1 + 0x1928) = uVar24;
        *(undefined8 *)(param_1 + 0x1920) = uVar4;
        uVar4 = puVar31[0xc];
        uVar25 = puVar31[0xd];
        uVar24 = puVar31[0xe];
        *(undefined2 *)(param_1 + 0x1958) = *(undefined2 *)(puVar31 + 0xf);
        *(undefined8 *)(param_1 + 0x1950) = uVar24;
        *(undefined8 *)(param_1 + 0x1948) = uVar25;
        *(undefined8 *)(param_1 + 0x1940) = uVar4;
        *(ushort *)(param_1 + 0x17de) = (ushort)*(byte *)((long)puVar31 + 0x13);
        *(uint *)(param_1 + 0x1810) = *(byte *)(puVar31 + 3) & 0xf;
        return false;
      }
      if ((uint)fVar30 < 0x149) {
        uVar4 = *puVar31;
        uVar24 = puVar31[1];
        uVar25 = puVar31[2];
        *(undefined8 *)(param_1 + 0x1878) = puVar31[3];
        *(undefined8 *)(param_1 + 0x1870) = uVar25;
        *(undefined8 *)(param_1 + 0x1868) = uVar24;
        *(undefined8 *)(param_1 + 0x1860) = uVar4;
        uVar4 = puVar31[4];
        uVar24 = puVar31[5];
        uVar25 = puVar31[6];
        *(undefined8 *)(param_1 + 0x1898) = puVar31[7];
        *(undefined8 *)(param_1 + 0x1890) = uVar25;
        *(undefined8 *)(param_1 + 0x1888) = uVar24;
        *(undefined8 *)(param_1 + 0x1880) = uVar4;
        uVar4 = puVar31[8];
        uVar24 = puVar31[9];
        uVar25 = puVar31[10];
        *(undefined8 *)(param_1 + 0x18b8) = puVar31[0xb];
        *(undefined8 *)(param_1 + 0x18b0) = uVar25;
        *(undefined8 *)(param_1 + 0x18a8) = uVar24;
        *(undefined8 *)(param_1 + 0x18a0) = uVar4;
        uVar4 = puVar31[0xc];
        uVar25 = puVar31[0xd];
        uVar24 = puVar31[0xe];
        *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(puVar31 + 0xf);
        *(undefined8 *)(param_1 + 0x18d0) = uVar24;
        *(undefined8 *)(param_1 + 0x18c8) = uVar25;
        *(undefined8 *)(param_1 + 0x18c0) = uVar4;
        lVar2 = 0;
        if (lVar22 != 0) {
          lVar2 = lVar22 + 0x278;
        }
        local_74 = fVar30;
        FUN_03ebb160(lVar2,fVar30);
      }
      *(ushort *)(param_1 + 0x17de) = (ushort)*(byte *)((long)puVar31 + 0x13);
      return true;
    }
    lVar22 = *(long *)(param_1 + 0x70);
    if (lVar22 == 0) {
      local_80 = 0.0;
    }
    else {
      local_80 = 0.0;
      if ((uint)*(float *)(lVar22 + 0x280) < 0x149) {
        local_80 = *(float *)(lVar22 + 0x280);
      }
    }
    if (local_80 == 0.0) {
      if (local_68 != 0.0) {
        local_74 = local_68;
        if (0x148 < (uint)local_68) {
          return true;
        }
        uVar4 = *puVar31;
        uVar24 = puVar31[1];
        uVar25 = puVar31[2];
        *(undefined8 *)(param_1 + 0x1878) = puVar31[3];
        *(undefined8 *)(param_1 + 0x1870) = uVar25;
        *(undefined8 *)(param_1 + 0x1868) = uVar24;
        *(undefined8 *)(param_1 + 0x1860) = uVar4;
        uVar4 = puVar31[4];
        uVar24 = puVar31[5];
        uVar25 = puVar31[6];
        *(undefined8 *)(param_1 + 0x1898) = puVar31[7];
        *(undefined8 *)(param_1 + 0x1890) = uVar25;
        *(undefined8 *)(param_1 + 0x1888) = uVar24;
        *(undefined8 *)(param_1 + 0x1880) = uVar4;
        uVar4 = puVar31[8];
        uVar24 = puVar31[9];
        uVar25 = puVar31[10];
        *(undefined8 *)(param_1 + 0x18b8) = puVar31[0xb];
        *(undefined8 *)(param_1 + 0x18b0) = uVar25;
        *(undefined8 *)(param_1 + 0x18a8) = uVar24;
        *(undefined8 *)(param_1 + 0x18a0) = uVar4;
        uVar4 = puVar31[0xc];
        uVar25 = puVar31[0xd];
        uVar24 = puVar31[0xe];
        *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(puVar31 + 0xf);
        *(undefined8 *)(param_1 + 0x18d0) = uVar24;
        *(undefined8 *)(param_1 + 0x18c8) = uVar25;
        *(undefined8 *)(param_1 + 0x18c0) = uVar4;
        lVar2 = 0;
        if (lVar22 != 0) {
          lVar2 = lVar22 + 0x278;
        }
        FUN_03ebb160(lVar2,local_68);
        return true;
      }
      fVar30 = 0.0;
    }
    fVar20 = 0.0;
    if (lVar22 != 0) {
      fVar20 = 0.0;
      if ((uint)*(float *)(lVar22 + 0x280) < 0x149) {
        fVar20 = *(float *)(lVar22 + 0x280);
      }
    }
    if (fVar20 == fVar30) {
      uVar4 = *puVar31;
      uVar24 = puVar31[1];
      uVar25 = puVar31[2];
      *(undefined8 *)(param_1 + 0x18f8) = puVar31[3];
      *(undefined8 *)(param_1 + 0x18f0) = uVar25;
      *(undefined8 *)(param_1 + 0x18e8) = uVar24;
      *(undefined8 *)(param_1 + 0x18e0) = uVar4;
      uVar4 = puVar31[4];
      uVar24 = puVar31[5];
      uVar25 = puVar31[6];
      *(undefined8 *)(param_1 + 0x1918) = puVar31[7];
      *(undefined8 *)(param_1 + 0x1910) = uVar25;
      *(undefined8 *)(param_1 + 0x1908) = uVar24;
      *(undefined8 *)(param_1 + 0x1900) = uVar4;
      uVar4 = puVar31[8];
      uVar24 = puVar31[9];
      uVar25 = puVar31[10];
      *(undefined8 *)(param_1 + 0x1938) = puVar31[0xb];
      *(undefined8 *)(param_1 + 0x1930) = uVar25;
      *(undefined8 *)(param_1 + 0x1928) = uVar24;
      *(undefined8 *)(param_1 + 0x1920) = uVar4;
      uVar4 = puVar31[0xc];
      uVar25 = puVar31[0xd];
      uVar24 = puVar31[0xe];
      *(undefined2 *)(param_1 + 0x1958) = *(undefined2 *)(puVar31 + 0xf);
      *(undefined8 *)(param_1 + 0x1950) = uVar24;
      *(undefined8 *)(param_1 + 0x1948) = uVar25;
      *(undefined8 *)(param_1 + 0x1940) = uVar4;
      *(ushort *)(param_1 + 0x17de) = (ushort)*(byte *)((long)puVar31 + 0x13);
      return false;
    }
    return false;
  }
  local_64 = *(byte *)(param_2 + 3) & 0xf;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x55b5d9de) {
    if (local_64 - 2 < 3) {
      fVar30 = *(float *)(&DAT_0417a704 + (long)(int)(local_64 - 2) * 4);
    }
    else {
      fVar30 = 3.22299e-43;
    }
  }
  else {
    fVar30 = (float)(uint)*(ushort *)((long)param_2 + 3);
    local_74 = fVar30;
    if (((DAT_054f0b68 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_054f0b68), iVar12 != 0)) {
      DAT_054f0b60 = 0;
      __cxa_guard_release(&DAT_054f0b68);
    }
    if (*(long *)puVar10 == 0) {
      puVar13 = &DAT_054f0b60;
    }
    else {
      lVar22 = *(long *)puVar10 + 0x20;
      puVar13 = (uint *)FUN_0250f090(lVar22,fVar30);
      if (puVar13 == (uint *)0x0) {
        puVar14 = (uint *)FUN_0250f090(lVar22,0);
        puVar13 = &DAT_054f0b60;
        if (puVar14 != (uint *)0x0) {
          puVar13 = puVar14;
        }
      }
    }
    puVar14 = (uint *)((long)puVar13 - (ulong)*puVar13);
    if ((((*puVar13 != 0) && (puVar14 != (uint *)0x0)) && (*puVar14 != 0)) &&
       ((uVar5 = puVar14[1], uVar5 != 0 && ((ulong)(ushort)puVar14[2] != 0)))) {
      lVar22 = 0xc;
      if (*(char *)((long)puVar14 + 10) != '\0') {
        lVar22 = 0x1c;
      }
      lVar22 = (long)puVar14 + lVar22 + (ulong)(ushort)puVar14[2] * 8;
      if (lVar22 != 0) {
        uVar3 = 0;
        if ((ulong)uVar5 != 0) {
          uVar3 = (uint)((ulong)((long)puVar13 - lVar22) / (ulong)uVar5);
        }
        if (*puVar14 <= uVar3) {
          uVar3 = 0xffffffff;
        }
        if ((uVar3 < *(uint *)PTR_DAT_04bc30f0) &&
           (*(short *)(*(long *)(PTR_DAT_04bc30f0 + 8) + (long)(int)uVar3 * 2) == 1)) {
          fVar30 = 1.96182e-44;
        }
      }
    }
  }
  local_74 = fVar30;
  if (((DAT_054f0b68 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_054f0b68), iVar12 != 0)) {
    DAT_054f0b60 = 0;
    __cxa_guard_release(&DAT_054f0b68);
  }
  if (*(long *)puVar10 == 0) {
    puVar13 = &DAT_054f0b60;
  }
  else {
    lVar22 = *(long *)puVar10 + 0x20;
    puVar13 = (uint *)FUN_0250f090(lVar22,fVar30);
    if (puVar13 == (uint *)0x0) {
      puVar14 = (uint *)FUN_0250f090(lVar22,0);
      puVar13 = &DAT_054f0b60;
      if (puVar14 != (uint *)0x0) {
        puVar13 = puVar14;
      }
    }
  }
  uVar5 = *puVar13;
  local_68 = 0.0;
  if ((uVar5 != 0) && (puVar13 != (uint *)(ulong)uVar5)) {
    puVar14 = (uint *)((long)puVar13 - (long)(ulong)uVar5);
    local_68 = 0.0;
    if (*puVar14 != 0) {
      uVar5 = puVar14[1];
      if ((uVar5 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
        lVar22 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          lVar22 = 0x1c;
        }
        lVar22 = (long)puVar14 + lVar22 + (ulong)(ushort)puVar14[2] * 8;
        if (lVar22 != 0) {
          uVar3 = 0;
          if ((ulong)uVar5 != 0) {
            uVar3 = (uint)((ulong)((long)puVar13 - lVar22) / (ulong)uVar5);
          }
          if (*puVar14 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < *(uint *)PTR_DAT_04bc2ff8) &&
             (local_68 = (float)(uint)*(ushort *)
                                       (*(long *)(PTR_DAT_04bc2ff8 + 8) + (long)(int)uVar3 * 2),
             (uint)local_68 < 2)) goto LAB_0235bb90;
        }
      }
      local_68 = 0.0;
    }
  }
LAB_0235bb90:
  if (local_68 != 1.4013e-45) {
LAB_0235c288:
    uVar9 = *(ushort *)((long)param_2 + 0xf);
    fStack_70 = (float)(int)*(short *)((long)param_2 + 9) * 0.25;
    local_74 = (float)*(int *)((long)param_2 + 5) * 0.001;
    local_6c = (float)*(int *)((long)param_2 + 0xb) * 0.001;
    (**(code **)(**(long **)(param_1 + 0x68) + 0x100))(*(long **)(param_1 + 0x68),&local_74);
    local_80 = 0.0;
    local_78 = 0;
    iStack_7c = (uint)uVar9 << 0x10;
    (**(code **)(**(long **)(param_1 + 0x68) + 0x150))(*(long **)(param_1 + 0x68),&local_80);
    uVar4 = *param_2;
    uVar24 = param_2[1];
    uVar25 = param_2[2];
    *(undefined8 *)(param_1 + 0x18f8) = param_2[3];
    *(undefined8 *)(param_1 + 0x18f0) = uVar25;
    *(undefined8 *)(param_1 + 0x18e8) = uVar24;
    *(undefined8 *)(param_1 + 0x18e0) = uVar4;
    uVar4 = param_2[4];
    uVar24 = param_2[5];
    uVar25 = param_2[6];
    *(undefined8 *)(param_1 + 0x1918) = param_2[7];
    *(undefined8 *)(param_1 + 0x1910) = uVar25;
    *(undefined8 *)(param_1 + 0x1908) = uVar24;
    *(undefined8 *)(param_1 + 0x1900) = uVar4;
    uVar4 = param_2[8];
    uVar24 = param_2[9];
    uVar25 = param_2[10];
    *(undefined8 *)(param_1 + 0x1938) = param_2[0xb];
    *(undefined8 *)(param_1 + 0x1930) = uVar25;
    *(undefined8 *)(param_1 + 0x1928) = uVar24;
    *(undefined8 *)(param_1 + 0x1920) = uVar4;
    uVar4 = param_2[0xc];
    uVar25 = param_2[0xd];
    uVar24 = param_2[0xe];
    uVar8 = *(undefined2 *)(param_2 + 0xf);
    *(undefined8 *)(param_1 + 0x1938) = 0;
    *(undefined8 *)(param_1 + 0x1930) = 0;
    *(undefined8 *)(param_1 + 0x1928) = 0;
    *(undefined8 *)(param_1 + 0x1920) = 0;
    *(undefined8 *)(param_1 + 0x1918) = 0;
    *(undefined8 *)(param_1 + 0x1910) = 0;
    *(undefined8 *)(param_1 + 0x1908) = 0;
    *(undefined8 *)(param_1 + 0x1900) = 0;
    *(undefined2 *)(param_1 + 0x1958) = uVar8;
    *(undefined8 *)(param_1 + 0x1950) = uVar24;
    *(undefined8 *)(param_1 + 0x1948) = uVar25;
    *(undefined8 *)(param_1 + 0x1940) = uVar4;
    *(undefined8 *)(param_1 + 0x1950) = 0;
    *(undefined8 *)(param_1 + 0x1948) = 0;
    *(undefined8 *)(param_1 + 0x1940) = 0;
    if (0x148 < (uint)fVar30) {
      return (uint)fVar30 < 0x149;
    }
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
    *(undefined8 *)(param_1 + 0x18c8) = 0;
    *(undefined8 *)(param_1 + 0x18c0) = 0;
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
    *(undefined8 *)(param_1 + 0x18d0) = 0;
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
    *(undefined8 *)(param_1 + 0x18a8) = 0;
    *(undefined8 *)(param_1 + 0x18a0) = 0;
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
    *(undefined8 *)(param_1 + 0x18b8) = 0;
    *(undefined8 *)(param_1 + 0x18b0) = 0;
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
    *(undefined8 *)(param_1 + 0x1888) = 0;
    *(undefined8 *)(param_1 + 0x1880) = 0;
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
    *(undefined8 *)(param_1 + 0x1898) = 0;
    *(undefined8 *)(param_1 + 0x1890) = 0;
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
    lVar22 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar22 = *(long *)(param_1 + 0x70) + 0x278;
    }
    local_80 = fVar30;
    FUN_03ebb160(lVar22,fVar30);
    return (uint)fVar30 < 0x149;
  }
  local_74 = fVar30;
  if ((DAT_054f0b68 & 1) == 0) {
    iVar12 = __cxa_guard_acquire(&DAT_054f0b68);
    if (iVar12 != 0) {
      DAT_054f0b60 = 0;
      __cxa_guard_release(&DAT_054f0b68);
    }
  }
  if (*(long *)puVar10 == 0) {
    puVar13 = &DAT_054f0b60;
    pcVar18 = PTR_DAT_04bc2fe0;
    puVar23 = (undefined8 *)PTR_DAT_04bc2fe8;
    uVar5 = DAT_054f0b60;
  }
  else {
    lVar22 = *(long *)puVar10 + 0x20;
    puVar13 = (uint *)FUN_0250f090(lVar22,fVar30);
    if (puVar13 == (uint *)0x0) {
      puVar14 = (uint *)FUN_0250f090(lVar22,0);
      puVar13 = &DAT_054f0b60;
      if (puVar14 != (uint *)0x0) {
        puVar13 = puVar14;
      }
    }
    uVar5 = *puVar13;
    pcVar18 = PTR_DAT_04bc2fe0;
    puVar23 = (undefined8 *)PTR_DAT_04bc2fe8;
  }
  if (uVar5 == 0) {
    PTR_DAT_04bc2fe8 = (undefined *)puVar23;
    PTR_DAT_04bc2fe0 = pcVar18;
    return false;
  }
  cVar26 = *pcVar18;
  PTR_DAT_04bc2fe0 = pcVar18;
  PTR_DAT_04bc2fe8 = (undefined *)puVar23;
  do {
    if (cVar26 == '\0') {
      cVar26 = '\x01';
      *puVar23 = 0xffffffffffffffff;
      puVar23[1] = 0xffffffffffffffff;
      *pcVar18 = '\x01';
      puVar23[0x14] = 0xffffffffffffffff;
      puVar23[2] = 0xffffffffffffffff;
      puVar23[3] = 0xffffffffffffffff;
      puVar23[4] = 0xffffffffffffffff;
      puVar23[5] = 0xffffffffffffffff;
      puVar23[6] = 0xffffffffffffffff;
      puVar23[7] = 0xffffffffffffffff;
      puVar23[8] = 0xffffffffffffffff;
      puVar23[9] = 0xffffffffffffffff;
      puVar23[10] = 0xffffffffffffffff;
      puVar23[0xb] = 0xffffffffffffffff;
      puVar23[0xc] = 0xffffffffffffffff;
      puVar23[0xd] = 0xffffffffffffffff;
      puVar23[0xe] = 0xffffffffffffffff;
      puVar23[0xf] = 0xffffffffffffffff;
      puVar23[0x10] = 0xffffffffffffffff;
      puVar23[0x11] = 0xffffffffffffffff;
      puVar23[0x12] = 0xffffffffffffffff;
      puVar23[0x13] = 0xffffffffffffffff;
    }
    else {
      uVar5 = *(uint *)(puVar23 + 8);
      if (-1 < (int)uVar5) {
        if ((char *)((ulong)uVar5 + (long)puVar13) == (char *)0x0) {
          return false;
        }
        if (*(char *)((ulong)uVar5 + (long)puVar13) == '\0') {
          return false;
        }
        goto LAB_0235c288;
      }
      if (uVar5 != 0xffffffff) {
        return false;
      }
    }
    puVar14 = (uint *)(ulong)*puVar13;
    if (*puVar13 == 0) {
      return false;
    }
    if (puVar13 == puVar14) {
      return false;
    }
    lVar22 = 0xc;
    if (*(char *)((long)puVar13 + (10 - (long)puVar14)) != '\0') {
      lVar22 = 0x1c;
    }
    lVar22 = (long)puVar13 + (lVar22 - (long)puVar14);
    if (lVar22 == 0) {
      return false;
    }
    uVar27 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar14));
    *(undefined4 *)(puVar23 + 8) = 0xfffffffe;
    if (uVar27 == 0) {
      return false;
    }
    piVar28 = (int *)(lVar22 + 4);
    while (piVar28[-1] != 0x16e483f0) {
      piVar28 = piVar28 + 2;
      uVar27 = uVar27 - 1;
      if (uVar27 == 0) {
        return false;
      }
    }
    iVar12 = 0;
    if (*piVar28 != -1) {
      iVar12 = *piVar28;
    }
    *(int *)(puVar23 + 8) = iVar12;
    if (*puVar13 == 0) {
      return false;
    }
  } while( true );
}

