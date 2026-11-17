
void FUN_03069888(long param_1,int param_2)

{
  byte *pbVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int local_68;
  byte local_64;
  byte local_63;
  undefined2 local_62;
  undefined1 local_60;
  undefined1 local_5f;
  int local_5c [2];
  int local_54;
  
  puVar9 = PTR_DAT_04bb5ce0;
  lVar14 = *(long *)(*(long *)(param_1 + 0x210) + 0x580);
  if (lVar14 == 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x37c);
  pbVar1 = (byte *)(param_1 + 0x1f8);
  local_54 = param_2;
  if (param_2 == 1) {
    if (iVar4 != -1) {
      if (*(long *)PTR_DAT_04bb5ce0 == 0) {
        if (iVar4 == -1) {
          return;
        }
      }
      else if (*(int *)(*(long *)PTR_DAT_04bb5ce0 + 0xf90) == iVar4) {
        return;
      }
    }
    FUN_0308c3f0(local_5c,1);
    if (((short)local_5c[0] != -2) && (uVar12 = FUN_0267c100(pbVar1), (uVar12 & 1) == 0)) {
LAB_03069b54:
      *(undefined4 *)(param_1 + 0x1c3d0) = 0x50;
      return;
    }
    local_60 = 0;
    local_68 = FUN_0308cdd0();
    local_64 = *pbVar1;
    if (7 < local_64) {
      local_64 = 0xff;
    }
    bVar10 = FUN_0308bfe0();
    local_63 = (bVar10 ^ 0xff) & 1;
    local_62 = 1;
    local_5f = (short)local_5c[0] != -2;
    iVar11 = FUN_0308d380(iVar4,&local_68);
    if (iVar11 == 2) {
      *(undefined4 *)(param_1 + 0x1c3d0) = 0xc;
      return;
    }
    if ((short)local_5c[0] != -2) {
      FUN_0267d2b0(pbVar1,0,local_5c,0);
    }
    *(undefined4 *)(param_1 + 0x1c338) = 0xffffffff;
    FUN_02bc30b0(param_1 + 0x1c320,lVar14);
    puVar9 = PTR_DAT_04bb5ce0;
    if (iVar4 == -1) {
      return;
    }
    lVar14 = *(long *)PTR_DAT_04bb5ce0;
    if (lVar14 == 0) {
      iVar11 = -1;
    }
    else {
      iVar11 = *(int *)(lVar14 + 0xf9c);
    }
    if (iVar11 == iVar4) {
      FUN_03069c1c(param_1,1,iVar4);
      lVar14 = *(long *)puVar9;
    }
    if (lVar14 == 0) {
      iVar11 = -1;
    }
    else {
      iVar11 = *(int *)(lVar14 + 0xf9c);
    }
    if (iVar11 != iVar4) {
      return;
    }
    goto LAB_03069bf0;
  }
  if (param_2 != 0) {
    return;
  }
  if (iVar4 != -1) {
    if (*(long *)PTR_DAT_04bb5ce0 == 0) {
      if (iVar4 == -1) {
        return;
      }
    }
    else if (*(int *)(*(long *)PTR_DAT_04bb5ce0 + 0xf90) == iVar4) {
      return;
    }
  }
  FUN_0308c3f0(&local_68,0);
  if ((short)local_68 != -2) {
    uVar12 = FUN_0267c100(pbVar1);
    if ((uVar12 & 1) == 0) goto LAB_03069b54;
    FUN_0267d2b0(pbVar1,0,&local_68,0);
  }
  puVar8 = PTR_DAT_04bb37e0;
  puVar7 = PTR_DAT_04bb3170;
  lVar13 = *(long *)puVar9;
  if ((iVar4 == -1) || (lVar13 == 0)) {
LAB_03069a08:
    if (lVar13 != 0) goto LAB_03069a0c;
  }
  else {
    if (*(int *)(lVar13 + 0xf9c) == iVar4) {
      if (*(char *)(lVar13 + 0xee4) != '\0') {
        lVar2 = lVar13 + 0xda0;
        *(undefined1 *)(lVar13 + 0xe9e) = 0;
        uVar3 = *(undefined4 *)puVar8;
        *(undefined4 *)(lVar13 + 0xe98) = *(undefined4 *)(puVar8 + 4);
        uVar6 = *(undefined2 *)puVar7;
        *(undefined4 *)(lVar13 + 0xe94) = uVar3;
        *(undefined2 *)(lVar13 + 0xe9c) = uVar6;
        *(undefined4 *)(lVar13 + 0xf9c) = 0xffffffff;
        FUN_017ef108(lVar2,0,0);
        FUN_017eff3c(lVar2,0,0);
        FUN_017f0b3c(lVar2);
      }
      *(undefined4 *)(param_1 + 0x1c338) = 0xffffffff;
      FUN_02bc30b0(param_1 + 0x1c320,lVar14);
      lVar13 = *(long *)puVar9;
      goto LAB_03069a08;
    }
LAB_03069a0c:
    if (*(char *)(lVar13 + 0xee4) != '\0') {
      *(byte *)(lVar13 + 0xedc) = *(byte *)(lVar13 + 0xedc) & 0xef;
    }
    FUN_017ff790(lVar13 + 0xda0,iVar4,1);
  }
  if ((iVar4 != -1) && (lVar14 = *(long *)(*(long *)(param_1 + 0x210) + 0x580), lVar14 != 0)) {
    local_68 = 0;
    local_5c[0] = 0;
    uVar12 = FUN_03582920(param_1 + 0x340,&local_68,local_5c,iVar4);
    if ((uVar12 & 1) != 0) {
      uVar5 = *(uint *)(param_1 + 0x24c);
      if ((((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(param_1 + 0x358))) &&
          (local_68 == **(int **)(*(long *)(param_1 + 0x360) + (ulong)uVar5 * 8))) &&
         (local_5c[0] != -1)) {
        FUN_02d6ccbc(param_1 + 0x1c320,lVar14,0);
      }
    }
  }
LAB_03069bf0:
  FUN_030694a0(iVar4,6,pbVar1);
  return;
}

