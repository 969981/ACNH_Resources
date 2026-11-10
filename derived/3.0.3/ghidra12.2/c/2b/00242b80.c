
undefined8 FUN_00242b80(long param_1,long *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  bool bVar12;
  ulong uVar13;
  long lVar14;
  uint *puVar15;
  uint *puVar16;
  long lVar17;
  uint uVar18;
  int local_54 [4];
  uint local_44;
  
  iVar9 = (**(code **)(*param_2 + 0x10))(param_2);
  uVar18 = *(uint *)(param_1 + 0x260);
  if (((uVar18 >> 4 & 1) == 0) || (*(int *)(param_1 + 0x20) == iVar9)) {
    if (((uVar18 & 1) != 0) &&
       ((uVar5 = *(ushort *)(param_1 + 600), uVar5 != 0xffff && (*(short *)(param_1 + 0x256) != -1))
       )) {
      uVar6 = (**(code **)(*param_2 + 0x28))(param_2);
      if (uVar6 < uVar5) {
        return 0;
      }
      uVar5 = *(ushort *)(param_1 + 0x256);
      uVar6 = (**(code **)(*param_2 + 0x28))(param_2);
      if (uVar5 < uVar6) {
        return 0;
      }
      uVar18 = *(uint *)(param_1 + 0x260);
    }
    if ((((uVar18 >> 1 & 1) != 0) && (uVar5 = *(ushort *)(param_1 + 0x25c), uVar5 != 0xffff)) &&
       (*(short *)(param_1 + 0x25a) != -1)) {
      uVar6 = (**(code **)(*param_2 + 0x30))(param_2);
      if (uVar6 < uVar5) {
        return 0;
      }
      uVar5 = *(ushort *)(param_1 + 0x25a);
      uVar6 = (**(code **)(*param_2 + 0x30))(param_2);
      if (uVar5 < uVar6) {
        return 0;
      }
      uVar18 = *(uint *)(param_1 + 0x260);
    }
    if ((((uVar18 >> 5 & 1) == 0) ||
        (iVar9 = *(int *)(param_1 + 0x24), iVar10 = FUN_00241208(param_2), iVar9 == iVar10)) &&
       ((*(char *)(param_1 + 0x25e) == '\0' ||
        (uVar11 = (**(code **)(*param_2 + 0x38))(param_2), (uVar11 & 1) != 0)))) {
      if (*(char *)(param_1 + 0x25f) != '\0') {
        sVar7 = (**(code **)(*param_2 + 0x20))(param_2);
        sVar8 = (**(code **)(*param_2 + 0x30))(param_2);
        if (sVar7 == sVar8) {
          return 0;
        }
      }
      uVar11 = 0;
      puVar16 = (uint *)(param_1 + 0x34);
      lVar17 = param_1 + 0x28;
      do {
        if (((*(uint *)(param_1 + 0x260) >> (ulong)((uint)uVar11 & 0x1f)) >> 6 & 1) != 0) {
          if (*(char *)(param_1 + uVar11 + 0x250) == '\0') {
            lVar14 = param_1 + uVar11 * 4;
            if (*(int *)(lVar14 + 0x208) != 0) {
              local_44 = 0;
              FUN_00241278(local_54,param_2,uVar11 & 0xffffffff,&local_44);
              if (local_54[0] != 0) {
                return 0;
              }
              uVar18 = *(uint *)(lVar14 + 0x208);
              if (0x13 < uVar18) {
                uVar18 = 0x14;
              }
              if (uVar18 == 0) {
                return 0;
              }
              if (uVar18 < 4) {
                lVar14 = 0;
                bVar12 = false;
              }
              else {
                lVar14 = 0;
                bVar12 = false;
                puVar15 = puVar16;
                do {
                  puVar1 = puVar15 + -1;
                  uVar4 = *puVar15;
                  lVar14 = lVar14 + -4;
                  puVar2 = puVar15 + -3;
                  puVar3 = puVar15 + -2;
                  puVar15 = puVar15 + 4;
                  bVar12 = (bool)((((local_44 == uVar4 || local_44 == *puVar1) ||
                                   local_44 == *puVar3) || local_44 == *puVar2) | bVar12);
                } while (-lVar14 != ((ulong)uVar18 & 0xfffffffc));
                lVar14 = -lVar14;
              }
              if ((uVar18 & 3) != 0) {
                uVar13 = (ulong)uVar18 & 3;
                puVar15 = (uint *)(lVar17 + lVar14 * 4);
                do {
                  uVar13 = uVar13 - 1;
                  bVar12 = (bool)(local_44 == *puVar15 | bVar12);
                  puVar15 = puVar15 + 1;
                } while (uVar13 != 0);
              }
              if (!bVar12) {
                return 0;
              }
            }
          }
          else {
            local_44 = 0;
            FUN_00241278(local_54,param_2,uVar11 & 0xffffffff,&local_44);
            if (local_54[0] != 0) {
              return 0;
            }
            lVar14 = param_1 + uVar11 * 4;
            if (local_44 < *(uint *)(lVar14 + 0x220)) {
              return 0;
            }
            if (*(uint *)(lVar14 + 0x238) < local_44) {
              return 0;
            }
          }
        }
        uVar11 = uVar11 + 1;
        puVar16 = puVar16 + 0x14;
        lVar17 = lVar17 + 0x50;
        if (uVar11 == 6) {
          return 1;
        }
      } while( true );
    }
  }
  return 0;
}

