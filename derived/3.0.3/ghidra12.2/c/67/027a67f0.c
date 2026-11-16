
uint FUN_027a67f0(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  ushort uVar2;
  byte bVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint *puVar9;
  byte *pbVar10;
  uint extraout_w8;
  uint uVar11;
  long lVar12;
  long lVar13;
  char cVar14;
  uint *puVar15;
  ulong uVar16;
  int *piVar17;
  undefined *local_50;
  char *pcStack_48;
  
  puVar6 = PTR_DAT_04bb27d0;
  puVar5 = PTR_DAT_04bb2208;
  lVar12 = *(long *)PTR_DAT_04bb27d0;
  if (((lVar12 != 0) && (*(long *)(lVar12 + 0x28) != 0)) && (*(int *)(lVar12 + 0x80) == 1)) {
    return 0;
  }
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 != -1) {
    local_50 = (undefined *)CONCAT44(local_50._4_4_,0x20);
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8;
    if (0xff < (uint)(int)sVar4) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) != 0) {
      return 0;
    }
  }
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x3f5c743d) {
    return 0;
  }
  if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x2f1ac06c) &&
     (*(int *)(*(long *)PTR_DAT_04bb3728 + 0xb0) != 0)) {
    return 0;
  }
  lVar12 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_3 + 0x18))(param_3);
  uVar7 = FUN_006bd550(param_3[1],0);
  local_50 = (undefined *)CONCAT44(local_50._4_4_,uVar7);
  lVar12 = FUN_00ad5fc0(lVar12 + 0x1960,&local_50);
  uVar11 = extraout_w8;
  if (lVar12 == 0) goto LAB_027a6afc;
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "PlayerSonkatsuQuestEnable";
  iVar8 = FUN_0274bce0(param_2,&local_50);
  if (iVar8 != 0) {
    lVar13 = *(long *)puVar5;
    (**(code **)(*param_3 + 0x18))(param_3);
    uVar7 = FUN_006bd550(param_3[1],0);
    local_50 = (undefined *)CONCAT44(local_50._4_4_,uVar7);
    puVar9 = (uint *)FUN_00ad5fc0(lVar13 + 0x1960,&local_50);
    puVar1 = PTR_DAT_04bb6428;
    puVar5 = PTR_DAT_04bb6420;
    if (puVar9 != (uint *)0x0) {
      pbVar10 = (byte *)(param_1 + 0x400);
      if (*puVar9 != 0) {
        cVar14 = *PTR_DAT_04bb6420;
        do {
          if (cVar14 == '\0') {
            cVar14 = '\x01';
            *(undefined8 *)puVar1 = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined4 *)(puVar1 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x48) = 0xffffffffffffffff;
            uVar11 = *puVar9;
          }
          else {
            uVar11 = *(uint *)(puVar1 + 0x20);
            if (-1 < (int)uVar11) {
              if (((ushort *)((ulong)uVar11 + (long)puVar9) != (ushort *)0x0) &&
                 (uVar2 = *(ushort *)((ulong)uVar11 + (long)puVar9), uVar2 < 0x200)) {
                pbVar10 = pbVar10 + uVar2;
              }
              break;
            }
            if (uVar11 != 0xffffffff) break;
            uVar11 = *puVar9;
          }
          if ((uVar11 == 0) || (puVar15 = (uint *)(ulong)uVar11, puVar9 == puVar15)) break;
          lVar13 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar15)) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar9 + (lVar13 - (long)puVar15);
          if (lVar13 == 0) break;
          uVar16 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar15));
          *(undefined4 *)(puVar1 + 0x20) = 0xfffffffe;
          if (uVar16 == 0) break;
          piVar17 = (int *)(lVar13 + 4);
          while (piVar17[-1] != 0x54706054) {
            piVar17 = piVar17 + 2;
            uVar16 = uVar16 - 1;
            if (uVar16 == 0) goto LAB_027a6a88;
          }
          iVar8 = 0;
          if (*piVar17 != -1) {
            iVar8 = *piVar17;
          }
          *(int *)(puVar1 + 0x20) = iVar8;
          if (*puVar9 == 0) break;
        } while( true );
      }
LAB_027a6a88:
      uVar11 = (uint)*pbVar10;
      if (*pbVar10 == 0) goto LAB_027a6afc;
      lVar13 = **(long **)puVar6;
      bVar3 = *(byte *)(lVar13 + 0x473);
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        pbVar10 = (byte *)(lVar13 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
        if (7 < bVar3) {
          pbVar10 = (byte *)(lVar13 + 0x48);
        }
        if (((*pbVar10 >> 3 & 1) != 0) && (*(byte *)(lVar13 + 0x472) != bVar3)) {
          pbVar10 = (byte *)FUN_00abfe70(lVar12,0xc,0xafb1f366,0);
          if (pbVar10 == (byte *)0x0) goto LAB_027a6af8;
          uVar11 = (uint)*pbVar10;
          if (*pbVar10 == 0) goto LAB_027a6afc;
        }
      }
      uVar11 = 1;
      goto LAB_027a6afc;
    }
  }
LAB_027a6af8:
  uVar11 = 0;
LAB_027a6afc:
  return lVar12 != 0 & uVar11;
}

