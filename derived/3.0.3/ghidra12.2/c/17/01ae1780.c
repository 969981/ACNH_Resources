
undefined8 FUN_01ae1780(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ushort uVar5;
  uint *puVar6;
  char *pcVar7;
  uint *puVar8;
  
  puVar6 = *(uint **)(param_1 + 0x10);
  if (puVar6 == (uint *)0x0) {
    return 0;
  }
  uVar3 = *puVar6;
  if (uVar3 == 0 || puVar6 == (uint *)(ulong)uVar3) {
LAB_01ae1818:
    uVar5 = 0;
  }
  else {
    puVar8 = (uint *)((long)puVar6 - (long)(ulong)uVar3);
    if (((*puVar8 == 0) || (uVar3 = puVar8[1], uVar3 == 0)) || ((ulong)(ushort)puVar8[2] == 0))
    goto LAB_01ae1818;
    lVar1 = 0xc;
    if (*(char *)((long)puVar8 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
    if (lVar1 == 0) goto LAB_01ae1818;
    uVar2 = 0;
    if ((ulong)uVar3 != 0) {
      uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar3);
    }
    if (*puVar8 <= uVar2) {
      uVar2 = 0xffffffff;
    }
    if ((DAT_05326ec0 <= uVar2) ||
       (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), 0xbc < uVar5)) goto LAB_01ae1818;
  }
  uVar4 = 0;
  pcVar7 = "STR_OutfitGroupColor_Tops";
  switch(uVar5) {
  case 9:
    break;
  case 10:
    pcVar7 = "STR_OutfitGroupColor_OnePiece";
    break;
  case 0xb:
    pcVar7 = "STR_OutfitGroupColor_MarineSuit";
    break;
  default:
    goto switchD_01ae1850_caseD_c;
  case 0xd:
    pcVar7 = "STR_OutfitGroupColor_Bottoms";
    break;
  case 0xe:
    pcVar7 = "STR_OutfitGroupColor_Socks";
    break;
  case 0xf:
    pcVar7 = "STR_OutfitGroupColor_Shoes";
    break;
  case 0x10:
    pcVar7 = "STR_OutfitGroupColor_Cap";
    break;
  case 0x11:
    pcVar7 = "STR_OutfitGroupColor_Helmet";
    break;
  case 0x12:
    pcVar7 = "STR_OutfitGroupColor_Accessory";
    break;
  case 0x13:
    pcVar7 = "STR_OutfitGroupColor_Bag";
    break;
  case 0x25:
    pcVar7 = "STR_OutfitGroupColor_HandBag";
  }
  FUN_038d1270(param_2,pcVar7);
  uVar4 = 1;
switchD_01ae1850_caseD_c:
  return uVar4;
}

