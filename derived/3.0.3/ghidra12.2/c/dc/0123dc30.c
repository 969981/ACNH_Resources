
void FUN_0123dc30(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long *plVar8;
  byte *pbVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  long lVar12;
  uint *puVar13;
  char cVar14;
  uint uVar15;
  uint *puVar16;
  ulong uVar17;
  int *piVar18;
  uint *puVar19;
  undefined *local_40;
  char *pcStack_38;
  
  lVar12 = DAT_05150358;
  uVar7 = FUN_0277d6c4();
  lVar2 = DAT_05150358;
  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if (*(uint *)(lVar12 + 0x1d8) <= uVar7) {
    return;
  }
  puVar19 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8);
  if (puVar19 == (uint *)0x0) {
    return;
  }
  uVar7 = FUN_0277d6c4(param_1);
  puVar6 = PTR_DAT_04bbbc78;
  puVar5 = PTR_DAT_04bbbc70;
  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar2 + 0x1f8);
  if (*(uint *)(lVar2 + 0x1d8) <= uVar7) {
    return;
  }
  puVar13 = *(uint **)(*(long *)(lVar2 + 0x1e0) + (long)(int)uVar7 * 8);
  if (puVar13 == (uint *)0x0) {
    return;
  }
  if (*puVar13 == 0) {
    return;
  }
  cVar14 = *PTR_DAT_04bbbc70;
  do {
    puVar4 = PTR_DAT_04bb2020;
    if (cVar14 == '\0') {
      cVar14 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined4 *)(puVar6 + 0x60) = 0xffffffff;
      *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
      uVar7 = *puVar13;
    }
    else {
      uVar7 = *(uint *)(puVar6 + 0x5c);
      if (-1 < (int)uVar7) {
        if ((byte *)((ulong)uVar7 + (long)puVar13) == (byte *)0x0) {
          return;
        }
        if ((*(byte *)((ulong)uVar7 + (long)puVar13) & 1) == 0) {
          return;
        }
        local_40 = PTR_DAT_04bb2020 + 0x10;
        pcStack_38 = "Grow";
        uVar7 = *puVar19;
        if (uVar7 == 0) goto LAB_0123de80;
        uVar15 = *(uint *)(puVar6 + 0x4c);
        break;
      }
      if (uVar7 != 0xffffffff) {
        return;
      }
      uVar7 = *puVar13;
    }
    if (uVar7 == 0) {
      return;
    }
    puVar16 = (uint *)(ulong)uVar7;
    if (puVar13 == puVar16) {
      return;
    }
    lVar12 = 0xc;
    if (*(char *)((long)puVar13 + (10 - (long)puVar16)) != '\0') {
      lVar12 = 0x1c;
    }
    lVar12 = (long)puVar13 + (lVar12 - (long)puVar16);
    if (lVar12 == 0) {
      return;
    }
    uVar17 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar16));
    *(undefined4 *)(puVar6 + 0x5c) = 0xfffffffe;
    if (uVar17 == 0) {
      return;
    }
    piVar18 = (int *)(lVar12 + 4);
    while (piVar18[-1] != -0x5b4d2993) {
      piVar18 = piVar18 + 2;
      uVar17 = uVar17 - 1;
      if (uVar17 == 0) {
        return;
      }
    }
    iVar1 = 0;
    if (*piVar18 != -1) {
      iVar1 = *piVar18;
    }
    *(int *)(puVar6 + 0x5c) = iVar1;
    if (*puVar13 == 0) {
      return;
    }
  } while( true );
