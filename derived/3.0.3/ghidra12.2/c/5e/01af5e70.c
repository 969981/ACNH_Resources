
undefined8 FUN_01af5e70(long param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  ushort *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  uint *puVar14;
  char cVar15;
  long lVar16;
  uint *puVar17;
  undefined *local_70;
  char *pcStack_68;
  
  if (((DAT_0532aa60 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0532aa60), iVar4 != 0)) {
    local_70 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "FtrIcon";
    FUN_00772610(&DAT_0532aa28,&local_70);
    __cxa_guard_release(&DAT_0532aa60);
  }
  (**(code **)(DAT_0532a990 + 0x18))(&DAT_0532a990);
  uVar9 = DAT_0532a998;
  (**(code **)(DAT_0532aa28 + 0x18))(&DAT_0532aa28);
  uVar8 = DAT_0532aa30;
  puVar3 = PTR_DAT_04bbfe90;
  puVar2 = PTR_DAT_04bbfe88;
  puVar17 = *(uint **)(param_1 + 0x10);
  if (puVar17 == (uint *)0x0) {
    lVar16 = *(long *)(PTR_PTR_04bb2238 + 8);
  }
  else {
    if (*puVar17 != 0) {
      cVar15 = *PTR_DAT_04bbfe88;
      do {
        if (cVar15 == '\0') {
          *puVar2 = 1;
          memset(puVar3,0xff,0x1ac);
          cVar15 = '\x01';
        }
        else {
          uVar10 = *(uint *)(puVar3 + 0x18c);
          if (-1 < (int)uVar10) {
            lVar11 = (ulong)uVar10 + (long)puVar17;
            goto LAB_01af600c;
          }
          if (uVar10 != 0xffffffff) break;
        }
        puVar14 = (uint *)(ulong)*puVar17;
        lVar11 = 0;
        if ((*puVar17 == 0) || (puVar17 == puVar14)) goto LAB_01af600c;
        lVar16 = 0xc;
        if (*(char *)((long)puVar17 + (10 - (long)puVar14)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar17 + (lVar16 - (long)puVar14);
        if (lVar16 == 0) break;
        uVar12 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar14));
        *(undefined4 *)(puVar3 + 0x18c) = 0xfffffffe;
        lVar11 = 0;
        if (uVar12 == 0) goto LAB_01af600c;
        piVar13 = (int *)(lVar16 + 4);
        while (piVar13[-1] != 0x3febc642) {
          piVar13 = piVar13 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) {
            lVar11 = 0;
            goto LAB_01af600c;
          }
        }
        iVar4 = 0;
        if (*piVar13 != -1) {
          iVar4 = *piVar13;
        }
        *(int *)(puVar3 + 0x18c) = iVar4;
      } while (*puVar17 != 0);
    }
    lVar11 = 0;
LAB_01af600c:
    lVar16 = *(long *)PTR_PTR_04bc0008;
    if (lVar11 != 0) {
      lVar16 = lVar11;
    }
  }
  FUN_038d1270(param_2,uVar9,uVar8,lVar16);
  puVar17 = *(uint **)(param_1 + 0x10);
  if (puVar17 == (uint *)0x0) {
    uVar10 = 0xbc;
  }
  else {
    uVar5 = *puVar17;
    uVar10 = 0;
    if ((uVar5 != 0) && (puVar17 != (uint *)(ulong)uVar5)) {
      puVar14 = (uint *)((long)puVar17 - (long)(ulong)uVar5);
      uVar10 = 0;
      if (*puVar14 != 0) {
        uVar10 = puVar14[1];
        if ((uVar10 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
          lVar16 = 0xc;
          if (*(char *)((long)puVar14 + 10) != '\0') {
            lVar16 = 0x1c;
          }
          lVar16 = (long)puVar14 + lVar16 + (ulong)(ushort)puVar14[2] * 8;
          if (lVar16 != 0) {
            uVar5 = 0;
            if ((ulong)uVar10 != 0) {
              uVar5 = (uint)((ulong)((long)puVar17 - lVar16) / (ulong)uVar10);
            }
            if (*puVar14 <= uVar5) {
              uVar5 = 0xffffffff;
            }
            if ((uVar5 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar10 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar5 * 2),
               uVar10 < 0xbd)) goto LAB_01af60dc;
          }
        }
        uVar10 = 0;
      }
    }
  }
