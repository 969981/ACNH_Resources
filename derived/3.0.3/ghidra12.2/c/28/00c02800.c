
bool FUN_00c02800(long param_1,char param_2)

{
  float *pfVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  float *pfVar7;
  char *pcVar8;
  byte *pbVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  byte local_54 [4];
  
  uVar11 = 0;
  do {
    pcVar13 = "";
    if (uVar11 < 0xd) {
      pcVar13 = (&PTR_s_cTakeOut_0493f6c8)[uVar11];
    }
    (**(code **)(*(long *)(param_1 + 0xe0) + 0x18))(param_1 + 0xe0);
    pcVar8 = *(char **)(param_1 + 0xe8);
    if (pcVar13 == pcVar8) {
LAB_00c028f0:
      if (uVar11 == 0xb) {
        bVar5 = true;
        pbVar9 = (byte *)(*(long *)PTR_DAT_04bb4128 + 0x269);
        lVar10 = *(long *)PTR_DAT_04bb4128;
        goto LAB_00c02938;
      }
      break;
    }
    if (*pcVar13 == *pcVar8) {
      if (*pcVar13 == '\0') goto LAB_00c028f0;
      lVar10 = 0x7fffe;
      while( true ) {
        if (pcVar13[1] != pcVar8[1]) break;
        if (pcVar13[1] == '\0') goto LAB_00c028f0;
        if (pcVar13[2] != pcVar8[2]) break;
        if (pcVar13[2] == '\0') goto LAB_00c028f0;
        if ((lVar10 == 0) || (cVar3 = pcVar13[3], cVar3 != pcVar8[3])) break;
        lVar10 = lVar10 + -3;
        pcVar8 = pcVar8 + 3;
        pcVar13 = pcVar13 + 3;
        if (cVar3 == '\0') goto LAB_00c028f0;
      }
    }
    uVar12 = 0xd;
    if ((int)uVar11 < 0xd) {
      uVar12 = uVar11 + 1;
    }
    uVar11 = uVar12;
  } while (uVar12 != 0xd);
  bVar5 = false;
  pbVar9 = PTR_DAT_04bb32e0;
  if (*(long *)(param_1 + 8) != 0) {
    pbVar9 = (byte *)(*(long *)(param_1 + 8) + 0x2a8);
  }
  lVar10 = DAT_053e4ff0;
LAB_00c02938:
  local_54[0] = *pbVar9;
  if (local_54[0] < 8) {
    pfVar7 = (float *)FUN_0251b3b0(local_54,0);
    if (pfVar7 == (float *)0x0) goto LAB_00c029b8;
    bVar2 = local_54[0];
    if (7 < local_54[0]) {
      bVar2 = 0xff;
    }
    pfVar1 = (float *)(lVar10 + 0x2a4) + (ulong)(uint)(int)(char)bVar2 * 5;
    if (7 < local_54[0]) {
      pfVar1 = (float *)(lVar10 + 0x2a4);
    }
    if (5.0 < SQRT((pfVar7[2] - pfVar1[2]) * (pfVar7[2] - pfVar1[2]) +
                   (*pfVar7 - *pfVar1) * (*pfVar7 - *pfVar1))) goto LAB_00c029b8;
  }
  else {
    local_54[0] = 0xff;
LAB_00c029b8:
    bVar4 = false;
    if (local_54[0] < 8) {
      bVar4 = bVar5;
    }
    if (!bVar4) {
      return false;
    }
  }
  if (param_2 != '\x02') {
    if (param_2 == '\x01') {
      iVar6 = FUN_020e7e3c(*(undefined8 *)PTR_DAT_04bb4128,local_54);
      goto LAB_00c02a28;
    }
    iVar6 = DAT_04c9a0c8;
    if (param_2 != '\0') goto LAB_00c02a28;
  }
  iVar6 = FUN_020e7d28(*(undefined8 *)PTR_DAT_04bb4128,local_54);
LAB_00c02a28:
  return iVar6 != 0;
}

