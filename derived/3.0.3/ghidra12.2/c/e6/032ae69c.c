
void FUN_032ae69c(long param_1,long param_2)

{
  char cVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  long *plVar10;
  uint uVar11;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  local_44 = 0;
  if ((*(byte *)(param_1 + 0x1c8) >> 2 & 1) == 0) {
    return;
  }
  uVar3 = *(uint *)(param_1 + 0x38);
  uVar11 = *(uint *)(param_2 + 4);
  iVar4 = *(int *)(param_1 + 0x3c);
  if (iVar4 == 5) {
LAB_032ae6f0:
    local_40 = uVar11 >> 4 & 0xf0000;
LAB_032ae704:
    local_40 = local_40 | uVar11;
  }
  else {
    if (iVar4 == 4) {
      local_40 = (uVar11 & 0xf00000) << 4;
      goto LAB_032ae704;
    }
    local_40 = uVar11;
    if (iVar4 == 2) goto LAB_032ae6f0;
  }
  iVar4 = *(int *)(param_1 + 0x40);
  if (iVar4 == 5) {
LAB_032ae724:
    uVar11 = uVar11 >> 8 & 0xf0000;
LAB_032ae738:
    local_40 = local_40 | uVar11;
  }
  else {
    if (iVar4 == 3) {
      uVar11 = uVar11 >> 4 & 0xf00000;
      goto LAB_032ae738;
    }
    if (iVar4 == 2) goto LAB_032ae724;
  }
  local_40 = local_40 & uVar3;
  uVar11 = *(uint *)(param_2 + 0xc);
  iVar4 = *(int *)(param_1 + 0x3c);
  if (iVar4 == 5) {
LAB_032ae768:
    local_3c = uVar11 >> 4 & 0xf0000;
LAB_032ae77c:
    local_3c = local_3c | uVar11;
  }
  else {
    if (iVar4 == 4) {
      local_3c = (uVar11 & 0xf00000) << 4;
      goto LAB_032ae77c;
    }
    local_3c = uVar11;
    if (iVar4 == 2) goto LAB_032ae768;
  }
  iVar4 = *(int *)(param_1 + 0x40);
  if (iVar4 == 5) {
LAB_032ae79c:
    uVar11 = uVar11 >> 8 & 0xf0000;
LAB_032ae7b0:
    local_3c = local_3c | uVar11;
  }
  else {
    if (iVar4 == 3) {
      uVar11 = uVar11 >> 4 & 0xf00000;
      goto LAB_032ae7b0;
    }
    if (iVar4 == 2) goto LAB_032ae79c;
  }
  local_3c = local_3c & uVar3;
  uVar11 = *(uint *)(param_2 + 8);
  uVar5 = *(uint *)(param_1 + 0x3c);
  if (uVar5 == 5) {
LAB_032ae7e0:
    local_38 = uVar11 >> 4 & 0xf0000;
LAB_032ae7f4:
    local_38 = local_38 | uVar11;
  }
  else {
    if (uVar5 == 4) {
      local_38 = (uVar11 & 0xf00000) << 4;
      goto LAB_032ae7f4;
    }
    local_38 = uVar11;
    if (uVar5 == 2) goto LAB_032ae7e0;
  }
  uVar6 = *(uint *)(param_1 + 0x40);
  if (uVar6 == 5) {
LAB_032ae814:
    uVar11 = uVar11 >> 8 & 0xf0000;
LAB_032ae828:
    local_38 = local_38 | uVar11;
  }
  else {
    if (uVar6 == 3) {
      uVar11 = uVar11 >> 4 & 0xf00000;
      goto LAB_032ae828;
    }
    if (uVar6 == 2) goto LAB_032ae814;
  }
  local_38 = local_38 & uVar3;
  local_34 = local_38;
  if (local_38 == 0) goto LAB_032ae878;
  cVar7 = *(char *)(param_1 + 0x1c9);
  cVar1 = cVar7 + '\x01';
  bVar8 = *(byte *)(param_1 + 0x1ca);
  *(char *)(param_1 + 0x1c9) = cVar1;
  bVar9 = cVar7 + 1;
  if (bVar8 == bVar9) {
LAB_032ae850:
    *(byte *)(param_1 + 0x1c9) = bVar8;
  }
  else {
    if (bVar8 < bVar9) {
      bVar9 = *(byte *)(param_1 + 0x1cb);
      uVar3 = (uint)(byte)(cVar1 - bVar8);
      uVar11 = 0;
      if (bVar9 != 0) {
        uVar11 = uVar3 / bVar9;
      }
      if (uVar3 == uVar11 * bVar9) goto LAB_032ae850;
    }
    local_34 = 0;
  }
LAB_032ae878:
  pfVar2 = (float *)(param_2 + 0x14);
  if ((uVar5 & 0xfffffffb) != 1) {
    pfVar2 = (float *)PTR_DAT_04bb2f48;
  }
  local_30 = *pfVar2;
  local_2c = pfVar2[1];
  pfVar2 = (float *)(param_2 + 0x1c);
  if ((uVar6 & 0xfffffffb) != 1) {
    pfVar2 = (float *)PTR_DAT_04bb2f48;
  }
  local_28 = *pfVar2;
  local_24 = pfVar2[1];
  if (local_40 != 0) {
    plVar10 = *(long **)(param_1 + 0x50);
    local_44 = (uint)(*(byte *)(param_1 + 0x1c8) >> 2 & 1);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_44);
    }
    *(undefined1 *)(param_1 + 0x1c9) = 0;
  }
  if (local_3c != 0) {
    plVar10 = *(long **)(param_1 + 0x80);
    local_44 = CONCAT31(local_44._1_3_,*(byte *)(param_1 + 0x1c8) >> 2) & 0xffffff01;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_44);
    }
    *(undefined1 *)(param_1 + 0x1c9) = 0;
  }
  if (local_38 != 0) {
    plVar10 = *(long **)(param_1 + 0xb0);
    local_44 = CONCAT31(local_44._1_3_,*(byte *)(param_1 + 0x1c8) >> 2) & 0xffffff01;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_44);
    }
  }
  if (local_34 != 0) {
    plVar10 = *(long **)(param_1 + 0xe0);
    local_44 = CONCAT31(local_44._1_3_,*(byte *)(param_1 + 0x1c8) >> 2) & 0xffffff01;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_44);
    }
  }
  if ((local_30 != 0.0) || (local_2c != 0.0)) {
    plVar10 = *(long **)(param_1 + 0x110);
    local_44 = CONCAT31(local_44._1_3_,*(byte *)(param_1 + 0x1c8) >> 2) & 0xffffff01;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_44);
    }
  }
  if ((local_28 != 0.0) || (local_24 != 0.0)) {
    plVar10 = *(long **)(param_1 + 0x140);
    local_44 = CONCAT31(local_44._1_3_,*(byte *)(param_1 + 0x1c8) >> 2) & 0xffffff01;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_44);
    }
  }
  return;
}

