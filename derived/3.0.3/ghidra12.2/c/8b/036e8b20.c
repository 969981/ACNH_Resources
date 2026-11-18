
void FUN_036e8b20(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  void *pvVar11;
  long lVar12;
  uint *puVar13;
  byte *pbVar14;
  ulong uVar15;
  byte local_78 [8];
  undefined *local_70;
  char *local_68;
  
  *param_1 = (long)(PTR_DAT_04bbfe60 + 0x10);
  memset(param_1 + 1,0,0x754);
  uVar6 = nn::os::GetSystemTick();
  uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)param_1 + 0x75c) = uVar6;
  uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 0xec) = uVar6;
  uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x764) = uVar6;
  *(uint *)(param_1 + 0xed) = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 4;
  pvVar11 = (void *)FUN_01a451fc(param_1);
  memset(pvVar11,0,0x754);
  pvVar11 = (void *)(**(code **)(*param_1 + 0x18))(param_1);
  memset(pvVar11,0,0x754);
  uVar6 = DAT_05ac1978;
  if ((int)DAT_05ac1978 < 1) {
    if ((DAT_05ac1868 == 0) || (*(ushort **)(DAT_05ac1868 + 8) == (ushort *)0x0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = (uint)**(ushort **)(DAT_05ac1868 + 8);
    }
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_68 = "CoordinatorGrade";
  local_70 = puVar1;
  iVar7 = FUN_02758850(&local_70);
  local_68 = "WorkModeNewItemGrade";
  local_70 = puVar1;
  iVar8 = FUN_02758850(&local_70);
  iVar2 = 0;
  if (iVar8 != 0) {
    iVar2 = iVar8 + -1;
  }
  if ((uVar6 & 0xffff) != 0) {
    uVar15 = 0;
    puVar1 = PTR_DAT_04bcad28 + 0x10;
    do {
      if ((int)DAT_05ac1978 < 1) {
        if ((((DAT_05ac1868 != 0) &&
             (puVar13 = *(uint **)(DAT_05ac1868 + 8), puVar13 != (uint *)0x0)) &&
            ((DAT_05ac1880 <= uVar15 || (*(char *)(DAT_05ac1888 + uVar15) != '\0')))) &&
           (((uVar15 < *puVar13 && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)))) {
          iVar9 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            iVar9 = 0x1c;
          }
          local_68 = (char *)((ulong)(puVar13[1] * (int)uVar15 + (uint)(ushort)puVar13[2] * 8 +
                                     iVar9) + (long)puVar13);
          goto joined_r0x036e8dbc;
        }
      }
      else if (uVar15 < DAT_05ac1978) {
        uVar3 = uVar15;
        if (DAT_05ac1968 <= uVar15) {
          uVar3 = 0;
        }
        local_68 = *(char **)(DAT_05ac1970 + uVar3 * 8);
joined_r0x036e8dbc:
        if (local_68 != (char *)0x0) {
          local_70 = puVar1;
          iVar9 = FUN_03789370(&local_70);
          FUN_03789240(local_78,&local_70);
          if ((iVar9 <= iVar7) && (iVar8 == 0 || iVar2 < iVar9)) {
            FUN_0277dedc(local_78);
            lVar12 = (**(code **)(*param_1 + 0x18))(param_1);
            uVar10 = FUN_0277d6c4(local_78);
            if ((uVar10 >> 3 & 0x1fff) < 0x753) {
              lVar5 = (ulong)((uVar10 & 0xffff) >> 5) * 4;
              *(uint *)(lVar12 + lVar5) = *(uint *)(lVar12 + lVar5) | 1 << (ulong)(uVar10 & 0x1f);
            }
          }
        }
      }
      uVar15 = uVar15 + 1;
    } while ((uVar6 & 0xffff) != uVar15);
  }
  lVar12 = *(long *)PTR_DAT_04bb39b0;
  pbVar14 = PTR_DAT_04bb32e0;
  if (lVar12 == 0) {
    bVar4 = *PTR_DAT_04bb32e0;
joined_r0x036e8e48:
    if (7 < bVar4) {
LAB_036e8e4c:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar12 = **(long **)PTR_DAT_04bb27d0;
        bVar4 = *(byte *)(lVar12 + 0x473);
        pbVar14 = PTR_DAT_04bb5038;
        if ((long)(char)bVar4 != 0xffffffffffffffff) {
          puVar13 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
          if (7 < bVar4) {
            puVar13 = (uint *)(lVar12 + 0x48);
          }
          if ((*puVar13 & 8) != 0) {
            pbVar14 = (byte *)(lVar12 + 0x471);
          }
        }
        local_78[0] = *pbVar14;
        if (local_78[0] < 8) goto LAB_036e8ecc;
      }
      pbVar14 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar12 + 0x15c) != 0) {
      pbVar14 = (byte *)(lVar12 + 0x158);
    }
    if (7 < *pbVar14) {
      if ((*(int *)(lVar12 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar14 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        bVar4 = *pbVar14;
        goto joined_r0x036e8e48;
      }
      goto LAB_036e8e4c;
    }
  }
  local_78[0] = *pbVar14;
  if (7 < local_78[0]) {
    local_78[0] = 0xff;
  }
LAB_036e8ecc:
  local_70 = PTR_DAT_04bb2020 + 0x10;
  local_68 = "WorkModeNewItemLook";
  FUN_02757de8(local_78,&local_70,1);
  return;
}

