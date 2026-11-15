
void FUN_02377260(long param_1,undefined4 param_2)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  char cVar15;
  undefined8 *puVar16;
  uint *puVar17;
  int *piVar18;
  undefined8 *puVar19;
  undefined *local_78;
  undefined8 uStack_70;
  undefined4 local_64;
  undefined *local_60;
  char *pcStack_58;
  
  pbVar1 = (byte *)(param_1 + 0x18f3);
  if (*(int *)(param_1 + 0x178) == 0) {
    lVar14 = *(long *)PTR_DAT_04bb2720;
    if (lVar14 == 0) {
      puVar19 = &DAT_055c04a0;
    }
    else {
      puVar19 = &DAT_055c04a0;
      if (*(long *)(lVar14 + 0x330) != 0) {
        puVar19 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
        iVar10 = FUN_006bd550(*puVar19,0);
        puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar10 != 0x758f7eaf) {
          puVar19 = &DAT_055c04a0;
        }
      }
    }
    if (DAT_055c1b60 != &DAT_055c1b58) {
      uVar9 = 0;
      puVar16 = DAT_055c1b60;
      do {
        if (*(int *)(puVar16 + -1) == *(int *)(puVar19 + 7)) {
          if (((uVar9 ^ 0xffffffff) & 0xffff) != 0) goto LAB_02377364;
          break;
        }
        puVar16 = (undefined8 *)puVar16[1];
        uVar9 = uVar9 + 1;
      } while (puVar16 != &DAT_055c1b58);
    }
    uVar9 = 0;
LAB_02377364:
    uVar12 = FUN_016e6c20(uVar9);
    if ((uVar12 & 1) == 0) {
      local_60 = (undefined *)CONCAT44(local_60._4_4_,param_2);
      bVar4 = *pbVar1;
      lVar14 = param_1 + 0x18e0;
      puVar17 = (uint *)FUN_0251d928(param_2);
      puVar11 = (uint *)((long)puVar17 - (ulong)*puVar17);
      if ((((*puVar17 != 0) && (puVar11 != (uint *)0x0)) && (*puVar11 != 0)) &&
         ((uVar9 = puVar11[1], uVar9 != 0 && ((ulong)(ushort)puVar11[2] != 0)))) {
        lVar2 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar11 + lVar2 + (ulong)(ushort)puVar11[2] * 8;
        if (lVar2 != 0) {
          uVar3 = 0;
          if ((ulong)uVar9 != 0) {
            uVar3 = (uint)((ulong)((long)puVar17 - lVar2) / (ulong)uVar9);
          }
          if (*puVar11 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < *(uint *)PTR_DAT_04bc2ff8) &&
             (*(short *)(*(long *)(PTR_DAT_04bc2ff8 + 8) + (long)(int)uVar3 * 2) == 1)) {
            FUN_0235ad50(param_1,lVar14,1);
            *pbVar1 = bVar4;
            FUN_02559330(param_1 + 0x1ee8,lVar14);
            goto LAB_02377444;
          }
        }
      }
      *pbVar1 = bVar4 + 1;
      FUN_0235ad50(param_1,lVar14,1);
    }
  }
  else {
    *(ushort *)(param_1 + 0x17de) = (ushort)*pbVar1;
  }
