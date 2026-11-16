
void FUN_02758d00(ushort *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  ushort *puVar9;
  ushort uVar10;
  long lVar11;
  uint uVar12;
  char cVar13;
  uint *puVar14;
  int *piVar15;
  ulong uVar16;
  uint uVar17;
  uint local_a4;
  uint local_a0;
  uint uStack_9c;
  undefined4 local_98 [12];
  byte local_68 [4];
  byte local_64 [4];
  
  puVar3 = PTR_DAT_04bb2208;
  lVar11 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_98[0] = FUN_006bd550(param_2[1],0);
  puVar7 = (uint *)FUN_02759760(lVar11 + 0x1da0,local_98);
  if (puVar7 == (uint *)0x0) {
    return;
  }
  lVar11 = *(long *)puVar3;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_98[0] = FUN_006bd550(param_2[1],0);
  puVar8 = (uint *)FUN_02759760(lVar11 + 0x1da0,local_98);
  puVar5 = PTR_DAT_04bb6468;
  puVar4 = PTR_DAT_04bb6460;
  if (puVar8 == (uint *)0x0) {
    uVar17 = 0;
    uVar12 = *puVar7;
  }
  else {
    puVar9 = param_1;
    if (*puVar8 != 0) {
      cVar13 = *PTR_DAT_04bb6460;
      do {
        if (cVar13 == '\0') {
          cVar13 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          uVar12 = *puVar8;
        }
        else {
          uVar12 = *(uint *)(puVar5 + 8);
          if (-1 < (int)uVar12) {
            if (((ushort *)((ulong)uVar12 + (long)puVar8) != (ushort *)0x0) &&
               (uVar2 = *(ushort *)((ulong)uVar12 + (long)puVar8), uVar2 < 0x800)) {
              puVar9 = param_1 + uVar2;
            }
            break;
          }
          if (uVar12 != 0xffffffff) break;
          uVar12 = *puVar8;
        }
        if ((uVar12 == 0) || (puVar14 = (uint *)(ulong)uVar12, puVar8 == puVar14)) break;
        lVar11 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar14)) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar8 + (lVar11 - (long)puVar14);
        if (lVar11 == 0) break;
        uVar16 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar14));
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar16 == 0) break;
        piVar15 = (int *)(lVar11 + 4);
        while (piVar15[-1] != 0x54706054) {
          piVar15 = piVar15 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_02758e88;
        }
        iVar6 = 0;
        if (*piVar15 != -1) {
          iVar6 = *piVar15;
        }
        *(int *)(puVar5 + 8) = iVar6;
        if (*puVar8 == 0) break;
      } while( true );
    }
LAB_02758e88:
    uVar17 = (uint)*puVar9;
    uVar12 = *puVar7;
  }
  if (uVar12 == 0) {
LAB_02758f6c:
    uVar12 = 0;
  }
  else {
    cVar13 = *puVar4;
    do {
      if (cVar13 == '\0') {
        cVar13 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar12 = *(uint *)(puVar5 + 4);
        if (-1 < (int)uVar12) {
          if ((uint *)((ulong)uVar12 + (long)puVar7) == (uint *)0x0) goto LAB_02758f6c;
          uVar12 = *(uint *)((ulong)uVar12 + (long)puVar7);
          goto LAB_02758f70;
        }
        if (uVar12 != 0xffffffff) goto LAB_02758f6c;
      }
      puVar8 = (uint *)(ulong)*puVar7;
      uVar12 = 0;
      if ((*puVar7 == 0) || (puVar7 == puVar8)) goto LAB_02758f70;
      lVar11 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar8)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar7 + (lVar11 - (long)puVar8);
      if (lVar11 == 0) goto LAB_02758f6c;
      uVar16 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar8));
      *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
      uVar12 = 0;
      if (uVar16 == 0) goto LAB_02758f70;
      piVar15 = (int *)(lVar11 + 4);
      while (piVar15[-1] != 0x344b17d7) {
        piVar15 = piVar15 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) {
          uVar12 = 0;
          goto LAB_02758f70;
        }
      }
      iVar6 = 0;
      if (*piVar15 != -1) {
        iVar6 = *piVar15;
      }
      *(int *)(puVar5 + 4) = iVar6;
    } while (*puVar7 != 0);
    uVar12 = 0;
  }
LAB_02758f70:
  uVar1 = param_3;
  if ((int)uVar12 <= (int)param_3) {
    uVar1 = uVar12;
  }
  uVar12 = 0;
  if (-1 < (int)param_3) {
    uVar12 = uVar1;
  }
  if (uVar17 != uVar12) {
    if (*puVar7 != 0) {
      cVar13 = *puVar4;
      do {
        if (cVar13 == '\0') {
          cVar13 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          uVar1 = *puVar7;
        }
        else {
          uVar1 = *(uint *)(puVar5 + 8);
          if (-1 < (int)uVar1) {
            if ((ushort *)((ulong)uVar1 + (long)puVar7) != (ushort *)0x0) {
              uVar2 = *(ushort *)((ulong)uVar1 + (long)puVar7);
              if (0xfffe < uVar12) {
                uVar12 = 0xffff;
              }
              uVar10 = (ushort)uVar12;
              if (0x7ff < uVar2) goto LAB_027590a8;
              puVar9 = param_1 + uVar2;
              goto LAB_027590ac;
            }
            break;
          }
          if (uVar1 != 0xffffffff) break;
          uVar1 = *puVar7;
        }
        if ((uVar1 == 0) || (puVar8 = (uint *)(ulong)uVar1, puVar7 == puVar8)) break;
        lVar11 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar8)) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar7 + (lVar11 - (long)puVar8);
        if (lVar11 == 0) break;
        uVar16 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar8));
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar16 == 0) break;
        piVar15 = (int *)(lVar11 + 4);
        while (piVar15[-1] != 0x54706054) {
          piVar15 = piVar15 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_0275909c;
        }
        iVar6 = 0;
        if (*piVar15 != -1) {
          iVar6 = *piVar15;
        }
        *(int *)(puVar5 + 8) = iVar6;
        if (*puVar7 == 0) break;
      } while( true );
    }
