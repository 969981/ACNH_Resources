
int FUN_00356740(long param_1,uint param_2,int param_3,ushort param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_e0 [128];
  int iStack_48;
  short local_44;
  undefined1 auStack_42 [2];
  
  pbVar1 = (byte *)(param_1 + (ulong)param_4 + 0x1888);
  bVar3 = *pbVar1;
  uVar6 = (ulong)bVar3;
  if (bVar3 != 0) {
    lVar11 = *(long *)(param_1 + (ulong)param_4 * 8 + 0x18a8);
    uVar10 = 0;
    do {
      uVar5 = (ulong)*(byte *)(lVar11 + uVar10);
      uVar2 = *(uint *)(*(long *)(param_1 + 0x1c28) + uVar5 * 4);
      uVar7 = (ulong)uVar2;
      if (uVar2 == 0) {
LAB_00356804:
        if (*(char *)(param_1 + 0x1bd1) == '\0') {
          iVar4 = 0;
        }
        else {
          iVar4 = (**(code **)(param_1 + 0x1bd8))();
          uVar5 = (ulong)*(byte *)(lVar11 + uVar10);
        }
        FUN_00356940(param_1,uVar5,iVar4);
        uVar6 = nn::fontll::ScalableFontEngine::CheckGlyphExist
                          ((int)*(undefined8 *)(param_1 + 0x10) + iVar4 * 0xb8);
        if ((uVar6 & 1) != 0) {
          uVar6 = (ulong)*(byte *)(lVar11 + uVar10);
          if (*(char *)(param_1 + 0x1bd1) == '\0') {
            uVar10 = 0;
          }
          else {
            uVar10 = (**(code **)(param_1 + 0x1bd8))();
            uVar10 = uVar10 & 0xffffffff;
          }
          FUN_00356940(param_1,uVar6,uVar10);
          nn::fontll::ScalableFontEngine::SetScale
                    ((int)*(undefined8 *)(param_1 + 0x10) + (int)uVar10 * 0xb8,param_3 << 0x10,0,0);
          nn::fontll::ScalableFontEngine::GetError();
          iVar4 = nn::fontll::ScalableFontEngine::GetAdvance
                            ((short *)(*(long *)(param_1 + 0x10) + uVar10 * 0xb8),&local_44,
                             (int *)auStack_42,&iStack_48,(int)auStack_e0 + 0x7c,(ushort)param_2);
          if (iVar4 == 0xc9) {
            *(undefined1 *)(param_1 + 0x1bd0) = 1;
            return 0;
          }
          if (iVar4 == 0) {
            return (int)(*(float *)(*(long *)(param_1 + 0x1bf0) + uVar6 * 0x1c + 0x10) *
                        (float)((int)*(short *)(*(long *)(param_1 + 0x1c10) + uVar6 * 2) +
                               (int)local_44));
          }
          return 0;
        }
        uVar6 = (ulong)*pbVar1;
      }
      else if (0 < (int)uVar2) {
        puVar8 = (uint *)(*(long *)(param_1 + 0x1c38) + uVar5 * 0x40);
        puVar9 = (uint *)(*(long *)(param_1 + 0x1c30) + uVar5 * 0x40);
        do {
          if ((*puVar9 <= param_2) && (param_2 <= *puVar8)) goto LAB_00356804;
          uVar7 = uVar7 - 1;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar7 != 0);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar6);
  }
  return 0;
}

