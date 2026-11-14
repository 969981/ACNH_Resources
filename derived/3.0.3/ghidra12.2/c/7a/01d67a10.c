
void FUN_01d67a10(long param_1,byte *param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  undefined1 uVar9;
  byte bVar10;
  byte bVar11;
  short sVar12;
  undefined *puVar13;
  undefined2 uVar14;
  undefined1 *puVar15;
  byte *pbVar16;
  long lVar17;
  uint uVar18;
  byte local_68 [4];
  byte local_64 [4];
  undefined1 local_60 [4];
  byte local_5c [4];
  byte local_58 [4];
  byte local_54 [4];
  undefined1 local_50 [4];
  byte local_4c [4];
  byte local_48 [4];
  byte local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  byte local_34 [4];
  undefined8 local_18;
  
  puVar13 = PTR_DAT_04bb27d0;
  iVar6 = *(int *)(param_3 + 2);
  lVar17 = **(long **)PTR_DAT_04bb27d0;
  bVar8 = *(byte *)(lVar17 + 0x473);
  uVar18 = (uint)(char)bVar8;
  if (iVar6 == 1) {
    if (bVar8 != 0xff) {
      puVar2 = (uint *)(lVar17 + 0x48);
      puVar4 = puVar2 + (ulong)uVar18 * 0x20;
      if (7 < bVar8) {
        puVar4 = puVar2;
      }
      pbVar16 = PTR_DAT_04bc1220;
      if ((*puVar4 & 8) != 0) {
        pbVar16 = (byte *)(lVar17 + 0x472);
      }
      if (*pbVar16 == *param_2) {
        puVar4 = puVar2 + (ulong)uVar18 * 0x20;
        if (7 < bVar8) {
          puVar4 = puVar2;
        }
        if (((byte)*puVar4 >> 3 & 1) != 0) {
          if (*(char *)(param_1 + 0x1e2) != -1) {
            *(char *)(param_1 + 0x1f8) = *(char *)(param_1 + 0x1e2);
          }
          uVar14 = *param_3;
          *(undefined1 *)(param_1 + 0x1e2) = *(undefined1 *)(param_3 + 1);
          *(undefined2 *)(param_1 + 0x1e0) = uVar14;
        }
      }
    }
switchD_01d67b6c_caseD_5:
    if (*(byte *)(param_3 + 1) != bVar8 || *(char *)(param_1 + 0x1f9) == '\0') {
      return;
    }
    if (*param_2 < 8) {
      *(uint *)(param_1 + 500) = *(uint *)(param_1 + 500) | 1 << (ulong)(*param_2 & 0x1f);
      return;
    }
    return;
  }
  if (iVar6 == 0) {
    if (bVar8 != 0xff) {
      pbVar16 = (byte *)(lVar17 + 0x48) + (ulong)uVar18 * 0x80;
      if (7 < bVar8) {
        pbVar16 = (byte *)(lVar17 + 0x48);
      }
      if (((*pbVar16 >> 3 & 1) != 0) && (bVar8 != *(byte *)(lVar17 + 0x472))) {
        return;
      }
    }
    iVar6 = *(int *)(param_1 + 0x1a8);
    iVar7 = *(int *)(param_1 + 0x1a0);
    if (iVar7 <= iVar6) {
      return;
    }
    *(int *)(param_1 + 0x1a8) = iVar6 + 1;
    iVar6 = *(int *)(param_1 + 0x1a4) + iVar6;
    iVar3 = 0;
    if (iVar7 <= iVar6) {
      iVar3 = iVar7;
    }
    puVar1 = (undefined2 *)(*(long *)(param_1 + 0x198) + (long)(iVar6 - iVar3) * 4);
    uVar9 = *(undefined1 *)(param_3 + 1);
    *puVar1 = *param_3;
    *(undefined1 *)(puVar1 + 1) = uVar9;
    return;
  }
  if (*(int *)(param_1 + 0xc0) == 0) {
    return;
  }
  switch(iVar6) {
  case 2:
    if (*param_2 == *(byte *)(param_1 + 0x1e2)) {
      if (bVar8 != 0xff) {
        pbVar16 = (byte *)(lVar17 + 0x48) + (ulong)uVar18 * 0x80;
        if (7 < bVar8) {
          pbVar16 = (byte *)(lVar17 + 0x48);
        }
        if (((*pbVar16 >> 3 & 1) != 0) && (bVar8 != *(byte *)(lVar17 + 0x472))) {
          return;
        }
      }
      *(byte *)(param_1 + 0x1f8) = *param_2;
    }
    break;
  case 3:
    if (bVar8 != 0xff) {
      pbVar16 = (byte *)(lVar17 + 0x48) + (ulong)uVar18 * 0x80;
      if (7 < bVar8) {
        pbVar16 = (byte *)(lVar17 + 0x48);
      }
      if (((*pbVar16 >> 3 & 1) != 0) && (bVar8 != *(byte *)(lVar17 + 0x472))) {
        if (*(char *)(param_1 + 0x1f8) != -1) {
          FUN_01d6a3c8(param_1);
        }
        *(undefined1 *)(param_1 + 0x1f8) = *(undefined1 *)(param_1 + 0x1e2);
        *(undefined2 *)(param_1 + 0x1e0) = 0xffff;
        *(undefined1 *)(param_1 + 0x1e2) = 0xff;
      }
    }
    break;
  case 4:
    local_34[0] = *param_2;
    if (local_34[0] != *(byte *)(param_1 + 0x1e2)) goto switchD_01d67b6c_caseD_5;
    if (bVar8 == 0xff) {
LAB_01d67c88:
      if (local_34[0] < 8) {
        *(uint *)(param_1 + 0x104) =
             *(uint *)(param_1 + 0x104) & (1 << (ulong)(local_34[0] & 0x1f) ^ 0xffffffffU);
      }
    }
    else {
      lVar5 = param_1 + 0x108 + (ulong)uVar18 * 0xc;
      if (0xb < bVar8) {
        lVar5 = param_1 + 0x108;
      }
      if (*(char *)(lVar5 + 10) != '\0') goto LAB_01d67c88;
      lVar17 = *(long *)(lVar17 + 0x480);
      *(undefined4 *)(lVar17 + 0x9c) = 1;
      *(undefined1 *)(lVar17 + 0x98) = 0;
      local_34[0] = *(byte *)(param_1 + 0x1e2);
    }
    pbVar16 = local_34;
    local_18 = CONCAT62(CONCAT51(local_18._3_5_,local_34[0]),*(undefined2 *)(param_1 + 0x1e0));
    local_18 = CONCAT44(5,(undefined4)local_18);
    goto LAB_01d67f7c;
  case 5:
  case 8:
  case 10:
    goto switchD_01d67b6c_caseD_5;
  case 6:
    local_38[0] = *(undefined1 *)(param_1 + 0x1e2);
    local_3c[0] = *PTR_DAT_04bb5018;
    FUN_01d6a5c8(param_1,local_38,local_3c);
    puVar15 = local_40;
    local_18 = CONCAT44(8,(undefined4)local_18);
    local_40[0] = *(undefined1 *)(param_1 + 0x1e2);
    local_18 = CONCAT53(local_18._3_5_,*(undefined3 *)(param_1 + 0x1e0));
    goto LAB_01d67f3c;
  case 7:
    bVar11 = *(byte *)(param_1 + 0x1e2);
    if (bVar11 < 8) {
      sVar12 = *(short *)(param_1 + (ulong)(uint)bVar11 * 0xc + 0x108);
      bVar10 = *param_2;
      if (bVar10 == bVar11) {
        if (sVar12 == -1) goto LAB_01d67e6c;
        local_48[0] = bVar8;
        local_44[0] = bVar11;
        FUN_01d6a5c8(param_1,local_44,local_48);
LAB_01d67ed8:
        local_18 = CONCAT44(7,(undefined4)local_18);
        local_50[0] = *(undefined1 *)(param_1 + 0x1e2);
        local_18 = CONCAT53(local_18._3_5_,*(undefined3 *)(param_1 + 0x1e0));
        FUN_01d6a9c8(param_1,local_50,&local_18);
      }
      else {
        if (sVar12 == -1) goto LAB_01d67eac;
        local_58[0] = bVar10;
        local_54[0] = bVar11;
        FUN_01d6a5c8(param_1,local_54,local_58);
      }
    }
    else {
      bVar10 = *param_2;
      if ((uint)bVar10 == (uint)bVar11) {
LAB_01d67e6c:
        if (bVar8 < 8) {
          uVar14 = *(undefined2 *)(param_1 + (ulong)bVar8 * 0xc + 0x108);
        }
        else {
          uVar14 = 0xffff;
        }
        local_4c[0] = bVar8;
        FUN_01d6a6f0(param_1,uVar14,local_4c);
        goto LAB_01d67ed8;
      }
LAB_01d67eac:
      if (bVar10 < 8) {
        uVar14 = *(undefined2 *)(param_1 + (ulong)(uint)bVar10 * 0xc + 0x108);
      }
      else {
        uVar14 = 0xffff;
      }
      local_5c[0] = bVar10;
      FUN_01d6a6f0(param_1,uVar14,local_5c);
    }
    puVar15 = local_60;
    local_18 = CONCAT44(8,(undefined4)local_18);
    local_60[0] = *(undefined1 *)(param_1 + 0x1e2);
    local_18 = CONCAT53(local_18._3_5_,*(undefined3 *)(param_1 + 0x1e0));
LAB_01d67f3c:
    FUN_01d6a680(param_1,puVar15,&local_18);
    break;
  case 9:
    local_64[0] = *param_2;
    if (local_64[0] != *(byte *)(param_1 + 0x1e2)) {
      return;
    }
    uVar14 = *(undefined2 *)(param_1 + 0x1e0);
    local_18 = FUN_01d69460(param_1,uVar14);
    FUN_01d69e48(param_1,local_64,uVar14,&local_18);
    *(undefined2 *)(param_1 + 0x1e8) = 0;
    *(undefined2 *)(param_1 + 0x1e4) = 0xffff;
    *(undefined1 *)(param_1 + 0x1ee) = 0;
    *(undefined1 *)(param_1 + 0x1e6) = 0xff;
    *(undefined4 *)(param_1 + 0x1ea) = 0x101;
    bVar8 = *(byte *)(**(long **)puVar13 + 0x473);
    if ((long)(char)bVar8 == 0xffffffffffffffff) {
LAB_01d67dd4:
      lVar17 = *(long *)(**(long **)puVar13 + 0x480);
      if (*(int *)(lVar17 + 0x9c) == 2) {
        *(undefined1 *)(lVar17 + 0x98) = 1;
      }
    }
    else {
      lVar17 = param_1 + 0x108 + ((long)(char)bVar8 & 0xffffffffU) * 0xc;
      if (0xb < bVar8) {
        lVar17 = param_1 + 0x108;
      }
      if (*(char *)(lVar17 + 10) != '\0') goto LAB_01d67dd4;
    }
    pbVar16 = local_68;
    local_18 = CONCAT44(10,(undefined4)local_18);
    local_68[0] = *(byte *)(param_1 + 0x1e2);
    local_18 = CONCAT53(local_18._3_5_,*(undefined3 *)(param_1 + 0x1e0));
LAB_01d67f7c:
    FUN_01d6a568(param_1,pbVar16,&local_18);
    break;
  case 0xc:
    bVar11 = *param_2;
    if (bVar11 == *(byte *)(param_1 + 0x1e2)) {
      if (bVar8 != 0xff) {
        lVar5 = param_1 + 0x108 + (ulong)uVar18 * 0xc;
        if (0xb < bVar8) {
          lVar5 = param_1 + 0x108;
        }
        if (*(char *)(lVar5 + 10) == '\0') {
          return;
        }
      }
      lVar17 = *(long *)(lVar17 + 0x480);
      *(undefined4 *)(lVar17 + 0x9c) = 2;
      *(byte *)(lVar17 + 0x99) = bVar11;
      *(undefined1 *)(lVar17 + 0x98) = 0;
    }
  }
  return;
}

