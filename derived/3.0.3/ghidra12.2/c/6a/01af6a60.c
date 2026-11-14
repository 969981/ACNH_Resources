
bool FUN_01af6a60(long param_1,long param_2,int param_3)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  uint *puVar15;
  ulong uVar16;
  int *piVar17;
  char cVar18;
  char cVar19;
  char *pcVar20;
  uint *puVar21;
  undefined *local_b0;
  char *pcStack_a8;
  undefined *local_a0;
  char *local_98;
  int local_90;
  char local_8c [31];
  undefined1 local_6d;
  int local_64;
  
  puVar3 = PTR_PTR_04bb2238;
  local_6d = 0;
  local_90 = 0x20;
  local_a0 = PTR_DAT_04bb2a08 + 0x10;
  local_98 = local_8c;
  local_64 = param_3;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  pcVar20 = *(char **)(puVar3 + 8);
  if (local_8c != pcVar20) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    lVar12 = 0;
    do {
      if (*(char *)(*(long *)(puVar3 + 8) + lVar12) == '\0') goto LAB_01af6b30;
      lVar14 = *(long *)(puVar3 + 8) + lVar12;
      if (*(char *)(lVar14 + 1) == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_01af6b30;
      }
      if (*(char *)(lVar14 + 2) == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_01af6b30;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_01af6b30:
    iVar10 = (int)lVar12;
    if (local_90 <= (int)lVar12) {
      iVar10 = local_90 + -1;
    }
    memcpy(local_8c,pcVar20,(long)iVar10);
    local_8c[iVar10] = '\0';
  }
  puVar5 = PTR_DAT_04bbfe90;
  puVar4 = PTR_DAT_04bbfe88;
  puVar21 = *(uint **)(param_1 + 0x10);
  local_a0 = PTR_DAT_04bb2028 + 0x10;
  if ((puVar21 != (uint *)0x0) && (*puVar21 != 0)) {
    cVar18 = *PTR_DAT_04bbfe88;
    do {
      if (cVar18 != '\0') {
        uVar1 = *(uint *)(puVar5 + 0x10c);
        uVar13 = (ulong)uVar1;
        if ((int)uVar1 < 0) {
          if (uVar1 == 0xffffffff) {
            uVar1 = *puVar21;
            if (uVar1 != 0) goto LAB_01af6bf4;
LAB_01af6d0c:
            uVar13 = 0xffffffff;
          }
        }
        else if ((((ushort *)(uVar13 + (long)puVar21) != (ushort *)0x0) &&
                 (uVar2 = *(ushort *)(uVar13 + (long)puVar21), uVar2 < 0x800)) &&
                ((*(byte *)(*(long *)PTR_DAT_04bb46f0 + (ulong)(uVar2 >> 3) + 0xe98e0) >>
                  (ulong)(uVar2 & 7) & 1) != 0)) {
          if (local_98 == "DIYRecipeIcon") goto LAB_01af6e08;
          pcVar20 = "DIYRecipeIcon";
          bVar8 = SBORROW4(local_90,0xd);
          iVar10 = local_90 + -0xd;
          bVar9 = local_90 == 0xd;
          iVar11 = 0xd;
          goto LAB_01af6dec;
        }
        break;
      }
      cVar18 = '\x01';
      *puVar4 = 1;
      memset(puVar5,0xff,0x1ac);
      uVar1 = *puVar21;
      if (uVar1 == 0) goto LAB_01af6d0c;
LAB_01af6bf4:
      puVar15 = (uint *)(ulong)uVar1;
      uVar13 = 0xffffffff;
      if (puVar21 == puVar15) break;
      lVar12 = 0xc;
      if (*(char *)((long)puVar21 + (10 - (long)puVar15)) != '\0') {
        lVar12 = 0x1c;
      }
      lVar12 = (long)puVar21 + (lVar12 - (long)puVar15);
      if (lVar12 == 0) goto LAB_01af6d0c;
      uVar16 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar15));
      uVar13 = 0xfffffffe;
      *(undefined4 *)(puVar5 + 0x10c) = 0xfffffffe;
      if (uVar16 == 0) break;
      puVar15 = (uint *)(lVar12 + 4);
      while (puVar15[-1] != 0xbcf5d17a) {
        puVar15 = puVar15 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) {
          uVar13 = 0xfffffffe;
          goto LAB_01af6c70;
        }
      }
      uVar1 = 0;
      if (*puVar15 != 0xffffffff) {
        uVar1 = *puVar15;
      }
      uVar13 = (ulong)uVar1;
      *(uint *)(puVar5 + 0x10c) = uVar1;
    } while (*puVar21 != 0);
