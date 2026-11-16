
ulong FUN_026788f0(byte *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  short *psVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  short *psVar13;
  long lVar14;
  uint uVar15;
  uint local_68;
  byte local_64 [4];
  
  if ((*param_1 < 8) &&
     ((((uVar4 = FUN_02582d8c(param_1,1), uVar4 < 8 &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0')) ||
      (((*param_1 < 8 && (uVar4 = FUN_02582d8c(param_1,1), uVar4 < 8)) &&
       ((lVar6 = *(long *)PTR_DAT_04bb4fb8,
        *(char *)(lVar6 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0' &&
        ((*(char *)(lVar6 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0' &&
         (*(int *)(lVar6 + (ulong)uVar4 * 0x13f0 + 0x13d0) == 1)))))))))) {
    local_64[0] = *param_1;
    if (7 < local_64[0]) {
      local_64[0] = 0xff;
    }
    lVar6 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_64,1);
    if (lVar6 != 0) {
      lVar14 = lVar6 + 0x194b0;
      if (*(long *)(lVar6 + 0x194b8) == 0) {
        lVar14 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
      }
      if ((*(long **)(lVar14 + 0x98) == (long *)0x0) ||
         (puVar7 = (undefined8 *)**(long **)(lVar14 + 0x98), puVar7 == (undefined8 *)0x0)) {
        local_68 = 0;
      }
      else {
        local_68 = (**(code **)*puVar7)();
      }
      iVar5 = FUN_027f9664(param_1);
      puVar3 = PTR_DAT_04bb43c0;
      puVar2 = PTR_DAT_04bb37e0;
      if (0 < iVar5) {
        uVar11 = 0;
        lVar6 = 0xb8;
        do {
          lVar12 = *(long *)(lVar14 + 0x80) + *(long *)(lVar14 + 0x78);
          uVar4 = *(uint *)(lVar12 + 0x158);
          if (0x13 < uVar4) {
            uVar4 = 0x14;
          }
          lVar1 = lVar6;
          if ((uint)uVar11 < uVar4) {
LAB_02678acc:
            psVar13 = (short *)(lVar12 + lVar1);
            psVar8 = psVar13;
            if (*psVar13 != -2) {
              lVar12 = *(long *)puVar3;
              uVar4 = FUN_0277d6c4(psVar13);
              if (*(long *)puVar3 == 0) goto LAB_02678b30;
              lVar12 = *(long *)(lVar12 + 0x57e58);
              uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
              psVar8 = (short *)puVar2;
              if (uVar4 < *(uint *)(lVar12 + 0x1d8)) {
                if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) != 0) {
                  psVar8 = psVar13;
                }
              }
            }
          }
          else {
            uVar10 = (uint)(uVar11 + -uVar4);
            if ((int)uVar10 < 0) {
LAB_02678b30:
              psVar8 = (short *)puVar2;
            }
            else {
              uVar15 = *(uint *)(lVar12 + 0xa0);
              if (0x13 < uVar15) {
                uVar15 = 0x14;
              }
              psVar8 = (short *)puVar2;
              if (uVar10 < uVar15) {
                lVar1 = (uVar11 + -uVar4 & 0xffffffff) * 8;
                goto LAB_02678acc;
              }
            }
          }
          uVar9 = FUN_0277d7b4(psVar8,param_2);
          if ((uVar9 & 1) != 0) {
            if ((((local_68 & 1) != 0) && (*(long *)(lVar14 + 0x98) != 0)) &&
               (puVar7 = *(undefined8 **)(*(long *)(lVar14 + 0x98) + 8), puVar7 != (undefined8 *)0x0
               )) {
              (**(code **)*puVar7)();
            }
            goto LAB_02678b88;
          }
          uVar11 = uVar11 + 1;
          iVar5 = FUN_027f9664(param_1);
          lVar6 = lVar6 + 8;
        } while ((long)uVar11 < (long)iVar5);
      }
      if ((((local_68 & 1) != 0) && (*(long *)(lVar14 + 0x98) != 0)) &&
         (puVar7 = *(undefined8 **)(*(long *)(lVar14 + 0x98) + 8), puVar7 != (undefined8 *)0x0)) {
        (**(code **)*puVar7)();
      }
    }
  }
  uVar11 = (ulong)*(uint *)PTR_DAT_04bb4e20;
LAB_02678b88:
  return uVar11 & 0xffffffff;
}

