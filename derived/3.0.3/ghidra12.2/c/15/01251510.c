
uint FUN_01251510(long param_1,byte *param_2,uint param_3)

{
  long lVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  byte local_54 [4];
  undefined *local_50;
  char *pcStack_48;
  byte local_28 [4];
  uint local_24;
  
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 != -1) {
    local_50 = (undefined *)CONCAT44(local_50._4_4_,0x11);
    puVar6 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar6 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((((*puVar6 >> 0x11 & 1) != 0) &&
         (uVar5 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 8) - (uint)DAT_0534f428,
         uVar5 < DAT_0534f408)) &&
        (puVar6 = *(uint **)(DAT_0534f410 + (long)(int)uVar5 * 8), puVar6 != (uint *)0x0)) &&
       (uVar5 = *puVar6, uVar5 != 0 && puVar6 != (uint *)(ulong)uVar5)) {
      puVar8 = (uint *)((long)puVar6 - (long)(ulong)uVar5);
      if (((*puVar8 != 0) && (uVar5 = puVar8[1], uVar5 != 0)) && ((ulong)(ushort)puVar8[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
        if (lVar1 != 0) {
          uVar7 = 0;
          if ((ulong)uVar5 != 0) {
            uVar7 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar5);
          }
          if (*puVar8 <= uVar7) {
            uVar7 = 0xffffffff;
          }
          if ((uVar7 < *(uint *)PTR_DAT_04bc0e98) &&
             (*(short *)(*(long *)(PTR_DAT_04bc0e98 + 8) + (long)(int)uVar7 * 2) == 1)) {
            return 1;
          }
        }
      }
    }
  }
  iVar4 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
  if (iVar4 != 0x2e) {
    return 1;
  }
  bVar2 = *param_2;
  if (((bVar2 < 8) &&
      (iVar4 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10)), iVar4 == 0x2e)) &&
     (local_28[0] = bVar2, uVar5 = FUN_02582fe0(local_28), uVar5 != 0xffffffff)) {
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "TodayFortune";
    local_24 = uVar5;
    iVar4 = FUN_0274ce10(&local_24,&local_50);
    if ((iVar4 != 2) && ((1 << (ulong)(uVar5 & 0x1f) & (uint)*(byte *)(param_1 + 0xc)) != 0)) {
      local_54[0] = *param_2;
      if (7 < local_54[0]) {
        local_54[0] = 0xff;
      }
      uVar5 = FUN_02582fe0(local_54);
      if (uVar5 == 0xffffffff) {
        return 1;
      }
      uVar7 = 0x12;
      if ((param_3 & 1) == 0) {
        uVar7 = 10;
      }
      return (uint)((1 << (ulong)(uVar5 & 0x1f) & *(uint *)(param_1 + 0xc) >> (ulong)uVar7 & 0xff)
                   != 0);
    }
  }
  uVar5 = *(uint *)(param_1 + 0xc) >> 9;
  if ((param_3 & 1) != 0) {
    uVar5 = *(uint *)(param_1 + 0xc) >> 8;
  }
  return uVar5 & 1;
}

