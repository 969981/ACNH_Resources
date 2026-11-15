
void FUN_020a0a44(ushort *param_1,long param_2,byte *param_3,ulong param_4)

{
  uint *puVar1;
  uint *puVar2;
  char *pcVar3;
  uint uVar4;
  char cVar5;
  ushort uVar6;
  byte bVar7;
  uint uVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  ulong uVar11;
  uint uVar12;
  long *plVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  undefined8 local_58;
  long lStack_50;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  char local_35;
  byte local_34;
  uint local_18;
  byte local_14 [4];
  
  uVar6 = *param_1;
  uVar12 = (uint)(*(ushort *)(param_2 + 1) >> 4);
  local_18 = uVar12 & 0xff;
  uVar8 = 1 << (ulong)(*param_3 & 0x1f);
  *param_1 = uVar6 | (ushort)uVar8;
  uVar8 = (uint)uVar6 | uVar8 & 0xffff;
  uVar15 = 1 << (ulong)(*param_3 & 0x1f) & 0xffff;
  if ((param_4 & 1) == 0) {
    uVar15 = (uint)param_1[1] & (uVar15 ^ 0xffff);
  }
  else {
    uVar15 = param_1[1] | uVar15;
  }
  param_1[1] = (ushort)uVar15;
  puVar9 = PTR_DAT_04bb27d0;
  plVar13 = *(long **)PTR_DAT_04bb27d0;
  lVar17 = *plVar13;
  bVar7 = *(byte *)(lVar17 + 0x473);
  if ((long)(char)bVar7 == 0xffffffffffffffff) {
    uVar16 = 1;
    switch(*PTR_DAT_04bc1220) {
    case 0:
      if ((uVar8 & 1) == 0) {
        return;
      }
      uVar16 = uVar15 & 1;
      break;
    case 1:
      if ((uVar8 >> 1 & 1) == 0) {
        return;
      }
      uVar16 = uVar15 >> 1 & 1;
      break;
    case 2:
      if ((uVar8 >> 2 & 1) == 0) {
        return;
      }
      uVar16 = uVar15 >> 2 & 1;
      break;
    case 3:
      if ((uVar8 >> 3 & 1) == 0) {
        return;
      }
      uVar16 = uVar15 >> 3 & 1;
      break;
    case 4:
      if ((uVar8 >> 4 & 1) == 0) {
        return;
      }
      uVar16 = uVar15 >> 4 & 1;
      break;
    case 5:
      if ((uVar8 >> 5 & 1) == 0) {
        return;
      }
      uVar16 = uVar15 >> 5 & 1;
      break;
    case 6:
      if ((uVar8 >> 6 & 1) == 0) {
        return;
      }
      uVar16 = uVar15 >> 6 & 1;
      break;
    case 7:
      goto switchD_020a0b48_caseD_7;
    }
    goto switchD_020a0b48_default;
  }
  puVar1 = (uint *)(lVar17 + 0x48);
  puVar2 = puVar1 + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
  if (7 < bVar7) {
    puVar2 = puVar1;
  }
  uVar4 = *puVar2;
  pcVar3 = PTR_DAT_04bc1220;
  if ((uVar4 & 8) != 0) {
    pcVar3 = (char *)(lVar17 + 0x473);
  }
  cVar5 = *pcVar3;
  if (cVar5 == '\0') {
    if ((uVar8 & 1) == 0) {
      return;
    }
    uVar16 = uVar15 & 1;
    if ((uVar4 >> 3 & 1) != 0) goto LAB_020a0b84;
LAB_020a0b64:
    if (cVar5 == '\x02') goto LAB_020a0bdc;
LAB_020a0bb8:
    if ((uVar4 >> 3 & 1) != 0) {
LAB_020a0bc8:
      if ((*(byte *)(lVar17 + 0x148) >> 3 & 1) != 0) goto LAB_020a0bdc;
      if (cVar5 == '\x03') goto LAB_020a0c04;
      goto LAB_020a0bf0;
    }
    if (cVar5 != '\x03') goto LAB_020a0c0c;
LAB_020a0c04:
    if ((uVar8 >> 3 & 1) == 0) {
      return;
    }
    uVar16 = uVar16 & uVar15 >> 3;
LAB_020a0c0c:
    if (cVar5 == '\x04') goto LAB_020a0c38;
    if ((uVar4 >> 3 & 1) != 0) {
LAB_020a0c24:
      if ((*(byte *)(lVar17 + 0x248) >> 3 & 1) != 0) goto LAB_020a0c38;
      if (cVar5 == '\x05') goto LAB_020a0c60;
      goto LAB_020a0c4c;
    }
    if (cVar5 != '\x05') goto LAB_020a0c68;
LAB_020a0c60:
    if ((uVar8 >> 5 & 1) == 0) {
      return;
    }
    uVar16 = uVar16 & uVar15 >> 5;
LAB_020a0c68:
    if (cVar5 == '\x06') goto LAB_020a0ce4;
    if ((uVar4 >> 3 & 1) != 0) {
LAB_020a0cd0:
      if ((*(byte *)(lVar17 + 0x348) >> 3 & 1) != 0) goto LAB_020a0ce4;
      if (cVar5 == '\a') goto switchD_020a0b48_caseD_7;
      goto LAB_020a0cf8;
    }
    if (cVar5 != '\a') goto switchD_020a0b48_default;
switchD_020a0b48_caseD_7:
    if ((uVar8 >> 7 & 1) == 0) {
      return;
    }
    uVar16 = uVar16 & uVar15 >> 7;
  }
  else {
    if ((uVar4 >> 3 & 1) == 0) {
      uVar16 = 1;
      if (cVar5 == '\x01') goto LAB_020a0ba8;
      goto LAB_020a0b64;
    }
    if ((*(byte *)puVar1 >> 3 & 1) != 0) {
      if ((uVar8 & 1) == 0) {
        return;
      }
      uVar16 = uVar15 & 1;
      if (cVar5 == '\x01') goto LAB_020a0ba8;
      if ((uVar4 >> 3 & 1) == 0) goto LAB_020a0b64;
LAB_020a0b84:
      if ((*(byte *)(lVar17 + 200) >> 3 & 1) != 0) goto LAB_020a0ba8;
      if (cVar5 == '\x02') goto LAB_020a0bdc;
      goto LAB_020a0bc8;
    }
    uVar16 = 1;
    if (cVar5 != '\x01') goto LAB_020a0b84;
LAB_020a0ba8:
    if ((uVar8 >> 1 & 1) == 0) {
      return;
    }
    uVar16 = uVar16 & uVar15 >> 1;
    if (cVar5 != '\x02') goto LAB_020a0bb8;
LAB_020a0bdc:
    if ((uVar8 >> 2 & 1) == 0) {
      return;
    }
    uVar16 = uVar16 & uVar15 >> 2;
    if (cVar5 == '\x03') goto LAB_020a0c04;
    if ((uVar4 >> 3 & 1) == 0) goto LAB_020a0c0c;
LAB_020a0bf0:
    if ((*(byte *)(lVar17 + 0x1c8) >> 3 & 1) != 0) goto LAB_020a0c04;
    if (cVar5 != '\x04') goto LAB_020a0c24;
LAB_020a0c38:
    if ((uVar8 >> 4 & 1) == 0) {
      return;
    }
    uVar16 = uVar16 & uVar15 >> 4;
    if (cVar5 == '\x05') goto LAB_020a0c60;
    if ((uVar4 >> 3 & 1) == 0) goto LAB_020a0c68;
LAB_020a0c4c:
    if ((*(byte *)(lVar17 + 0x2c8) >> 3 & 1) != 0) goto LAB_020a0c60;
    if (cVar5 != '\x06') goto LAB_020a0cd0;
LAB_020a0ce4:
    if ((uVar8 >> 6 & 1) == 0) {
      return;
    }
    uVar16 = uVar16 & uVar15 >> 6;
    if (cVar5 == '\a') goto switchD_020a0b48_caseD_7;
    if ((uVar4 >> 3 & 1) != 0) {
LAB_020a0cf8:
      if ((*(byte *)(lVar17 + 0x3c8) >> 3 & 1) != 0) goto switchD_020a0b48_caseD_7;
    }
  }
switchD_020a0b48_default:
  local_58 = (undefined **)(CONCAT44(local_58._4_4_,uVar12) & 0xffffffff000000ff);
  *(byte *)(param_1 + 2) = *(byte *)(param_2 + 3) >> 6 | (*(byte *)(param_2 + 4) & 3) << 2;
  *(uint *)(param_1 + 4) = (uint)local_58;
  param_1[6] = 3;
  puVar10 = DAT_053dda88;
  param_1[7] = 0;
  if (uVar16 != 0) {
    local_58 = &PTR_LAB_04a71ea8;
    lStack_50 = param_2;
    FUN_020b5220(*(undefined8 *)PTR_DAT_04bb3968,&local_18,&local_58);
    return;
  }
  lVar17 = *(long *)PTR_DAT_04bb39b0;
  if (lVar17 == 0) {
    local_14[0] = *PTR_DAT_04bb32e0;
LAB_020a0dc4:
    if (7 < local_14[0]) {
LAB_020a0dcc:
      lVar17 = *plVar13;
      bVar7 = *(byte *)(lVar17 + 0x473);
      pbVar14 = PTR_DAT_04bb5038;
      if ((long)(char)bVar7 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar17 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
        if (7 < bVar7) {
          puVar1 = (uint *)(lVar17 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar14 = (byte *)(lVar17 + 0x471);
        }
      }
      local_14[0] = *pbVar14;
      if (local_14[0] < 8) goto LAB_020a0e3c;
      local_14[0] = *PTR_DAT_04bb5038;
    }
  }
  else {
    pbVar14 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar17 + 0x15c) != 0) {
      pbVar14 = (byte *)(lVar17 + 0x158);
    }
    local_14[0] = *pbVar14;
    if (7 < local_14[0]) {
      if ((*(int *)(lVar17 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        local_14[0] = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_020a0dc4;
      }
      goto LAB_020a0dcc;
    }
  }
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
LAB_020a0e3c:
  FUN_0255c138(local_14,0);
  uVar11 = (ulong)local_58;
  local_58._0_4_ = uVar12 & 0xff;
  local_38 = 4;
  local_36 = (undefined1)((uint)local_58 >> 4);
  local_37 = (undefined1)((uint)local_58 << 4);
  lVar17 = **(long **)puVar9;
  bVar7 = *(byte *)(lVar17 + 0x473);
  pbVar14 = PTR_DAT_04bc1220;
  if ((long)(char)bVar7 != 0xffffffffffffffff) {
    puVar1 = (uint *)(lVar17 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
    if (7 < bVar7) {
      puVar1 = (uint *)(lVar17 + 0x48);
    }
    if ((*puVar1 & 8) != 0) {
      pbVar14 = (byte *)(lVar17 + 0x473);
    }
  }
  local_35 = *pbVar14 << 6;
  local_34 = *pbVar14 >> 2 & 3;
  *puVar10 = 0;
  *(undefined *)(puVar10 + 1) = *PTR_DAT_04bb5018;
  *(undefined8 *)(puVar10 + 2) = 0xffffffff;
  local_58 = (undefined **)CONCAT26((ushort)(uVar11 >> 0x30) & 0xff00,0xff0000000000);
  if (-1 < DAT_053d0b30) {
    FUN_01db1df0(**(long **)puVar9 + 0x480,DAT_053d0b30,&local_58,&local_38,5,0);
  }
  return;
}

