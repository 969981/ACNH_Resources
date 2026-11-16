
void FUN_0273f520(ushort *param_1,long *param_2,uint param_3)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  ushort *puVar11;
  uint uVar12;
  char cVar13;
  ushort uVar14;
  uint uVar15;
  uint *puVar16;
  ulong uVar17;
  int *piVar18;
  uint uVar19;
  undefined8 local_98;
  undefined2 local_90;
  int local_74;
  undefined8 local_70;
  char *pcStack_68;
  
  puVar1 = PTR_DAT_04bb2208;
  lVar10 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_98._0_4_ = FUN_006bd550(param_2[1],0);
  puVar8 = (uint *)FUN_008a1920(lVar10 + 0x880,&local_98);
  if (puVar8 == (uint *)0x0) {
    return;
  }
  lVar10 = *(long *)puVar1;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_98._0_4_ = FUN_006bd550(param_2[1],0);
  puVar9 = (uint *)FUN_008a1920(lVar10 + 0x880,&local_98);
  puVar6 = PTR_DAT_04bb5810;
  puVar5 = PTR_DAT_04bb5808;
  if (puVar9 == (uint *)0x0) {
    uVar19 = 0;
    if (*puVar8 == 0) goto LAB_0273f78c;
LAB_0273f6c4:
    cVar13 = *puVar5;
    do {
      if (cVar13 == '\0') {
        cVar13 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar15 = *(uint *)(puVar6 + 0x10);
        if (-1 < (int)uVar15) {
          if ((uint *)((ulong)uVar15 + (long)puVar8) == (uint *)0x0) goto LAB_0273f78c;
          uVar15 = *(uint *)((ulong)uVar15 + (long)puVar8);
          goto LAB_0273f790;
        }
        if (uVar15 != 0xffffffff) goto LAB_0273f78c;
      }
      puVar9 = (uint *)(ulong)*puVar8;
      uVar15 = 0;
      if ((*puVar8 == 0) || (puVar8 == puVar9)) goto LAB_0273f790;
      lVar10 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar9)) != '\0') {
        lVar10 = 0x1c;
      }
      lVar10 = (long)puVar8 + (lVar10 - (long)puVar9);
      if (lVar10 == 0) goto LAB_0273f78c;
      uVar17 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar9));
      *(undefined4 *)(puVar6 + 0x10) = 0xfffffffe;
      uVar15 = 0;
      if (uVar17 == 0) goto LAB_0273f790;
      piVar18 = (int *)(lVar10 + 4);
      while (piVar18[-1] != 0x344b17d7) {
        piVar18 = piVar18 + 2;
        uVar17 = uVar17 - 1;
        if (uVar17 == 0) {
          uVar15 = 0;
          goto LAB_0273f790;
        }
      }
      iVar7 = 0;
      if (*piVar18 != -1) {
        iVar7 = *piVar18;
      }
      *(int *)(puVar6 + 0x10) = iVar7;
    } while (*puVar8 != 0);
    uVar15 = 0;
  }
  else {
    puVar11 = param_1;
    if (*puVar9 != 0) {
      cVar13 = *PTR_DAT_04bb5808;
      do {
        if (cVar13 == '\0') {
          cVar13 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          uVar19 = *puVar9;
        }
        else {
          uVar19 = *(uint *)(puVar6 + 0x14);
          if (-1 < (int)uVar19) {
            if (((ushort *)((ulong)uVar19 + (long)puVar9) != (ushort *)0x0) &&
               (uVar4 = *(ushort *)((ulong)uVar19 + (long)puVar9), uVar4 < 0x400)) {
              puVar11 = param_1 + uVar4;
            }
            break;
          }
          if (uVar19 != 0xffffffff) break;
          uVar19 = *puVar9;
        }
        if ((uVar19 == 0) || (puVar16 = (uint *)(ulong)uVar19, puVar9 == puVar16)) break;
        lVar10 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar16)) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar9 + (lVar10 - (long)puVar16);
        if (lVar10 == 0) break;
        uVar17 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar16));
        *(undefined4 *)(puVar6 + 0x14) = 0xfffffffe;
        if (uVar17 == 0) break;
        piVar18 = (int *)(lVar10 + 4);
        while (piVar18[-1] != 0x54706054) {
          piVar18 = piVar18 + 2;
          uVar17 = uVar17 - 1;
          if (uVar17 == 0) goto LAB_0273f6a8;
        }
        iVar7 = 0;
        if (*piVar18 != -1) {
          iVar7 = *piVar18;
        }
        *(int *)(puVar6 + 0x14) = iVar7;
        if (*puVar9 == 0) break;
      } while( true );
    }
