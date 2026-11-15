
void FUN_0218918c(undefined8 param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  ushort uVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined *local_60;
  char *pcStack_58;
  undefined *local_50;
  char *local_48;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_2);
  lVar13 = *(long *)puVar3;
  if (lVar13 == 0) {
    return;
  }
  lVar14 = *(long *)(lVar14 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
  if (*(uint *)(lVar14 + 0x1d8) <= uVar4) {
    return;
  }
  if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return;
  }
  local_68 = 0;
  local_70 = *param_2;
  uStack_6c = param_2[1];
  uVar4 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar3 == 0) {
LAB_02189328:
    local_50 = (undefined *)CONCAT44(local_50._4_4_,0x96);
    uVar4 = 0xbc;
  }
  else {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((*(uint *)(lVar13 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_02189328;
    lVar13 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_2);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((*(uint *)(lVar13 + 0x1d8) <= uVar4) ||
       (puVar11 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8),
       puVar11 == (uint *)0x0)) goto LAB_02189328;
    uVar4 = 0;
    local_50 = (undefined *)CONCAT44(local_50._4_4_,0x96);
    uVar7 = *puVar11;
    if ((uVar7 != 0) && (puVar11 != (uint *)(ulong)uVar7)) {
      puVar12 = (uint *)((long)puVar11 - (long)(ulong)uVar7);
      uVar4 = 0;
      if (*puVar12 != 0) {
        uVar4 = puVar12[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar12 + lVar13 + (ulong)(ushort)puVar12[2] * 8;
          if (lVar13 != 0) {
            uVar7 = 0;
            if ((ulong)uVar4 != 0) {
              uVar7 = (uint)((ulong)((long)puVar11 - lVar13) / (ulong)uVar4);
            }
            if (*puVar12 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar4 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar7 * 2),
               uVar4 < 0xbd)) goto LAB_02189334;
          }
        }
        uVar4 = 0;
      }
    }
  }
LAB_02189334:
  puVar3 = PTR_DAT_04bb2020;
  local_60 = (undefined *)CONCAT44(local_60._4_4_,uVar4);
  if (uVar4 == (uint)local_50) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_58 = "BeyDaily_QuestCount";
    local_60 = puVar1;
    iVar5 = FUN_0274bce0(param_1,&local_60);
    local_48 = "BeyRequireFishSize";
    local_50 = puVar1;
    iVar6 = FUN_0273ea30(&local_50);
    iVar10 = 5;
    if (iVar6 != 3) {
      iVar10 = 3;
    }
    if (iVar10 <= iVar5) {
      return;
    }
LAB_021894f4:
    local_50 = puVar3 + 0x10;
    local_48 = "BeyDaily_QuestCount";
    FUN_0274bfe8(param_1,&local_50,0);
  }
  else {
    local_50 = PTR_DAT_04bb2020 + 0x10;
    local_48 = "BeyRequireFishSize";
    uVar7 = FUN_0273ea30(&local_50);
    lVar13 = *(long *)PTR_DAT_04bb3d80;
    uVar8 = FUN_0277d6c4(param_2);
    uVar4 = ((uint)uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x348);
    if ((uVar4 < *(uint *)(lVar13 + 0x328)) &&
       (puVar11 = *(uint **)(*(long *)(lVar13 + 0x330) + (long)(int)uVar4 * 8),
       puVar11 != (uint *)0x0)) {
      uVar4 = *puVar11;
      uVar9 = 0;
      if ((uVar4 != 0) && (puVar11 != (uint *)(ulong)uVar4)) {
        puVar12 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
        uVar9 = 0;
        if (*puVar12 != 0) {
          uVar4 = puVar12[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar12 + lVar13 + (ulong)(ushort)puVar12[2] * 8;
            if (lVar13 != 0) {
              uVar2 = 0;
              if ((ulong)uVar4 != 0) {
                uVar2 = (uint)((ulong)((long)puVar11 - lVar13) / (ulong)uVar4);
              }
              if (*puVar12 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < *(uint *)PTR_DAT_04bbcad8) &&
                 (uVar9 = *(ushort *)(*(long *)(PTR_DAT_04bbcad8 + 8) + (long)(int)uVar2 * 2),
                 uVar9 < 9)) goto LAB_0218948c;
            }
          }
          goto LAB_02189488;
        }
      }
    }
    else {
LAB_02189488:
      uVar9 = 0;
    }
LAB_0218948c:
    if (uVar7 == 0) {
      if (uVar9 < 2) {
LAB_021894ac:
        puVar1 = puVar3 + 0x10;
        pcStack_58 = "BeyDaily_QuestCount";
        local_60 = puVar1;
        iVar5 = FUN_0274bce0(param_1,&local_60);
        local_48 = "BeyRequireFishSize";
        local_50 = puVar1;
        iVar6 = FUN_0273ea30(&local_50);
        iVar10 = 5;
        if (iVar6 != 3) {
          iVar10 = 3;
        }
        if (iVar10 <= iVar5) {
          return;
        }
        goto LAB_021894f4;
      }
    }
    else if (uVar7 != 3) {
      if (2 < uVar7) {
        return;
      }
      if (1 < uVar9) goto LAB_021894ac;
    }
    FUN_02188d6c(uVar8,param_1);
  }
  return;
}