LAB_0123de00:
  if ((int)uVar15 < 0) {
    if ((uVar15 != 0xffffffff) || (lVar12 = (long)puVar19 - (ulong)uVar7, lVar12 == 0))
    goto LAB_0123de80;
    lVar2 = 0xc;
    if (*(char *)(lVar12 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar12 == 0) goto LAB_0123de80;
    uVar17 = (ulong)*(ushort *)(lVar12 + 8);
    *(undefined4 *)(puVar6 + 0x4c) = 0xfffffffe;
    if (uVar17 == 0) goto LAB_0123de80;
    puVar13 = (uint *)(lVar2 + lVar12 + 4);
    while (puVar13[-1] != 0xf5a73337) {
      puVar13 = puVar13 + 2;
      uVar17 = uVar17 - 1;
      if (uVar17 == 0) goto LAB_0123de80;
    }
    uVar15 = 0;
    if (*puVar13 != 0xffffffff) {
      uVar15 = *puVar13;
    }
    *(uint *)(puVar6 + 0x4c) = uVar15;
    uVar7 = *puVar19;
    if (uVar7 == 0) goto LAB_0123de80;
    goto LAB_0123de00;
  }
  if ((undefined1 *)((long)puVar19 + (ulong)uVar15) != (undefined1 *)0x0) {
    uVar10 = *(undefined1 *)((long)puVar19 + (ulong)uVar15);
    goto LAB_0123de84;
  }
LAB_0123de80:
  uVar10 = 0;
LAB_0123de84:
  if (((*(long *)(param_2 + 0x1138) != 0) &&
      (lVar12 = *(long *)(*(long *)(param_2 + 0x1138) + 0x78), lVar12 != 0)) &&
     (plVar8 = *(long **)(lVar12 + 0x48), plVar8 != (long *)0x0)) {
    (**(code **)(*plVar8 + 0x28))(plVar8,&local_40,uVar10);
  }
  uVar7 = *puVar19;
  if (uVar7 == 0) {
    return;
  }
  if (puVar19 == (uint *)(ulong)uVar7) {
    return;
  }
  puVar13 = (uint *)((long)puVar19 - (long)(ulong)uVar7);
  if (*puVar13 == 0) {
    return;
  }
  uVar7 = puVar13[1];
  if (uVar7 == 0) {
    return;
  }
  if ((ulong)(ushort)puVar13[2] == 0) {
    return;
  }
  lVar12 = 0xc;
  if (*(char *)((long)puVar13 + 10) != '\0') {
    lVar12 = 0x1c;
  }
  lVar12 = (long)puVar13 + lVar12 + (ulong)(ushort)puVar13[2] * 8;
  if (lVar12 == 0) {
    return;
  }
  uVar15 = 0;
  if ((ulong)uVar7 != 0) {
    uVar15 = (uint)((ulong)((long)puVar19 - lVar12) / (ulong)uVar7);
  }
  if (*puVar13 <= uVar15) {
    uVar15 = 0xffffffff;
  }
  if (DAT_051503b8 <= uVar15) {
    return;
  }
  uVar3 = *(ushort *)(DAT_051503c0 + (long)(int)uVar15 * 2);
  if (0x2e < uVar3) {
    return;
  }
  switch(uVar3) {
  case 1:
  case 0x20:
    pcStack_38 = "PlantTreeType";
    goto LAB_0123e00c;
  default:
    goto switchD_0123df50_caseD_2;
  case 3:
    pcStack_38 = "PlantTreeType";
    goto LAB_0123e1f8;
  case 5:
    pcStack_38 = "PlantTreeType";
    goto LAB_0123e268;
  case 7:
    pcStack_38 = "PlantTreeType";
    goto LAB_0123e154;
  case 0xb:
    pbVar9 = (byte *)FUN_01246470(puVar19,0x13,0xf5a73337,*(undefined8 *)PTR_DAT_04bbbcb0);
    if (((pbVar9 != (byte *)0x0) && (2 < *pbVar9)) && (uVar17 = FUN_0122351c(), (uVar17 & 1) != 0))
    {
      local_40 = puVar4 + 0x10;
      pcStack_38 = "Grow";
      if (((*(long *)(param_2 + 0x1138) != 0) &&
          (lVar12 = *(long *)(*(long *)(param_2 + 0x1138) + 0x78), lVar12 != 0)) &&
         (plVar8 = *(long **)(lVar12 + 0x48), plVar8 != (long *)0x0)) {
        (**(code **)(*plVar8 + 0x28))(plVar8,&local_40,2);
      }
    }
    pcStack_38 = "PlantBushType";
LAB_0123e00c:
    if (*(long *)(param_2 + 0x1138) == 0) {
      return;
    }
    lVar12 = *(long *)(*(long *)(param_2 + 0x1138) + 0x78);
    if (lVar12 == 0) {
      return;
    }
    plVar8 = *(long **)(lVar12 + 0x48);
    if (plVar8 == (long *)0x0) {
      return;
    }
    lVar12 = *plVar8;
    uVar11 = 0;
    break;
  case 0xc:
    pbVar9 = (byte *)FUN_01246470(puVar19,0x13,0xf5a73337,*(undefined8 *)PTR_DAT_04bbbcb0);
    if (((pbVar9 != (byte *)0x0) && (2 < *pbVar9)) && (uVar17 = FUN_0122351c(), (uVar17 & 1) != 0))
    {
      local_40 = puVar4 + 0x10;
      pcStack_38 = "Grow";
      if (((*(long *)(param_2 + 0x1138) != 0) &&
          (lVar12 = *(long *)(*(long *)(param_2 + 0x1138) + 0x78), lVar12 != 0)) &&
         (plVar8 = *(long **)(lVar12 + 0x48), plVar8 != (long *)0x0)) {
        (**(code **)(*plVar8 + 0x28))(plVar8,&local_40,2);
      }
    }
    pcStack_38 = "PlantBushType";
    if (*(long *)(param_2 + 0x1138) == 0) {
      return;
    }
    lVar12 = *(long *)(*(long *)(param_2 + 0x1138) + 0x78);
    if (lVar12 == 0) {
      return;
    }
    plVar8 = *(long **)(lVar12 + 0x48);
    if (plVar8 == (long *)0x0) {
      return;
    }
    lVar12 = *plVar8;
    uVar11 = 6;
    break;
  case 0xd:
    pbVar9 = (byte *)FUN_01246470(puVar19,0x13,0xf5a73337,*(undefined8 *)PTR_DAT_04bbbcb0);
    if (((pbVar9 != (byte *)0x0) && (2 < *pbVar9)) && (uVar17 = FUN_0122351c(), (uVar17 & 1) != 0))
    {
      local_40 = puVar4 + 0x10;
      pcStack_38 = "Grow";
      if (((*(long *)(param_2 + 0x1138) != 0) &&
          (lVar12 = *(long *)(*(long *)(param_2 + 0x1138) + 0x78), lVar12 != 0)) &&
         (plVar8 = *(long **)(lVar12 + 0x48), plVar8 != (long *)0x0)) {
        (**(code **)(*plVar8 + 0x28))(plVar8,&local_40,2);
      }
    }
    pcStack_38 = "PlantBushType";
LAB_0123e154:
    if (*(long *)(param_2 + 0x1138) == 0) {
      return;
    }
    lVar12 = *(long *)(*(long *)(param_2 + 0x1138) + 0x78);
    if (lVar12 == 0) {
      return;
    }
    plVar8 = *(long **)(lVar12 + 0x48);
    if (plVar8 == (long *)0x0) {
      return;
    }
    lVar12 = *plVar8;
    uVar11 = 3;
    break;
  case 0xe:
    pbVar9 = (byte *)FUN_01246470(puVar19,0x13,0xf5a73337,*(undefined8 *)PTR_DAT_04bbbcb0);
    if (((pbVar9 != (byte *)0x0) && (2 < *pbVar9)) && (uVar17 = FUN_0122351c(), (uVar17 & 1) != 0))
    {
      local_40 = puVar4 + 0x10;
      pcStack_38 = "Grow";
      if (((*(long *)(param_2 + 0x1138) != 0) &&
          (lVar12 = *(long *)(*(long *)(param_2 + 0x1138) + 0x78), lVar12 != 0)) &&
         (plVar8 = *(long **)(lVar12 + 0x48), plVar8 != (long *)0x0)) {
        (**(code **)(*plVar8 + 0x28))(plVar8,&local_40,2);
      }
    }
    pcStack_38 = "PlantBushType";
LAB_0123e1f8:
    if (*(long *)(param_2 + 0x1138) == 0) {
      return;
    }
    lVar12 = *(long *)(*(long *)(param_2 + 0x1138) + 0x78);
    if (lVar12 == 0) {
      return;
    }
    plVar8 = *(long **)(lVar12 + 0x48);
    if (plVar8 == (long *)0x0) {
      return;
    }
    lVar12 = *plVar8;
    uVar11 = 1;
    break;
  case 0xf:
    pcStack_38 = "PlantBushType";
    if (*(long *)(param_2 + 0x1138) == 0) {
      return;
    }
    lVar12 = *(long *)(*(long *)(param_2 + 0x1138) + 0x78);
    if (lVar12 == 0) {
      return;
    }
    plVar8 = *(long **)(lVar12 + 0x48);
    if (plVar8 == (long *)0x0) {
      return;
    }
    lVar12 = *plVar8;
    uVar11 = 4;
    break;
  case 0x10:
    pcStack_38 = "PlantBushType";
LAB_0123e268:
    if (*(long *)(param_2 + 0x1138) == 0) {
      return;
    }
    lVar12 = *(long *)(*(long *)(param_2 + 0x1138) + 0x78);
    if (lVar12 == 0) {
      return;
    }
    plVar8 = *(long **)(lVar12 + 0x48);
    if (plVar8 == (long *)0x0) {
      return;
    }
    lVar12 = *plVar8;
    uVar11 = 2;
    break;
  case 0x11:
    pbVar9 = (byte *)FUN_01246470(puVar19,0x13,0xf5a73337,*(undefined8 *)PTR_DAT_04bbbcb0);
    if (((pbVar9 != (byte *)0x0) && (2 < *pbVar9)) && (uVar17 = FUN_0122351c(), (uVar17 & 1) != 0))
    {
      local_40 = puVar4 + 0x10;
      pcStack_38 = "Grow";
      if (((*(long *)(param_2 + 0x1138) != 0) &&
          (lVar12 = *(long *)(*(long *)(param_2 + 0x1138) + 0x78), lVar12 != 0)) &&
         (plVar8 = *(long **)(lVar12 + 0x48), plVar8 != (long *)0x0)) {
        (**(code **)(*plVar8 + 0x28))(plVar8,&local_40,2);
      }
    }
    pcStack_38 = "PlantBushType";
    if (*(long *)(param_2 + 0x1138) == 0) {
      return;
    }
    lVar12 = *(long *)(*(long *)(param_2 + 0x1138) + 0x78);
    if (lVar12 == 0) {
      return;
    }
    plVar8 = *(long **)(lVar12 + 0x48);
    if (plVar8 == (long *)0x0) {
      return;
    }
    lVar12 = *plVar8;
    uVar11 = 5;
  }
  local_40 = puVar4 + 0x10;
  (**(code **)(lVar12 + 0x28))(plVar8,&local_40,uVar11);
switchD_0123df50_caseD_2:
  return;
}