LAB_0273f6a8:
    uVar19 = (uint)*puVar11;
    if (*puVar8 != 0) goto LAB_0273f6c4;
LAB_0273f78c:
    uVar15 = 0;
  }
LAB_0273f790:
  uVar12 = param_3;
  if ((int)uVar15 <= (int)param_3) {
    uVar12 = uVar15;
  }
  uVar15 = 0;
  if (-1 < (int)param_3) {
    uVar15 = uVar12;
  }
  if (uVar19 == uVar15) {
    return;
  }
  puVar11 = param_1;
  if (*puVar8 != 0) {
    cVar13 = *puVar5;
    do {
      if (cVar13 == '\0') {
        cVar13 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        uVar12 = *puVar8;
      }
      else {
        uVar12 = *(uint *)(puVar6 + 0x14);
        if (-1 < (int)uVar12) {
          if ((ushort *)((ulong)uVar12 + (long)puVar8) != (ushort *)0x0) {
            uVar4 = *(ushort *)((ulong)uVar12 + (long)puVar8);
            uVar12 = uVar15;
            if (0xfffe < uVar15) {
              uVar12 = 0xffff;
            }
            uVar14 = (ushort)uVar12;
            if (uVar4 < 0x400) {
              puVar11 = param_1 + uVar4;
            }
            goto LAB_0273f8f0;
          }
          break;
        }
        if (uVar12 != 0xffffffff) break;
        uVar12 = *puVar8;
      }
      if ((uVar12 == 0) || (puVar9 = (uint *)(ulong)uVar12, puVar8 == puVar9)) break;
      lVar10 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar9)) != '\0') {
        lVar10 = 0x1c;
      }
      lVar10 = (long)puVar8 + (lVar10 - (long)puVar9);
      if (lVar10 == 0) break;
      uVar17 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar9));
      *(undefined4 *)(puVar6 + 0x14) = 0xfffffffe;
      if (uVar17 == 0) break;
      piVar18 = (int *)(lVar10 + 4);
      while (piVar18[-1] != 0x54706054) {
        piVar18 = piVar18 + 2;
        uVar17 = uVar17 - 1;
        if (uVar17 == 0) goto LAB_0273f8e0;
      }
      iVar7 = 0;
      if (*piVar18 != -1) {
        iVar7 = *piVar18;
      }
      *(int *)(puVar6 + 0x14) = iVar7;
      if (*puVar8 == 0) break;
    } while( true );
  }
LAB_0273f8e0:
  uVar12 = uVar15;
  if (0xfffe < uVar15) {
    uVar12 = 0xffff;
  }
  uVar14 = (ushort)uVar12;
LAB_0273f8f0:
  *puVar11 = uVar14;
  local_98._0_4_ = 0;
  uVar12 = *puVar8;
  if ((uVar12 != 0) && (puVar8 != (uint *)(ulong)uVar12)) {
    puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar12);
    local_98._0_4_ = 0;
    if (*puVar9 != 0) {
      uVar12 = puVar9[1];
      if ((uVar12 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
        lVar10 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
        if (lVar10 != 0) {
          uVar3 = 0;
          if ((ulong)uVar12 != 0) {
            uVar3 = (uint)((ulong)((long)puVar8 - lVar10) / (ulong)uVar12);
          }
          if (*puVar9 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < *(uint *)PTR_DAT_04bb6390) &&
             (local_98._0_4_ =
                   (uint)*(ushort *)(*(long *)(PTR_DAT_04bb6390 + 8) + (long)(int)uVar3 * 2),
             (uint)local_98 < 7)) goto LAB_0273f980;
        }
      }
      local_98._0_4_ = 0;
    }
  }
