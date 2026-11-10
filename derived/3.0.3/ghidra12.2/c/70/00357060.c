
undefined8 FUN_00357060(long param_1,uint param_2,undefined4 param_3,ushort param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  ulong uVar11;
  long lVar12;
  
  pbVar1 = (byte *)(param_1 + (ulong)param_4 + 0x1888);
  bVar3 = *pbVar1;
  uVar7 = (ulong)bVar3;
  if (bVar3 != 0) {
    lVar12 = *(long *)(param_1 + (ulong)param_4 * 8 + 0x18a8);
    uVar11 = 0;
    do {
      uVar6 = (ulong)*(byte *)(lVar12 + uVar11);
      uVar2 = *(uint *)(*(long *)(param_1 + 0x1c28) + uVar6 * 4);
      uVar8 = (ulong)uVar2;
      if (uVar2 == 0) {
LAB_00357124:
        if (*(char *)(param_1 + 0x1bd1) == '\0') {
          iVar4 = 0;
        }
        else {
          iVar4 = (**(code **)(param_1 + 0x1bd8))();
          uVar6 = (ulong)*(byte *)(lVar12 + uVar11);
        }
        FUN_00356940(param_1,uVar6,iVar4);
        uVar7 = nn::fontll::ScalableFontEngine::CheckGlyphExist
                          ((int)*(undefined8 *)(param_1 + 0x10) + iVar4 * 0xb8);
        if ((uVar7 & 1) != 0) {
          uVar5 = FUN_00351550(param_1 + 0x30,param_2,param_3,*(undefined1 *)(lVar12 + uVar11));
          return uVar5;
        }
        uVar7 = (ulong)*pbVar1;
      }
      else if (0 < (int)uVar2) {
        puVar9 = (uint *)(*(long *)(param_1 + 0x1c38) + uVar6 * 0x40);
        puVar10 = (uint *)(*(long *)(param_1 + 0x1c30) + uVar6 * 0x40);
        do {
          if ((*puVar10 <= param_2) && (param_2 <= *puVar9)) goto LAB_00357124;
          uVar8 = uVar8 - 1;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        } while (uVar8 != 0);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar7);
  }
  return 0;
}

