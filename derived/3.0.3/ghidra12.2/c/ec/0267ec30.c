
uint FUN_0267ec30(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  short *psVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  byte local_58 [4];
  byte local_54 [4];
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_2);
  if (*(long *)puVar2 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0 && *param_1 < 8)) &&
        (uVar4 = FUN_02582d8c(param_1,1), puVar3 = PTR_DAT_04bb4fb8, uVar4 < 8)) &&
       (((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0' &&
         (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0')) &&
        ((uVar4 = FUN_02582d8c(param_1,1), uVar4 < 8 &&
         (*(char *)(*(long *)puVar3 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')))))) {
      if (((*param_1 < 8) && (uVar4 = FUN_02582d8c(param_1,1), uVar4 < 8)) &&
         ((*(char *)(*(long *)puVar3 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0' &&
          (((*(char *)(*(long *)puVar3 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0' &&
            (uVar4 = FUN_02582d8c(param_1,1), uVar4 < 8)) &&
           (lVar8 = *(long *)puVar3, *(char *)(lVar8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0'))))))
      {
        local_58[0] = *param_1;
        if (7 < local_58[0]) {
          local_58[0] = 0xff;
        }
        uVar5 = FUN_02669430(local_58);
        lVar1 = 0xff8;
        if ((uVar5 & 1) == 0) {
          lVar1 = 0x109c;
        }
        psVar6 = (short *)(lVar8 + (ulong)uVar4 * 0x13f0 + lVar1);
        uVar4 = *(uint *)(psVar6 + 0x50);
        if (0x13 < uVar4) {
          uVar4 = 0x14;
        }
        if (uVar4 == 0) goto LAB_0267ee30;
        uVar5 = 0;
        iVar9 = -1;
        do {
          if (*psVar6 == -2) {
            iVar9 = (int)uVar5;
            break;
          }
          uVar5 = uVar5 + 1;
          psVar6 = psVar6 + 4;
        } while (uVar4 != uVar5);
      }
      else {
LAB_0267ee30:
        iVar9 = -1;
      }
      lVar8 = *(long *)puVar2;
      uVar4 = FUN_0277d6c4(param_2);
      if (*(long *)puVar2 != 0) {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          FUN_02648c90(param_1,param_2,0);
        }
      }
      if (iVar9 < 0) {
        FUN_0267f050(param_1,0,PTR_DAT_04bb37e0,0);
        if (*param_1 < 8) {
          uVar4 = FUN_02582d8c(param_1,1);
          if (((uVar4 < 8) && (*(char *)(*(long *)puVar3 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0'))
             && ((*(char *)(*(long *)puVar3 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0' &&
                 ((uVar4 = FUN_02582d8c(param_1,1), uVar4 < 8 &&
                  (*(char *)(*(long *)puVar3 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')))))) {
            FUN_0267e720(*(long *)puVar3 + (ulong)uVar4 * 0x13f0 + 0xff8,param_1);
          }
          goto LAB_0267ee8c;
        }
LAB_0267f01c:
        uVar5 = 0xffffffff;
      }
      else {
LAB_0267ee8c:
        if (((((7 < *param_1) || (uVar4 = FUN_02582d8c(param_1,1), 7 < uVar4)) ||
             (*(char *)(*(long *)puVar3 + (ulong)uVar4 * 0x13f0 + 0x13d4) == '\0')) ||
            ((*(char *)(*(long *)puVar3 + (ulong)uVar4 * 0x13f0 + 0x13d6) == '\0' ||
             (uVar4 = FUN_02582d8c(param_1,1), 7 < uVar4)))) ||
           (lVar8 = *(long *)puVar3, *(char *)(lVar8 + (ulong)uVar4 * 0x13f0 + 0x13d4) == '\0'))
        goto LAB_0267f01c;
        local_54[0] = *param_1;
        if (7 < local_54[0]) {
          local_54[0] = 0xff;
        }
        uVar5 = FUN_02669430(local_54);
        lVar1 = 0xff8;
        if ((uVar5 & 1) == 0) {
          lVar1 = 0x109c;
        }
        psVar6 = (short *)(lVar8 + (ulong)uVar4 * 0x13f0 + lVar1);
        uVar4 = *(uint *)(psVar6 + 0x50);
        if (0x13 < uVar4) {
          uVar4 = 0x14;
        }
        if (uVar4 == 0) goto LAB_0267f01c;
        uVar7 = 0;
        uVar5 = 0xffffffff;
        do {
          if (*psVar6 == -2) {
            uVar5 = uVar7 & 0xffffffff;
            break;
          }
          uVar7 = uVar7 + 1;
          psVar6 = psVar6 + 4;
        } while (uVar4 != uVar7);
      }
      uVar4 = FUN_0267f050(param_1,uVar5,param_2,param_3);
      goto LAB_0267ee10;
    }
  }
  uVar4 = 0;
LAB_0267ee10:
  return uVar4 & 1;
}

