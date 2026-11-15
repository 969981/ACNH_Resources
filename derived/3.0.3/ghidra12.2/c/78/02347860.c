
/* WARNING: Removing unreachable block (ram,0x02347ef8) */

void FUN_02347860(long param_1)

{
  uint *puVar1;
  byte bVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  byte *pbVar12;
  int *piVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  char cVar17;
  undefined8 *puVar18;
  long lVar19;
  char *pcVar20;
  byte *pbVar21;
  byte local_70 [4];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  char local_60;
  char local_5f;
  char local_5e;
  int local_58;
  uint local_54;
  
  uVar6 = FUN_023492a0();
  pbVar21 = PTR_DAT_04bb32e0;
  *(uint *)(param_1 + 0x11a0) = *(uint *)(param_1 + 0x11a0) & 0xfffffffe | uVar6 & 1;
  puVar4 = PTR_DAT_04bb4718;
  iVar7 = *(int *)(param_1 + 0x5f40);
  if (iVar7 - 2U < 2) {
LAB_023478cc:
    pbVar12 = (byte *)(param_1 + 0x5f44);
LAB_023478d0:
    bVar11 = *pbVar12;
  }
  else {
    if (iVar7 != 5) {
      pbVar12 = pbVar21;
      if (iVar7 == 1) goto LAB_023478cc;
      goto LAB_023478d0;
    }
    bVar11 = *(byte *)(param_1 + 0x6050);
    if (7 < bVar11) {
      pbVar12 = PTR_DAT_04bb32e0;
      goto LAB_023478d0;
    }
  }
  puVar1 = (uint *)(param_1 + 0xc1f4);
  local_70[0] = 0xff;
  if (bVar11 < 8) {
    local_70[0] = bVar11;
  }
  lVar15 = *(long *)PTR_DAT_04bb39b0;
  if (lVar15 == 0) {
LAB_02347934:
    if (*pbVar21 < 8) goto LAB_023479a0;
LAB_02347940:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02347998:
      pbVar21 = PTR_DAT_04bb5038;
      goto LAB_023479a0;
    }
    lVar15 = **(long **)PTR_DAT_04bb27d0;
    bVar2 = *(byte *)(lVar15 + 0x473);
    pbVar21 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar9 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar9 = (uint *)(lVar15 + 0x48);
      }
      if ((*puVar9 & 8) != 0) {
        pbVar21 = (byte *)(lVar15 + 0x471);
      }
    }
    uVar14 = (uint)*pbVar21;
    if (7 < *pbVar21) goto LAB_02347998;
  }
  else {
    if (*(int *)(lVar15 + 0x15c) != 0) {
      pbVar21 = (byte *)(lVar15 + 0x158);
    }
    if (7 < *pbVar21) {
      if ((*(int *)(lVar15 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar21 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02347934;
      }
      goto LAB_02347940;
    }
LAB_023479a0:
    uVar14 = (uint)*pbVar21;
    if (7 < uVar14) {
      uVar14 = 0xff;
    }
  }
  local_68 = 1;
  if (((*(uint *)(param_1 + 0x15f4) >> 1 & 1) == 0) || (7 < bVar11)) {
LAB_02347c64:
    lVar15 = *(long *)(param_1 + 0x1480);
    local_6c = 10;
    iVar7 = *(int *)(*(long *)(param_1 + 0x48) + 0x230);
    if ((uVar6 & 1) == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *puVar1 >> 10 & 1;
    }
    lVar19 = lVar15 + 0x14 + ((ulong)*(uint *)(lVar15 + 0x10) & 1) * 0x20;
    if (((*(char *)(lVar19 + 0x1d) == '\0') || (*(byte *)(lVar19 + 0x1c) != uVar14)) &&
       (local_54 = *(uint *)(lVar19 + 0x14), local_54 != 0)) {
      local_58 = *(int *)(lVar15 + 0xc);
      if (iVar7 != 0) {
        local_58 = iVar7;
      }
      FUN_0071c8d0(&local_68,&local_54,&local_58,0);
      if (((CONCAT44(uStack_64,local_68) != 0) && (local_60 != '\0')) && (local_5f != '\0')) {
        lVar15 = *(long *)(CONCAT44(uStack_64,local_68) + 0x60);
        *(byte *)(lVar19 + 0x1c) = (byte)uVar14;
        *(char *)(lVar19 + 0x1d) = '\x01';
        if (lVar15 != 0) {
          *(uint *)(lVar15 + 0x11a0) = *(uint *)(lVar15 + 0x11a0) & 0xfffffffe | uVar14;
        }
      }
      iVar7 = *(int *)(*(long *)(param_1 + 0x48) + 0x230);
    }
    lVar15 = *(long *)(param_1 + 0x1488);
    local_6c = 0xb;
    if ((uVar6 & 1) == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *puVar1 >> 0xb & 1;
    }
    lVar19 = lVar15 + 0x14 + ((ulong)*(uint *)(lVar15 + 0x10) & 1) * 0x20;
    if (((*(char *)(lVar19 + 0x1d) == '\0') || (*(byte *)(lVar19 + 0x1c) != uVar14)) &&
       (local_54 = *(uint *)(lVar19 + 0x14), local_54 != 0)) {
      local_58 = *(int *)(lVar15 + 0xc);
      if (iVar7 != 0) {
        local_58 = iVar7;
      }
      FUN_0071c8d0(&local_68,&local_54,&local_58,0);
      if (((CONCAT44(uStack_64,local_68) != 0) && (local_60 != '\0')) && (local_5f != '\0')) {
        lVar15 = *(long *)(CONCAT44(uStack_64,local_68) + 0x60);
        *(byte *)(lVar19 + 0x1c) = (byte)uVar14;
        *(char *)(lVar19 + 0x1d) = '\x01';
        if (lVar15 != 0) {
          *(uint *)(lVar15 + 0x11a0) = *(uint *)(lVar15 + 0x11a0) & 0xfffffffe | uVar14;
        }
      }
      iVar7 = *(int *)(*(long *)(param_1 + 0x48) + 0x230);
    }
    lVar15 = *(long *)(param_1 + 0x1490);
    local_6c = 0xb;
    if ((uVar6 & 1) == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *puVar1 >> 0xb & 1;
    }
    lVar19 = lVar15 + 0x14 + ((ulong)*(uint *)(lVar15 + 0x10) & 1) * 0x20;
    if (((*(char *)(lVar19 + 0x1d) != '\0') && (*(byte *)(lVar19 + 0x1c) == uVar14)) ||
       (local_54 = *(uint *)(lVar19 + 0x14), local_54 == 0)) goto LAB_02347ec4;
    local_58 = *(int *)(lVar15 + 0xc);
    if (iVar7 != 0) {
      local_58 = iVar7;
    }
    FUN_0071c8d0(&local_68,&local_54,&local_58,0);
    if (((CONCAT44(uStack_64,local_68) == 0) || (local_60 == '\0')) || (local_5f == '\0'))
    goto LAB_02347ec4;
    lVar15 = *(long *)(CONCAT44(uStack_64,local_68) + 0x60);
    *(byte *)(lVar19 + 0x1c) = (byte)uVar14;
    *(char *)(lVar19 + 0x1d) = '\x01';
    if (lVar15 == 0) goto LAB_02347ec4;
    uVar14 = *(uint *)(lVar15 + 0x11a0) & 0xfffffffe | uVar14;
  }
  else {
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_054f0960);
        puVar18 = &DAT_054f0958;
        if (iVar7 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar18 = &DAT_054f0958;
      }
    }
    else {
      puVar18 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
      if (uVar14 < 8) {
        puVar18 = puVar18 + uVar14;
      }
    }
    local_68 = 0x30;
    if ((*(uint *)((long)puVar18 + 4) >> 0x10 & 1) == 0) goto LAB_02347c64;
    if (((ulong)local_70[0] < 8) && (lVar15 = *(long *)puVar4, lVar15 != 0)) {
      piVar13 = (int *)(lVar15 + (ulong)local_70[0] * 4 + 0xde8);
    }
    else {
      piVar13 = (int *)PTR_DAT_04bb3238;
    }
    local_58 = *piVar13;
    FUN_0071cb58(&local_68,&local_58,PTR_DAT_04bb3238,0);
    plVar3 = (long *)CONCAT44(uStack_64,local_68);
    if (plVar3 != (long *)0x0) {
      if (((*PTR_DAT_04bb3778 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar7 != 0)) {
        *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3778);
      }
      uVar8 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bb3770);
      if ((uVar8 & 1) == 0) {
        local_5e = '\0';
      }
    }
    if (((CONCAT44(uStack_64,local_68) != 0) && (local_60 != '\0')) && (local_5e != '\0')) {
      lVar15 = *(long *)(CONCAT44(uStack_64,local_68) + 0x70);
      uVar14 = 0;
      if (lVar15 != 0) {
        uVar16 = *(uint *)(lVar15 + 0x280);
        uVar14 = 0;
        if (uVar16 < 0x149) {
          uVar14 = uVar16;
        }
      }
      local_54 = uVar14;
      if (((DAT_054f0b68 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(&DAT_054f0b68,uVar14), iVar7 != 0)) {
        DAT_054f0b60 = 0;
        __cxa_guard_release(&DAT_054f0b68,uVar14);
      }
      lVar15 = *(long *)puVar4;
      if (lVar15 == 0) {
        puVar9 = &DAT_054f0b60;
      }
      else {
        lVar15 = lVar15 + 0x20;
        puVar9 = (uint *)FUN_0250f090(lVar15,uVar14);
        if (puVar9 == (uint *)0x0) {
          puVar10 = (uint *)FUN_0250f090(lVar15,0);
          puVar9 = &DAT_054f0b60;
          if (puVar10 != (uint *)0x0) {
            puVar9 = puVar10;
          }
        }
      }
      puVar5 = PTR_DAT_04bc2fe8;
      puVar4 = PTR_DAT_04bc2fe0;
      if (*puVar9 != 0) {
        cVar17 = *PTR_DAT_04bc2fe0;
        do {
          if (cVar17 == '\0') {
            cVar17 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined8 *)(puVar5 + 0xa0) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
          }
          else {
            uVar14 = *(uint *)(puVar5 + 0x54);
            if (-1 < (int)uVar14) {
              if (((char *)((ulong)uVar14 + (long)puVar9) != (char *)0x0) &&
                 (*(char *)((ulong)uVar14 + (long)puVar9) != '\0')) goto LAB_02347c64;
              break;
            }
            if (uVar14 != 0xffffffff) break;
          }
          lVar15 = (long)puVar9 - (ulong)*puVar9;
          if ((*puVar9 == 0) || (lVar15 == 0)) break;
          lVar19 = 0xc;
          if (*(char *)(lVar15 + 10) != '\0') {
            lVar19 = 0x1c;
          }
          if (lVar19 + lVar15 == 0) break;
          uVar8 = (ulong)*(ushort *)(lVar15 + 8);
          *(undefined4 *)(puVar5 + 0x54) = 0xfffffffe;
          if (uVar8 == 0) break;
          piVar13 = (int *)(lVar19 + lVar15 + 4);
          while (piVar13[-1] != 0xe0325ba) {
            piVar13 = piVar13 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_02347c58;
          }
          iVar7 = 0;
          if (*piVar13 != -1) {
            iVar7 = *piVar13;
          }
          *(int *)(puVar5 + 0x54) = iVar7;
          if (*puVar9 == 0) break;
        } while( true );
      }
    }
