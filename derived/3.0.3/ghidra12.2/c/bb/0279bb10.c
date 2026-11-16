
/* WARNING: Type propagation algorithm not settling */

bool FUN_0279bb10(byte *param_1,long *param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  long lVar9;
  uint *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  int *piVar15;
  long lVar16;
  char *pcVar17;
  char cVar18;
  uint *puVar19;
  ulong uVar20;
  byte local_38 [4];
  undefined4 local_34;
  
  local_38[0] = *param_1;
  if (7 < local_38[0]) {
    local_38[0] = 0xff;
  }
  lVar9 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_38,1);
  if (lVar9 == 0) {
    return false;
  }
  lVar16 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_34 = FUN_006bd550(param_2[1],0);
  puVar10 = (uint *)FUN_01b1ee90(lVar16 + 0x1b80,&local_34);
  if (puVar10 == (uint *)0x0) {
    return false;
  }
  pcVar17 = PTR_DAT_04bb6440;
  puVar13 = (undefined8 *)PTR_DAT_04bb6448;
  if (*(long **)(lVar9 + 0x18358) == (long *)0x0) {
    uVar12 = 0;
  }
  else {
    puVar11 = (undefined8 *)**(long **)(lVar9 + 0x18358);
    uVar12 = 0;
    if (puVar11 != (undefined8 *)0x0) {
      uVar12 = (**(code **)*puVar11)();
      pcVar17 = PTR_DAT_04bb6440;
      puVar13 = (undefined8 *)PTR_DAT_04bb6448;
    }
  }
  PTR_DAT_04bb6440 = pcVar17;
  PTR_DAT_04bb6448 = (undefined *)puVar13;
  if (0 < (int)param_3) {
    lVar16 = *(long *)(lVar9 + 0x18338);
    lVar4 = *(long *)(lVar9 + 0x18340);
    if (*puVar10 == 0) {
LAB_0279bcf8:
      uVar14 = 0;
    }
    else {
      cVar18 = *pcVar17;
      do {
        if (cVar18 == '\0') {
          cVar18 = '\x01';
          *puVar13 = 0xffffffffffffffff;
          puVar13[1] = 0xffffffffffffffff;
          *pcVar17 = '\x01';
          *(undefined4 *)(puVar13 + 10) = 0xffffffff;
          puVar13[2] = 0xffffffffffffffff;
          puVar13[3] = 0xffffffffffffffff;
          puVar13[4] = 0xffffffffffffffff;
          puVar13[5] = 0xffffffffffffffff;
          puVar13[6] = 0xffffffffffffffff;
          puVar13[7] = 0xffffffffffffffff;
          puVar13[8] = 0xffffffffffffffff;
          puVar13[9] = 0xffffffffffffffff;
        }
        else {
          uVar14 = *(uint *)((long)puVar13 + 0x4c);
          if (-1 < (int)uVar14) {
            if ((byte *)((ulong)uVar14 + (long)puVar10) == (byte *)0x0) goto LAB_0279bcf8;
            uVar14 = (uint)*(byte *)((ulong)uVar14 + (long)puVar10);
            goto LAB_0279bcfc;
          }
          if (uVar14 != 0xffffffff) goto LAB_0279bcf8;
        }
        puVar19 = (uint *)(ulong)*puVar10;
        uVar14 = 0;
        if ((*puVar10 == 0) || (puVar10 == puVar19)) goto LAB_0279bcfc;
        lVar2 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar19)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar10 + (lVar2 - (long)puVar19);
        if (lVar2 == 0) goto LAB_0279bcf8;
        uVar20 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar19));
        *(undefined4 *)((long)puVar13 + 0x4c) = 0xfffffffe;
        uVar14 = 0;
        if (uVar20 == 0) goto LAB_0279bcfc;
        piVar15 = (int *)(lVar2 + 4);
        while (piVar15[-1] != 0x1be772f0) {
          piVar15 = piVar15 + 2;
          uVar20 = uVar20 - 1;
          if (uVar20 == 0) {
            uVar14 = 0;
            goto LAB_0279bcfc;
          }
        }
        iVar1 = 0;
        if (*piVar15 != -1) {
          iVar1 = *piVar15;
        }
        *(int *)((long)puVar13 + 0x4c) = iVar1;
      } while (*puVar10 != 0);
      uVar14 = 0;
    }
LAB_0279bcfc:
    puVar7 = PTR_DAT_04bb6448;
    puVar6 = PTR_DAT_04bb6440;
    if (param_3 <= uVar14) {
      pcVar17 = (char *)(lVar4 + lVar16 + 0x1698);
      if (*puVar10 != 0) {
        cVar18 = *PTR_DAT_04bb6440;
        do {
          if (cVar18 == '\0') {
            cVar18 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *puVar6 = 1;
            *(undefined4 *)(puVar7 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
            uVar14 = *puVar10;
          }
          else {
            uVar14 = *(uint *)(puVar7 + 0x3c);
            if (-1 < (int)uVar14) {
              if (((ushort *)((ulong)uVar14 + (long)puVar10) != (ushort *)0x0) &&
                 (uVar5 = *(ushort *)((ulong)uVar14 + (long)puVar10), uVar5 < 0x200)) {
                pcVar17 = pcVar17 + (ulong)uVar5 * 6;
              }
              break;
            }
            if (uVar14 != 0xffffffff) break;
            uVar14 = *puVar10;
          }
          if ((uVar14 == 0) || (puVar19 = (uint *)(ulong)uVar14, puVar10 == puVar19)) break;
          lVar16 = 0xc;
          if (*(char *)((long)puVar10 + (10 - (long)puVar19)) != '\0') {
            lVar16 = 0x1c;
          }
          lVar16 = (long)puVar10 + (lVar16 - (long)puVar19);
          if (lVar16 == 0) break;
          uVar20 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar19));
          *(undefined4 *)(puVar7 + 0x3c) = 0xfffffffe;
          if (uVar20 == 0) break;
          piVar15 = (int *)(lVar16 + 4);
          while (piVar15[-1] != 0x54706054) {
            piVar15 = piVar15 + 2;
            uVar20 = uVar20 - 1;
            if (uVar20 == 0) goto LAB_0279be2c;
          }
          iVar1 = 0;
          if (*piVar15 != -1) {
            iVar1 = *piVar15;
          }
          *(int *)(puVar7 + 0x3c) = iVar1;
          if (*puVar10 == 0) break;
        } while( true );
      }
LAB_0279be2c:
      pcVar3 = pcVar17 + (param_3 - 1);
      if (6 < param_3) {
        pcVar3 = pcVar17;
      }
      bVar8 = *pcVar3 != '\0';
      goto joined_r0x0279bd08;
    }
  }
  bVar8 = false;
joined_r0x0279bd08:
  if ((uVar12 & 1) == 0) {
    return bVar8;
  }
  if (*(long *)(lVar9 + 0x18358) == 0) {
    return bVar8;
  }
  puVar13 = *(undefined8 **)(*(long *)(lVar9 + 0x18358) + 8);
  if (puVar13 == (undefined8 *)0x0) {
    return bVar8;
  }
  (**(code **)*puVar13)();
  return bVar8;
}