LAB_0273f980:
  if ((uint)local_98 != 2) {
    local_98._4_4_ = uVar15;
    (**(code **)(*param_2 + 0x18))(param_2);
    local_98._0_4_ = FUN_006bd550(param_2[1],0);
    local_90 = 4;
    local_70 = (undefined *)((ulong)local_70._7_1_ << 0x38);
    local_70 = (undefined *)CONCAT26(local_70._6_2_,0xff0000000000);
    if (-1 < *(int *)(PTR_DAT_04bb6328 + 8)) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(PTR_DAT_04bb6328 + 8),&local_70,
                   &local_98,0xc,0);
    }
  }
  lVar10 = *(long *)puVar1;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_98._0_4_ = FUN_006bd550(param_2[1],0);
  puVar9 = (uint *)FUN_008a1920(lVar10 + 0x880,&local_98);
  if (puVar9 == (uint *)0x0) {
    uVar12 = 0;
    uVar15 = *puVar8;
  }
  else {
    if (*puVar9 != 0) {
      cVar13 = *puVar5;
      do {
        if (cVar13 == '\0') {
          cVar13 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          uVar15 = *puVar9;
        }
        else {
          uVar15 = *(uint *)(puVar6 + 0x14);
          if (-1 < (int)uVar15) {
            if (((ushort *)((ulong)uVar15 + (long)puVar9) != (ushort *)0x0) &&
               (uVar4 = *(ushort *)((ulong)uVar15 + (long)puVar9), uVar4 < 0x400)) {
              param_1 = param_1 + uVar4;
            }
            break;
          }
          if (uVar15 != 0xffffffff) break;
          uVar15 = *puVar9;
        }
        if ((uVar15 == 0) || (puVar16 = (uint *)(ulong)uVar15, puVar9 == puVar16)) break;
        lVar10 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar16)) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar9 + (lVar10 - (long)puVar16);
        if (lVar10 == 0) break;
        uVar17 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar16));
        *(undefined4 *)(puVar6 + 0x14) = 0xfffffffe;
        if (uVar17 == 0) break;
        piVar18 = (int *)(lVar10 + 4);
        while (piVar18[-1] != 0x54706054) {
          piVar18 = piVar18 + 2;
          uVar17 = uVar17 - 1;
          if (uVar17 == 0) goto LAB_0273fb24;
        }
        iVar7 = 0;
        if (*piVar18 != -1) {
          iVar7 = *piVar18;
        }
        *(int *)(puVar6 + 0x14) = iVar7;
        if (*puVar9 == 0) break;
      } while( true );
    }
