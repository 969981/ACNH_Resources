
void FUN_029cef4c(byte *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  byte bVar10;
  undefined1 auStack_50 [8];
  char *local_48;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  
  *param_1 = *param_1 | 4;
  puVar9 = *(uint **)(param_2 + 0x10);
  uVar3 = nn::os::GetSystemTick();
  local_40 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  uStack_3c = (local_40 ^ local_40 >> 0x1e) * 0x6c078965 + 2;
  local_38 = (uStack_3c ^ uStack_3c >> 0x1e) * 0x6c078965 + 3;
  uStack_34 = (local_38 ^ local_38 >> 0x1e) * 0x6c078965 + 4;
  if (*(char *)(param_2 + 2) != '\0') {
    puVar9 = &local_40;
    uVar6 = (*(uint *)(param_1 + 0x10) ^ *(uint *)(param_1 + 0x10) >> 0x1e) * 0x6c078965 + 1;
    uVar3 = uVar6 ^ uVar6 * 0x800;
    uVar1 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
    uVar6 = uVar1 ^ uVar1 * 0x800;
    uVar2 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
    uVar1 = uVar2 ^ uVar2 * 0x800;
    uVar7 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
    uVar2 = uVar7 ^ uVar7 * 0x800;
    local_40 = uVar3 >> 8 ^ uVar7 >> 0x13 ^ uVar3 ^ uVar7;
    uStack_3c = uVar6 >> 8 ^ local_40 >> 0x13 ^ uVar6 ^ local_40;
    local_38 = uVar1 >> 8 ^ uStack_3c >> 0x13 ^ uVar1 ^ uStack_3c;
    uStack_34 = uVar2 >> 8 ^ local_38 >> 0x13 ^ uVar2 ^ local_38;
  }
  bVar10 = param_1[5];
  if (bVar10 - 2 < 4) {
    if (param_1[9] == 2) {
      bVar10 = 1;
      switch(param_1[0x14]) {
      case 0:
        break;
      case 1:
      case 3:
        bVar10 = 2;
        break;
      case 2:
        uVar3 = *puVar9 ^ *puVar9 << 0xb;
        uVar6 = puVar9[3];
        *puVar9 = puVar9[1];
        puVar9[1] = puVar9[2];
        uVar3 = uVar3 >> 8 ^ uVar6 >> 0x13 ^ uVar3 ^ uVar6;
        puVar9[2] = uVar6;
        puVar9[3] = uVar3;
        bVar10 = 3;
        if ((uint)((ulong)uVar3 * 100 >> 0x20) < 0x5a) {
          bVar10 = 1;
        }
        break;
      default:
        bVar10 = 0;
      }
    }
    else {
LAB_029cf074:
      if (*(int *)(param_2 + 8) == 3) {
        iVar4 = 0;
        uVar3 = 0x5a;
      }
      else if ((ulong)(long)(char)param_1[0x17] < 4) {
        lVar8 = (long)(char)param_1[0x17] * 4;
        uVar3 = *(uint *)(&DAT_04101ff0 + lVar8);
        iVar4 = *(int *)(&DAT_04102990 + lVar8);
      }
      else {
        uVar3 = 0;
        iVar4 = 0;
      }
      uVar1 = puVar9[3];
      uVar6 = *puVar9 ^ *puVar9 << 0xb;
      *puVar9 = puVar9[1];
      puVar9[1] = puVar9[2];
      uVar6 = uVar6 >> 8 ^ uVar1 >> 0x13 ^ uVar6 ^ uVar1;
      puVar9[2] = uVar1;
      puVar9[3] = uVar6;
      uVar6 = (uint)((ulong)uVar6 * 100 >> 0x20);
      bVar10 = 2;
      if (iVar4 + uVar3 <= uVar6) {
        bVar10 = 3;
      }
      if (uVar6 < uVar3) {
        bVar10 = 1;
      }
    }
    FUN_029cf3f0(auStack_50,param_1,puVar9,bVar10);
    goto LAB_029cf1cc;
  }
  if (bVar10 == 1) {
    bVar10 = param_1[0x15];
    param_1[0x15] = bVar10 + 1;
    switch(param_1[0x17]) {
    case 0:
      bVar10 = 0;
      uVar1 = puVar9[3];
      uVar3 = *puVar9 ^ *puVar9 << 0xb;
      *puVar9 = puVar9[1];
      puVar9[1] = puVar9[2];
      uVar6 = uVar3 ^ uVar1;
      puVar9[2] = uVar1;
      puVar9[3] = uVar3 >> 8 ^ uVar1 >> 0x13 ^ uVar6;
      local_48 = (&PTR_DAT_04a984e0)[uVar6 >> 0x1e];
      goto LAB_029cf1cc;
    case 1:
      uVar1 = puVar9[1];
      uVar3 = *puVar9 ^ *puVar9 << 0xb;
      uVar2 = puVar9[2];
      uVar7 = puVar9[3];
      *puVar9 = uVar1;
      puVar9[1] = uVar2;
      uVar6 = uVar3 >> 8 ^ uVar7 >> 0x13 ^ uVar3 ^ uVar7;
      puVar9[2] = uVar7;
      puVar9[3] = uVar6;
      uVar3 = (uint)((ulong)uVar6 * 100 >> 0x20);
      if ('\x02' < (char)param_1[0x15]) {
        bVar10 = 0;
        local_48 = &DAT_040f9681;
        if (0x1d < uVar3) {
          local_48 = &DAT_0409193b;
        }
        goto LAB_029cf1cc;
      }
      if (uVar3 < 0x1e) {
        bVar10 = 0;
        local_48 = "$KickCrush";
        goto LAB_029cf1cc;
      }
      uVar1 = uVar1 ^ uVar1 << 0xb;
      *puVar9 = uVar2;
      puVar9[1] = uVar7;
      uVar3 = uVar1 >> 8 ^ uVar6 >> 0x13 ^ uVar1 ^ uVar6;
      pcVar5 = "$KickHihat";
      puVar9[2] = uVar6;
      puVar9[3] = uVar3;
      local_48 = &DAT_0407c38d;
      break;
    case 2:
      if ('\x02' < (char)(bVar10 + 1)) goto LAB_029cf2b8;
      uVar6 = puVar9[3];
      uVar3 = *puVar9 ^ *puVar9 << 0xb;
      *puVar9 = puVar9[1];
      puVar9[1] = puVar9[2];
      pcVar5 = "$SnareHihat";
      uVar3 = uVar3 >> 8 ^ uVar6 >> 0x13 ^ uVar3 ^ uVar6;
      puVar9[2] = uVar6;
      puVar9[3] = uVar3;
      local_48 = &DAT_0406204e;
      break;
    case 3:
      uVar6 = puVar9[1];
      uVar3 = *puVar9 ^ *puVar9 << 0xb;
      uVar1 = puVar9[2];
      uVar2 = puVar9[3];
      *puVar9 = uVar6;
      puVar9[1] = uVar1;
      uVar3 = uVar3 >> 8 ^ uVar2 >> 0x13 ^ uVar3 ^ uVar2;
      puVar9[2] = uVar2;
      puVar9[3] = uVar3;
      uVar7 = (uint)((ulong)uVar3 * 100 >> 0x20);
      if (0x45 < uVar7) {
        uVar6 = uVar6 ^ uVar6 << 0xb;
        *puVar9 = uVar1;
        puVar9[1] = uVar2;
        uVar6 = uVar6 >> 8 ^ uVar3 >> 0x13 ^ uVar6 ^ uVar3;
        puVar9[2] = uVar3;
        puVar9[3] = uVar6;
        if (uVar7 < 0x55) {
          pcVar5 = "$KickHihat";
          local_48 = &DAT_0407c38d;
        }
        else {
          pcVar5 = "$SnareHihat";
          local_48 = &DAT_0406204e;
        }
        bVar10 = 0;
        if (0x1d < (uint)((ulong)uVar6 * 100 >> 0x20)) {
          local_48 = pcVar5;
        }
        goto LAB_029cf1cc;
      }
LAB_029cf2b8:
      bVar10 = 0;
      local_48 = &DAT_0409193b;
      goto LAB_029cf1cc;
    default:
      goto switchD_029cf114_default;
    }
    bVar10 = 0;
    if (0x1d < (uint)((ulong)uVar3 * 100 >> 0x20)) {
      local_48 = pcVar5;
    }
  }
  else {
    if (bVar10 == 0) goto LAB_029cf074;
switchD_029cf114_default:
    bVar10 = 0;
    local_48 = PTR_DAT_04bb2120;
  }
LAB_029cf1cc:
  param_1[0x14] = bVar10;
  *(char **)(param_1 + 0x38) = local_48;
  return;
}

