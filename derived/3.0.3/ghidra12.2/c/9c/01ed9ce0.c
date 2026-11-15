
void FUN_01ed9ce0(long param_1)

{
  bool bVar1;
  uint uVar2;
  ulong *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  ushort uVar7;
  short sVar8;
  undefined *puVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 uVar12;
  byte bVar13;
  long lVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  byte local_40 [4];
  byte local_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  
  local_34 = 0;
  local_38 = 0;
  FUN_01e5a930(0x40000000,*(undefined8 *)(param_1 + 0x10),0,PTR_DAT_04bb2150,&local_34,&local_38,
               PTR_DAT_04bc1600,6);
  uVar11 = (**(code **)(**(long **)(param_1 + 8) + 0x180))();
  if ((uVar11 & 1) == 0) {
    return;
  }
  puVar3 = (ulong *)(param_1 + 0xad58);
  if ((*(byte *)puVar3 >> 4 & 1) != 0) {
    return;
  }
  uVar10 = FUN_006bd550("SpeakTypeBed",0);
  puVar9 = PTR_DAT_04bb39b0;
  uVar6 = *(uint *)(param_1 + 0x20);
  if (uVar6 == 0) {
LAB_01ed9dfc:
    bVar1 = false;
  }
  else {
    lVar14 = *(long *)(param_1 + 0x28);
    if ((int)uVar6 < 2) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      iVar17 = uVar6 - 1;
      do {
        uVar2 = iVar17 + uVar16;
        if ((int)uVar2 < 0 != SCARRY4(iVar17,uVar16)) {
          uVar2 = uVar2 + 1;
        }
        uVar4 = (int)uVar2 >> 1;
        uVar2 = *(uint *)(lVar14 + ((long)((ulong)uVar2 << 0x20) >> 0x21) * 0x20 + 0x18);
        if (uVar2 == uVar10) goto joined_r0x01ed9df8;
        if (uVar2 < uVar10) {
          uVar16 = uVar4 + 1;
        }
        else {
          iVar17 = uVar4 - 1;
        }
      } while ((int)uVar16 < iVar17);
    }
    uVar4 = uVar16;
    if (*(uint *)(lVar14 + (long)(int)uVar16 * 0x20 + 0x18) != uVar10) goto LAB_01ed9dfc;
joined_r0x01ed9df8:
    if ((int)uVar4 < 0) goto LAB_01ed9dfc;
    if (uVar6 <= uVar4) {
      uVar4 = 0;
    }
    bVar1 = 0 < *(int *)(lVar14 + (ulong)uVar4 * 0x20);
  }
  lVar14 = *(long *)PTR_DAT_04bb39b0;
  pbVar15 = PTR_DAT_04bb32e0;
  if (lVar14 == 0) {
LAB_01ed9e60:
    if (*pbVar15 < 8) goto LAB_01ed9ecc;
LAB_01ed9e6c:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01ed9ec4:
      pbVar15 = PTR_DAT_04bb5038;
      goto LAB_01ed9ecc;
    }
    lVar14 = **(long **)PTR_DAT_04bb27d0;
    bVar13 = *(byte *)(lVar14 + 0x473);
    pbVar15 = PTR_DAT_04bb5038;
    if ((long)(char)bVar13 != 0xffffffffffffffff) {
      puVar5 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar13 & 0xffffffffU) * 0x20;
      if (7 < bVar13) {
        puVar5 = (uint *)(lVar14 + 0x48);
      }
      if ((*puVar5 & 8) != 0) {
        pbVar15 = (byte *)(lVar14 + 0x471);
      }
    }
    bVar13 = *pbVar15;
    if (7 < bVar13) goto LAB_01ed9ec4;
  }
  else {
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar15 = (byte *)(lVar14 + 0x158);
    }
    if (7 < *pbVar15) {
      if ((*(int *)(lVar14 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar15 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01ed9e60;
      }
      goto LAB_01ed9e6c;
    }
LAB_01ed9ecc:
    bVar13 = *pbVar15;
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
  }
  if (7 < bVar13) {
    bVar13 = 0xff;
  }
  *(byte *)(param_1 + 0xae78) = bVar13;
  uVar10 = FUN_006bd550("SpeakTypeChair",0);
  uVar6 = *(uint *)(param_1 + 0x20);
  if (uVar6 == 0) {
LAB_01ed9ff0:
    if (bVar1) {
      lVar14 = *(long *)puVar9;
      pbVar15 = PTR_DAT_04bb32e0;
      if (lVar14 == 0) {
LAB_01eda094:
        if (*pbVar15 < 8) goto LAB_01eda10c;
LAB_01eda0a0:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01eda104:
          pbVar15 = PTR_DAT_04bb5038;
          goto LAB_01eda10c;
        }
        lVar14 = **(long **)PTR_DAT_04bb27d0;
        bVar13 = *(byte *)(lVar14 + 0x473);
        pbVar15 = PTR_DAT_04bb5038;
        if ((long)(char)bVar13 != 0xffffffffffffffff) {
          puVar5 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar13 & 0xffffffffU) * 0x20;
          if (7 < bVar13) {
            puVar5 = (uint *)(lVar14 + 0x48);
          }
          if ((*puVar5 & 8) != 0) {
            pbVar15 = (byte *)(lVar14 + 0x471);
          }
        }
        local_40[0] = *pbVar15;
        if (7 < local_40[0]) goto LAB_01eda104;
      }
      else {
        if (*(int *)(lVar14 + 0x15c) != 0) {
          pbVar15 = (byte *)(lVar14 + 0x158);
        }
        if (7 < *pbVar15) {
          if ((*(int *)(lVar14 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar15 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_01eda094;
          }
          goto LAB_01eda0a0;
        }
LAB_01eda10c:
        local_40[0] = *pbVar15;
        if (7 < local_40[0]) {
          local_40[0] = 0xff;
        }
      }
      sVar8 = *(short *)(*(long *)(param_1 + 8) + 0x284);
      if (999 < (uint)(int)sVar8) goto LAB_01eda28c;
      if ((*(int *)PTR_DAT_04bb6260 < (int)sVar8) ||
         (*(int *)(PTR_DAT_04bb6258 + ((long)sVar8 & 0xffffffffU) * 0x10) == 0)) {
        uVar12 = 0xffffffffffffffff;
      }
      else {
        uVar12 = *(undefined8 *)(PTR_DAT_04bb6258 + (long)sVar8 * 0x10 + 8);
      }
      uVar11 = FUN_00a77550(local_40,uVar12,1,2);
    }
    else {
      uVar7 = *(ushort *)(*(long *)(param_1 + 8) + 0x284);
      if (999 < uVar7) goto LAB_01eda28c;
      if ((*(int *)PTR_DAT_04bb6260 < (int)(short)uVar7) ||
         (*(int *)(PTR_DAT_04bb6258 + ((long)(short)uVar7 & 0xffffffffU) * 0x10) == 0)) {
        uVar12 = 0xffffffffffffffff;
      }
      else {
        uVar12 = *(undefined8 *)(PTR_DAT_04bb6258 + (long)(short)uVar7 * 0x10 + 8);
      }
      uVar11 = FUN_00a77550(param_1 + 0xae78,uVar12,1,0);
    }
joined_r0x01eda170:
    if ((uVar11 & 1) != 0) {
      uVar11 = *puVar3 | 0x10;
      goto LAB_01eda294;
    }
  }
  else {
    lVar14 = *(long *)(param_1 + 0x28);
    if ((int)uVar6 < 2) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      iVar17 = uVar6 - 1;
      do {
        uVar2 = iVar17 + uVar16;
        if ((int)uVar2 < 0 != SCARRY4(iVar17,uVar16)) {
          uVar2 = uVar2 + 1;
        }
        uVar4 = (int)uVar2 >> 1;
        uVar2 = *(uint *)(lVar14 + ((long)((ulong)uVar2 << 0x20) >> 0x21) * 0x20 + 0x18);
        if (uVar2 == uVar10) goto joined_r0x01ed9f80;
        if (uVar2 < uVar10) {
          uVar16 = uVar4 + 1;
        }
        else {
          iVar17 = uVar4 - 1;
        }
      } while ((int)uVar16 < iVar17);
    }
    uVar4 = uVar16;
    if (*(uint *)(lVar14 + (long)(int)uVar16 * 0x20 + 0x18) != uVar10) goto LAB_01ed9ff0;
joined_r0x01ed9f80:
    if ((int)uVar4 < 0) goto LAB_01ed9ff0;
    if (uVar6 <= uVar4) {
      uVar4 = 0;
    }
    if (*(int *)(lVar14 + (ulong)uVar4 * 0x20) < 1) goto LAB_01ed9ff0;
    lVar14 = *(long *)puVar9;
    pbVar15 = PTR_DAT_04bb32e0;
    if (lVar14 == 0) {
LAB_01eda19c:
      if (*pbVar15 < 8) goto LAB_01eda214;
LAB_01eda1a8:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01eda20c:
        pbVar15 = PTR_DAT_04bb5038;
        goto LAB_01eda214;
      }
      lVar14 = **(long **)PTR_DAT_04bb27d0;
      bVar13 = *(byte *)(lVar14 + 0x473);
      pbVar15 = PTR_DAT_04bb5038;
      if ((long)(char)bVar13 != 0xffffffffffffffff) {
        puVar5 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar13 & 0xffffffffU) * 0x20;
        if (7 < bVar13) {
          puVar5 = (uint *)(lVar14 + 0x48);
        }
        if ((*puVar5 & 8) != 0) {
          pbVar15 = (byte *)(lVar14 + 0x471);
        }
      }
      local_3c[0] = *pbVar15;
      if (7 < local_3c[0]) goto LAB_01eda20c;
    }
    else {
      if (*(int *)(lVar14 + 0x15c) != 0) {
        pbVar15 = (byte *)(lVar14 + 0x158);
      }
      if (7 < *pbVar15) {
        if ((*(int *)(lVar14 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar15 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_01eda19c;
        }
        goto LAB_01eda1a8;
      }
LAB_01eda214:
      local_3c[0] = *pbVar15;
      if (7 < local_3c[0]) {
        local_3c[0] = 0xff;
      }
    }
    sVar8 = *(short *)(*(long *)(param_1 + 8) + 0x284);
    if ((uint)(int)sVar8 < 1000) {
      if ((*(int *)PTR_DAT_04bb6260 < (int)sVar8) ||
         (*(int *)(PTR_DAT_04bb6258 + ((long)sVar8 & 0xffffffffU) * 0x10) == 0)) {
        uVar12 = 0xffffffffffffffff;
      }
      else {
        uVar12 = *(undefined8 *)(PTR_DAT_04bb6258 + (long)sVar8 * 0x10 + 8);
      }
      uVar11 = FUN_00a77550(local_3c,uVar12,1,1);
      goto joined_r0x01eda170;
    }
  }
LAB_01eda28c:
  uVar11 = *puVar3 & 0xffffffffffffffef;
LAB_01eda294:
  *puVar3 = uVar11;
  return;
}

