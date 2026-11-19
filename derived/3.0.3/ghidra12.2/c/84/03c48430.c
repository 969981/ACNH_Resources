
undefined8 FUN_03c48430(long *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  ulong uVar8;
  uint *puVar9;
  short *psVar10;
  uint uVar11;
  byte *pbVar12;
  undefined8 local_190;
  byte *local_188;
  undefined4 local_180;
  byte local_17c [31];
  undefined1 local_15d;
  undefined8 local_158;
  byte *local_150;
  undefined4 local_148;
  byte local_144 [31];
  undefined1 local_125;
  undefined1 local_45;
  
  local_15d = 0;
  local_17c[0] = 0;
  local_180 = 0x20;
  local_188 = local_17c;
  local_148 = 0x100;
  local_150 = local_144;
  local_45 = 0;
  local_190 = PTR_DAT_04bb3000 + 0x10;
  local_144[0] = 0;
  local_158 = PTR_DAT_04bb3020 + 0x10;
  (**(code **)(*param_1 + 0x58))(param_1,&local_158);
  (**(code **)(local_158 + 0x18))(&local_158);
  bVar3 = *local_150;
  if (bVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0xffffffff;
    pbVar12 = local_150;
    do {
      pbVar12 = pbVar12 + 1;
      uVar11 = crc32b(uVar11,(uint)bVar3,0x4c11db7);
      bVar3 = *pbVar12;
    } while (bVar3 != 0);
    uVar11 = ~uVar11;
  }
  FUN_038d1270(&local_190,&DAT_04074ae0,uVar11);
  (**(code **)(local_190 + 0x18))(&local_190);
  local_158 = (undefined *)((ulong)local_158 & 0xffffff0000000000);
  uVar8 = FUN_03ea9450(param_2,&local_158,local_188);
  puVar6 = PTR_DAT_04bd2ed8;
  puVar5 = PTR_DAT_04bb2020;
  if (((uVar8 & 1) == 0) || (local_158._4_1_ != -0x60)) {
    local_125 = 0;
    local_150 = local_144;
    local_148 = 0x20;
    local_144[0] = 0;
    local_158 = PTR_DAT_04bb3008 + 0x10;
    pbVar12 = (byte *)param_1[1];
    bVar3 = *pbVar12;
    if (bVar3 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0xffffffff;
      do {
        pbVar12 = pbVar12 + 1;
        uVar11 = crc32b(uVar11,(uint)bVar3,0x4c11db7);
        bVar3 = *pbVar12;
      } while (bVar3 != 0);
      uVar11 = ~uVar11;
    }
    FUN_038d1270(&local_158,&DAT_04074ae0,uVar11);
    (**(code **)(local_158 + 0x18))(&local_158);
    local_190 = (undefined *)((ulong)local_190 & 0xffffff0000000000);
    uVar8 = FUN_03ea9450(param_2,&local_190,local_150);
    if (((uVar8 & 1) == 0) || (local_190._4_1_ != -0x2f)) {
      return 0;
    }
    uVar11 = (uint)local_190;
    if (5 < (uint)local_190) {
      return 1;
    }
  }
  else {
    psVar10 = (short *)*param_2;
    uVar2 = *(uint *)(psVar10 + 4);
    uVar11 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
    if (*psVar10 != 0x5942) {
      uVar11 = uVar2;
    }
    uVar8 = (ulong)uVar11;
    uVar2 = *(uint *)((long)psVar10 + (long)(int)local_158 * 4 + uVar8 + 4);
    uVar11 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
    if (*psVar10 != 0x5942) {
      uVar11 = uVar2;
    }
    local_158 = PTR_DAT_04bb2020 + 0x10;
    local_150 = (byte *)((long)psVar10 + uVar11 + uVar8);
    if (local_150 == PTR_DAT_04bd2ed8) {
LAB_03c48690:
      uVar11 = 0;
    }
    else {
      lVar1 = uVar8 + uVar11;
      uVar8 = 0;
      bVar7 = true;
      do {
        cVar4 = *(char *)((long)psVar10 + uVar8 + lVar1);
        if (cVar4 != PTR_DAT_04bd2ed8[uVar8]) break;
        if (cVar4 == '\0') {
          if (bVar7) goto LAB_03c48690;
          break;
        }
        bVar7 = uVar8 < 0x80000;
        uVar8 = uVar8 + 1;
      } while (uVar8 != 0x80001);
      if (local_150 == PTR_DAT_04bd2ed8 + 5) {
LAB_03c486e4:
        uVar11 = 1;
      }
      else {
        uVar8 = 0;
        bVar7 = true;
        do {
          cVar4 = *(char *)((long)psVar10 + uVar8 + lVar1);
          if (cVar4 != PTR_DAT_04bd2ed8[uVar8 + 5]) break;
          if (cVar4 == '\0') {
            if (bVar7) goto LAB_03c486e4;
            break;
          }
          bVar7 = uVar8 < 0x80000;
          uVar8 = uVar8 + 1;
        } while (uVar8 != 0x80001);
        if (local_150 == PTR_DAT_04bd2ed8 + 0xc) {
LAB_03c48734:
          uVar11 = 2;
        }
        else {
          uVar8 = 0;
          bVar7 = true;
          do {
            cVar4 = *(char *)((long)psVar10 + uVar8 + lVar1);
            if (cVar4 != PTR_DAT_04bd2ed8[uVar8 + 0xc]) break;
            if (cVar4 == '\0') {
              if (bVar7) goto LAB_03c48734;
              break;
            }
            bVar7 = uVar8 < 0x80000;
            uVar8 = uVar8 + 1;
          } while (uVar8 != 0x80001);
          FUN_006bd3a4(&local_158);
          if (local_150 == puVar6 + 0x12) {
LAB_03c48794:
            uVar11 = 3;
          }
          else {
            uVar8 = 0;
            bVar7 = true;
            do {
              if (local_150[uVar8] != puVar6[uVar8 + 0x12]) break;
              if (local_150[uVar8] == 0) {
                if (bVar7) goto LAB_03c48794;
                break;
              }
              bVar7 = uVar8 < 0x80000;
              uVar8 = uVar8 + 1;
            } while (uVar8 != 0x80001);
            (**(code **)(local_158 + 0x18))(&local_158);
            (**(code **)(local_158 + 0x18))(&local_158);
            if (local_150 == puVar6 + 0x18) {
LAB_03c48808:
              uVar11 = 4;
            }
            else {
              uVar8 = 0;
              bVar7 = true;
              do {
                if (local_150[uVar8] != puVar6[uVar8 + 0x18]) break;
                if (local_150[uVar8] == 0) {
                  if (bVar7) goto LAB_03c48808;
                  break;
                }
                bVar7 = uVar8 < 0x80000;
                uVar8 = uVar8 + 1;
              } while (uVar8 != 0x80001);
              local_190 = puVar5 + 0x10;
              local_188 = puVar6 + 0x1f;
              (**(code **)(local_158 + 0x18))(&local_158);
              (**(code **)(local_158 + 0x18))(&local_158);
              pbVar12 = local_150;
              FUN_006bd3a4(&local_190);
              if (pbVar12 != local_188) {
                uVar8 = 0;
                bVar7 = true;
                while( true ) {
                  if (local_150[uVar8] != local_188[uVar8]) {
                    return 1;
                  }
                  if (local_150[uVar8] == 0) break;
                  bVar7 = uVar8 < 0x80000;
                  uVar8 = uVar8 + 1;
                  if (uVar8 == 0x80001) {
                    return 1;
                  }
                }
                if (!bVar7) {
                  return 1;
                }
              }
              uVar11 = 5;
            }
          }
        }
      }
    }
  }
  puVar9 = (uint *)(**(code **)(*param_1 + 0xf0))(param_1);
  *puVar9 = uVar11;
  return 1;
}

