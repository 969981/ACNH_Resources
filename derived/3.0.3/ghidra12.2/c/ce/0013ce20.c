
int FUN_0013ce20(long param_1,undefined8 *param_2,long param_3,ulong param_4,ushort param_5,
                uint param_6,char param_7)

{
  uint *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  ushort uVar4;
  byte bVar5;
  uint uVar6;
  bool bVar7;
  char cVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  uint *puVar18;
  long lVar19;
  uint local_f0;
  int local_e8;
  char local_d4 [4];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  param_3 = param_3 + (param_4 & 0xffff) * 0x20;
  local_d4[0] = '\0';
  puVar18 = (uint *)(param_3 + 0x10);
  uVar15 = *puVar18;
  if (1 < uVar15 + 1) {
    uVar16 = (ulong)param_6;
    if (param_2[2] == 0) {
      lVar14 = param_2[1];
      lVar19 = 0;
    }
    else {
      lVar14 = param_2[1];
      lVar19 = param_2[2] +
               ((ulong)*(byte *)(lVar14 + 0x10) << 0x18 | (ulong)*(byte *)(lVar14 + 0x11) << 0x10 |
                (ulong)*(byte *)(lVar14 + 0x12) << 8 | (ulong)*(byte *)(lVar14 + 0x13)) + 0x3c;
    }
    lVar14 = lVar14 + ((ulong)*(byte *)(lVar14 + 0x28) << 0x18 |
                       (ulong)*(byte *)(lVar14 + 0x29) << 0x10 |
                       (ulong)*(byte *)(lVar14 + 0x2a) << 8 | (ulong)*(byte *)(lVar14 + 0x2b));
    iVar10 = FUN_0013bc70(param_1,uVar15,*(byte *)(lVar14 + (ulong)(uVar15 * 2 - 1)) & 0x3f,param_2,
                          local_d4,uVar16);
    uVar15 = *(uint *)(param_3 + 0x18);
    if (*puVar18 < uVar15) {
      uVar17 = *puVar18 + 1;
    }
    else {
      uVar17 = *(uint *)(param_3 + 0x14);
    }
    bVar5 = *(byte *)(param_1 + 0x6d648);
    uVar4 = (ushort)bVar5;
    if (bVar5 <= param_5) {
      uVar4 = param_5;
    }
    if (uVar17 <= uVar15) {
      uVar6 = (*(uint *)(param_2[1] + 8) & 0xff00ff00) >> 8 |
              (*(uint *)(param_2[1] + 8) & 0xff00ff) << 8;
      local_f0 = 0;
      puVar2 = (undefined1 *)(param_1 + (uVar16 & 0xffff) + 0x6f4fc);
      bVar7 = false;
      puVar1 = (uint *)(param_3 + 0x14);
      local_e8 = -10000;
LAB_0013cfa8:
      if (param_7 < '\0') {
        do {
          if (lVar19 == 0) {
LAB_0013d100:
            if (0x3f < *(byte *)(lVar14 + (ulong)(uVar17 * 2 - 1))) goto LAB_0013d140;
          }
          else {
            uVar13 = (uint)*(char *)(lVar19 + (ulong)(uVar17 - 1));
            if ((uVar13 >> 6 & 1) == 0) {
              if (-1 < (int)uVar13) goto LAB_0013d100;
              goto LAB_0013d140;
            }
          }
          uVar17 = uVar17 + 1;
          if ((uVar15 < uVar17) && (!bVar7)) {
            uVar17 = *puVar1;
            uVar15 = *puVar18;
            bVar7 = true;
          }
          if (uVar15 < uVar17) goto LAB_0013d2d4;
        } while( true );
      }
      do {
        if (lVar19 == 0) {
LAB_0013cfc4:
          if (uVar4 == 1) {
            if ((*(byte *)(lVar14 + (ulong)(uVar17 * 2 - 1)) & 0xc0) == 0x40) goto LAB_0013d030;
          }
          else if (uVar4 == 2) {
            if (-1 < (char)(*(char *)(lVar14 + (ulong)(uVar17 * 2 - 1)) + -0x40)) goto LAB_0013d030;
          }
          else if ((2 < uVar4) && (0x3f < *(byte *)(lVar14 + (ulong)(uVar17 * 2 - 1)))) {
LAB_0013d030:
            lVar12 = param_2[1];
            bVar5 = *(byte *)(param_1 + 0x6d648);
            if ((uVar6 >> 0x10 | uVar6 << 0x10) == 0x50001) {
              if (((bVar5 == 0) && (*(byte *)(param_1 + 0x6d649) == 0x37)) ||
                 (bVar3 = *(byte *)(lVar12 + ((ulong)*(byte *)(lVar12 + 0x20) << 0x18 |
                                              (ulong)*(byte *)(lVar12 + 0x21) << 0x10 |
                                              (ulong)*(byte *)(lVar12 + 0x22) << 8 |
                                             (ulong)*(byte *)(lVar12 + 0x23)) +
                                   (ulong)(uVar17 * 6 - 6)) & 0x7f,
                 bVar3 <= *(byte *)(param_1 + 0x6d649) && bVar5 <= bVar3)) goto LAB_0013d140;
            }
            else {
              cVar8 = FUN_0013c1f0(lVar12,uVar17);
              if (cVar8 != '\0') goto LAB_0013d140;
            }
          }
        }
        else {
          uVar13 = (uint)*(char *)(lVar19 + (ulong)(uVar17 - 1));
          if ((uVar13 >> 6 & 1) == 0) {
            if (-1 < (int)uVar13) goto LAB_0013cfc4;
            goto LAB_0013d030;
          }
        }
        uVar17 = uVar17 + 1;
        if ((uVar15 < uVar17) && (!bVar7)) {
          uVar17 = *puVar1;
          uVar15 = *puVar18;
          bVar7 = true;
        }
        if (uVar15 < uVar17) goto LAB_0013d2d4;
      } while( true );
    }
  }
LAB_0013ce60:
  local_f0 = 0xffffffff;
  local_e8 = -10000;
LAB_0013ce68:
  *puVar18 = local_f0;
  return local_e8;
LAB_0013d140:
  iVar11 = FUN_0013bc70(param_1,uVar17,*(byte *)(lVar14 + (ulong)(uVar17 * 2 - 1)) & 0x3f,param_2,
                        local_d4,uVar16);
  if ((iVar11 == iVar10) && (*puVar18 < uVar17)) {
    if (*(long *)(param_1 + 0x6f4b8) == 0) {
LAB_0013d2ec:
      *puVar18 = uVar17;
      *puVar2 = local_d4[0] == '\x01';
      return iVar10;
    }
    uStack_a0 = param_2[6];
    uStack_90 = param_2[8];
    local_88 = param_2[9];
    local_d0 = *param_2;
    uStack_c8 = param_2[1];
    local_c0 = param_2[2];
    local_b8 = param_2[3];
    uStack_b0 = param_2[4];
    local_a8 = param_2[5];
    local_80 = param_2[10];
    uStack_78 = param_2[0xb];
    local_70 = param_2[0xc];
    uStack_68 = param_2[0xd];
    uStack_94 = (undefined4)((ulong)param_2[7] >> 0x20);
    _local_98 = CONCAT44(uStack_94,uVar17);
    sVar9 = FUN_0013c020(param_1,&local_d0);
    if (sVar9 != 0) goto LAB_0013d2ec;
  }
  if (iVar11 < iVar10) {
    if (iVar11 <= local_e8) {
      if (!(uVar17 < local_f0 && iVar11 == local_e8)) goto LAB_0013d298;
    }
    if (*(long *)(param_1 + 0x6f4b8) != 0) {
      uStack_a0 = param_2[6];
      uStack_90 = param_2[8];
      local_88 = param_2[9];
      local_d0 = *param_2;
      uStack_c8 = param_2[1];
      local_c0 = param_2[2];
      local_b8 = param_2[3];
      uStack_b0 = param_2[4];
      local_a8 = param_2[5];
      local_80 = param_2[10];
      uStack_78 = param_2[0xb];
      local_70 = param_2[0xc];
      uStack_68 = param_2[0xd];
      uStack_94 = (undefined4)((ulong)param_2[7] >> 0x20);
      _local_98 = CONCAT44(uStack_94,uVar17);
      sVar9 = FUN_0013c020(param_1,&local_d0);
      if (sVar9 == 0) goto LAB_0013d298;
    }
    if (local_d4[0] == '\x01') {
      *puVar2 = 1;
    }
    else {
      *puVar2 = 0;
    }
    local_f0 = uVar17;
    local_e8 = iVar11;
  }
LAB_0013d298:
  uVar17 = uVar17 + 1;
  if (uVar17 <= uVar15) {
    if (uVar15 < uVar17) goto LAB_0013d2d4;
    goto LAB_0013cfa8;
  }
  if (!bVar7) {
    uVar17 = *puVar1;
    uVar15 = *puVar18;
    bVar7 = true;
  }
  if (uVar15 < uVar17) goto LAB_0013d2d4;
  goto LAB_0013cfa8;
LAB_0013d2d4:
  if (local_e8 != -10000) goto LAB_0013ce68;
  goto LAB_0013ce60;
}

