
undefined8 FUN_01ae1310(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  char *pcVar5;
  ushort uVar6;
  uint *puVar7;
  
  puVar4 = *(uint **)(param_1 + 0x10);
  if (puVar4 == (uint *)0x0) {
    return 0;
  }
  uVar6 = 0;
  uVar3 = *puVar4;
  if (uVar3 != 0 && puVar4 != (uint *)(ulong)uVar3) {
    puVar7 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
    uVar6 = 0;
    if (*puVar7 != 0) {
      uVar3 = puVar7[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar3 != 0) {
            uVar2 = (uint)((ulong)((long)puVar4 - lVar1) / (ulong)uVar3);
          }
          if (*puVar7 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05326ce8) &&
             (uVar6 = *(ushort *)(DAT_05326cf0 + (long)(int)uVar2 * 2), uVar6 < 0x5b6))
          goto LAB_01ae13b4;
        }
      }
      uVar6 = 0;
    }
  }
LAB_01ae13b4:
  if (uVar6 == 0) {
    return 0;
  }
  uVar3 = *puVar4;
  uVar6 = 0;
  if ((uVar3 != 0) && (puVar4 != (uint *)(ulong)uVar3)) {
    puVar7 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
    uVar6 = 0;
    if (*puVar7 != 0) {
      uVar3 = puVar7[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar3 != 0) {
            uVar2 = (uint)((ulong)((long)puVar4 - lVar1) / (ulong)uVar3);
          }
          if (*puVar7 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05326ec0) &&
             (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar6 < 0xbd))
          goto LAB_01ae145c;
        }
      }
      uVar6 = 0;
    }
  }
LAB_01ae145c:
  pcVar5 = "STR_OutfitGroupName_Tops";
  switch(uVar6) {
  case 9:
    break;
  case 10:
    pcVar5 = "STR_OutfitGroupName_OnePiece";
    break;
  case 0xb:
    pcVar5 = "STR_OutfitGroupName_MarineSuit";
    break;
  default:
    return 0;
  case 0xd:
    pcVar5 = "STR_OutfitGroupName_Bottoms";
    break;
  case 0xe:
    pcVar5 = "STR_OutfitGroupName_Socks";
    break;
  case 0xf:
    pcVar5 = "STR_OutfitGroupName_Shoes";
    break;
  case 0x10:
    pcVar5 = "STR_OutfitGroupName_Cap";
    break;
  case 0x11:
    pcVar5 = "STR_OutfitGroupName_Helmet";
    break;
  case 0x12:
    pcVar5 = "STR_OutfitGroupName_Accessory";
    break;
  case 0x13:
    pcVar5 = "STR_OutfitGroupName_Bag";
    break;
  case 0x25:
    pcVar5 = "STR_OutfitGroupName_HandBag";
  }
  FUN_038d1270(param_2,pcVar5);
  return 1;
}