LAB_02347c58:
    uVar8 = FUN_0251c480(local_70);
    if ((uVar8 & 1) != 0) goto LAB_02347c64;
    lVar19 = *(long *)(param_1 + 0x1480);
    iVar7 = *(int *)(*(long *)(param_1 + 0x48) + 0x230);
    lVar15 = lVar19 + 0x14 + ((ulong)*(uint *)(lVar19 + 0x10) & 1) * 0x20;
    if (((*(char *)(lVar15 + 0x1d) == '\0') || (*(char *)(lVar15 + 0x1c) != '\0')) &&
       (local_54 = *(uint *)(lVar15 + 0x14), local_54 != 0)) {
      local_58 = *(int *)(lVar19 + 0xc);
      if (iVar7 != 0) {
        local_58 = iVar7;
      }
      FUN_0071c8d0(&local_68,&local_54,&local_58,0);
      if (((CONCAT44(uStack_64,local_68) != 0) && (local_60 != '\0')) && (local_5f != '\0')) {
        lVar19 = *(long *)(CONCAT44(uStack_64,local_68) + 0x60);
        *(char *)(lVar15 + 0x1c) = '\0';
        *(char *)(lVar15 + 0x1d) = '\x01';
        if (lVar19 != 0) {
          *(uint *)(lVar19 + 0x11a0) = *(uint *)(lVar19 + 0x11a0) & 0xfffffffe;
        }
      }
      iVar7 = *(int *)(*(long *)(param_1 + 0x48) + 0x230);
    }
    lVar19 = *(long *)(param_1 + 0x1488);
    lVar15 = lVar19 + 0x14 + ((ulong)*(uint *)(lVar19 + 0x10) & 1) * 0x20;
    if (((*(char *)(lVar15 + 0x1d) == '\0') || (*(char *)(lVar15 + 0x1c) != '\0')) &&
       (local_54 = *(uint *)(lVar15 + 0x14), local_54 != 0)) {
      local_58 = *(int *)(lVar19 + 0xc);
      if (iVar7 != 0) {
        local_58 = iVar7;
      }
      FUN_0071c8d0(&local_68,&local_54,&local_58,0);
      if (((CONCAT44(uStack_64,local_68) != 0) && (local_60 != '\0')) && (local_5f != '\0')) {
        lVar19 = *(long *)(CONCAT44(uStack_64,local_68) + 0x60);
        *(char *)(lVar15 + 0x1c) = '\0';
        *(char *)(lVar15 + 0x1d) = '\x01';
        if (lVar19 != 0) {
          *(uint *)(lVar19 + 0x11a0) = *(uint *)(lVar19 + 0x11a0) & 0xfffffffe;
        }
      }
      iVar7 = *(int *)(*(long *)(param_1 + 0x48) + 0x230);
    }
    lVar15 = *(long *)(param_1 + 0x1490);
    lVar19 = lVar15 + 0x14 + ((ulong)*(uint *)(lVar15 + 0x10) & 1) * 0x20;
    if (((*(char *)(lVar19 + 0x1d) != '\0') && (*(char *)(lVar19 + 0x1c) == '\0')) ||
       (local_54 = *(uint *)(lVar19 + 0x14), local_54 == 0)) goto LAB_02347ec4;
    local_58 = *(int *)(lVar15 + 0xc);
    if (iVar7 != 0) {
      local_58 = iVar7;
    }
    FUN_0071c8d0(&local_68,&local_54,&local_58,0);
    if (((CONCAT44(uStack_64,local_68) == 0) || (local_60 == '\0')) || (local_5f == '\0'))
    goto LAB_02347ec4;
    lVar15 = *(long *)(CONCAT44(uStack_64,local_68) + 0x60);
    *(char *)(lVar19 + 0x1c) = '\0';
    *(char *)(lVar19 + 0x1d) = '\x01';
    if (lVar15 == 0) goto LAB_02347ec4;
    uVar14 = *(uint *)(lVar15 + 0x11a0) & 0xfffffffe;
  }
  *(uint *)(lVar15 + 0x11a0) = uVar14;