LAB_02377444:
  FUN_0230f780(param_1,0);
  *(undefined1 *)(param_1 + 0x20e5) = 0;
  *(undefined4 *)(param_1 + 0x20d8) = *(undefined4 *)(param_1 + 0x20dc);
  puVar19 = *(undefined8 **)(param_1 + 0x60);
  if (puVar19 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_052461c0);
      puVar19 = &DAT_05240280;
      if (iVar10 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar19 = &DAT_05240280;
    }
  }
  puVar5 = PTR_DAT_04bb2020;
  local_60 = (undefined *)((ulong)local_60 & 0xffffffff00000000);
  if (puVar19[0x227] == 0) {
    puVar19 = &DAT_04c931a0;
  }
  else {
    puVar19 = (undefined8 *)(*(long *)(puVar19[0x227] + 0x88) + 0x60);
  }
  uStack_70 = puVar19[1];
  local_78 = PTR_DAT_04bb2020 + 0x10;
  puVar11 = (uint *)FUN_0171ee68(&local_78);
  puVar7 = PTR_DAT_04bbde90;
  puVar6 = PTR_DAT_04bbde88;
  if (puVar11 != (uint *)0x0) {
    local_60._0_4_ = 0xe;
    if (*puVar11 != 0) {
      cVar15 = *PTR_DAT_04bbde88;
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
          uVar9 = *puVar11;
        }
        else {
          uVar9 = *(uint *)(puVar7 + 0x2c);
          if (-1 < (int)uVar9) {
            if (((ulong)uVar9 + (long)puVar11 != 0) &&
               ((*(byte *)((ulong)uVar9 + (long)puVar11 + 1) >> 6 & 1) != 0)) goto LAB_0237764c;
            break;
          }
          if (uVar9 != 0xffffffff) break;
          uVar9 = *puVar11;
        }
        if ((uVar9 == 0) || (puVar17 = (uint *)(ulong)uVar9, puVar11 == puVar17)) break;
        lVar14 = 0xc;
        if (*(char *)((long)puVar11 + (10 - (long)puVar17)) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar11 + (lVar14 - (long)puVar17);
        if (lVar14 == 0) break;
        uVar12 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar17));
        *(undefined4 *)(puVar7 + 0x2c) = 0xfffffffe;
        if (uVar12 == 0) break;
        piVar18 = (int *)(lVar14 + 4);
        while (piVar18[-1] != 0x42ad246a) {
          piVar18 = piVar18 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) goto LAB_0237760c;
        }
        iVar10 = 0;
        if (*piVar18 != -1) {
          iVar10 = *piVar18;
        }
        *(int *)(puVar7 + 0x2c) = iVar10;
        if (*puVar11 == 0) break;
      } while( true );
    }
LAB_0237760c:
    puVar19 = *(undefined8 **)(param_1 + 0x60);
    if (puVar19 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(&DAT_052461c0);
        puVar19 = &DAT_05240280;
        if (iVar10 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar19 = &DAT_05240280;
      }
    }
    uVar12 = FUN_017121f8(puVar19);
    if ((uVar12 & 1) == 0) {
      FUN_016f8230(param_1,0,0,0);
    }
LAB_0237764c:
    local_60 = (undefined *)CONCAT44(local_60._4_4_,0x14);
    if (*puVar11 != 0) {
      cVar15 = *puVar6;
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
          uVar9 = *puVar11;
        }
        else {
          uVar9 = *(uint *)(puVar7 + 0x2c);
          if (-1 < (int)uVar9) {
            if (((ulong)uVar9 + (long)puVar11 != 0) &&
               ((*(byte *)((ulong)uVar9 + (long)puVar11 + 2) >> 4 & 1) != 0)) goto LAB_02377780;
            break;
          }
          if (uVar9 != 0xffffffff) break;
          uVar9 = *puVar11;
        }
        if ((uVar9 == 0) || (puVar17 = (uint *)(ulong)uVar9, puVar11 == puVar17)) break;
        lVar14 = 0xc;
        if (*(char *)((long)puVar11 + (10 - (long)puVar17)) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar11 + (lVar14 - (long)puVar17);
        if (lVar14 == 0) break;
        uVar12 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar17));
        *(undefined4 *)(puVar7 + 0x2c) = 0xfffffffe;
        if (uVar12 == 0) break;
        piVar18 = (int *)(lVar14 + 4);
        while (piVar18[-1] != 0x42ad246a) {
          piVar18 = piVar18 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) goto LAB_0237774c;
        }
        iVar10 = 0;
        if (*piVar18 != -1) {
          iVar10 = *piVar18;
        }
        *(int *)(puVar7 + 0x2c) = iVar10;
        if (*puVar11 == 0) break;
      } while( true );
    }
LAB_0237774c:
    puVar19 = *(undefined8 **)(param_1 + 0x60);
    if (puVar19 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(&DAT_052461c0);
        puVar19 = &DAT_05240280;
        if (iVar10 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar19 = &DAT_05240280;
      }
    }
    uVar12 = FUN_017122fc(puVar19);
    if ((uVar12 & 1) == 0) {
      FUN_016f8b70(param_1);
    }
  }
