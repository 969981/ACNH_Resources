
void FUN_02164548(long *param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  float *pfVar12;
  byte *pbVar13;
  long lVar14;
  uint uVar15;
  byte bVar16;
  float fVar17;
  undefined *local_60;
  char *pcStack_58;
  byte local_34 [4];
  
  if ((*(long *)PTR_DAT_04bb7ff8 != 0) && (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) != 0)) {
    return;
  }
  lVar14 = *(long *)PTR_DAT_04bb39b0;
  pbVar13 = PTR_DAT_04bb32e0;
  if (lVar14 == 0) {
LAB_021645e0:
    if (*pbVar13 < 8) goto LAB_02164658;
LAB_021645ec:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02164650:
      pbVar13 = PTR_DAT_04bb5038;
      goto LAB_02164658;
    }
    lVar14 = **(long **)PTR_DAT_04bb27d0;
    bVar7 = *(byte *)(lVar14 + 0x473);
    pbVar13 = PTR_DAT_04bb5038;
    if ((long)(char)bVar7 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
      if (7 < bVar7) {
        puVar2 = (uint *)(lVar14 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar13 = (byte *)(lVar14 + 0x471);
      }
    }
    local_34[0] = *pbVar13;
    if (7 < local_34[0]) goto LAB_02164650;
  }
  else {
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar13 = (byte *)(lVar14 + 0x158);
    }
    if (7 < *pbVar13) {
      if ((*(int *)(lVar14 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_021645e0;
      }
      goto LAB_021645ec;
    }
LAB_02164658:
    local_34[0] = *pbVar13;
    if (7 < local_34[0]) {
      return;
    }
  }
  uVar11 = FUN_00a738a0(local_34,0);
  if ((uVar11 & 1) != 0) {
    return;
  }
  if (*(int *)((long)param_1 + 0x77f4) == 0x10) {
    return;
  }
  if ((int)param_1[0xef6] == 0x10) {
    return;
  }
  pfVar12 = (float *)FUN_0251b3b0(local_34,0);
  if (pfVar12 == (float *)0x0) {
    return;
  }
  local_60 = (undefined *)CONCAT44(local_60._4_4_,4);
  *(uint *)(param_1[1] + 0x69c) = *(uint *)(param_1[1] + 0x69c) | 0x10;
  lVar14 = param_1[1];
  (**(code **)(*(long *)(lVar14 + 0x3e0) + 0x18))(lVar14 + 0x3e0);
  (**(code **)(*(long *)(lVar14 + 0x3e0) + 0x18))(lVar14 + 0x3e0);
  puVar5 = PTR_DAT_04bb2020;
  if (*(undefined1 **)(lVar14 + 1000) == &DAT_04066e12) {
    if (*(long *)PTR_DAT_04bb5ce0 == 0) {
      fVar17 = 40.0;
    }
    else {
      fVar17 = *(float *)(*(long *)PTR_DAT_04bb5ce0 + 0xd74);
    }
LAB_021647bc:
    if (fVar17 <= *pfVar12) {
      return;
    }
    uVar15 = 2;
  }
  else {
    uVar11 = 0;
    bVar6 = true;
    do {
      cVar4 = (*(undefined1 **)(lVar14 + 1000))[uVar11];
      if (cVar4 != (&DAT_04066e12)[uVar11]) break;
      if (cVar4 == '\0') {
        if (*(long *)PTR_DAT_04bb5ce0 == 0) {
          fVar17 = 40.0;
        }
        else {
          fVar17 = *(float *)(*(long *)PTR_DAT_04bb5ce0 + 0xd74);
        }
        if (!bVar6) goto LAB_021647d0;
        goto LAB_021647bc;
      }
      bVar6 = uVar11 < 0x80000;
      uVar11 = uVar11 + 1;
    } while (uVar11 != 0x80001);
    if (*(long *)PTR_DAT_04bb5ce0 == 0) {
      fVar17 = 40.0;
    }
    else {
      fVar17 = *(float *)(*(long *)PTR_DAT_04bb5ce0 + 0xd74);
    }
LAB_021647d0:
    if (*pfVar12 < fVar17) {
      return;
    }
    uVar15 = 3;
  }
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "OfficeTalkSitDown";
  uVar8 = FUN_02753180(local_34,&local_60);
  uVar9 = FUN_0255b714(local_34,1);
  iVar10 = FUN_0251f564(local_34);
  if (uVar8 - 2 < 2) {
    if (((uint)(iVar10 != 2) & (uVar9 ^ 0xffffffff)) == 0) {
      if (uVar15 != uVar8) {
        uVar15 = 1;
      }
      goto LAB_02164860;
    }
  }
  else {
    if (uVar8 == 1) goto LAB_02164860;
    if (uVar8 == 0) {
      uVar15 = uVar9 & 1;
      goto LAB_02164860;
    }
  }
  uVar15 = 0;
LAB_02164860:
  local_60 = puVar5 + 0x10;
  pcStack_58 = "OfficeTalkSitDown";
  FUN_027533a8(local_34,&local_60,uVar15);
  lVar14 = FUN_021649a0(param_1);
  if (lVar14 != 0) {
    piVar1 = (int *)(lVar14 + 0xb0f4);
    if (uVar15 != 0) {
      iVar3 = *piVar1;
      iVar10 = iVar3;
      if (0xfe < iVar3) {
        iVar10 = 0xff;
      }
      *piVar1 = iVar10 + 1;
      bVar7 = FUN_0256a4b8(local_34,1,*(undefined4 *)PTR_DAT_04bb3238);
      if (uVar15 == 1) {
        bVar7 = 0;
      }
      else {
        bVar7 = bVar7 & 0xe < iVar3;
      }
      bVar16 = local_34[0];
      if (7 < local_34[0]) {
        bVar16 = 0xff;
      }
      local_60 = (undefined *)CONCAT71(local_60._1_7_,bVar16);
      uVar11 = FUN_01e3e9e4(param_1[1],&local_60,1);
      bVar16 = 0;
      if (uVar15 != 1) {
        bVar16 = bVar7 ^ 1;
      }
      if (bVar16 != 0) {
        return;
      }
      if ((uVar11 & 1) == 0) {
        return;
      }
      (**(code **)(*param_1 + 0x78))(param_1);
      FUN_02164300(param_1,param_1 + 0x1040);
      FUN_021643e0(param_1,param_1 + 0x104b);
      FUN_00a6f830(param_1[1],local_34,0);
      *(uint *)(param_1[1] + 0x69c) = *(uint *)(param_1[1] + 0x69c) & 0xffffffef;
      param_1[0x15ab] = param_1[0x15ab] | 0x100000;
    }
    *piVar1 = 0;
  }
  return;
}

