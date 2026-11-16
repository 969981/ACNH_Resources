
/* WARNING: Type propagation algorithm not settling */

uint FUN_02672fb0(byte *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  short *psVar4;
  uint uVar5;
  ulong uVar6;
  short *psVar7;
  long lVar8;
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
      lVar8 = lVar2 + 0x194b0;
      if (*(long *)(lVar2 + 0x194b8) == 0) {
        lVar8 = *(long *)(DAT_05574040 + 0x20);
      }
      if ((*(long **)(lVar8 + 0x98) == (long *)0x0) ||
         (puVar3 = (undefined8 *)**(long **)(lVar8 + 0x98), puVar3 == (undefined8 *)0x0)) {
        uVar1 = 1;
      }
      else {
        uVar1 = (**(code **)*puVar3)();
        uVar1 = uVar1 ^ 1;
      }
      psVar4 = (short *)(*(long *)(lVar8 + 0x80) + *(long *)(lVar8 + 0x78));
      uVar5 = *(uint *)(psVar4 + 0xac);
      if (0x13 < uVar5) {
        uVar5 = 0x14;
      }
      if (uVar5 != 0) {
        uVar6 = 0;
        psVar7 = psVar4 + 0x5c;
        do {
          if (*psVar7 == -2) {
            if (-1 < (int)uVar6) {
              uVar5 = 1;
              goto joined_r0x026731ac;
            }
            break;
          }
          uVar6 = uVar6 + 1;
          psVar7 = psVar7 + 4;
        } while (uVar5 != uVar6);
      }
      uVar5 = *(uint *)(psVar4 + 0x50);
      if (0x13 < uVar5) {
        uVar5 = 0x14;
      }
      if (uVar5 != 0) {
        uVar6 = 0;
        do {
          if (*psVar4 == -2) {
            uVar5 = ~(uint)uVar6 >> 0x1f;
            goto joined_r0x026731ac;
          }
          uVar6 = uVar6 + 1;
          psVar4 = psVar4 + 4;
        } while (uVar5 != uVar6);
      }
      uVar5 = 0;
joined_r0x026731ac:
      if ((uVar1 & 1) != 0) {
        return uVar5;
      }
      if (*(long *)(lVar8 + 0x98) == 0) {
        return uVar5;
      }
      puVar3 = *(undefined8 **)(*(long *)(lVar8 + 0x98) + 8);
      if (puVar3 == (undefined8 *)0x0) {
        return uVar5;
      }
      (**(code **)*puVar3)();
      return uVar5;
    }
  }
  return 0;
}

