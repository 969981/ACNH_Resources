
uint FUN_02677c70(byte *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  short *psVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  short *psVar8;
  long lVar9;
  byte local_24 [4];
  
  if ((*param_1 < 8) &&
     ((((uVar1 = FUN_02582d8c(param_1,1), uVar1 < 8 &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d6) != '\0')) ||
      (((*param_1 < 8 && (uVar1 = FUN_02582d8c(param_1,1), uVar1 < 8)) &&
       ((lVar2 = *(long *)PTR_DAT_04bb4fb8,
        *(char *)(lVar2 + (ulong)uVar1 * 0x13f0 + 0x13d4) != '\0' &&
        ((*(char *)(lVar2 + (ulong)uVar1 * 0x13f0 + 0x13d6) != '\0' &&
         (*(int *)(lVar2 + (ulong)uVar1 * 0x13f0 + 0x13d0) == 1)))))))))) {
    local_24[0] = *param_1;
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
    lVar2 = FUN_025830c0(DAT_055021a0,local_24,1);
    if (lVar2 != 0) {
      lVar9 = lVar2 + 0x194b0;
      if (*(long *)(lVar2 + 0x194b8) == 0) {
        lVar9 = *(long *)(DAT_05574040 + 0x20);
      }
      if ((*(long **)(lVar9 + 0x98) == (long *)0x0) ||
         (puVar3 = (undefined8 *)**(long **)(lVar9 + 0x98), puVar3 == (undefined8 *)0x0)) {
        uVar1 = 1;
      }
      else {
        uVar1 = (**(code **)*puVar3)();
        uVar1 = uVar1 ^ 1;
      }
      psVar4 = (short *)(*(long *)(lVar9 + 0x80) + *(long *)(lVar9 + 0x78));
      uVar5 = *(uint *)(psVar4 + 0xac);
      if (0x13 < uVar5) {
        uVar5 = 0x14;
      }
      if (uVar5 != 0) {
        uVar7 = 0;
        psVar8 = psVar4 + 0x5c;
        do {
          if (*psVar8 == -2) {
            uVar5 = (uint)uVar7;
            if (-1 < (int)uVar5) {
              if (0x13 < uVar5) {
                uVar5 = 0xffffffff;
              }
              goto LAB_02677e7c;
            }
            break;
          }
          uVar7 = uVar7 + 1;
          psVar8 = psVar8 + 4;
        } while (uVar5 != uVar7);
      }
      uVar5 = *(uint *)(psVar4 + 0x50);
      if (0x13 < uVar5) {
        uVar5 = 0x14;
      }
      if (uVar5 != 0) {
        uVar7 = 0;
        do {
          if (*psVar4 == -2) {
            uVar6 = (uint)uVar7;
            if (-1 < (int)uVar6) {
              uVar5 = uVar6 + 0x14;
              if (0x13 < uVar6) {
                uVar5 = 0xffffffff;
              }
              goto LAB_02677e7c;
            }
            break;
          }
          uVar7 = uVar7 + 1;
          psVar4 = psVar4 + 4;
        } while (uVar5 != uVar7);
      }
      uVar5 = DAT_0559bc2c;
LAB_02677e7c:
      if ((uVar1 & 1) != 0) {
        return uVar5;
      }
      if (*(long *)(lVar9 + 0x98) == 0) {
        return uVar5;
      }
      puVar3 = *(undefined8 **)(*(long *)(lVar9 + 0x98) + 8);
      if (puVar3 == (undefined8 *)0x0) {
        return uVar5;
      }
      (**(code **)*puVar3)();
      return uVar5;
    }
  }
  return DAT_0559bc2c;
}

