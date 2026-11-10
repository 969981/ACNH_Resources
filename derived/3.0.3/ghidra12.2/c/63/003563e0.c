
int FUN_003563e0(long param_1,long param_2,uint param_3,undefined4 param_4,ushort param_5)

{
  byte *pbVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  byte bVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int local_8c;
  
  if (param_3 == 0) {
    local_8c = 0;
  }
  else {
    uVar10 = 0;
    pbVar1 = (byte *)(param_1 + (ulong)param_5 + 0x1888);
    local_8c = 0;
    do {
      uVar2 = *(ushort *)(param_2 + uVar10 * 2);
      if (uVar2 == 0) {
        return local_8c;
      }
      bVar6 = *pbVar1;
      if (bVar6 != 0) {
        uVar14 = 0;
        lVar12 = *(long *)(param_1 + (ulong)param_5 * 8 + 0x18a8);
        do {
          uVar11 = (ulong)*(byte *)(lVar12 + uVar14);
          uVar3 = *(uint *)(*(long *)(param_1 + 0x1c28) + uVar11 * 4);
          uVar7 = (ulong)uVar3;
          if (uVar3 == 0) {
LAB_00356504:
            if (*(char *)(param_1 + 0x1bd1) == '\0') {
              uVar7 = 0;
              uVar3 = 0;
              lVar13 = param_1;
              if (*(uint *)(param_1 + 0x1bac) != (uint)*(byte *)(lVar12 + uVar14))
              goto LAB_00356548;
            }
            else {
              uVar3 = (**(code **)(param_1 + 0x1bd8))();
              uVar11 = (ulong)*(byte *)(lVar12 + uVar14);
              lVar13 = param_1 + (ulong)uVar3 * 4;
              uVar7 = (ulong)uVar3;
              if (*(uint *)(lVar13 + 0x1bac) != (uint)*(byte *)(lVar12 + uVar14)) {
LAB_00356548:
                nn::fontll::ScalableFontEngine::SetFont
                          ((char *)(*(long *)(param_1 + 0x10) + uVar7 * 0xb8));
                nn::fontll::ScalableFontEngine::GetError();
                uVar3 = (uint)uVar7;
                nn::fontll::ScalableFontEngine::SetBoldWeight
                          ((int)*(undefined8 *)(param_1 + 0x10) + uVar3 * 0xb8);
                nn::fontll::ScalableFontEngine::GetError();
                lVar4 = *(long *)(param_1 + 0x10) + uVar7 * 0xb8;
                uVar5 = 0;
                if (*(char *)(*(long *)(param_1 + 0x1c00) + uVar11) != '\0') {
                  nn::fontll::ScalableFontEngine::SetOutlineWidth((ushort)lVar4);
                  uVar5 = 2;
                  lVar4 = *(long *)(param_1 + 0x10) + uVar7 * 0xb8;
                }
                nn::fontll::ScalableFontEngine::SetFlags(lVar4,uVar5);
                nn::fontll::ScalableFontEngine::GetError();
                *(int *)(lVar13 + 0x1bac) = (int)uVar11;
              }
            }
            uVar7 = nn::fontll::ScalableFontEngine::CheckGlyphExist
                              ((int)*(undefined8 *)(param_1 + 0x10) + uVar3 * 0xb8);
            if ((uVar7 & 1) != 0) {
              lVar12 = FUN_00351550(param_1 + 0x30,uVar2,param_4,*(undefined1 *)(lVar12 + uVar14));
              if (((lVar12 == 0) || ((*(byte *)(lVar12 + 0x38) & 0x42) != 0)) ||
                 (((*(byte *)(lVar12 + 0x38) & 0x35) == 0 && (*(int *)(lVar12 + 0x3c) == 0)))) {
                local_8c = local_8c + 1;
              }
              break;
            }
            bVar6 = *pbVar1;
          }
          else if (0 < (int)uVar3) {
            puVar8 = (uint *)(*(long *)(param_1 + 0x1c38) + uVar11 * 0x40);
            puVar9 = (uint *)(*(long *)(param_1 + 0x1c30) + uVar11 * 0x40);
            do {
              if ((*puVar9 < (uint)uVar2 || *puVar9 == (uint)uVar2) && ((uint)uVar2 <= *puVar8))
              goto LAB_00356504;
              uVar7 = uVar7 - 1;
              puVar8 = puVar8 + 1;
              puVar9 = puVar9 + 1;
            } while (uVar7 != 0);
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < bVar6);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != param_3);
  }
  return local_8c;
}