LAB_02377780:
  puVar19 = *(undefined8 **)(param_1 + 0x60);
  if (puVar19 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_052461c0);
      puVar19 = &DAT_05240280;
      if (iVar10 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar19 = &DAT_05240280;
    }
  }
  uVar12 = FUN_017121f8(puVar19);
  if ((uVar12 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x1bec) = 0x3f800000;
  }
  uVar9 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar3 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
    uVar9 = 0;
    if (uVar3 < 0x149) {
      uVar9 = uVar3;
    }
  }
  local_60._0_4_ = uVar9;
  puVar11 = (uint *)FUN_0251d928(uVar9);
  puVar7 = PTR_DAT_04bc2fe8;
  puVar6 = PTR_DAT_04bc2fe0;
  if (*puVar11 == 0) {
LAB_023778e4:
    bVar8 = false;
LAB_023778e8:
    FUN_024b1e74(param_1,bVar8);
    local_60 = (undefined *)CONCAT44(local_60._4_4_,*(int *)(param_1 + 0x1810));
    if (*(int *)(param_1 + 0x1810) != 4) {
      FUN_025248bc(param_1 + 0x1ee8,0);
    }
    local_60 = puVar5 + 0x10;
    pcStack_58 = "PlayerLowerBodyWaitAnimType";
    uVar9 = *(int *)(param_1 + 0x1810) - 2;
    if (uVar9 < 7) {
      local_64 = *(undefined4 *)(&DAT_0417a870 + (long)(int)uVar9 * 4);
    }
    else {
      local_64 = 0;
    }
    puVar19 = *(undefined8 **)(param_1 + 0x60);
    if (puVar19 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(&DAT_052461c0);
        puVar19 = &DAT_05240280;
        if (iVar10 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar19 = &DAT_05240280;
      }
    }
    if (((puVar19[0x227] != 0) && (lVar14 = *(long *)(puVar19[0x227] + 0x78), lVar14 != 0)) &&
       (plVar13 = *(long **)(lVar14 + 0x48), plVar13 != (long *)0x0)) {
      (**(code **)(*plVar13 + 0x28))(plVar13,&local_60,local_64);
    }
    return;
  }
  cVar15 = *PTR_DAT_04bc2fe0;
  do {
    if (cVar15 == '\0') {
      cVar15 = '\x01';
      *(undefined8 *)puVar7 = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
      *puVar6 = 1;
      *(undefined8 *)(puVar7 + 0xa0) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x78) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x80) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x88) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x90) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x98) = 0xffffffffffffffff;
    }
    else {
      uVar9 = *(uint *)(puVar7 + 0x4c);
      if (-1 < (int)uVar9) {
        if ((char *)((ulong)uVar9 + (long)puVar11) != (char *)0x0) {
          bVar8 = *(char *)((ulong)uVar9 + (long)puVar11) != '\0';
          goto LAB_023778e8;
        }
        goto LAB_023778e4;
      }
      if (uVar9 != 0xffffffff) goto LAB_023778e4;
    }
    puVar17 = (uint *)(ulong)*puVar11;
    bVar8 = false;
    if ((*puVar11 == 0) || (puVar11 == puVar17)) goto LAB_023778e8;
    lVar14 = 0xc;
    if (*(char *)((long)puVar11 + (10 - (long)puVar17)) != '\0') {
      lVar14 = 0x1c;
    }
    lVar14 = (long)puVar11 + (lVar14 - (long)puVar17);
    if (lVar14 == 0) goto LAB_023778e4;
    uVar12 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar17));
    *(undefined4 *)(puVar7 + 0x4c) = 0xfffffffe;
    if (uVar12 == 0) goto LAB_023778e4;
    piVar18 = (int *)(lVar14 + 4);
    while (piVar18[-1] != 0x68daf155) {
      piVar18 = piVar18 + 2;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) goto LAB_023778e4;
    }
    iVar10 = 0;
    if (*piVar18 != -1) {
      iVar10 = *piVar18;
    }
    *(int *)(puVar7 + 0x4c) = iVar10;
    if (*puVar11 == 0) goto LAB_023778e4;
  } while( true );
}

