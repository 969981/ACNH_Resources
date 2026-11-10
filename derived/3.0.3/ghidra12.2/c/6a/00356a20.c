
int FUN_00356a20(long param_1,uint param_2,uint param_3,int param_4,ushort param_5)

{
  byte *pbVar1;
  char *pcVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  float fVar15;
  undefined4 local_64;
  
  if (param_2 == 0) {
    pbVar1 = (byte *)(param_1 + (ulong)param_5 + 0x1888);
    bVar4 = *pbVar1;
    uVar8 = (ulong)bVar4;
    if (bVar4 == 0) {
      return 0;
    }
    uVar14 = 0;
    lVar12 = *(long *)(param_1 + (ulong)param_5 * 8 + 0x18a8);
    do {
      uVar6 = (ulong)*(byte *)(lVar12 + uVar14);
      uVar3 = *(uint *)(*(long *)(param_1 + 0x1c28) + uVar6 * 4);
      uVar9 = (ulong)uVar3;
      if (uVar3 == 0) {
LAB_00356b80:
        if (*(char *)(param_1 + 0x1bd1) == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (**(code **)(param_1 + 0x1bd8))();
          uVar6 = (ulong)*(byte *)(lVar12 + uVar14);
        }
        FUN_00356940(param_1,uVar6,iVar5);
        uVar8 = nn::fontll::ScalableFontEngine::CheckGlyphExist
                          ((int)*(undefined8 *)(param_1 + 0x10) + iVar5 * 0xb8);
        if ((uVar8 & 1) != 0) {
          uVar8 = (ulong)*(byte *)(lVar12 + uVar14);
          if (*(char *)(*(long *)(param_1 + 0x1c08) + uVar8) != '\0') {
            return 0;
          }
          if (*(char *)(*(long *)(param_1 + 0x1c18) + uVar8) != '\0') {
            return 0;
          }
          if (*(char *)(param_1 + 0x1bd1) == '\0') {
            uVar14 = 0;
          }
          else {
            uVar14 = (**(code **)(param_1 + 0x1bd8))();
            uVar14 = uVar14 & 0xffffffff;
          }
          FUN_00356940(param_1,uVar8,uVar14);
          nn::fontll::ScalableFontEngine::SetScale
                    ((int)*(undefined8 *)(param_1 + 0x10) + (int)uVar14 * 0xb8,param_4 << 0x10,0,0);
          nn::fontll::ScalableFontEngine::GetError();
          lVar12 = *(long *)(*(long *)(param_1 + 0x1c40) + uVar8 * 8);
          if (lVar12 == 0) {
            return 0;
          }
          fVar15 = *(float *)(*(long *)(param_1 + 0x1bf0) + uVar8 * 0x1c + 0x10);
          iVar5 = nn::fontll::ScalableFontEngine::AcquireOtfKerningFirst
                            ((OtfKerningTable *)(*(long *)(param_1 + 0x10) + uVar14 * 0xb8),
                             (uint)lVar12,param_3);
          goto LAB_00356f4c;
        }
        uVar8 = (ulong)*pbVar1;
      }
      else if (0 < (int)uVar3) {
        puVar10 = (uint *)(*(long *)(param_1 + 0x1c38) + uVar6 * 0x40);
        puVar11 = (uint *)(*(long *)(param_1 + 0x1c30) + uVar6 * 0x40);
        do {
          if ((*puVar11 <= param_3) && (param_3 <= *puVar10)) goto LAB_00356b80;
          uVar9 = uVar9 - 1;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        } while (uVar9 != 0);
      }
      uVar14 = uVar14 + 1;
      if (uVar8 <= uVar14) {
        return 0;
      }
    } while( true );
  }
  lVar12 = param_1 + (ulong)param_5 * 8;
  pbVar1 = (byte *)(param_1 + (ulong)param_5 + 0x1888);
  lVar13 = *(long *)(lVar12 + 0x18a8);
  bVar4 = *pbVar1;
  uVar8 = (ulong)bVar4;
  if (param_3 != 0) {
    if (bVar4 == 0) {
      return 0;
    }
    uVar14 = 0;
    pcVar2 = (char *)(param_1 + 0x1bd1);
    do {
      uVar6 = (ulong)*(byte *)(lVar13 + uVar14);
      uVar3 = *(uint *)(*(long *)(param_1 + 0x1c28) + uVar6 * 4);
      uVar9 = (ulong)uVar3;
      if (uVar3 == 0) {
LAB_00356aa0:
        if (*pcVar2 == '\0') {
          iVar5 = 0;
        }
        else {
          iVar5 = (**(code **)(param_1 + 0x1bd8))();
          uVar6 = (ulong)*(byte *)(lVar13 + uVar14);
        }
        FUN_00356940(param_1,uVar6,iVar5);
        uVar8 = nn::fontll::ScalableFontEngine::CheckGlyphExist
                          ((int)*(undefined8 *)(param_1 + 0x10) + iVar5 * 0xb8);
        if ((uVar8 & 1) != 0) {
          uVar8 = (ulong)*pbVar1;
          if (*pbVar1 == 0) {
            return 0;
          }
          bVar4 = *(byte *)(lVar13 + uVar14);
          uVar9 = (ulong)bVar4;
          uVar14 = 0;
          lVar12 = *(long *)(lVar12 + 0x18a8);
          do {
            uVar7 = (ulong)*(byte *)(lVar12 + uVar14);
            uVar3 = *(uint *)(*(long *)(param_1 + 0x1c28) + uVar7 * 4);
            uVar6 = (ulong)uVar3;
            if (uVar3 == 0) {
LAB_00356d74:
              if (*pcVar2 == '\0') {
                iVar5 = 0;
              }
              else {
                iVar5 = (**(code **)(param_1 + 0x1bd8))();
                uVar7 = (ulong)*(byte *)(lVar12 + uVar14);
              }
              FUN_00356940(param_1,uVar7,iVar5);
              uVar8 = nn::fontll::ScalableFontEngine::CheckGlyphExist
                                ((int)*(undefined8 *)(param_1 + 0x10) + iVar5 * 0xb8);
              if ((uVar8 & 1) != 0) {
                if (bVar4 != *(byte *)(lVar12 + uVar14)) {
                  return 0;
                }
                if (*(char *)(*(long *)(param_1 + 0x1c08) + uVar9) != '\0') {
                  return 0;
                }
                if (*(char *)(*(long *)(param_1 + 0x1c18) + uVar9) != '\0') {
                  return 0;
                }
                if (*pcVar2 == '\0') {
                  uVar8 = 0;
                }
                else {
                  uVar8 = (**(code **)(param_1 + 0x1bd8))();
                  uVar8 = uVar8 & 0xffffffff;
                }
                FUN_00356940(param_1,bVar4,uVar8);
                nn::fontll::ScalableFontEngine::SetScale
                          ((int)*(undefined8 *)(param_1 + 0x10) + (int)uVar8 * 0xb8,param_4 << 0x10,
                           0,0);
                nn::fontll::ScalableFontEngine::GetError();
                lVar12 = *(long *)(*(long *)(param_1 + 0x1c40) + uVar9 * 8);
                if ((lVar12 != 0) &&
                   (iVar5 = nn::fontll::ScalableFontEngine::AcquireOtfKerning
                                      ((OtfKerningTable *)(*(long *)(param_1 + 0x10) + uVar8 * 0xb8)
                                       ,(uint)lVar12,param_2,param_3), iVar5 != 0)) {
                  return (int)(*(float *)(*(long *)(param_1 + 0x1bf0) + (ulong)(uint)bVar4 * 0x1c +
                                         0x10) * (float)iVar5);
                }
                iVar5 = nn::fontll::ScalableFontEngine::GetKerning
                                  ((int *)(*(long *)(param_1 + 0x10) + uVar8 * 0xb8),&local_64,
                                   (int)((long)register0x00000008 + -0x60) - 8,param_2);
                if (iVar5 == 0) {
                  return (int)(*(float *)(*(long *)(param_1 + 0x1bf0) + (ulong)(uint)bVar4 * 0x1c +
                                         0x10) * (float)local_64) >> 0x10;
                }
                return 0;
              }
              uVar8 = (ulong)*pbVar1;
            }
            else if (0 < (int)uVar3) {
              puVar10 = (uint *)(*(long *)(param_1 + 0x1c38) + uVar7 * 0x40);
              puVar11 = (uint *)(*(long *)(param_1 + 0x1c30) + uVar7 * 0x40);
              do {
                if ((*puVar11 <= param_3) && (param_3 <= *puVar10)) goto LAB_00356d74;
                uVar6 = uVar6 - 1;
                puVar10 = puVar10 + 1;
                puVar11 = puVar11 + 1;
              } while (uVar6 != 0);
            }
            uVar14 = uVar14 + 1;
            if (uVar8 <= uVar14) {
              return 0;
            }
          } while( true );
        }
        uVar8 = (ulong)*pbVar1;
      }
      else if (0 < (int)uVar3) {
        puVar10 = (uint *)(*(long *)(param_1 + 0x1c38) + uVar6 * 0x40);
        puVar11 = (uint *)(*(long *)(param_1 + 0x1c30) + uVar6 * 0x40);
        do {
          if ((*puVar11 <= param_2) && (param_2 <= *puVar10)) goto LAB_00356aa0;
          uVar9 = uVar9 - 1;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        } while (uVar9 != 0);
      }
      uVar14 = uVar14 + 1;
      if (uVar8 <= uVar14) {
        return 0;
      }
    } while( true );
  }
  if (bVar4 == 0) {
    return 0;
  }
  uVar14 = 0;
  do {
    uVar6 = (ulong)*(byte *)(lVar13 + uVar14);
    uVar3 = *(uint *)(*(long *)(param_1 + 0x1c28) + uVar6 * 4);
    uVar9 = (ulong)uVar3;
    if (uVar3 == 0) {
LAB_00356cb4:
      if (*(char *)(param_1 + 0x1bd1) == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (**(code **)(param_1 + 0x1bd8))();
        uVar6 = (ulong)*(byte *)(lVar13 + uVar14);
      }
      FUN_00356940(param_1,uVar6,iVar5);
      uVar8 = nn::fontll::ScalableFontEngine::CheckGlyphExist
                        ((int)*(undefined8 *)(param_1 + 0x10) + iVar5 * 0xb8);
      if ((uVar8 & 1) != 0) {
        uVar8 = (ulong)*(byte *)(lVar13 + uVar14);
        if (*(char *)(*(long *)(param_1 + 0x1c08) + uVar8) != '\0') {
          return 0;
        }
        if (*(char *)(*(long *)(param_1 + 0x1c18) + uVar8) != '\0') {
          return 0;
        }
        if (*(char *)(param_1 + 0x1bd1) == '\0') {
          uVar14 = 0;
        }
        else {
          uVar14 = (**(code **)(param_1 + 0x1bd8))();
          uVar14 = uVar14 & 0xffffffff;
        }
        FUN_00356940(param_1,uVar8,uVar14);
        nn::fontll::ScalableFontEngine::SetScale
                  ((int)*(undefined8 *)(param_1 + 0x10) + (int)uVar14 * 0xb8,param_4 << 0x10,0,0);
        nn::fontll::ScalableFontEngine::GetError();
        lVar12 = *(long *)(*(long *)(param_1 + 0x1c40) + uVar8 * 8);
        if (lVar12 == 0) {
          return 0;
        }
        fVar15 = *(float *)(*(long *)(param_1 + 0x1bf0) + uVar8 * 0x1c + 0x10);
        iVar5 = nn::fontll::ScalableFontEngine::AcquireOtfKerningLast
                          ((OtfKerningTable *)(*(long *)(param_1 + 0x10) + uVar14 * 0xb8),
                           (uint)lVar12,param_2);
LAB_00356f4c:
        return (int)(fVar15 * (float)iVar5);
      }
      uVar8 = (ulong)*pbVar1;
    }
    else if (0 < (int)uVar3) {
      puVar10 = (uint *)(*(long *)(param_1 + 0x1c38) + uVar6 * 0x40);
      puVar11 = (uint *)(*(long *)(param_1 + 0x1c30) + uVar6 * 0x40);
      do {
        if ((*puVar11 <= param_2) && (param_2 <= *puVar10)) goto LAB_00356cb4;
        uVar9 = uVar9 - 1;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar9 != 0);
    }
    uVar14 = uVar14 + 1;
    if (uVar8 <= uVar14) {
      return 0;
    }
  } while( true );
}

