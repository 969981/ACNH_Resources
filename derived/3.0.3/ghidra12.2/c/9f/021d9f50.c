
undefined8 FUN_021d9f50(uint param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ushort uVar5;
  long lVar6;
  ushort uVar7;
  ushort uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *local_38;
  char *pcStack_30;
  uint local_24;
  
  lVar6 = *(long *)PTR_DAT_04bb27d0;
  if (((lVar6 != 0) && (*(long *)(lVar6 + 0x28) != 0)) && (*(int *)(lVar6 + 0x80) == 1)) {
    if (9 < param_2) {
      return 2;
    }
    if ((DAT_05454168 >> (ulong)(param_2 & 0x1f) & 1) == 0) {
      return 2;
    }
    return 0;
  }
  if ((-1 < (int)DAT_0540762c) && (DAT_0540762c == param_1)) {
    return 0;
  }
  local_38 = PTR_DAT_04bb2020 + 0x10;
  pcStack_30 = "AbandonedHouse";
  local_24 = param_1;
  uVar3 = FUN_027490f0(param_2,&local_38);
  if ((int)uVar3 == 2) {
    return uVar3;
  }
  local_38 = (undefined *)CONCAT44(local_38._4_4_,param_2);
  lVar6 = *(long *)PTR_DAT_04bb4760 + (ulong)param_2 * 0x15;
  if (0x6c < param_2) {
    lVar6 = *(long *)PTR_DAT_04bb4760;
  }
  if (local_24 < 10) {
    puVar4 = *(undefined8 **)(PTR_s_NpcHouse0_04bb7e48 + (ulong)local_24 * 8 + 0x68);
  }
  else {
    puVar4 = &DAT_0407ebb1;
  }
  iVar2 = FUN_006bd550(puVar4,0);
  if (DAT_055c1b60 != &DAT_055c1b58) {
    puVar10 = DAT_055c1b60 + -8;
    uVar5 = 0;
    puVar4 = DAT_055c1b60;
    puVar9 = puVar10;
    do {
      if (*(int *)(puVar9 + 7) == iVar2) {
        uVar7 = (ushort)*(byte *)(lVar6 + 4);
        uVar8 = (ushort)*(byte *)(lVar6 + 5);
        if (uVar5 == 0xffff) goto LAB_021da1a0;
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar5 & 0xffffffffU) * 8);
        if ((uVar5 & 0xff00) != 0) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar1 >> 3 & 1) == 0) goto LAB_021da09c;
        uVar5 = 0;
        puVar4 = DAT_055c1b60;
        goto LAB_021da180;
      }
      puVar4 = (undefined8 *)puVar4[1];
      uVar5 = uVar5 + 1;
      puVar9 = puVar4 + -8;
    } while (puVar4 != &DAT_055c1b58);
  }
  uVar7 = (ushort)*(byte *)(lVar6 + 4);
  uVar5 = 0xffff;
  uVar8 = (ushort)*(byte *)(lVar6 + 5);
  goto LAB_021da09c;
  while( true ) {
    puVar4 = (undefined8 *)puVar4[1];
    uVar5 = uVar5 + 1;
    puVar10 = puVar4 + -8;
    if (puVar4 == &DAT_055c1b58) break;
LAB_021da180:
    if (*(int *)(puVar10 + 7) == 0x6622bd46) goto LAB_021da09c;
  }
LAB_021da1a0:
  uVar5 = 0xffff;
LAB_021da09c:
  uVar7 = uVar7 | (uVar8 & 3) << 8;
  if (0x1ff < uVar7) {
    uVar7 = uVar7 | 0xfc00;
  }
  if (uVar7 != uVar5) {
    return 2;
  }
  if (((param_2 < 10) && ((&DAT_053fee41)[(ulong)param_2 * 0xba0] != '\0')) &&
     (((&DAT_053fede8)[(ulong)param_2 * 0x174] != 0 &&
      (*(int *)((&DAT_053fede8)[(ulong)param_2 * 0x174] + 4) == 1)))) {
    return 1;
  }
  return 0;
}