LAB_0273fb24:
    uVar12 = (uint)*param_1;
    uVar15 = *puVar8;
  }
  if (uVar15 == 0) {
    return;
  }
  cVar13 = *puVar5;
  do {
    if (cVar13 == '\0') {
      cVar13 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
    }
    else {
      uVar15 = *(uint *)(puVar6 + 0x20);
      if (-1 < (int)uVar15) {
        if ((char *)((long)puVar8 + (ulong)uVar15) == (char *)0x0) {
          return;
        }
        if (*(char *)((long)puVar8 + (ulong)uVar15) == '\0') {
          return;
        }
        local_98 = (undefined *)CONCAT44(local_98._4_4_,3);
        if ((*(ulong *)(*(long *)PTR_DAT_04bb2268 + 0xb8) >> 3 & 1) != 0) {
          return;
        }
        local_70 = PTR_DAT_04bb2020 + 0x10;
        pcStack_68 = "save_event_flag_land";
        FUN_0260140c(&local_98,&local_70);
        pcStack_68 = (char *)CONCAT44(pcStack_68._4_4_,uVar12);
        puVar1 = PTR_DAT_04bc33d0 + 0x10;
        if (*puVar8 == 0) goto LAB_0273fd24;
        cVar13 = *puVar5;
        break;
      }
      if (uVar15 != 0xffffffff) {
        return;
      }
    }
    lVar10 = (long)puVar8 - (ulong)*puVar8;
    if (*puVar8 == 0) {
      return;
    }
    if (lVar10 == 0) {
      return;
    }
    lVar2 = 0xc;
    if (*(char *)(lVar10 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar10 == 0) {
      return;
    }
    uVar17 = (ulong)*(ushort *)(lVar10 + 8);
    *(undefined4 *)(puVar6 + 0x20) = 0xfffffffe;
    if (uVar17 == 0) {
      return;
    }
    piVar18 = (int *)(lVar2 + lVar10 + 4);
    while (piVar18[-1] != -0x1d40080b) {
      piVar18 = piVar18 + 2;
      uVar17 = uVar17 - 1;
      if (uVar17 == 0) {
        return;
      }
    }
    iVar7 = 0;
    if (*piVar18 != -1) {
      iVar7 = *piVar18;
    }
    *(int *)(puVar6 + 0x20) = iVar7;
    if (*puVar8 == 0) {
      return;
    }
  } while( true );
  while( true ) {
    puVar9 = (uint *)(ulong)*puVar8;
    local_70._0_4_ = 0;
    if ((*puVar8 == 0) || (puVar8 == puVar9)) goto LAB_0273fd28;
    lVar10 = 0xc;
    if (*(char *)((long)puVar8 + (10 - (long)puVar9)) != '\0') {
      lVar10 = 0x1c;
    }
    lVar10 = (long)puVar8 + (lVar10 - (long)puVar9);
    if (lVar10 == 0) goto LAB_0273fd24;
    uVar17 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar9));
    *(undefined4 *)(puVar6 + 0x14) = 0xfffffffe;
    local_70._0_4_ = 0;
    if (uVar17 == 0) goto LAB_0273fd28;
    piVar18 = (int *)(lVar10 + 4);
    while (piVar18[-1] != 0x54706054) {
      piVar18 = piVar18 + 2;
      uVar17 = uVar17 - 1;
      if (uVar17 == 0) {
        local_70._0_4_ = 0;
        goto LAB_0273fd28;
      }
    }
    iVar7 = 0;
    if (*piVar18 != -1) {
      iVar7 = *piVar18;
    }
    *(int *)(puVar6 + 0x14) = iVar7;
    if (*puVar8 == 0) break;
    if (cVar13 == '\0') {
      cVar13 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
    }
    else {
      uVar15 = *(uint *)(puVar6 + 0x14);
      if (-1 < (int)uVar15) {
        if ((ushort *)((long)puVar8 + (ulong)uVar15) == (ushort *)0x0) {
LAB_0273fd24:
          local_70._0_4_ = 0;
        }
        else {
          local_70._0_4_ = (uint)*(ushort *)((long)puVar8 + (ulong)uVar15);
        }
        goto LAB_0273fd28;
      }
      if (uVar15 != 0xffffffff) goto LAB_0273fd24;
    }
  }
  local_70._0_4_ = 0;
LAB_0273fd28:
  local_98 = puVar1;
  local_70._4_4_ = uVar19;
  FUN_025cd370(&local_98,&local_70);
  local_98 = puVar1;
  iVar7 = FUN_025cd560(&local_98);
  if (((iVar7 == -1) ||
      (local_70._0_4_ = (**(code **)(local_98 + 0x20))(&local_98), 0xc < (int)(uint)local_70)) &&
     (local_74 == 0)) {
    local_74 = 1;
  }
  FUN_02601530(&local_98);
  return;
}

