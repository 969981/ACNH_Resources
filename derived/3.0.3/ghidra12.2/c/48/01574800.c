
undefined8 FUN_01574800(long *param_1,undefined8 *param_2)

{
  void *__src;
  int iVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  short *psVar7;
  long lVar8;
  uint uVar9;
  byte *pbVar10;
  void *__dest;
  undefined *local_188;
  undefined1 *local_180;
  undefined4 local_178;
  undefined1 local_174 [31];
  undefined1 local_155;
  undefined8 local_150;
  byte *local_148;
  undefined4 local_140;
  byte local_13c [31];
  undefined1 local_11d;
  undefined1 local_3d;
  int local_38;
  char local_34;
  
  local_155 = 0;
  local_174[0] = 0;
  local_178 = 0x20;
  local_180 = local_174;
  local_140 = 0x100;
  local_148 = local_13c;
  local_3d = 0;
  local_188 = PTR_DAT_04bb3000 + 0x10;
  local_13c[0] = 0;
  local_150 = &PTR_LAB_048fda60;
  (**(code **)(*param_1 + 0x58))(param_1,&local_150);
  (*(code *)local_150[3])(&local_150);
  bVar3 = *local_148;
  if (bVar3 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0xffffffff;
    pbVar10 = local_148;
    do {
      pbVar10 = pbVar10 + 1;
      uVar9 = crc32b(uVar9,(uint)bVar3,0x4c11db7);
      bVar3 = *pbVar10;
    } while (bVar3 != 0);
    uVar9 = ~uVar9;
  }
  FUN_038d1270(&local_188,&DAT_04074ae0,uVar9);
  (**(code **)(local_188 + 0x18))(&local_188);
  local_150 = (undefined **)((ulong)local_150 & 0xffffff0000000000);
  uVar5 = FUN_03ea9450(param_2,&local_150,local_180);
  if (((uVar5 & 1) == 0) || (local_150._4_1_ != -0x60)) {
    local_11d = 0;
    local_148 = local_13c;
    local_140 = 0x20;
    local_13c[0] = 0;
    local_150 = &PTR_LAB_048fd9d0;
    pbVar10 = (byte *)param_1[1];
    bVar3 = *pbVar10;
    if (bVar3 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0xffffffff;
      do {
        pbVar10 = pbVar10 + 1;
        uVar9 = crc32b(uVar9,(uint)bVar3,0x4c11db7);
        bVar3 = *pbVar10;
      } while (bVar3 != 0);
      uVar9 = ~uVar9;
    }
    FUN_038d1270(&local_150,&DAT_04074ae0,uVar9);
    (*(code *)local_150[3])(&local_150);
    local_38 = 0;
    local_34 = '\0';
    uVar5 = FUN_03ea9450(param_2,&local_38,local_148);
    if (((uVar5 & 1) == 0) || (local_34 != -0x60)) {
      return 0;
    }
    psVar7 = (short *)*param_2;
    uVar2 = *(uint *)(psVar7 + 4);
    uVar9 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    bVar4 = *psVar7 == 0x5942;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    if (!bVar4) {
      uVar9 = uVar2;
    }
    lVar6 = (long)psVar7 + (ulong)uVar9;
    iVar1 = local_38;
  }
  else {
    psVar7 = (short *)*param_2;
    uVar2 = *(uint *)(psVar7 + 4);
    uVar9 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    bVar4 = *psVar7 == 0x5942;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    if (!bVar4) {
      uVar9 = uVar2;
    }
    lVar6 = (long)psVar7 + (ulong)uVar9;
    iVar1 = (int)local_150;
  }
  uVar2 = *(uint *)(lVar6 + (long)iVar1 * 4 + 4);
  uVar9 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
  if (!bVar4) {
    uVar9 = uVar2;
  }
  __src = (void *)(lVar6 + (ulong)uVar9);
  lVar6 = (**(code **)(*param_1 + 0xf0))(param_1);
  __dest = *(void **)(lVar6 + 8);
  if (__dest != __src) {
    lVar8 = 0;
    do {
      if (*(char *)((long)__src + lVar8) == '\0') goto LAB_01574a68;
      if (*(char *)((long)__src + lVar8 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_01574a68;
      }
      if (*(char *)((long)__src + lVar8 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_01574a68;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_01574a68:
    iVar1 = (int)lVar8;
    if (*(int *)(lVar6 + 0x10) <= (int)lVar8) {
      iVar1 = *(int *)(lVar6 + 0x10) + -1;
    }
    memcpy(__dest,__src,(long)iVar1);
    *(undefined1 *)((long)__dest + (long)iVar1) = 0;
  }
  return 1;
}

