
void FUN_03611b50(long *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  ushort *puVar1;
  undefined1 (*pauVar2) [16];
  ulong uVar3;
  ulong uVar4;
  ushort *puVar5;
  ulong uVar6;
  long lVar7;
  ushort *puVar8;
  undefined1 (*pauVar9) [16];
  ulong uVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 local_160;
  undefined8 auStack_158 [31];
  
  if (*(char *)((long)param_1 + 0xc) != '\0') {
    local_160._0_1_ = 2;
    (**(code **)(*param_1 + 0x20))(param_1,&local_160,1);
  }
  if ((int)param_1[1] != 2) {
    if ((int)param_1[1] != 1) {
      (**(code **)(*param_1 + 0x20))(param_1,param_2,(long)param_3 - (long)param_2);
      if ((int)param_1[2] == 0xff) {
        return;
      }
      uVar6 = (long)param_3 - (long)param_2 >> 1;
      uVar3 = 0;
      if ((uVar6 & 0xfffffffffffffff8) != 0) {
        pauVar9 = param_2;
        do {
          uVar3 = uVar3 + 8;
          auVar12 = NEON_rev16(*pauVar9,1);
          *(long *)(*pauVar9 + 8) = auVar12._8_8_;
          *(long *)*pauVar9 = auVar12._0_8_;
          pauVar9 = pauVar9 + 1;
        } while (uVar3 < (uVar6 & 0xfffffffffffffff8));
      }
      if (uVar6 <= uVar3) {
        return;
      }
      uVar4 = uVar3;
      if ((uVar6 & 1) != 0) {
        *(ushort *)(*param_2 + uVar3 * 2) =
             *(ushort *)(*param_2 + uVar3 * 2) >> 8 | *(ushort *)(*param_2 + uVar3 * 2) << 8;
        uVar4 = uVar3 + 1;
      }
      if (uVar6 == uVar3 + 1) {
        return;
      }
      lVar7 = uVar6 - uVar4;
      puVar5 = (ushort *)(*param_2 + uVar4 * 2 + 2);
      do {
        lVar7 = lVar7 + -2;
        puVar5[-1] = puVar5[-1] >> 8 | puVar5[-1] << 8;
        *puVar5 = *puVar5 >> 8 | *puVar5 << 8;
        puVar5 = puVar5 + 2;
      } while (lVar7 != 0);
      return;
    }
    if ((int)param_1[2] != 0xff) {
      if (param_3 <= param_2) {
        return;
      }
      do {
        uVar3 = (long)param_3 - (long)param_2 >> 1;
        if (0x7f < uVar3) {
          uVar3 = 0x80;
        }
        uVar6 = 0;
        if ((uVar3 & 0xf8) != 0) {
          uVar6 = (uVar3 & 0xf8) - 1;
          uVar4 = (uVar6 >> 3) + 1;
          if (uVar6 == 7) {
            uVar6 = 0;
          }
          else {
            uVar10 = uVar4 & 0x3ffffffffffffffe;
            pauVar9 = param_2 + 1;
            uVar6 = uVar10 << 3;
            puVar11 = auStack_158 + 1;
            do {
              pauVar2 = pauVar9 + -1;
              auVar12 = *pauVar9;
              pauVar9 = pauVar9 + 2;
              uVar10 = uVar10 - 2;
              auVar13 = NEON_rev16(auVar12,1);
              auVar12 = NEON_rev16(*pauVar2,1);
              puVar11[-1] = auVar12._8_8_;
              puVar11[-2] = auVar12._0_8_;
              puVar11[1] = auVar13._8_8_;
              *puVar11 = auVar13._0_8_;
              puVar11 = puVar11 + 4;
            } while (uVar10 != 0);
          }
          if ((uVar4 & 1) != 0) {
            lVar7 = uVar6 * 2;
            uVar6 = uVar6 + 8;
            auVar12 = NEON_rev16(*(undefined1 (*) [16])(*param_2 + lVar7),1);
            *(long *)((long)auStack_158 + lVar7) = auVar12._8_8_;
            *(long *)((long)auStack_158 + lVar7 + -8) = auVar12._0_8_;
          }
        }
        if (uVar6 < uVar3) {
          uVar10 = uVar3 & 3;
          uVar4 = uVar6;
          if ((uVar3 & 3) != 0) {
            do {
              lVar7 = uVar4 * 2;
              uVar4 = uVar4 + 1;
              uVar10 = uVar10 - 1;
              *(ushort *)((long)auStack_158 + lVar7 + -8) =
                   *(ushort *)(*param_2 + lVar7) >> 8 | *(ushort *)(*param_2 + lVar7) << 8;
            } while (uVar10 != 0);
          }
          if (2 < uVar3 + ~uVar6) {
            lVar7 = uVar3 - uVar4;
            puVar8 = (ushort *)((long)auStack_158 + uVar4 * 2 + -4);
            puVar5 = (ushort *)(*param_2 + uVar4 * 2 + 4);
            do {
              lVar7 = lVar7 + -4;
              puVar8[-2] = puVar5[-2] >> 8 | puVar5[-2] << 8;
              puVar8[-1] = puVar5[-1] >> 8 | puVar5[-1] << 8;
              *puVar8 = *puVar5 >> 8 | *puVar5 << 8;
              puVar1 = puVar5 + 1;
              puVar5 = puVar5 + 4;
              puVar8[1] = *puVar1 >> 8 | *puVar1 << 8;
              puVar8 = puVar8 + 4;
            } while (lVar7 != 0);
          }
        }
        (**(code **)(*param_1 + 0x20))(param_1,&local_160,uVar3 * 2);
        param_2 = (undefined1 (*) [16])(*param_2 + uVar3 * 2);
      } while (param_2 < param_3);
      return;
    }
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2,(long)param_3 - (long)param_2);
  return;
}