LAB_02347ec4:
  uVar14 = 0;
  local_6c = 0;
  lVar15 = *(long *)(param_1 + 0xbe10);
  iVar7 = *(int *)(*(long *)(param_1 + 0x48) + 0x230);
  if ((uVar6 & 1) != 0) {
    uVar14 = *puVar1 & 1;
  }
  uVar16 = *(uint *)(lVar15 + 0x10) & 1;
  lVar19 = lVar15 + 0x14 + (ulong)uVar16 * 0x14;
  pcVar20 = (char *)(lVar19 + 0x11);
  pbVar21 = (byte *)(lVar19 + 0x10);
  if (((*pcVar20 == '\0') || (*pbVar21 != uVar14)) &&
     (local_54 = *(uint *)(lVar15 + 0x14 + (ulong)uVar16 * 0x14 + 8), local_54 != 0)) {
    local_58 = *(int *)(lVar15 + 0xc);
    if (iVar7 != 0) {
      local_58 = iVar7;
    }
    FUN_0071c8d0(&local_68,&local_54,&local_58,0);
    if (((CONCAT44(uStack_64,local_68) != 0) && (local_60 != '\0')) && (local_5f != '\0')) {
      lVar15 = *(long *)(CONCAT44(uStack_64,local_68) + 0x60);
      *pbVar21 = (byte)uVar14;
      *pcVar20 = '\x01';
      if (lVar15 != 0) {
        *(uint *)(lVar15 + 0x11a0) = *(uint *)(lVar15 + 0x11a0) & 0xfffffffe | uVar14;
      }
    }
    iVar7 = *(int *)(*(long *)(param_1 + 0x48) + 0x230);
  }
  lVar15 = *(long *)(param_1 + 0xbdd0);
  local_6c = 2;
  if ((uVar6 & 1) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *puVar1 >> 2 & 1;
  }
  lVar19 = lVar15 + 0x14 + ((ulong)*(uint *)(lVar15 + 0x10) & 1) * 0x20;
  if (((*(char *)(lVar19 + 0x1d) == '\0') || (*(byte *)(lVar19 + 0x1c) != uVar14)) &&
     (local_54 = *(uint *)(lVar19 + 0x14), local_54 != 0)) {
    local_58 = *(int *)(lVar15 + 0xc);
    if (iVar7 != 0) {
      local_58 = iVar7;
    }
    FUN_0071c8d0(&local_68,&local_54,&local_58,0);
    if (((CONCAT44(uStack_64,local_68) != 0) && (local_60 != '\0')) && (local_5f != '\0')) {
      lVar15 = *(long *)(CONCAT44(uStack_64,local_68) + 0x60);
      *(byte *)(lVar19 + 0x1c) = (byte)uVar14;
      *(char *)(lVar19 + 0x1d) = '\x01';
      if (lVar15 != 0) {
        *(uint *)(lVar15 + 0x11a0) = *(uint *)(lVar15 + 0x11a0) & 0xfffffffe | uVar14;
      }
    }
    iVar7 = *(int *)(*(long *)(param_1 + 0x48) + 0x230);
  }
  lVar15 = *(long *)(param_1 + 0xbdd8);
  local_6c = 3;
  if ((uVar6 & 1) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *puVar1 >> 3 & 1;
  }
  lVar19 = lVar15 + 0x14 + ((ulong)*(uint *)(lVar15 + 0x10) & 1) * 0x20;
  if (((*(char *)(lVar19 + 0x1d) == '\0') || (*(byte *)(lVar19 + 0x1c) != uVar14)) &&
     (local_54 = *(uint *)(lVar19 + 0x14), local_54 != 0)) {
    local_58 = *(int *)(lVar15 + 0xc);
    if (iVar7 != 0) {
      local_58 = iVar7;
    }
    FUN_0071c8d0(&local_68,&local_54,&local_58,0);
    if (((CONCAT44(uStack_64,local_68) != 0) && (local_60 != '\0')) && (local_5f != '\0')) {
      lVar15 = *(long *)(CONCAT44(uStack_64,local_68) + 0x60);
      *(byte *)(lVar19 + 0x1c) = (byte)uVar14;
      *(char *)(lVar19 + 0x1d) = '\x01';
      if (lVar15 != 0) {
        *(uint *)(lVar15 + 0x11a0) = *(uint *)(lVar15 + 0x11a0) & 0xfffffffe | uVar14;
      }
    }
    iVar7 = *(int *)(*(long *)(param_1 + 0x48) + 0x230);
  }
  lVar15 = *(long *)(param_1 + 0xbde0);
  local_6c = 4;
  if ((uVar6 & 1) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *puVar1 >> 4 & 1;
  }
  lVar19 = lVar15 + 0x14 + ((ulong)*(uint *)(lVar15 + 0x10) & 1) * 0x20;
  if (((*(char *)(lVar19 + 0x1d) == '\0') || (*(byte *)(lVar19 + 0x1c) != uVar14)) &&
     (local_54 = *(uint *)(lVar19 + 0x14), local_54 != 0)) {
    local_58 = *(int *)(lVar15 + 0xc);
    if (iVar7 != 0) {
      local_58 = iVar7;
    }
    FUN_0071c8d0(&local_68,&local_54,&local_58,0);
    if (((CONCAT44(uStack_64,local_68) != 0) && (local_60 != '\0')) && (local_5f != '\0')) {
      lVar15 = *(long *)(CONCAT44(uStack_64,local_68) + 0x60);
      *(byte *)(lVar19 + 0x1c) = (byte)uVar14;
      *(char *)(lVar19 + 0x1d) = '\x01';
      if (lVar15 != 0) {
        *(uint *)(lVar15 + 0x11a0) = *(uint *)(lVar15 + 0x11a0) & 0xfffffffe | uVar14;
      }
    }
    iVar7 = *(int *)(*(long *)(param_1 + 0x48) + 0x230);
  }
  lVar15 = *(long *)(param_1 + 0xbde8);
  local_6c = 5;
  if ((uVar6 & 1) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *puVar1 >> 5 & 1;
  }
  lVar19 = lVar15 + 0x14 + ((ulong)*(uint *)(lVar15 + 0x10) & 1) * 0x20;
  if (((*(char *)(lVar19 + 0x1d) == '\0') || (*(byte *)(lVar19 + 0x1c) != uVar14)) &&
     (local_54 = *(uint *)(lVar19 + 0x14), local_54 != 0)) {
    local_58 = *(int *)(lVar15 + 0xc);
    if (iVar7 != 0) {
      local_58 = iVar7;
    }
    FUN_0071c8d0(&local_68,&local_54,&local_58,0);
    if (((CONCAT44(uStack_64,local_68) != 0) && (local_60 != '\0')) && (local_5f != '\0')) {
      lVar15 = *(long *)(CONCAT44(uStack_64,local_68) + 0x60);
      *(byte *)(lVar19 + 0x1c) = (byte)uVar14;
      *(char *)(lVar19 + 0x1d) = '\x01';
      if (lVar15 != 0) {
        *(uint *)(lVar15 + 0x11a0) = *(uint *)(lVar15 + 0x11a0) & 0xfffffffe | uVar14;
      }
    }
    iVar7 = *(int *)(*(long *)(param_1 + 0x48) + 0x230);
  }
  lVar15 = *(long *)(param_1 + 0xbdf0);
  local_6c = 6;
  if ((uVar6 & 1) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *puVar1 >> 6 & 1;
  }
  lVar19 = lVar15 + 0x14 + ((ulong)*(uint *)(lVar15 + 0x10) & 1) * 0x20;
  if (((*(char *)(lVar19 + 0x1d) == '\0') || (*(byte *)(lVar19 + 0x1c) != uVar14)) &&
     (local_54 = *(uint *)(lVar19 + 0x14), local_54 != 0)) {
    local_58 = *(int *)(lVar15 + 0xc);
    if (iVar7 != 0) {
      local_58 = iVar7;
    }
    FUN_0071c8d0(&local_68,&local_54,&local_58,0);
    if (((CONCAT44(uStack_64,local_68) != 0) && (local_60 != '\0')) && (local_5f != '\0')) {
      lVar15 = *(long *)(CONCAT44(uStack_64,local_68) + 0x60);
      *(byte *)(lVar19 + 0x1c) = (byte)uVar14;
      *(char *)(lVar19 + 0x1d) = '\x01';
      if (lVar15 != 0) {
        *(uint *)(lVar15 + 0x11a0) = *(uint *)(lVar15 + 0x11a0) & 0xfffffffe | uVar14;
      }
    }
    iVar7 = *(int *)(*(long *)(param_1 + 0x48) + 0x230);
  }
  lVar15 = *(long *)(param_1 + 0xbdf8);
  local_6c = 7;
  if ((uVar6 & 1) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *puVar1 >> 7 & 1;
  }
  lVar19 = lVar15 + 0x14 + ((ulong)*(uint *)(lVar15 + 0x10) & 1) * 0x20;
  if (((*(char *)(lVar19 + 0x1d) == '\0') || (*(byte *)(lVar19 + 0x1c) != uVar14)) &&
     (local_54 = *(uint *)(lVar19 + 0x14), local_54 != 0)) {
    local_58 = *(int *)(lVar15 + 0xc);
    if (iVar7 != 0) {
      local_58 = iVar7;
    }
    FUN_0071c8d0(&local_68,&local_54,&local_58,0);
    if (((CONCAT44(uStack_64,local_68) != 0) && (local_60 != '\0')) && (local_5f != '\0')) {
      lVar15 = *(long *)(CONCAT44(uStack_64,local_68) + 0x60);
      *(byte *)(lVar19 + 0x1c) = (byte)uVar14;
      *(char *)(lVar19 + 0x1d) = '\x01';
      if (lVar15 != 0) {
        *(uint *)(lVar15 + 0x11a0) = *(uint *)(lVar15 + 0x11a0) & 0xfffffffe | uVar14;
      }
    }
    iVar7 = *(int *)(*(long *)(param_1 + 0x48) + 0x230);
  }
  lVar15 = *(long *)(param_1 + 0xbe00);
  local_6c = 8;
  if ((uVar6 & 1) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *puVar1 >> 8 & 1;
  }
  lVar19 = lVar15 + 0x14 + ((ulong)*(uint *)(lVar15 + 0x10) & 1) * 0x20;
  if (((*(char *)(lVar19 + 0x1d) == '\0') || (*(byte *)(lVar19 + 0x1c) != uVar14)) &&
     (local_54 = *(uint *)(lVar19 + 0x14), local_54 != 0)) {
    local_58 = *(int *)(lVar15 + 0xc);
    if (iVar7 != 0) {
      local_58 = iVar7;
    }
    FUN_0071c8d0(&local_68,&local_54,&local_58,0);
    if (((CONCAT44(uStack_64,local_68) != 0) && (local_60 != '\0')) && (local_5f != '\0')) {
      lVar15 = *(long *)(CONCAT44(uStack_64,local_68) + 0x60);
      *(byte *)(lVar19 + 0x1c) = (byte)uVar14;
      *(char *)(lVar19 + 0x1d) = '\x01';
      if (lVar15 != 0) {
        *(uint *)(lVar15 + 0x11a0) = *(uint *)(lVar15 + 0x11a0) & 0xfffffffe | uVar14;
      }
    }
    iVar7 = *(int *)(*(long *)(param_1 + 0x48) + 0x230);
  }
  lVar15 = *(long *)(param_1 + 0xbe08);
  local_6c = 9;
  if ((uVar6 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *puVar1 >> 9 & 1;
  }
  lVar19 = lVar15 + 0x14 + ((ulong)*(uint *)(lVar15 + 0x10) & 1) * 0x20;
  if (((*(char *)(lVar19 + 0x1d) == '\0') || (*(byte *)(lVar19 + 0x1c) != uVar6)) &&
     (local_54 = *(uint *)(lVar19 + 0x14), local_54 != 0)) {
    local_58 = *(int *)(lVar15 + 0xc);
    if (iVar7 != 0) {
      local_58 = iVar7;
    }
    FUN_0071c8d0(&local_68,&local_54,&local_58,0);
    if (((CONCAT44(uStack_64,local_68) != 0) && (local_60 != '\0')) && (local_5f != '\0')) {
      lVar15 = *(long *)(CONCAT44(uStack_64,local_68) + 0x60);
      *(byte *)(lVar19 + 0x1c) = (byte)uVar6;
      *(char *)(lVar19 + 0x1d) = '\x01';
      if (lVar15 != 0) {
        *(uint *)(lVar15 + 0x11a0) = *(uint *)(lVar15 + 0x11a0) & 0xfffffffe | uVar6;
      }
    }
  }
  return;
}

