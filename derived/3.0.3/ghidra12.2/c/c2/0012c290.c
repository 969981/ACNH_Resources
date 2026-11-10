
int FUN_0012c290(long param_1,undefined8 *param_2,long param_3,ulong param_4,ushort param_5,
                uint param_6,char param_7)

{
  undefined1 *puVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  char cVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint local_f4;
  int local_f0;
  char local_dc [4];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  byte *local_68;
  
  local_dc[0] = '\0';
  lVar13 = param_2[1];
  iVar3 = *(int *)(lVar13 + 0x70);
  param_3 = param_3 + (param_4 & 0xffff) * 0x20;
  lVar14 = *(long *)(lVar13 + 8);
  puVar17 = (uint *)(param_3 + 0x10);
  uVar18 = *puVar17;
  if (1 < uVar18 + 1) {
    uVar15 = (ulong)param_6;
    if (param_2[2] == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = param_2[2] +
               ((ulong)*(byte *)(lVar14 + 0x10) << 0x18 | (ulong)*(byte *)(lVar14 + 0x11) << 0x10 |
                (ulong)*(byte *)(lVar14 + 0x12) << 8 | (ulong)*(byte *)(lVar14 + 0x13)) + 0x3c;
    }
    lVar13 = *(long *)(lVar13 + 0x60);
    iVar9 = FUN_0012a7e0(param_1,uVar18,*(byte *)(lVar13 + (ulong)(uVar18 * 2 - 1)) & 0x3f,param_2,
                         local_dc,uVar15);
    uVar18 = *(uint *)(param_3 + 0x18);
    if (*puVar17 < uVar18) {
      uVar16 = *puVar17 + 1;
    }
    else {
      uVar16 = *(uint *)(param_3 + 0x14);
    }
    bVar4 = *(byte *)(param_1 + 0x6d648);
    uVar2 = (ushort)bVar4;
    if (bVar4 <= param_5) {
      uVar2 = param_5;
    }
    if (uVar16 <= uVar18) {
      bVar6 = false;
      puVar1 = (undefined1 *)(param_1 + (uVar15 & 0xffff) + 0x6f4fc);
      local_f4 = 0;
      local_f0 = -10000;
      do {
        if (param_7 < '\0') {
          if (lVar14 == 0) {
LAB_0012c450:
            if (*(byte *)(lVar13 + (ulong)(uVar16 * 2 - 1)) < 0x40) goto joined_r0x0012c3ec;
          }
          else {
            uVar12 = (uint)*(char *)(lVar14 + (ulong)(uVar16 - 1));
            if ((uVar12 >> 6 & 1) != 0) goto joined_r0x0012c3ec;
            if (-1 < (int)uVar12) goto LAB_0012c450;
          }
          goto LAB_0012c570;
        }
        if (lVar14 == 0) {
LAB_0012c40c:
          if (uVar2 == 2) {
            if (-1 < (char)(*(char *)(lVar13 + (ulong)(uVar16 * 2 - 1)) + -0x40)) goto LAB_0012c4a4;
          }
          else if (uVar2 == 1) {
            if ((*(byte *)(lVar13 + (ulong)(uVar16 * 2 - 1)) & 0xc0) == 0x40) goto LAB_0012c4a4;
          }
          else if ((2 < uVar2) && (0x3f < *(byte *)(lVar13 + (ulong)(uVar16 * 2 - 1)))) {
LAB_0012c4a4:
            lVar11 = param_2[1];
            bVar4 = *(byte *)(param_1 + 0x6d648);
            bVar5 = *(byte *)(param_1 + 0x6d649);
            if (iVar3 == 0x40050001) {
              if (((bVar4 == 0) && (bVar5 == 0x37)) ||
                 ((uVar12 = *(uint *)(*(long *)(lVar11 + 8) + 0x20),
                  uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8,
                  iVar10 = FUN_0010dbc0(lVar11,5,(uVar12 >> 0x10 | uVar12 << 0x10) + uVar16 * 6 + -6
                                        ,4,&local_68), -1 < iVar10 &&
                  ((*local_68 & 0x7f) <= bVar5 && bVar4 <= (*local_68 & 0x7f))))) goto LAB_0012c570;
            }
            else {
              cVar7 = FUN_0012ac20(lVar11,uVar16,bVar4,bVar5);
              if (cVar7 != '\0') {
LAB_0012c570:
                iVar10 = FUN_0012a7e0(param_1,uVar16,
                                      *(byte *)(lVar13 + (ulong)(uVar16 * 2 - 1)) & 0x3f,param_2,
                                      local_dc,uVar15);
                if ((iVar10 == iVar9) && (*puVar17 < uVar16)) {
                  if (*(long *)(param_1 + 0x6f4b8) == 0) {
LAB_0012c748:
                    *puVar17 = uVar16;
                    *puVar1 = local_dc[0] == '\x01';
                    return iVar9;
                  }
                  uStack_a8 = param_2[6];
                  uStack_98 = param_2[8];
                  local_90 = param_2[9];
                  local_d8 = *param_2;
                  uStack_d0 = param_2[1];
                  local_c8 = param_2[2];
                  local_c0 = param_2[3];
                  uStack_b8 = param_2[4];
                  local_b0 = param_2[5];
                  local_88 = param_2[10];
                  uStack_80 = param_2[0xb];
                  local_78 = param_2[0xc];
                  uStack_70 = param_2[0xd];
                  local_a0._4_4_ = (undefined4)((ulong)param_2[7] >> 0x20);
                  local_a0 = CONCAT44(local_a0._4_4_,uVar16);
                  sVar8 = FUN_0012ab00(param_1,&local_d8);
                  if (sVar8 != 0) goto LAB_0012c748;
                }
                if (iVar10 < iVar9) {
                  if ((local_f0 < iVar10) || (uVar16 < local_f4 && iVar10 == local_f0)) {
                    if (*(long *)(param_1 + 0x6f4b8) != 0) {
                      uStack_a8 = param_2[6];
                      uStack_98 = param_2[8];
                      local_90 = param_2[9];
                      local_d8 = *param_2;
                      uStack_d0 = param_2[1];
                      local_c8 = param_2[2];
                      local_c0 = param_2[3];
                      uStack_b8 = param_2[4];
                      local_b0 = param_2[5];
                      local_88 = param_2[10];
                      uStack_80 = param_2[0xb];
                      local_78 = param_2[0xc];
                      uStack_70 = param_2[0xd];
                      local_a0._4_4_ = (undefined4)((ulong)param_2[7] >> 0x20);
                      local_a0 = CONCAT44(local_a0._4_4_,uVar16);
                      sVar8 = FUN_0012ab00(param_1,&local_d8);
                      if (sVar8 == 0) goto joined_r0x0012c3ec;
                    }
                    local_f4 = uVar16;
                    local_f0 = iVar10;
                    if (local_dc[0] == '\x01') {
                      *puVar1 = 1;
                    }
                    else {
                      *puVar1 = 0;
                    }
                  }
                }
              }
            }
          }
        }
        else {
          uVar12 = (uint)*(char *)(lVar14 + (ulong)(uVar16 - 1));
          if ((uVar12 >> 6 & 1) == 0) {
            if (-1 < (int)uVar12) goto LAB_0012c40c;
            goto LAB_0012c4a4;
          }
        }
joined_r0x0012c3ec:
        uVar12 = uVar16 + 1;
        if ((uVar18 < uVar16 + 1) && (uVar12 = uVar16 + 1, !bVar6)) {
          uVar18 = *puVar17;
          bVar6 = true;
          uVar12 = *(uint *)(param_3 + 0x14);
        }
        uVar16 = uVar12;
      } while (uVar16 <= uVar18);
      if (local_f0 != -10000) goto LAB_0012c718;
    }
  }
  local_f4 = 0xffffffff;
  local_f0 = -10000;
LAB_0012c718:
  *puVar17 = local_f4;
  return local_f0;
}

