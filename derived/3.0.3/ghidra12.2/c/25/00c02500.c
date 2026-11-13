
int FUN_00c02500(long param_1,uint param_2)

{
  byte *pbVar1;
  float *pfVar2;
  char cVar3;
  byte bVar4;
  undefined *puVar5;
  int iVar6;
  float *pfVar7;
  char *pcVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  byte local_64 [4];
  byte local_48 [4];
  uint local_44;
  
  puVar5 = PTR_DAT_04bb3238;
  local_44 = param_2 & 0xff;
  iVar6 = *(int *)PTR_DAT_04bb3238;
  uVar10 = 0;
  do {
    pcVar12 = "";
    if (uVar10 < 0xd) {
      pcVar12 = (&PTR_s_cTakeOut_0493f6c8)[uVar10];
    }
    (**(code **)(*(long *)(param_1 + 0xe0) + 0x18))(param_1 + 0xe0);
    pcVar8 = *(char **)(param_1 + 0xe8);
    if (pcVar12 == pcVar8) goto LAB_00c02614;
    if (*pcVar12 == *pcVar8) {
      if (*pcVar12 == '\0') goto LAB_00c02614;
      lVar9 = 0x7fffe;
      while( true ) {
        if (pcVar12[1] != pcVar8[1]) break;
        if (pcVar12[1] == '\0') goto LAB_00c02614;
        if (pcVar12[2] != pcVar8[2]) break;
        if (pcVar12[2] == '\0') goto LAB_00c02614;
        if ((lVar9 == 0) || (cVar3 = pcVar12[3], cVar3 != pcVar8[3])) break;
        lVar9 = lVar9 + -3;
        pcVar8 = pcVar8 + 3;
        pcVar12 = pcVar12 + 3;
        if (cVar3 == '\0') goto LAB_00c02614;
      }
    }
    uVar11 = 0xd;
    if ((int)uVar10 < 0xd) {
      uVar11 = uVar10 + 1;
    }
    uVar10 = uVar11;
  } while (uVar11 != 0xd);
  uVar10 = 0;
LAB_00c02614:
  pbVar1 = PTR_DAT_04bb32e0;
  if (*(long *)(param_1 + 8) != 0) {
    pbVar1 = (byte *)(*(long *)(param_1 + 8) + 0x2a8);
  }
  bVar4 = *pbVar1;
  local_48[0] = bVar4;
  if (7 < bVar4) {
    local_48[0] = 0xff;
  }
  if (uVar10 == 0xb) {
    FUN_00bffcc0(local_64);
    if (local_64[0] < 8) {
      lVar9 = *(long *)PTR_DAT_04bb4128;
      local_48[0] = local_64[0];
      pfVar7 = (float *)FUN_0251b3b0(local_48,0);
      if (pfVar7 == (float *)0x0) {
        if (7 < local_48[0]) goto LAB_00c02758;
      }
      else {
        bVar4 = local_48[0];
        if (7 < local_48[0]) {
          bVar4 = 0xff;
        }
        pfVar2 = (float *)(lVar9 + 0x2a4) + (ulong)(uint)(int)(char)bVar4 * 5;
        if (7 < local_48[0]) {
          pfVar2 = (float *)(lVar9 + 0x2a4);
        }
        if (5.0 < SQRT((pfVar7[2] - pfVar2[2]) * (pfVar7[2] - pfVar2[2]) +
                       (*pfVar7 - *pfVar2) * (*pfVar7 - *pfVar2)) && 7 < local_48[0])
        goto LAB_00c02758;
      }
LAB_00c02790:
      if (local_44 != 2) {
        if (local_44 == 1) {
          iVar6 = FUN_020e7e3c(*(undefined8 *)PTR_DAT_04bb4128,local_48);
          return iVar6;
        }
        if (local_44 != 0) {
          return *(int *)puVar5;
        }
      }
      iVar6 = FUN_020e7d28(*(undefined8 *)PTR_DAT_04bb4128,local_48);
      return iVar6;
    }
  }
  else if (bVar4 < 8) {
    lVar9 = *(long *)PTR_DAT_04bb4128;
    pfVar7 = (float *)FUN_0251b3b0(local_48,0);
    if (pfVar7 != (float *)0x0) {
      bVar4 = local_48[0];
      if (7 < local_48[0]) {
        bVar4 = 0xff;
      }
      pfVar2 = (float *)(lVar9 + 0x2a4) + (ulong)(uint)(int)(char)bVar4 * 5;
      if (7 < local_48[0]) {
        pfVar2 = (float *)(lVar9 + 0x2a4);
      }
      if (SQRT((pfVar7[2] - pfVar2[2]) * (pfVar7[2] - pfVar2[2]) +
               (*pfVar7 - *pfVar2) * (*pfVar7 - *pfVar2)) <= 5.0) goto LAB_00c02790;
    }
  }
LAB_00c02758:
  if (iVar6 == 0) {
    lVar9 = DAT_053e4ff0 + 0x344 + (ulong)local_44 * 8;
    if (6 < local_44) {
      lVar9 = DAT_053e4ff0 + 0x344;
    }
    iVar6 = *(int *)(lVar9 + 4);
  }
  return iVar6;
}

