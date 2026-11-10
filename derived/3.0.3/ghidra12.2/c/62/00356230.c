
undefined8 FUN_00356230(long param_1,uint param_2,ushort param_3)

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
  
  pbVar1 = (byte *)(param_1 + (ulong)param_3 + 0x1888);
  bVar3 = *pbVar1;
  uVar6 = (ulong)bVar3;
  if (bVar3 != 0) {
    uVar10 = 0;
    lVar11 = *(long *)(param_1 + (ulong)param_3 * 8 + 0x18a8);
    do {
      uVar5 = (ulong)*(byte *)(lVar11 + uVar10);
      uVar2 = *(uint *)(*(long *)(param_1 + 0x1c28) + uVar5 * 4);
      uVar7 = (ulong)uVar2;
      if (uVar2 == 0) {
LAB_003562e4:
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
          return 1;
        }
        uVar6 = (ulong)*pbVar1;
      }
      else if (0 < (int)uVar2) {
        puVar8 = (uint *)(*(long *)(param_1 + 0x1c38) + uVar5 * 0x40);
        puVar9 = (uint *)(*(long *)(param_1 + 0x1c30) + uVar5 * 0x40);
        do {
          if ((*puVar9 <= param_2) && (param_2 <= *puVar8)) goto LAB_003562e4;
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

