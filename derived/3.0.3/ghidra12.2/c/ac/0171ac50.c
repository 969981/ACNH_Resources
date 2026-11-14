
undefined8 FUN_0171ac50(long *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  undefined *puVar5;
  bool bVar6;
  ulong uVar7;
  uint *puVar8;
  short *psVar9;
  uint uVar10;
  byte *pbVar11;
  undefined8 local_180;
  undefined1 *local_178;
  undefined4 local_170;
  undefined1 local_16c [31];
  undefined1 local_14d;
  undefined8 local_148;
  byte *local_140;
  undefined4 local_138;
  byte local_134 [31];
  undefined1 local_115;
  undefined1 local_35;
  
  local_14d = 0;
  local_16c[0] = 0;
  local_170 = 0x20;
  local_178 = local_16c;
  local_138 = 0x100;
  local_140 = local_134;
  local_35 = 0;
  local_180 = PTR_DAT_04bb3000 + 0x10;
  local_134[0] = 0;
  local_148 = PTR_DAT_04bb3020 + 0x10;
  (**(code **)(*param_1 + 0x58))(param_1,&local_148);
  (**(code **)(local_148 + 0x18))(&local_148);
  bVar3 = *local_140;
  if (bVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0xffffffff;
    pbVar11 = local_140;
    do {
      pbVar11 = pbVar11 + 1;
      uVar10 = crc32b(uVar10,(uint)bVar3,0x4c11db7);
      bVar3 = *pbVar11;
    } while (bVar3 != 0);
    uVar10 = ~uVar10;
  }
  FUN_038d1270(&local_180,&DAT_04074ae0,uVar10);
  (**(code **)(local_180 + 0x18))(&local_180);
  local_148 = (undefined *)((ulong)local_148 & 0xffffff0000000000);
  uVar7 = FUN_03ea9450(param_2,&local_148,local_178);
  puVar5 = PTR_s_cSmall_04bbdfe0;
  if (((uVar7 & 1) == 0) || (local_148._4_1_ != -0x60)) {
    local_115 = 0;
    local_140 = local_134;
    local_138 = 0x20;
    local_134[0] = 0;
    local_148 = PTR_DAT_04bb3008 + 0x10;
    pbVar11 = (byte *)param_1[1];
    bVar3 = *pbVar11;
    if (bVar3 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0xffffffff;
      do {
        pbVar11 = pbVar11 + 1;
        uVar10 = crc32b(uVar10,(uint)bVar3,0x4c11db7);
        bVar3 = *pbVar11;
      } while (bVar3 != 0);
      uVar10 = ~uVar10;
    }
    FUN_038d1270(&local_148,&DAT_04074ae0,uVar10);
    (**(code **)(local_148 + 0x18))(&local_148);
    local_180 = (undefined *)((ulong)local_180 & 0xffffff0000000000);
    uVar7 = FUN_03ea9450(param_2,&local_180,local_140);
    if (((uVar7 & 1) == 0) || (local_180._4_1_ != -0x2f)) {
      return 0;
    }
    uVar10 = (uint)local_180;
    if (4 < (uint)local_180) {
      return 1;
    }
  }
  else {
    psVar9 = (short *)*param_2;
    uVar2 = *(uint *)(psVar9 + 4);
    uVar10 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
    if (*psVar9 != 0x5942) {
      uVar10 = uVar2;
    }
    uVar7 = (ulong)uVar10;
    uVar2 = *(uint *)((long)psVar9 + (long)(int)local_148 * 4 + uVar7 + 4);
    uVar10 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
    if (*psVar9 != 0x5942) {
      uVar10 = uVar2;
    }
    local_140 = (byte *)((long)psVar9 + uVar10 + uVar7);
    local_148 = PTR_DAT_04bb2020 + 0x10;
    if (local_140 == PTR_s_cSmall_04bbdfe0) {
LAB_0171aeac:
      uVar10 = 0;
    }
    else {
      lVar1 = uVar7 + uVar10;
      uVar7 = 0;
      bVar6 = true;
      do {
        cVar4 = *(char *)((long)psVar9 + uVar7 + lVar1);
        if (cVar4 != PTR_s_cSmall_04bbdfe0[uVar7]) break;
        if (cVar4 == '\0') {
          if (bVar6) goto LAB_0171aeac;
          break;
        }
        bVar6 = uVar7 < 0x80000;
        uVar7 = uVar7 + 1;
      } while (uVar7 != 0x80001);
      if (local_140 == PTR_s_cSmall_04bbdfe0 + 9) {
LAB_0171af04:
        uVar10 = 1;
      }
      else {
        uVar7 = 0;
        bVar6 = true;
        do {
          cVar4 = *(char *)((long)psVar9 + uVar7 + lVar1);
          if (cVar4 != PTR_s_cSmall_04bbdfe0[uVar7 + 9]) break;
          if (cVar4 == '\0') {
            if (bVar6) goto LAB_0171af04;
            break;
          }
          bVar6 = uVar7 < 0x80000;
          uVar7 = uVar7 + 1;
        } while (uVar7 != 0x80001);
        if (local_140 == PTR_s_cSmall_04bbdfe0 + 0x13) {
LAB_0171af54:
          uVar10 = 2;
        }
        else {
          uVar7 = 0;
          bVar6 = true;
          do {
            cVar4 = *(char *)((long)psVar9 + uVar7 + lVar1);
            if (cVar4 != PTR_s_cSmall_04bbdfe0[uVar7 + 0x13]) break;
            if (cVar4 == '\0') {
              if (bVar6) goto LAB_0171af54;
              break;
            }
            bVar6 = uVar7 < 0x80000;
            uVar7 = uVar7 + 1;
          } while (uVar7 != 0x80001);
          if (local_140 == PTR_s_cSmall_04bbdfe0 + 0x1c) {
LAB_0171afa4:
            uVar10 = 3;
          }
          else {
            uVar7 = 0;
            bVar6 = true;
            do {
              cVar4 = *(char *)((long)psVar9 + uVar7 + lVar1);
              if (cVar4 != PTR_s_cSmall_04bbdfe0[uVar7 + 0x1c]) break;
              if (cVar4 == '\0') {
                if (bVar6) goto LAB_0171afa4;
                break;
              }
              bVar6 = uVar7 < 0x80000;
              uVar7 = uVar7 + 1;
            } while (uVar7 != 0x80001);
            FUN_006bd3a4(&local_148);
            (**(code **)(local_148 + 0x18))(&local_148);
            if (local_140 != puVar5 + 0x2a) {
              uVar7 = 0;
              bVar6 = true;
              while( true ) {
                if (local_140[uVar7] != puVar5[uVar7 + 0x2a]) {
                  return 1;
                }
                if (local_140[uVar7] == 0) break;
                bVar6 = uVar7 < 0x80000;
                uVar7 = uVar7 + 1;
                if (uVar7 == 0x80001) {
                  return 1;
                }
              }
              if (!bVar6) {
                return 1;
              }
            }
            uVar10 = 4;
          }
        }
      }
    }
  }
  puVar8 = (uint *)(**(code **)(*param_1 + 0xf0))(param_1);
  *puVar8 = uVar10;
  return 1;
}

