
void FUN_026934e8(long param_1,short *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,ulong param_6,ulong param_7,uint param_8)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  undefined4 local_b8;
  undefined4 uStack_b4;
  short local_b0;
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  uint uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  uint local_98;
  ulong local_94;
  undefined8 local_8c;
  undefined4 local_84;
  ushort local_7c [2];
  undefined1 auStack_78 [2];
  undefined1 auStack_76 [2];
  uint local_74;
  short local_70;
  undefined2 local_6e;
  uint local_6c;
  uint local_68;
  int local_64;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_6e = param_2[1];
  local_70 = *param_2;
  local_6c = *(uint *)(param_2 + 2);
  if (local_70 != -2) {
    lVar14 = *(long *)PTR_DAT_04bb43c0;
    uVar7 = FUN_0277d6c4(&local_70);
    uVar6 = local_6c;
    sVar5 = local_6e;
    sVar4 = local_70;
    lVar15 = *(long *)puVar3;
    if (lVar15 == 0) {
      return;
    }
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if (*(uint *)(lVar14 + 0x1d8) <= uVar7) {
      return;
    }
    if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) == 0) {
      return;
    }
    local_a8 = 0;
    uStack_a4 = 0;
    local_b0 = local_70;
    uStack_ad = local_6e._1_1_;
    uStack_ac = local_6c;
    local_b8 = 0x4a36b50;
    uStack_b4 = 0;
    uStack_ae = (undefined1)local_6e;
    uVar7 = FUN_0277d6c4(&local_b0);
    if (*(long *)puVar3 == 0) {
LAB_02693958:
      puVar12 = (uint *)0x0;
      local_74 = 0xbc;
      bVar16 = true;
    }
    else {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((*(uint *)(lVar15 + 0x1d8) <= uVar7) ||
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_02693958;
      lVar15 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(&local_70);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((*(uint *)(lVar15 + 0x1d8) <= uVar7) ||
         (puVar12 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8),
         puVar12 == (uint *)0x0)) goto LAB_02693958;
      local_a8 = SUB84(puVar12,0);
      uStack_a4 = (undefined4)((ulong)puVar12 >> 0x20);
      local_74 = 0;
      uVar7 = *puVar12;
      if ((uVar7 == 0) || (puVar12 == (uint *)(ulong)uVar7)) {
LAB_0269422c:
        bVar16 = false;
      }
      else {
        puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar7);
        local_74 = 0;
        if (*puVar13 == 0) goto LAB_0269422c;
        uVar7 = puVar13[1];
        if ((uVar7 == 0) || ((ulong)(ushort)puVar13[2] == 0)) {
LAB_02694228:
          local_74 = 0;
          goto LAB_0269422c;
        }
        lVar15 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
        if (lVar15 == 0) goto LAB_02694228;
        uVar11 = 0;
        if ((ulong)uVar7 != 0) {
          uVar11 = (uint)((ulong)((long)puVar12 - lVar15) / (ulong)uVar7);
        }
        if (*puVar13 <= uVar11) {
          uVar11 = 0xffffffff;
        }
        if (DAT_05326ec0 <= uVar11) goto LAB_02694228;
        local_74 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar11 * 2);
        if (local_74 < 0xbd) goto LAB_0269422c;
        bVar16 = false;
        local_74 = 0;
      }
    }
    if (local_74 == 0xac) {
      uVar8 = FUN_021d7d60(param_1);
      FUN_01b086f4(auStack_78,&local_b8);
      FUN_026567f0(auStack_76,uVar8,auStack_78);
      FUN_007ef010(local_7c,auStack_76);
      local_64 = 0xac;
      if (bVar16) {
        local_68 = 0xbc;
      }
      else {
        uVar7 = *puVar12;
        local_68 = 0;
        if ((uVar7 != 0) && (puVar12 != (uint *)(ulong)uVar7)) {
          puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar7);
          local_68 = 0;
          if (*puVar13 != 0) {
            uVar7 = puVar13[1];
            if ((uVar7 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
              lVar15 = 0xc;
              if (*(char *)((long)puVar13 + 10) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
              if (lVar15 != 0) {
                uVar11 = 0;
                if ((ulong)uVar7 != 0) {
                  uVar11 = (uint)((ulong)((long)puVar12 - lVar15) / (ulong)uVar7);
                }
                if (*puVar13 <= uVar11) {
                  uVar11 = 0xffffffff;
                }
                if ((uVar11 < DAT_05326ec0) &&
                   (local_68 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar11 * 2),
                   local_68 < 0xbd)) goto LAB_02693bc8;
              }
            }
            local_68 = 0;
          }
        }
      }
LAB_02693bc8:
      if (local_68 == 0xac) {
        uVar6 = uVar6 & 0xffff0000 | (uint)local_7c[0];
        uStack_ac = uVar6;
      }
      local_70 = sVar4;
      local_6e = sVar5;
      local_6c = uVar6;
    }
    else {
      local_64 = FUN_01ae1100(&local_b8);
      if (local_64 != 1) {
        return;
      }
    }
  }
  puVar10 = (undefined4 *)(param_1 + 0x12644);
  if ((param_7 & 1) == 0) {
    FUN_0277d6c4(&local_70);
  }
  else {
    uVar9 = FUN_0277d7b4(param_1 + 0x12644,&local_70);
    puVar3 = PTR_DAT_04bb43c0;
    if ((((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x12647) == local_6e._1_1_)) &&
       (*(uint *)(param_1 + 0x12648) == local_6c)) {
      return;
    }
    lVar15 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar3 != 0) {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar15 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        uVar9 = FUN_0277d7b4(param_1 + 0x1094c,&local_70);
        if (((uVar9 & 1) != 0) &&
           ((*(char *)(param_1 + 0x1094f) == local_6e._1_1_ &&
            (*(uint *)(param_1 + 0x10950) == local_6c)))) {
          lVar15 = 0;
LAB_02694164:
          lVar14 = *(long *)puVar3;
          puVar10 = (undefined4 *)(param_1 + 0x1094c + lVar15 * 0x2c);
          uVar9 = *(ulong *)(puVar10 + 9);
          local_b8 = *puVar10;
          uStack_b4 = puVar10[1];
          uVar2 = *(undefined8 *)(puVar10 + 2);
          local_98 = puVar10[8];
          local_b0 = (short)uVar2;
          uStack_ae = (undefined1)((ulong)uVar2 >> 0x10);
          uStack_ad = (undefined1)((ulong)uVar2 >> 0x18);
          uStack_ac = (uint)((ulong)uVar2 >> 0x20);
          local_a8 = (undefined4)*(undefined8 *)(puVar10 + 4);
          uStack_a4 = (undefined4)((ulong)*(undefined8 *)(puVar10 + 4) >> 0x20);
          if (1 < local_98) {
            local_98 = 0;
          }
          local_a0 = (undefined4)*(undefined8 *)(puVar10 + 6);
          uStack_9c = (undefined4)((ulong)*(undefined8 *)(puVar10 + 6) >> 0x20);
          local_94 = uVar9;
          uVar6 = FUN_0277d6c4(&local_b8);
          if (*(long *)puVar3 == 0) {
            return;
          }
          lVar14 = *(long *)(lVar14 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if (*(uint *)(lVar14 + 0x1d8) <= uVar6) {
            return;
          }
          if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) == 0) {
            return;
          }
          if ((param_8 & 1) != 0) {
            FUN_026b3b80(param_1,lVar15,1);
          }
          FUN_026934e8(param_1,&local_b8,&local_b0,uVar9 & 0xffffffff,uVar9 >> 0x20,0,param_8 & 1,1)
          ;
          return;
        }
        uVar9 = FUN_0277d7b4(param_1 + 0x10978,&local_70);
        if ((((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x1097b) == local_6e._1_1_)) &&
           (*(uint *)(param_1 + 0x1097c) == local_6c)) {
          lVar15 = 1;
          goto LAB_02694164;
        }
        uVar9 = FUN_0277d7b4(param_1 + 0x109a4,&local_70);
        if ((((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x109a7) == local_6e._1_1_)) &&
           (*(uint *)(param_1 + 0x109a8) == local_6c)) {
          lVar15 = 2;
          goto LAB_02694164;
        }
        uVar9 = FUN_0277d7b4(param_1 + 0x109d0,&local_70);
        if ((((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x109d3) == local_6e._1_1_)) &&
           (*(uint *)(param_1 + 0x109d4) == local_6c)) {
          lVar15 = 3;
          goto LAB_02694164;
        }
        uVar9 = FUN_0277d7b4(param_1 + 0x109fc,&local_70);
        if ((((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x109ff) == local_6e._1_1_)) &&
           (*(uint *)(param_1 + 0x10a00) == local_6c)) {
          lVar15 = 4;
          goto LAB_02694164;
        }
        uVar9 = FUN_0277d7b4(param_1 + 0x10a28,&local_70);
        if ((((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x10a2b) == local_6e._1_1_)) &&
           (*(uint *)(param_1 + 0x10a2c) == local_6c)) {
          lVar15 = 5;
          goto LAB_02694164;
        }
        uVar9 = FUN_0277d7b4(param_1 + 0x10a54,&local_70);
        if ((((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x10a57) == local_6e._1_1_)) &&
           (*(uint *)(param_1 + 0x10a58) == local_6c)) {
          lVar15 = 6;
          goto LAB_02694164;
        }
        uVar9 = FUN_0277d7b4(param_1 + 0x10a80,&local_70);
        if ((((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x10a83) == local_6e._1_1_)) &&
           (*(uint *)(param_1 + 0x10a84) == local_6c)) {
          lVar15 = 7;
          goto LAB_02694164;
        }
        uVar9 = FUN_0277d7b4(param_1 + 0x10aac,&local_70);
        if ((((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x10aaf) == local_6e._1_1_)) &&
           (*(uint *)(param_1 + 0x10ab0) == local_6c)) {
          lVar15 = 8;
          goto LAB_02694164;
        }
        uVar9 = FUN_0277d7b4(param_1 + 0x10ad8,&local_70);
        if ((((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x10adb) == local_6e._1_1_)) &&
           (*(uint *)(param_1 + 0x10adc) == local_6c)) {
          lVar15 = 9;
          goto LAB_02694164;
        }
        uVar9 = FUN_0277d7b4(param_1 + 0x10b04,&local_70);
        if ((((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x10b07) == local_6e._1_1_)) &&
           (*(uint *)(param_1 + 0x10b08) == local_6c)) {
          lVar15 = 10;
          goto LAB_02694164;
        }
        uVar9 = FUN_0277d7b4(param_1 + 0x10b30,&local_70);
        if ((((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x10b33) == local_6e._1_1_)) &&
           (*(uint *)(param_1 + 0x10b34) == local_6c)) {
          lVar15 = 0xb;
          goto LAB_02694164;
        }
        uVar9 = FUN_0277d7b4(param_1 + 0x10b5c,&local_70);
        if ((((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x10b5f) == local_6e._1_1_)) &&
           (*(uint *)(param_1 + 0x10b60) == local_6c)) {
          lVar15 = 0xc;
          goto LAB_02694164;
        }
        uVar9 = FUN_0277d7b4(param_1 + 0x10b88,&local_70);
        if ((((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x10b8b) == local_6e._1_1_)) &&
           (*(uint *)(param_1 + 0x10b8c) == local_6c)) {
          lVar15 = 0xd;
          goto LAB_02694164;
        }
        uVar9 = FUN_0277d7b4(param_1 + 0x10bb4,&local_70);
        if ((((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x10bb7) == local_6e._1_1_)) &&
           (*(uint *)(param_1 + 0x10bb8) == local_6c)) {
          lVar15 = 0xe;
          goto LAB_02694164;
        }
        uVar9 = FUN_0277d7b4(param_1 + 0x10be0,&local_70);
        if ((((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x10be3) == local_6e._1_1_)) &&
           (*(uint *)(param_1 + 0x10be4) == local_6c)) {
          lVar15 = 0xf;
          goto LAB_02694164;
        }
        uVar9 = FUN_0277d7b4(param_1 + 0x10c0c,&local_70);
        if ((((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x10c0f) == local_6e._1_1_)) &&
           (*(uint *)(param_1 + 0x10c10) == local_6c)) {
          lVar15 = 0x10;
          goto LAB_02694164;
        }
        uVar9 = FUN_0277d7b4(param_1 + 0x10c38,&local_70);
        if ((((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x10c3b) == local_6e._1_1_)) &&
           (*(uint *)(param_1 + 0x10c3c) == local_6c)) {
          lVar15 = 0x11;
          goto LAB_02694164;
        }
        uVar9 = FUN_0277d7b4(param_1 + 0x10c64,&local_70);
        if ((((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x10c67) == local_6e._1_1_)) &&
           (*(uint *)(param_1 + 0x10c68) == local_6c)) {
          lVar15 = 0x12;
          goto LAB_02694164;
        }
        uVar9 = FUN_0277d7b4(param_1 + 0x10c90,&local_70);
        if ((((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x10c93) == local_6e._1_1_)) &&
           (*(uint *)(param_1 + 0x10c94) == local_6c)) {
          lVar15 = 0x13;
          goto LAB_02694164;
        }
        uVar9 = FUN_0277d7b4(param_1 + 0x10cbc,&local_70);
        if ((((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x10cbf) == local_6e._1_1_)) &&
           (*(uint *)(param_1 + 0x10cc0) == local_6c)) {
          lVar15 = 0x14;
          goto LAB_02694164;
        }
        uVar9 = FUN_0277d7b4(param_1 + 0x10ce8,&local_70);
        if ((((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x10ceb) == local_6e._1_1_)) &&
           (*(uint *)(param_1 + 0x10cec) == local_6c)) {
          lVar15 = 0x15;
          goto LAB_02694164;
        }
        uVar9 = FUN_0277d7b4(param_1 + 0x10d14,&local_70);
        if ((((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x10d17) == local_6e._1_1_)) &&
           (*(uint *)(param_1 + 0x10d18) == local_6c)) {
          lVar15 = 0x16;
          goto LAB_02694164;
        }
        uVar9 = FUN_0277d7b4(param_1 + 0x10d40,&local_70);
        if ((((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x10d43) == local_6e._1_1_)) &&
           (*(uint *)(param_1 + 0x10d44) == local_6c)) {
          lVar15 = 0x17;
          goto LAB_02694164;
        }
      }
    }
  }
  puVar3 = PTR_DAT_04bb43c0;
  if ((param_8 & 1) == 0) {
    return;
  }
  local_64 = *(int *)(param_1 + 0x12668);
  if ((local_64 == 7) || (local_64 == 0)) goto LAB_02693d80;
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(puVar10);
  lVar15 = *(long *)puVar3;
  if (lVar15 == 0) goto LAB_02693d80;
  lVar14 = *(long *)(lVar14 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
  if ((*(uint *)(lVar14 + 0x1d8) <= uVar6) ||
     (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_02693d80;
  local_a8 = 0;
  uStack_a4 = 0;
  uVar8 = *puVar10;
  uStack_ac = *(undefined4 *)(param_1 + 0x12648);
  local_b0 = (short)uVar8;
  uStack_ae = (undefined1)((uint)uVar8 >> 0x10);
  uStack_ad = (undefined1)((uint)uVar8 >> 0x18);
  local_b8 = 0x4a36b50;
  uStack_b4 = 0;
  uVar6 = FUN_0277d6c4(&local_b0);
  if (*(long *)puVar3 == 0) {
LAB_02693cfc:
    local_68 = 0xbc;
  }
  else {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((*(uint *)(lVar15 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_02693cfc;
    lVar15 = *(long *)PTR_DAT_04bc0428;
    uVar6 = FUN_0277d6c4(puVar10);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((*(uint *)(lVar15 + 0x1d8) <= uVar6) ||
       (puVar12 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8),
       puVar12 == (uint *)0x0)) goto LAB_02693cfc;
    local_a8 = SUB84(puVar12,0);
    uStack_a4 = (undefined4)((ulong)puVar12 >> 0x20);
    local_68 = 0;
    uVar6 = *puVar12;
    if ((uVar6 != 0) && (puVar12 != (uint *)(ulong)uVar6)) {
      puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar6);
      local_68 = 0;
      if (*puVar13 != 0) {
        uVar6 = puVar13[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
          lVar15 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar15 != 0) {
            uVar7 = 0;
            if ((ulong)uVar6 != 0) {
              uVar7 = (uint)((ulong)((long)puVar12 - lVar15) / (ulong)uVar6);
            }
            if (*puVar13 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < DAT_05326ec0) &&
               (local_68 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar7 * 2), local_68 < 0xbd))
            goto LAB_02693d00;
          }
        }
        local_68 = 0;
      }
    }
  }
LAB_02693d00:
  if ((local_68 != 0xac) &&
     (uVar6 = FUN_0268f390(param_1,puVar10,param_1 + 0x1264c,*(undefined4 *)(param_1 + 0x12668),
                           *(undefined1 *)(param_1 + 0x1266c),1,0), -1 < (int)uVar6)) {
    uVar11 = 0x20;
    uVar7 = uVar6 - 0x18;
    if (uVar6 < 0x18) {
      uVar11 = 0x18;
      uVar7 = uVar6;
    }
    if (uVar7 < uVar11) {
      lVar15 = param_1 + 0x10d6c;
      if (uVar6 < 0x18) {
        lVar15 = param_1 + 0x1094c;
      }
      FUN_027d2014(lVar15 + (ulong)uVar7 * 0x2c,puVar10);
    }
  }
LAB_02693d80:
  local_b8 = 0;
  local_a0 = CONCAT31(local_a0._1_3_,2);
  uStack_b4 = 0;
  local_b0 = 0;
  uStack_ae = 0;
  uStack_ad = 0;
  puVar1 = &uStack_9c;
  if (param_3 != (undefined4 *)0x0) {
    puVar1 = param_3;
  }
  uStack_ac = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_9c = 0;
  local_98 = 0;
  local_94 = 0;
  local_8c = 0;
  local_84 = 0;
  uVar8 = FUN_021d7d60(param_1);
  FUN_027d2090(puVar10,&local_70,puVar1,param_4,param_5,0);
  if ((param_6 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x1266d) = 1;
  }
  FUN_020ed39c(uVar8,1,puVar10);
  return;
}

