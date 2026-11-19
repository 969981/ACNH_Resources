
void FUN_03ab0120(long param_1,long param_2)

{
  uint *puVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  
  lVar10 = *(long *)(param_1 + 8);
  if (((*(char *)(lVar10 + 0xa10) != '\0') && (*(char *)(lVar10 + 0x4d0) != '\0')) &&
     (*(char *)(lVar10 + 0x1660) == '\0')) {
    bVar6 = *(byte *)(param_2 + 8);
    if ((*(uint *)(param_1 + 0x550) >> (ulong)(bVar6 & 0x1f) & 1) != 0) {
      uVar12 = (uint)bVar6;
      lVar10 = *(long *)(param_1 + 0x480);
      uVar4 = uVar12;
      if (*(uint *)(param_1 + 0x478) < (uint)bVar6 || *(uint *)(param_1 + 0x478) == uVar12) {
        uVar4 = 0;
      }
      lVar11 = lVar10 + (ulong)uVar4 * 0xfc8;
      FUN_03acb490(lVar11);
      uVar5 = *(uint *)(lVar11 + 0x238);
      if (0 < (int)uVar5) {
        uVar13 = 0;
        lVar10 = lVar10 + (ulong)uVar4 * 0xfc8;
        puVar1 = (uint *)(lVar10 + 0x370);
        plVar2 = (long *)(lVar10 + 0x378);
        do {
          lVar10 = (ulong)bVar6 + (long)(int)(*(uint *)(param_1 + 0x488) * uVar13);
          if (*(uint *)(param_1 + 0x48c) <= uVar13 || *(uint *)(param_1 + 0x488) <= uVar12) {
            lVar10 = 0;
          }
          plVar9 = (long *)(*(long *)(param_1 + 0x490) + lVar10 * 0x68);
          uVar4 = uVar13;
          if (*puVar1 <= uVar13) {
            uVar4 = 0;
          }
          plVar3 = plVar9 + 1;
          lVar10 = *plVar2 + (ulong)uVar4 * 0x5d0;
          lVar11 = *(long *)(lVar10 + 0x270);
          plVar9[8] = *(long *)(lVar10 + 0x278);
          plVar9[7] = lVar11;
          lVar11 = *(long *)(lVar10 + 0x280);
          plVar9[10] = *(long *)(lVar10 + 0x288);
          plVar9[9] = lVar11;
          lVar11 = *(long *)(lVar10 + 0x290);
          plVar9[0xc] = *(long *)(lVar10 + 0x298);
          plVar9[0xb] = lVar11;
          (**(code **)(*plVar9 + 0x20))(plVar9,plVar3);
          uVar4 = *(uint *)(param_1 + 0x498);
          bVar7 = false;
          bVar8 = false;
          if (uVar13 < *(uint *)(param_1 + 0x49c)) {
            bVar8 = bVar6 <= uVar4;
            bVar7 = uVar4 == bVar6;
          }
          lVar10 = (ulong)bVar6 + (long)(int)(uVar4 * uVar13);
          if (!bVar8 || bVar7) {
            lVar10 = 0;
          }
          lVar10 = *(long *)(param_1 + 0x4a0) + lVar10 * 0xf8;
          uVar4 = uVar13;
          if (*puVar1 <= uVar13) {
            uVar4 = 0;
          }
          lVar11 = *plVar2 + (ulong)uVar4 * 0x5d0;
          if (((((!NAN(*(float *)(lVar11 + 0x2a0))) && (!NAN(*(float *)(lVar11 + 0x2a4)))) &&
               ((!NAN(*(float *)(lVar11 + 0x2a8)) &&
                ((!NAN(*(float *)(lVar11 + 0x2ac)) && (!NAN(*(float *)(lVar11 + 0x2b0)))))))) &&
              ((!NAN(*(float *)(lVar11 + 0x2b4)) &&
               ((((((!NAN(*(float *)(lVar11 + 0x2b8)) && (!NAN(*(float *)(lVar11 + 700)))) &&
                   (!NAN(*(float *)(lVar11 + 0x2c0)))) &&
                  ((!NAN(*(float *)(lVar11 + 0x2c4)) && (!NAN(*(float *)(lVar11 + 0x2c8)))))) &&
                 ((!NAN(*(float *)(lVar11 + 0x2cc)) &&
                  ((!NAN(*(float *)(lVar11 + 0x2d0)) && (!NAN(*(float *)(lVar11 + 0x2d4)))))))) &&
                (!NAN(*(float *)(lVar11 + 0x2d8)))))))) && (!NAN(*(float *)(lVar11 + 0x2dc)))) {
            FUN_038e6014(lVar10,lVar11 + 0x2a0,0);
          }
          FUN_039eea20(param_2,uVar13 + 5,plVar3,lVar10,plVar3);
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar5);
      }
    }
  }
  return;
}

