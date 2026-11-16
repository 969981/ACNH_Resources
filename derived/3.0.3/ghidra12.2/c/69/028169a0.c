
uint FUN_028169a0(undefined4 *param_1)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined **local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  long local_50;
  byte local_48 [8];
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4();
  lVar5 = *(long *)puVar3;
  if (lVar5 == 0) {
    puVar6 = (undefined4 *)&DAT_05586008;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    puVar6 = (undefined4 *)PTR_DAT_04bb37e0;
    if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      puVar6 = param_1;
    }
  }
  uVar4 = FUN_0277d6c4(puVar6);
  lVar7 = *(long *)puVar3;
  if (lVar7 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      uVar4 = FUN_0277d6c4(param_1);
      lVar5 = *(long *)puVar3;
      if (lVar5 == 0) {
        puVar6 = (undefined4 *)&DAT_05586008;
      }
      else {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        puVar6 = (undefined4 *)PTR_DAT_04bb37e0;
        if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          puVar6 = param_1;
        }
      }
      local_50 = 0;
      local_58 = *puVar6;
      uStack_54 = puVar6[1];
      local_60 = &PTR_FUN_04a36b50;
      uVar4 = FUN_0277d6c4(&local_58);
      if (*(long *)puVar3 != 0) {
        lVar5 = *(long *)(lVar5 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          lVar5 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(puVar6);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if (uVar4 < *(uint *)(lVar5 + 0x1d8)) {
            lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8);
            if (lVar5 != 0) {
              local_50 = lVar5;
            }
          }
        }
      }
      local_48[0] = 0;
      local_48[1] = 0;
      FUN_01adab50(&local_60,local_48);
      uVar4 = 0;
      do {
        if ((uVar4 != 0) && (uVar4 < 0xe)) {
          uVar1 = uVar4 + 7;
          if (-1 < (int)uVar4) {
            uVar1 = uVar4;
          }
          if (((uint)((int)uVar1 >> 3) < 2) &&
             ((local_48[(uint)((int)uVar1 >> 3)] >> (ulong)(uVar4 & 7) & 1) != 0)) {
            if (uVar4 != 9) {
              return DAT_0559bc2c;
            }
            bVar2 = *(byte *)((long)param_1 + 0x8b1);
            if (*(char *)(param_1 + 0x22c) == '\0') {
              if (bVar2 < 0x14) {
                return (uint)bVar2;
              }
              return DAT_0559bc2c;
            }
            if (bVar2 < 0x14) {
              return bVar2 + 0x14;
            }
            return DAT_0559bc2c;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != 0xe);
    }
  }
  return DAT_0559bc2c;
}

