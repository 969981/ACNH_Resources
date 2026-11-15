
undefined8 FUN_0219dee4(long param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  undefined4 local_44;
  
  uVar6 = FUN_0219e4b0();
  puVar4 = PTR_DAT_04bb27d0;
  if (0x22 < ((uint)uVar6 & 0xff)) {
    return 0;
  }
  uVar3 = (uint)uVar6 >> 8;
  if ((uint)(byte)PTR_DAT_04bc27f0[uVar6 & 0xff] < (uVar3 & 0xff)) {
    return 0;
  }
  if (((uint)(&DAT_053e6eb8)[uVar6 & 0xff] >> (ulong)(uVar3 & 0x1f) & 1) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0xaf9) != '\0') {
    lVar7 = **(long **)PTR_DAT_04bb27d0;
    bVar2 = *(byte *)(lVar7 + 0x473);
    if ((long)(char)bVar2 == 0xffffffffffffffff) {
LAB_0219df98:
      piVar8 = (int *)(param_1 + 0xafc);
    }
    else {
      pbVar1 = (byte *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
      if (7 < bVar2) {
        pbVar1 = (byte *)(lVar7 + 0x48);
      }
      if (((*pbVar1 >> 3 & 1) == 0) || (*(byte *)(lVar7 + 0x472) == bVar2)) goto LAB_0219df98;
      piVar8 = (int *)(param_1 + 0xb00);
    }
    if (*piVar8 != 0x244db4da) {
      local_44 = 0;
      uVar6 = FUN_02b64e40(&local_44);
      if (((uVar6 & 1) != 0) && (iVar5 = FUN_026641e0(local_44,0), iVar5 == param_2)) {
        return 1;
      }
    }
  }
  if (*(char *)(param_1 + 0x1699) != '\0') {
    lVar7 = **(long **)puVar4;
    bVar2 = *(byte *)(lVar7 + 0x473);
    if ((long)(char)bVar2 == 0xffffffffffffffff) {
LAB_0219e018:
      lVar7 = 0x169c;
    }
    else {
      pbVar1 = (byte *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
      if (7 < bVar2) {
        pbVar1 = (byte *)(lVar7 + 0x48);
      }
      if (((*pbVar1 >> 3 & 1) == 0) || (*(byte *)(lVar7 + 0x472) == bVar2)) goto LAB_0219e018;
      lVar7 = 0x16a0;
    }
    if (*(int *)(param_1 + lVar7) != 0x244db4da) {
      local_44 = 0;
      uVar6 = FUN_02b64e40(&local_44);
      if (((uVar6 & 1) != 0) && (iVar5 = FUN_026641e0(local_44,0), iVar5 == param_2)) {
        return 1;
      }
    }
  }
  if (*(char *)(param_1 + 0x2239) != '\0') {
    lVar7 = **(long **)puVar4;
    bVar2 = *(byte *)(lVar7 + 0x473);
    if ((long)(char)bVar2 == 0xffffffffffffffff) {
LAB_0219e094:
      lVar7 = 0x223c;
    }
    else {
      pbVar1 = (byte *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
      if (7 < bVar2) {
        pbVar1 = (byte *)(lVar7 + 0x48);
      }
      if (((*pbVar1 >> 3 & 1) == 0) || (*(byte *)(lVar7 + 0x472) == bVar2)) goto LAB_0219e094;
      lVar7 = 0x2240;
    }
    if (*(int *)(param_1 + lVar7) != 0x244db4da) {
      local_44 = 0;
      uVar6 = FUN_02b64e40(&local_44);
      if (((uVar6 & 1) != 0) && (iVar5 = FUN_026641e0(local_44,0), iVar5 == param_2)) {
        return 1;
      }
    }
  }
  if (*(char *)(param_1 + 0x2dd9) != '\0') {
    lVar7 = **(long **)puVar4;
    bVar2 = *(byte *)(lVar7 + 0x473);
    if ((long)(char)bVar2 == 0xffffffffffffffff) {
LAB_0219e118:
      lVar7 = 0x2ddc;
    }
    else {
      pbVar1 = (byte *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
      if (7 < bVar2) {
        pbVar1 = (byte *)(lVar7 + 0x48);
      }
      if (((*pbVar1 >> 3 & 1) == 0) || (*(byte *)(lVar7 + 0x472) == bVar2)) goto LAB_0219e118;
      lVar7 = 0x2de0;
    }
    if (*(int *)(param_1 + lVar7) != 0x244db4da) {
      local_44 = 0;
      uVar6 = FUN_02b64e40(&local_44);
      if (((uVar6 & 1) != 0) && (iVar5 = FUN_026641e0(local_44,0), iVar5 == param_2)) {
        return 1;
      }
    }
  }
  if (*(char *)(param_1 + 0x3979) != '\0') {
    lVar7 = **(long **)puVar4;
    bVar2 = *(byte *)(lVar7 + 0x473);
    if ((long)(char)bVar2 == 0xffffffffffffffff) {
LAB_0219e194:
      lVar7 = 0x397c;
    }
    else {
      pbVar1 = (byte *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
      if (7 < bVar2) {
        pbVar1 = (byte *)(lVar7 + 0x48);
      }
      if (((*pbVar1 >> 3 & 1) == 0) || (*(byte *)(lVar7 + 0x472) == bVar2)) goto LAB_0219e194;
      lVar7 = 0x3980;
    }
    if (*(int *)(param_1 + lVar7) != 0x244db4da) {
      local_44 = 0;
      uVar6 = FUN_02b64e40(&local_44);
      if (((uVar6 & 1) != 0) && (iVar5 = FUN_026641e0(local_44,0), iVar5 == param_2)) {
        return 1;
      }
    }
  }
  if (*(char *)(param_1 + 0x4519) != '\0') {
    lVar7 = **(long **)puVar4;
    bVar2 = *(byte *)(lVar7 + 0x473);
    if ((long)(char)bVar2 == 0xffffffffffffffff) {
LAB_0219e218:
      piVar8 = (int *)(param_1 + 0x451c);
    }
    else {
      pbVar1 = (byte *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
      if (7 < bVar2) {
        pbVar1 = (byte *)(lVar7 + 0x48);
      }
      if (((*pbVar1 >> 3 & 1) == 0) || (*(byte *)(lVar7 + 0x472) == bVar2)) goto LAB_0219e218;
      piVar8 = (int *)(param_1 + 0x4520);
    }
    if (*piVar8 != 0x244db4da) {
      local_44 = 0;
      uVar6 = FUN_02b64e40(&local_44);
      if (((uVar6 & 1) != 0) && (iVar5 = FUN_026641e0(local_44,0), iVar5 == param_2)) {
        return 1;
      }
    }
  }
  piVar8 = (int *)(param_1 + 0x50bc);
  if (*(char *)(param_1 + 0x50b9) != '\0') {
    lVar7 = **(long **)puVar4;
    bVar2 = *(byte *)(lVar7 + 0x473);
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      pbVar1 = (byte *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
      if (7 < bVar2) {
        pbVar1 = (byte *)(lVar7 + 0x48);
      }
      if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar7 + 0x472) != bVar2)) {
        piVar8 = (int *)(param_1 + 0x50c0);
      }
    }
    if (*piVar8 != 0x244db4da) {
      local_44 = 0;
      uVar6 = FUN_02b64e40(&local_44);
      if (((uVar6 & 1) != 0) && (iVar5 = FUN_026641e0(local_44,0), iVar5 == param_2)) {
        return 1;
      }
    }
  }
  if (*(char *)(param_1 + 0x5c59) != '\0') {
    lVar7 = **(long **)puVar4;
    bVar2 = *(byte *)(lVar7 + 0x473);
    if ((long)(char)bVar2 == 0xffffffffffffffff) {
LAB_0219e310:
      piVar8 = (int *)(param_1 + 0x5c5c);
    }
    else {
      pbVar1 = (byte *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
      if (7 < bVar2) {
        pbVar1 = (byte *)(lVar7 + 0x48);
      }
      if (((*pbVar1 >> 3 & 1) == 0) || (*(byte *)(lVar7 + 0x472) == bVar2)) goto LAB_0219e310;
      piVar8 = (int *)(param_1 + 0x5c60);
    }
    if (*piVar8 != 0x244db4da) {
      local_44 = 0;
      uVar6 = FUN_02b64e40(&local_44);
      if (((uVar6 & 1) != 0) && (iVar5 = FUN_026641e0(local_44,0), iVar5 == param_2)) {
        return 1;
      }
    }
  }
  if (*(char *)(param_1 + 0x67f9) == '\0') goto LAB_0219e3c4;
  lVar7 = **(long **)puVar4;
  bVar2 = *(byte *)(lVar7 + 0x473);
  if ((long)(char)bVar2 == 0xffffffffffffffff) {
LAB_0219e390:
    piVar8 = (int *)(param_1 + 0x67fc);
  }
  else {
    pbVar1 = (byte *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
    if (7 < bVar2) {
      pbVar1 = (byte *)(lVar7 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) == 0) || (*(byte *)(lVar7 + 0x472) == bVar2)) goto LAB_0219e390;
    piVar8 = (int *)(param_1 + 0x6800);
  }
  if (*piVar8 != 0x244db4da) {
    local_44 = 0;
    uVar6 = FUN_02b64e40(&local_44);
    if (((uVar6 & 1) != 0) && (iVar5 = FUN_026641e0(local_44,0), iVar5 == param_2)) {
      return 1;
    }
  }
LAB_0219e3c4:
  if (*(char *)(param_1 + 0x7399) != '\0') {
    piVar8 = (int *)(param_1 + 0x739c);
    lVar7 = **(long **)puVar4;
    bVar2 = *(byte *)(lVar7 + 0x473);
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      pbVar1 = (byte *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
      if (7 < bVar2) {
        pbVar1 = (byte *)(lVar7 + 0x48);
      }
      if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar7 + 0x472) != bVar2)) {
        piVar8 = (int *)(param_1 + 0x73a0);
      }
    }
    if (*piVar8 != 0x244db4da) {
      local_44 = 0;
      uVar6 = FUN_02b64e40(&local_44);
      if (((uVar6 & 1) != 0) && (iVar5 = FUN_026641e0(local_44,0), iVar5 == param_2)) {
        return 1;
      }
    }
  }
  return 0;
}