LAB_01af60dc:
  local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar10);
  if (((uVar10 == 0xb1) && (uVar10 = *(uint *)(param_1 + 0xc), (uVar10 & 0xf800) == 0)) &&
     ((*(byte *)(*(long *)PTR_DAT_04bb46f0 + ((ulong)(uVar10 >> 3) & 0x1fff) + 0xe99e0) >>
       (ulong)(uVar10 & 7) & 1) != 0)) {
    if (((DAT_0532aa78 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0532aa78), iVar4 != 0)) {
      DAT_0532aa68 = PTR_DAT_04bb2020 + 0x10;
      DAT_0532aa70 = "CookingRecipe";
      __cxa_guard_release(&DAT_0532aa78);
    }
    (**(code **)(DAT_0532a990 + 0x18))(&DAT_0532a990);
    uVar9 = DAT_0532a998;
    (**(code **)(DAT_0532aa28 + 0x18))(&DAT_0532aa28);
    uVar8 = DAT_0532aa30;
    (**(code **)(DAT_0532aa68 + 0x18))(&DAT_0532aa68);
    FUN_038d1270(param_2,uVar9,uVar8,DAT_0532aa70);
  }
  else {
    if (((DAT_0532ab18 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0532ab18), iVar4 != 0)) {
      local_70 = PTR_DAT_04bb2020 + 0x10;
      pcStack_68 = "Layout_%s_%s_Remake_%d_%d";
      FUN_017b8800(&DAT_0532aa80,&local_70);
      __cxa_guard_release(&DAT_0532ab18);
    }
    iVar4 = FUN_01ad7260(param_1);
    if ((iVar4 != 0) || (iVar4 = FUN_01afcfa0(param_1), iVar4 != 0)) {
      iVar4 = FUN_01afcfa0(param_1);
      if ((iVar4 == 0) ||
         (((puVar7 = (ushort *)FUN_01afd600(param_1), puVar7 == (ushort *)0x0 ||
           (uVar1 = *puVar7 >> 3 & 3, uVar1 == 3)) || (uVar1 == 0)))) {
        (**(code **)(DAT_0532aa80 + 0x18))(&DAT_0532aa80);
        uVar8 = DAT_0532aa88;
        (**(code **)(DAT_0532aa28 + 0x18))(&DAT_0532aa28);
        uVar9 = DAT_0532aa30;
        puVar3 = PTR_DAT_04bbfe90;
        puVar2 = PTR_DAT_04bbfe88;
        puVar17 = *(uint **)(param_1 + 0x10);
        if (puVar17 == (uint *)0x0) {
          lVar16 = *(long *)(PTR_PTR_04bb2238 + 8);
        }
        else {
          if (*puVar17 != 0) {
            cVar15 = *PTR_DAT_04bbfe88;
            do {
              if (cVar15 == '\0') {
                cVar15 = '\x01';
                *puVar2 = 1;
                memset(puVar3,0xff,0x1ac);
              }
              else {
                uVar10 = *(uint *)(puVar3 + 0x18c);
                if (-1 < (int)uVar10) {
                  lVar11 = (ulong)uVar10 + (long)puVar17;
                  goto LAB_01af6268;
                }
                if (uVar10 != 0xffffffff) break;
              }
              puVar14 = (uint *)(ulong)*puVar17;
              lVar11 = 0;
              if ((*puVar17 == 0) || (puVar17 == puVar14)) goto LAB_01af6268;
              lVar16 = 0xc;
              if (*(char *)((long)puVar17 + (10 - (long)puVar14)) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar17 + (lVar16 - (long)puVar14);
              if (lVar16 == 0) break;
              uVar12 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar14));
              *(undefined4 *)(puVar3 + 0x18c) = 0xfffffffe;
              lVar11 = 0;
              if (uVar12 == 0) goto LAB_01af6268;
              piVar13 = (int *)(lVar16 + 4);
              while (piVar13[-1] != 0x3febc642) {
                piVar13 = piVar13 + 2;
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) {
                  lVar11 = 0;
                  goto LAB_01af6268;
                }
              }
              iVar4 = 0;
              if (*piVar13 != -1) {
                iVar4 = *piVar13;
              }
              *(int *)(puVar3 + 0x18c) = iVar4;
            } while (*puVar17 != 0);
          }
          lVar11 = 0;
LAB_01af6268:
          lVar16 = *(long *)PTR_PTR_04bc0008;
          if (lVar11 != 0) {
            lVar16 = lVar11;
          }
        }
        iVar4 = FUN_01ad7260(param_1);
        if ((iVar4 == 0) || (puVar7 = (ushort *)FUN_01afd600(param_1), puVar7 == (ushort *)0x0)) {
          uVar10 = 0;
        }
        else {
          uVar10 = *puVar7 & 7;
          uVar5 = FUN_01ad7260(param_1);
          if (uVar5 <= uVar10) {
            uVar10 = 0;
          }
        }
        uVar6 = FUN_01ae3a80(param_1);
      }
      else {
        (**(code **)(DAT_0532aa80 + 0x18))(&DAT_0532aa80);
        uVar8 = DAT_0532aa88;
        (**(code **)(DAT_0532aa28 + 0x18))(&DAT_0532aa28);
        uVar9 = DAT_0532aa30;
        puVar3 = PTR_DAT_04bbfe90;
        puVar2 = PTR_DAT_04bbfe88;
        puVar17 = *(uint **)(param_1 + 0x10);
        if (puVar17 == (uint *)0x0) {
          lVar16 = *(long *)(PTR_PTR_04bb2238 + 8);
        }
        else {
          if (*puVar17 != 0) {
            cVar15 = *PTR_DAT_04bbfe88;
            do {
              if (cVar15 == '\0') {
                cVar15 = '\x01';
                *puVar2 = 1;
                memset(puVar3,0xff,0x1ac);
              }
              else {
                uVar10 = *(uint *)(puVar3 + 0x18c);
                if (-1 < (int)uVar10) {
                  lVar11 = (ulong)uVar10 + (long)puVar17;
                  goto LAB_01af64b8;
                }
                if (uVar10 != 0xffffffff) break;
              }
              puVar14 = (uint *)(ulong)*puVar17;
              lVar11 = 0;
              if ((*puVar17 == 0) || (puVar17 == puVar14)) goto LAB_01af64b8;
              lVar16 = 0xc;
              if (*(char *)((long)puVar17 + (10 - (long)puVar14)) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar17 + (lVar16 - (long)puVar14);
              if (lVar16 == 0) break;
              uVar12 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar14));
              *(undefined4 *)(puVar3 + 0x18c) = 0xfffffffe;
              lVar11 = 0;
              if (uVar12 == 0) goto LAB_01af64b8;
              piVar13 = (int *)(lVar16 + 4);
              while (piVar13[-1] != 0x3febc642) {
                piVar13 = piVar13 + 2;
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) {
                  lVar11 = 0;
                  goto LAB_01af64b8;
                }
              }
              iVar4 = 0;
              if (*piVar13 != -1) {
                iVar4 = *piVar13;
              }
              *(int *)(puVar3 + 0x18c) = iVar4;
            } while (*puVar17 != 0);
          }
          lVar11 = 0;
LAB_01af64b8:
          lVar16 = *(long *)PTR_PTR_04bc0008;
          if (lVar11 != 0) {
            lVar16 = lVar11;
          }
        }
        iVar4 = FUN_01ad7260(param_1);
        if ((iVar4 == 0) || (puVar7 = (ushort *)FUN_01afd600(param_1), puVar7 == (ushort *)0x0)) {
          uVar10 = 0;
        }
        else {
          uVar10 = *puVar7 & 7;
          uVar5 = FUN_01ad7260(param_1);
          if (uVar5 <= uVar10) {
            uVar10 = 0;
          }
        }
        uVar6 = 0;
      }
      FUN_038d1270(param_2,uVar8,uVar9,lVar16,uVar10,uVar6);
    }
  }
  return 1;
}

