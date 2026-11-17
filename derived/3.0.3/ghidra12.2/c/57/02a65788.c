
bool FUN_02a65788(long param_1)

{
  undefined *puVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  byte bVar13;
  long lVar14;
  byte bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_48;
  char *pcStack_40;
  uint local_34;
  
  plVar9 = *(long **)PTR_DAT_04bb27d0;
  if ((((plVar9 != (long *)0x0) && (plVar9[5] != 0)) && ((int)plVar9[0x10] == 1)) &&
     ((*(uint *)(param_1 + 0x2c0) < 0x10 &&
      ((0x8073U >> (ulong)(*(uint *)(param_1 + 0x2c0) & 0x1f) & 1) != 0)))) {
    return false;
  }
  iVar7 = *(int *)(param_1 + 0x2c0);
  if (iVar7 != 7) goto LAB_02a658f8;
  lVar12 = *(long *)PTR_DAT_04bb39b0;
  if (lVar12 == 0) {
    pbVar10 = PTR_DAT_04bb32e0;
LAB_02a65850:
    pbVar11 = pbVar10;
    if (7 < *pbVar10) {
      pbVar11 = PTR_DAT_04bb5038;
    }
    if ((plVar9 == (long *)0x0) || (7 >= *pbVar10)) goto LAB_02a658cc;
LAB_02a65870:
    lVar12 = *plVar9;
    bVar15 = *(byte *)(lVar12 + 0x473);
    pbVar10 = PTR_DAT_04bb5038;
    if ((long)(char)bVar15 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar15 & 0xffffffffU) * 0x20;
      if (7 < bVar15) {
        puVar2 = (uint *)(lVar12 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar10 = (byte *)(lVar12 + 0x471);
      }
    }
    bVar15 = *pbVar10;
    bVar4 = 7 < bVar15;
    if (bVar4) {
      bVar15 = 0xff;
    }
    local_48 = (undefined *)CONCAT71(local_48._1_7_,bVar15);
    if (bVar4) goto LAB_02a658c4;
  }
  else {
    pbVar11 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar12 + 0x15c) != 0) {
      pbVar11 = (byte *)(lVar12 + 0x158);
    }
    if (7 < *pbVar11) {
      if ((*(int *)(lVar12 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar10 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02a65850;
      }
      if (plVar9 != (long *)0x0) goto LAB_02a65870;
LAB_02a658c4:
      pbVar11 = PTR_DAT_04bb5038;
    }
LAB_02a658cc:
    bVar15 = *pbVar11;
    if (7 < bVar15) {
      bVar15 = 0xff;
    }
    local_48 = (undefined *)CONCAT71(local_48._1_7_,bVar15);
  }
  iVar7 = FUN_02753180(&local_48,&DAT_055faf48);
  if (iVar7 != 0) {
    return false;
  }
  iVar7 = *(int *)(param_1 + 0x2c0);
LAB_02a658f8:
  if ((iVar7 != 1) || ((*(byte *)(param_1 + 0x27c) >> 2 & 1) == 0)) {
    lVar12 = *(long *)(param_1 + 0x2c8);
    if (lVar12 != 0) {
      local_34 = 0;
      uVar8 = (ulong)local_48 >> 0x20;
      local_48 = (undefined *)((ulong)local_48 & 0xffffffff00000000);
      if (((*(int *)(param_1 + 0x2f0) != 0) && (lVar14 = **(long **)(param_1 + 0x2f8), lVar14 != 0))
         && (*(char *)(lVar14 + 100) != '\0')) {
        if (*(int *)(lVar12 + 0xf8) == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = **(long **)(lVar12 + 0x100);
        }
        local_48 = (undefined *)CONCAT44((int)uVar8,2);
        uVar8 = (**(code **)(*(long *)(lVar12 + 0x30) + 0x118))((long *)(lVar12 + 0x30),&local_48);
        if ((uVar8 & 1) != 0) {
          if (*(char *)(lVar14 + 100) == '\0') {
            return false;
          }
          if (*(int *)(lVar14 + 0x20) != 3) {
            return false;
          }
        }
      }
      local_34 = 1;
      if (((1 < *(uint *)(param_1 + 0x2f0)) &&
          (lVar12 = *(long *)(*(long *)(param_1 + 0x2f8) +
                             (long)(int)(uint)(1 < *(uint *)(param_1 + 0x2f0)) * 8), lVar12 != 0))
         && (*(char *)(lVar12 + 100) != '\0')) {
        if (*(uint *)(*(long *)(param_1 + 0x2c8) + 0xf8) < 2) {
          lVar14 = 0;
        }
        else {
          lVar14 = *(long *)(*(long *)(*(long *)(param_1 + 0x2c8) + 0x100) + 8);
        }
        local_48._0_4_ = 2;
        uVar8 = (**(code **)(*(long *)(lVar14 + 0x30) + 0x118))((long *)(lVar14 + 0x30),&local_48);
        if ((uVar8 & 1) != 0) {
          if (*(char *)(lVar12 + 100) == '\0') {
            return false;
          }
          if (*(int *)(lVar12 + 0x20) != 3) {
            return false;
          }
        }
      }
      local_34 = 2;
      if (2 < *(uint *)(param_1 + 0x2f0)) {
        iVar7 = 2;
        if (*(uint *)(param_1 + 0x2f0) < 3) {
          iVar7 = 0;
        }
        lVar12 = *(long *)(*(long *)(param_1 + 0x2f8) + (long)iVar7 * 8);
        if ((lVar12 != 0) && (*(char *)(lVar12 + 100) != '\0')) {
          if (*(uint *)(*(long *)(param_1 + 0x2c8) + 0xf8) < 3) {
            lVar14 = 0;
          }
          else {
            lVar14 = *(long *)(*(long *)(*(long *)(param_1 + 0x2c8) + 0x100) + 0x10);
          }
          local_48._0_4_ = 2;
          uVar8 = (**(code **)(*(long *)(lVar14 + 0x30) + 0x118))((long *)(lVar14 + 0x30),&local_48)
          ;
          if ((uVar8 & 1) != 0) {
            if (*(char *)(lVar12 + 100) == '\0') {
              return false;
            }
            if (*(int *)(lVar12 + 0x20) != 3) {
              return false;
            }
          }
        }
      }
      local_34 = 3;
      if (3 < *(uint *)(param_1 + 0x2f0)) {
        iVar7 = 3;
        if (*(uint *)(param_1 + 0x2f0) < 4) {
          iVar7 = 0;
        }
        lVar12 = *(long *)(*(long *)(param_1 + 0x2f8) + (long)iVar7 * 8);
        if ((lVar12 != 0) && (*(char *)(lVar12 + 100) != '\0')) {
          if (*(uint *)(*(long *)(param_1 + 0x2c8) + 0xf8) < 4) {
            lVar14 = 0;
          }
          else {
            lVar14 = *(long *)(*(long *)(*(long *)(param_1 + 0x2c8) + 0x100) + 0x18);
          }
          local_48._0_4_ = 2;
          uVar8 = (**(code **)(*(long *)(lVar14 + 0x30) + 0x118))((long *)(lVar14 + 0x30),&local_48)
          ;
          if ((uVar8 & 1) != 0) {
            if (*(char *)(lVar12 + 100) == '\0') {
              return false;
            }
            if (*(int *)(lVar12 + 0x20) != 3) {
              return false;
            }
          }
        }
      }
      local_34 = 4;
      local_48 = (undefined *)CONCAT44(local_48._4_4_,4);
      if (4 < *(uint *)(param_1 + 0x2f0)) {
        iVar7 = 4;
        if (*(uint *)(param_1 + 0x2f0) < 5) {
          iVar7 = 0;
        }
        lVar12 = *(long *)(*(long *)(param_1 + 0x2f8) + (long)iVar7 * 8);
        if ((lVar12 != 0) && (*(char *)(lVar12 + 100) != '\0')) {
          if (*(uint *)(*(long *)(param_1 + 0x2c8) + 0xf8) < 5) {
            lVar14 = 0;
          }
          else {
            lVar14 = *(long *)(*(long *)(*(long *)(param_1 + 0x2c8) + 0x100) + 0x20);
          }
          local_48 = (undefined *)CONCAT44(local_48._4_4_,2);
          uVar8 = (**(code **)(*(long *)(lVar14 + 0x30) + 0x118))((long *)(lVar14 + 0x30),&local_48)
          ;
          if ((uVar8 & 1) != 0) {
            if (*(char *)(lVar12 + 100) == '\0') {
              return false;
            }
            if (*(int *)(lVar12 + 0x20) != 3) {
              return false;
            }
          }
        }
      }
    }
    local_34 = *(uint *)(param_1 + 0x2c0);
    if (local_34 == 0xf) {
      return true;
    }
    pbVar10 = &DAT_0417fb5a + (ulong)local_34 * 3;
    if (0xf < local_34) {
      pbVar10 = &DAT_0417fb5a;
    }
    if (*pbVar10 == 0) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_40 = "RegulationType2";
      local_48 = puVar1;
      uVar8 = FUN_0273f0a0(&local_48);
      if ((uVar8 & 1) == 0) {
        pcStack_40 = "RegulationType3";
        local_48 = puVar1;
        FUN_0273f0a0(&local_48);
      }
    }
    else if ((*pbVar10 & 1) != 0) {
      lVar12 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x70);
      if (lVar12 == 0) {
        return false;
      }
      fVar16 = *(float *)(lVar12 + 0x108) + -0.5;
      fVar17 = 0.0;
      if (0.0 <= fVar16) {
        fVar17 = fVar16;
      }
      fVar16 = *(float *)(lVar12 + 0x104) + fVar17 * 2.0;
      fVar17 = 1.0;
      if (fVar16 <= 1.0) {
        fVar17 = fVar16;
      }
      fVar18 = 0.0;
      if (0.0 <= fVar16) {
        fVar18 = fVar17;
      }
      return 0.5 <= fVar18;
    }
    puVar1 = PTR_DAT_04bb32e8;
    uVar8 = FUN_00a8117c(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((uVar8 & 1) == 0) {
      local_34 = *(uint *)(param_1 + 0x2c0);
      lVar12 = *(long *)puVar1;
      pbVar10 = &DAT_0417fb5a + (ulong)local_34 * 3;
      if (0xf < local_34) {
        pbVar10 = &DAT_0417fb5a;
      }
      bVar13 = pbVar10[1];
      bVar15 = pbVar10[2];
      if (*pbVar10 == 0) {
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        pcStack_40 = "RegulationType2";
        local_48 = puVar1;
        uVar8 = FUN_0273f0a0(&local_48);
        if ((uVar8 & 1) == 0) {
          pcStack_40 = "RegulationType3";
          local_48 = puVar1;
          bVar6 = FUN_0273f0a0(&local_48);
          bVar15 = bVar15 + (bVar6 & (char)bVar15 < '\x19');
        }
        else {
          bVar13 = bVar13 - ('\0' < (char)bVar13);
        }
      }
      else if ((*pbVar10 & 1) != 0) {
        return true;
      }
      cVar3 = *(char *)(lVar12 + 0x4064);
      bVar4 = false;
      bVar5 = false;
      if ((char)bVar13 <= cVar3) {
        bVar5 = SBORROW4((int)cVar3,(int)(char)bVar15);
        bVar4 = (int)cVar3 - (int)(char)bVar15 < 0;
      }
      return bVar4 != bVar5;
    }
  }
  return false;
}