LAB_01af6c70:
    puVar21 = *(uint **)(param_1 + 0x10);
    if ((puVar21 != (uint *)0x0) && (*puVar21 != 0)) {
      while ((int)uVar13 < 0) {
        if ((((int)uVar13 != -1) || (puVar15 = (uint *)(ulong)*puVar21, *puVar21 == 0)) ||
           (puVar21 == puVar15)) goto LAB_01af6e08;
        lVar12 = 0xc;
        if (*(char *)((long)puVar21 + (10 - (long)puVar15)) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar21 + (lVar12 - (long)puVar15);
        if (lVar12 == 0) goto LAB_01af6e08;
        uVar13 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar15));
        *(undefined4 *)(puVar5 + 0x10c) = 0xfffffffe;
        if (uVar13 == 0) goto LAB_01af6e08;
        puVar15 = (uint *)(lVar12 + 4);
        while (puVar15[-1] != 0xbcf5d17a) {
          puVar15 = puVar15 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_01af6e08;
        }
        uVar1 = 0;
        if (*puVar15 != 0xffffffff) {
          uVar1 = *puVar15;
        }
        uVar13 = (ulong)uVar1;
        *(uint *)(puVar5 + 0x10c) = uVar1;
        if (*puVar21 == 0) goto LAB_01af6e08;
      }
      if (((((ushort *)((long)puVar21 + uVar13) != (ushort *)0x0) &&
           (uVar2 = *(ushort *)((long)puVar21 + uVar13), uVar2 < 0x800)) &&
          ((*(byte *)(*(long *)PTR_DAT_04bb46f0 + (ulong)(uVar2 >> 3) + 0xe99e0) >>
            (ulong)(uVar2 & 7) & 1) != 0)) && (local_98 != "CookingIcon")) {
        pcVar20 = "CookingIcon";
        bVar8 = SBORROW4(local_90,0xb);
        iVar10 = local_90 + -0xb;
        bVar9 = local_90 == 0xb;
        iVar11 = 0xb;
LAB_01af6dec:
        pcVar7 = local_98;
        if (bVar9 || iVar10 < 0 != bVar8) {
          iVar11 = local_90 + -1;
        }
        memcpy(local_98,pcVar20,(long)iVar11);
        pcVar7[iVar11] = '\0';
      }
    }
  }
LAB_01af6e08:
  cVar18 = *local_98;
  if (cVar18 == '\0') {
    **(undefined1 **)(param_2 + 8) = 0;
  }
  else if ((*(long *)PTR_DAT_04bb46f0 == 0) ||
          (uVar13 = FUN_026222e0(*(long *)PTR_DAT_04bb46f0,param_1 + 8), (uVar13 & 1) == 0)) {
    (**(code **)(DAT_0532a990 + 0x18))(&DAT_0532a990);
    uVar6 = DAT_0532a998;
    (**(code **)(local_a0 + 0x18))(&local_a0);
    pcVar20 = local_98;
    puVar5 = PTR_DAT_04bbfe90;
    puVar4 = PTR_DAT_04bbfe88;
    puVar21 = *(uint **)(param_1 + 0x10);
    if (puVar21 == (uint *)0x0) {
      lVar12 = *(long *)(puVar3 + 8);
    }
    else {
      if (*puVar21 != 0) {
        cVar19 = *PTR_DAT_04bbfe88;
        do {
          if (cVar19 == '\0') {
            cVar19 = '\x01';
            *puVar4 = 1;
            memset(puVar5,0xff,0x1ac);
          }
          else {
            uVar1 = *(uint *)(puVar5 + 0x18c);
            if (-1 < (int)uVar1) {
              lVar14 = (ulong)uVar1 + (long)puVar21;
              goto LAB_01af70ac;
            }
            if (uVar1 != 0xffffffff) break;
          }
          puVar15 = (uint *)(ulong)*puVar21;
          lVar14 = 0;
          if ((*puVar21 == 0) || (puVar21 == puVar15)) goto LAB_01af70ac;
          lVar12 = 0xc;
          if (*(char *)((long)puVar21 + (10 - (long)puVar15)) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar21 + (lVar12 - (long)puVar15);
          if (lVar12 == 0) break;
          uVar13 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar15));
          *(undefined4 *)(puVar5 + 0x18c) = 0xfffffffe;
          lVar14 = 0;
          if (uVar13 == 0) goto LAB_01af70ac;
          piVar17 = (int *)(lVar12 + 4);
          while (piVar17[-1] != 0x3febc642) {
            piVar17 = piVar17 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) {
              lVar14 = 0;
              goto LAB_01af70ac;
            }
          }
          iVar10 = 0;
          if (*piVar17 != -1) {
            iVar10 = *piVar17;
          }
          *(int *)(puVar5 + 0x18c) = iVar10;
        } while (*puVar21 != 0);
      }
      lVar14 = 0;
