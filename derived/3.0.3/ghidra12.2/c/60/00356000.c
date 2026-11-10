
uint FUN_00356000(long param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  byte bVar6;
  ulong uVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  
  uVar3 = *(uint *)(param_1 + 0x1884);
  if (uVar3 == 0) {
    return 0xffffffff;
  }
  uVar9 = 0;
  do {
    pbVar1 = (byte *)(param_1 + 0x1888 + (ulong)(uVar9 & 0xffff));
    bVar6 = *pbVar1;
    if (bVar6 != 0) {
      uVar12 = 0;
      lVar13 = *(long *)(param_1 + (ulong)(uVar9 & 0xffff) * 8 + 0x18a8);
      do {
        bVar2 = *(byte *)(lVar13 + uVar12);
        uVar14 = (ulong)bVar2;
        uVar3 = *(uint *)(*(long *)(param_1 + 0x1c28) + uVar14 * 4);
        uVar7 = (ulong)uVar3;
        if (uVar3 == 0) {
LAB_003560f4:
          if (*(char *)(param_1 + 0x1bd1) == '\0') {
            uVar7 = 0;
            uVar3 = 0;
            lVar11 = param_1;
            if (*(uint *)(param_1 + 0x1bac) != (uint)bVar2) goto LAB_00356138;
          }
          else {
            uVar3 = (**(code **)(param_1 + 0x1bd8))();
            bVar6 = *(byte *)(lVar13 + uVar12);
            uVar14 = (ulong)bVar6;
            lVar11 = param_1 + (ulong)uVar3 * 4;
            uVar7 = (ulong)uVar3;
            if (*(uint *)(lVar11 + 0x1bac) != (uint)bVar6) {
LAB_00356138:
              nn::fontll::ScalableFontEngine::SetFont
                        ((char *)(*(long *)(param_1 + 0x10) + uVar7 * 0xb8));
              nn::fontll::ScalableFontEngine::GetError();
              uVar3 = (uint)uVar7;
              nn::fontll::ScalableFontEngine::SetBoldWeight
                        ((int)*(undefined8 *)(param_1 + 0x10) + uVar3 * 0xb8);
              nn::fontll::ScalableFontEngine::GetError();
              lVar4 = *(long *)(param_1 + 0x10) + uVar7 * 0xb8;
              uVar5 = 0;
              if (*(char *)(*(long *)(param_1 + 0x1c00) + uVar14) != '\0') {
                nn::fontll::ScalableFontEngine::SetOutlineWidth((ushort)lVar4);
                uVar5 = 2;
                lVar4 = *(long *)(param_1 + 0x10) + uVar7 * 0xb8;
              }
              nn::fontll::ScalableFontEngine::SetFlags(lVar4,uVar5);
              nn::fontll::ScalableFontEngine::GetError();
              *(int *)(lVar11 + 0x1bac) = (int)uVar14;
            }
          }
          uVar7 = nn::fontll::ScalableFontEngine::CheckGlyphExist
                            ((int)*(undefined8 *)(param_1 + 0x10) + uVar3 * 0xb8);
          if ((uVar7 & 1) != 0) {
            return uVar9;
          }
          bVar6 = *pbVar1;
        }
        else if (0 < (int)uVar3) {
          puVar8 = (uint *)(*(long *)(param_1 + 0x1c38) + uVar14 * 0x40);
          puVar10 = (uint *)(*(long *)(param_1 + 0x1c30) + uVar14 * 0x40);
          do {
            if ((*puVar10 <= param_2) && (param_2 <= *puVar8)) goto LAB_003560f4;
            uVar7 = uVar7 - 1;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          } while (uVar7 != 0);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < bVar6);
      uVar3 = *(uint *)(param_1 + 0x1884);
    }
    uVar9 = uVar9 + 1;
    if (uVar3 <= uVar9) {
      return 0xffffffff;
    }
  } while( true );
}