LAB_0275909c:
    if (0xfffe < uVar12) {
      uVar12 = 0xffff;
    }
    uVar10 = (ushort)uVar12;
LAB_027590a8:
    puVar9 = param_1;
LAB_027590ac:
    *puVar9 = uVar10;
    lVar11 = *(long *)puVar3;
    (**(code **)(*param_2 + 0x18))(param_2);
    local_98[0] = FUN_006bd550(param_2[1],0);
    puVar8 = (uint *)FUN_02759760(lVar11 + 0x1da0,local_98);
    if (puVar8 == (uint *)0x0) {
      uVar12 = 0;
      if (uVar17 == 0) {
        return;
      }
    }
    else {
      if (*puVar8 != 0) {
        cVar13 = *puVar4;
        do {
          if (cVar13 == '\0') {
            cVar13 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            uVar12 = *puVar8;
          }
          else {
            uVar12 = *(uint *)(puVar5 + 8);
            if (-1 < (int)uVar12) {
              if (((ushort *)((ulong)uVar12 + (long)puVar8) != (ushort *)0x0) &&
                 (uVar2 = *(ushort *)((ulong)uVar12 + (long)puVar8), uVar2 < 0x800)) {
                param_1 = param_1 + uVar2;
              }
              break;
            }
            if (uVar12 != 0xffffffff) break;
            uVar12 = *puVar8;
          }
          if ((uVar12 == 0) || (puVar14 = (uint *)(ulong)uVar12, puVar8 == puVar14)) break;
          lVar11 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar14)) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar8 + (lVar11 - (long)puVar14);
          if (lVar11 == 0) break;
          uVar16 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar14));
          *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
          if (uVar16 == 0) break;
          piVar15 = (int *)(lVar11 + 4);
          while (piVar15[-1] != 0x54706054) {
            piVar15 = piVar15 + 2;
            uVar16 = uVar16 - 1;
            if (uVar16 == 0) goto LAB_027591d4;
          }
          iVar6 = 0;
          if (*piVar15 != -1) {
            iVar6 = *piVar15;
          }
          *(int *)(puVar5 + 8) = iVar6;
          if (*puVar8 == 0) break;
        } while( true );
      }
LAB_027591d4:
      uVar12 = (uint)*param_1;
      if (uVar17 == *param_1) {
        return;
      }
    }
    FUN_0252d11c(local_64);
    local_68[0] = local_64[0];
    if (7 < local_64[0]) {
      local_68[0] = 0xff;
    }
    iVar6 = FUN_02582fe0(local_68);
    if ((iVar6 != -1) && (*puVar7 != 0)) {
      cVar13 = *puVar4;
      while( true ) {
        if (cVar13 == '\0') {
          cVar13 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          uVar1 = *puVar7;
        }
        else {
          uVar1 = *(uint *)(puVar5 + 0x1c);
          if (-1 < (int)uVar1) {
            if ((char *)((ulong)uVar1 + (long)puVar7) == (char *)0x0) {
              return;
            }
            if (*(char *)((ulong)uVar1 + (long)puVar7) == '\0') {
              return;
            }
            local_98[0] = 4;
            if ((*(ulong *)(*(long *)PTR_DAT_04bb2268 + 0xb8) >> 4 & 1) != 0) {
              return;
            }
            FUN_025d0690(local_98,local_64);
            local_a0 = uVar17;
            uStack_9c = uVar12;
            puVar9 = (ushort *)FUN_00ac62e0(puVar7,2,0x54706054,DAT_0557e1c8);
            if (puVar9 == (ushort *)0x0) {
              local_a4 = 0;
            }
            else {
              local_a4 = (uint)*puVar9;
            }
            FUN_025d0858(local_98,&local_a4);
            FUN_025d077c(local_98);
            return;
          }
          if (uVar1 != 0xffffffff) {
            return;
          }
          uVar1 = *puVar7;
        }
        if (uVar1 == 0) {
          return;
        }
        puVar8 = (uint *)(ulong)uVar1;
        if (puVar7 == puVar8) break;
        lVar11 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar8)) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar7 + (lVar11 - (long)puVar8);
        if (lVar11 == 0) {
          return;
        }
        uVar16 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar8));
        *(undefined4 *)(puVar5 + 0x1c) = 0xfffffffe;
        if (uVar16 == 0) {
          return;
        }
        piVar15 = (int *)(lVar11 + 4);
        while (piVar15[-1] != -0x1d40080b) {
          piVar15 = piVar15 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) {
            return;
          }
        }
        iVar6 = 0;
        if (*piVar15 != -1) {
          iVar6 = *piVar15;
        }
        *(int *)(puVar5 + 0x1c) = iVar6;
        if (*puVar7 == 0) {
          return;
        }
      }
      return;
    }
  }
  return;
}