LAB_01af70ac:
      lVar12 = *(long *)PTR_PTR_04bc0008;
      if (lVar14 != 0) {
        lVar12 = lVar14;
      }
    }
    FUN_038d1270(param_2,uVar6,pcVar20,lVar12);
  }
  else {
    if (((DAT_0532abf8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_0532abf8), iVar10 != 0)) {
      local_b0 = PTR_DAT_04bb2020 + 0x10;
      pcStack_a8 = "Layout_%s_%s_Remake_%d_%d";
      FUN_017b8800(&DAT_0532ab60,&local_b0);
      __cxa_guard_release(&DAT_0532abf8);
    }
    bVar9 = local_64 == 2;
    if (local_64 != 0) {
      (**(code **)(DAT_0532ab60 + 0x18))(&DAT_0532ab60);
      uVar6 = DAT_0532ab68;
      (**(code **)(local_a0 + 0x18))(&local_a0);
      pcVar20 = local_98;
      puVar5 = PTR_DAT_04bbfe90;
      puVar4 = PTR_DAT_04bbfe88;
      puVar21 = *(uint **)(param_1 + 0x10);
      if (puVar21 == (uint *)0x0) {
        lVar12 = *(long *)(puVar3 + 8);
      }
      else {
        if (*puVar21 != 0) {
          cVar19 = *PTR_DAT_04bbfe88;
          do {
            if (cVar19 == '\0') {
              cVar19 = '\x01';
              *puVar4 = 1;
              memset(puVar5,0xff,0x1ac);
            }
            else {
              uVar1 = *(uint *)(puVar5 + 0x18c);
              if (-1 < (int)uVar1) {
                lVar14 = (ulong)uVar1 + (long)puVar21;
                goto LAB_01af6f78;
              }
              if (uVar1 != 0xffffffff) break;
            }
            puVar15 = (uint *)(ulong)*puVar21;
            lVar14 = 0;
            if ((*puVar21 == 0) || (puVar21 == puVar15)) goto LAB_01af6f78;
            lVar12 = 0xc;
            if (*(char *)((long)puVar21 + (10 - (long)puVar15)) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar21 + (lVar12 - (long)puVar15);
            if (lVar12 == 0) break;
            uVar13 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar15));
            *(undefined4 *)(puVar5 + 0x18c) = 0xfffffffe;
            lVar14 = 0;
            if (uVar13 == 0) goto LAB_01af6f78;
            piVar17 = (int *)(lVar12 + 4);
            while (piVar17[-1] != 0x3febc642) {
              piVar17 = piVar17 + 2;
              uVar13 = uVar13 - 1;
              if (uVar13 == 0) {
                lVar14 = 0;
                goto LAB_01af6f78;
              }
            }
            iVar10 = 0;
            if (*piVar17 != -1) {
              iVar10 = *piVar17;
            }
            *(int *)(puVar5 + 0x18c) = iVar10;
          } while (*puVar21 != 0);
        }
        lVar14 = 0;
LAB_01af6f78:
        lVar12 = *(long *)PTR_PTR_04bc0008;
        if (lVar14 != 0) {
          lVar12 = lVar14;
        }
      }
      FUN_038d1270(param_2,uVar6,pcVar20,lVar12,bVar9,0);
    }
  }
  return cVar18 != '\0';
}

