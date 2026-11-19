
undefined8 FUN_03c44c80(long *param_1,undefined8 *param_2)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  uint *puVar8;
  uint uVar9;
  byte *pbVar10;
  short *psVar11;
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
  local_148 = &PTR_LAB_048fda60;
  (**(code **)(*param_1 + 0x58))(param_1,&local_148);
  (*(code *)local_148[3])(&local_148);
  bVar4 = *local_140;
  if (bVar4 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0xffffffff;
    pbVar10 = local_140;
    do {
      pbVar10 = pbVar10 + 1;
      uVar9 = crc32b(uVar9,(uint)bVar4,0x4c11db7);
      bVar4 = *pbVar10;
    } while (bVar4 != 0);
    uVar9 = ~uVar9;
  }
  FUN_038d1270(&local_180,&DAT_04074ae0,uVar9);
  (**(code **)(local_180 + 0x18))(&local_180);
  local_148 = (undefined **)((ulong)local_148 & 0xffffff0000000000);
  uVar7 = FUN_03ea9450(param_2,&local_148,local_178);
  if (((uVar7 & 1) == 0) || (local_148._4_1_ != -0x60)) {
    local_115 = 0;
    local_140 = local_134;
    local_138 = 0x20;
    local_134[0] = 0;
    local_148 = &PTR_LAB_048fd9d0;
    pbVar10 = (byte *)param_1[1];
    bVar4 = *pbVar10;
    if (bVar4 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0xffffffff;
      do {
        pbVar10 = pbVar10 + 1;
        uVar9 = crc32b(uVar9,(uint)bVar4,0x4c11db7);
        bVar4 = *pbVar10;
      } while (bVar4 != 0);
      uVar9 = ~uVar9;
    }
    FUN_038d1270(&local_148,&DAT_04074ae0,uVar9);
    (*(code *)local_148[3])(&local_148);
    local_180 = (undefined *)((ulong)local_180 & 0xffffff0000000000);
    uVar7 = FUN_03ea9450(param_2,&local_180,local_140);
    if (((uVar7 & 1) == 0) || (local_180._4_1_ != -0x2f)) {
      return 0;
    }
    uVar9 = (uint)local_180;
    if (2 < (uint)local_180) {
      return 1;
    }
  }
  else {
    psVar11 = (short *)*param_2;
    uVar3 = *(uint *)(psVar11 + 4);
    uVar9 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    if (*psVar11 != 0x5942) {
      uVar9 = uVar3;
    }
    uVar7 = (ulong)uVar9;
    uVar3 = *(uint *)((long)psVar11 + (long)(int)local_148 * 4 + uVar7 + 4);
    uVar9 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    if (*psVar11 != 0x5942) {
      uVar9 = uVar3;
    }
    pcVar1 = (char *)((long)psVar11 + uVar9 + uVar7);
    if (pcVar1 == &DAT_04b801e8) {
LAB_03c44ecc:
      uVar9 = 0;
    }
    else {
      lVar2 = uVar7 + uVar9;
      uVar7 = 0;
      bVar6 = true;
      do {
        cVar5 = *(char *)((long)psVar11 + uVar7 + lVar2);
        if (cVar5 != (&DAT_04b801e8)[uVar7]) break;
        if (cVar5 == '\0') {
          if (bVar6) goto LAB_03c44ecc;
          break;
        }
        bVar6 = uVar7 < 0x80000;
        uVar7 = uVar7 + 1;
      } while (uVar7 != 0x80001);
      if (pcVar1 == &DAT_04b801ed) {
LAB_03c44f24:
        uVar9 = 1;
      }
      else {
        uVar7 = 0;
        bVar6 = true;
        do {
          cVar5 = *(char *)((long)psVar11 + uVar7 + lVar2);
          if (cVar5 != (&DAT_04b801ed)[uVar7]) break;
          if (cVar5 == '\0') {
            if (bVar6) goto LAB_03c44f24;
            break;
          }
          bVar6 = uVar7 < 0x80000;
          uVar7 = uVar7 + 1;
        } while (uVar7 != 0x80001);
        if (pcVar1 != s_cPause_04b801f3) {
          uVar7 = 0;
          bVar6 = true;
          while( true ) {
            cVar5 = *(char *)((long)psVar11 + uVar7 + lVar2);
            if (cVar5 != s_cPause_04b801f3[uVar7]) {
              return 1;
            }
            if (cVar5 == '\0') break;
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
        uVar9 = 2;
      }
    }
  }
  puVar8 = (uint *)(**(code **)(*param_1 + 0xf0))(param_1);
  *puVar8 = uVar9;
  return 1;
}

