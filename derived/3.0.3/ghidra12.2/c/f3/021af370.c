
void FUN_021af370(long param_1)

{
  undefined *puVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  uint uVar5;
  ushort uVar6;
  byte bVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  int iVar11;
  undefined4 uVar12;
  uint *puVar13;
  long lVar14;
  char cVar15;
  uint *puVar16;
  ulong uVar17;
  int *piVar18;
  byte local_74 [4];
  undefined *local_70;
  char *pcStack_68;
  
  lVar14 = **(long **)PTR_DAT_04bb27d0;
  bVar7 = *(byte *)(lVar14 + 0x473);
  if ((long)(char)bVar7 != 0xffffffffffffffff) {
    pbVar3 = (byte *)(lVar14 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x80;
    if (7 < bVar7) {
      pbVar3 = (byte *)(lVar14 + 0x48);
    }
    if (((*pbVar3 >> 3 & 1) != 0) && (*(byte *)(lVar14 + 0x472) != bVar7)) {
      return;
    }
  }
  FUN_0252d11c(local_74);
  if (local_74[0] < 8) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "TodayFortune";
    local_70 = puVar1;
    iVar11 = FUN_0274bce0(local_74,&local_70);
    if ((iVar11 == 5) || (iVar11 == 3)) {
      pcStack_68 = "FortuneApproachTalked";
      local_70 = puVar1;
      iVar11 = FUN_0274bce0(local_74,&local_70);
      bVar10 = iVar11 == 0;
      goto LAB_021af448;
    }
  }
  bVar10 = false;
LAB_021af448:
  puVar9 = PTR_DAT_04bb6380;
  puVar1 = PTR_DAT_04bb2208;
  iVar11 = 0;
  do {
    if (*(char *)(param_1 + (long)iVar11 * 0xba0 + 0xaf9) != '\0') {
      lVar14 = *(long *)puVar1;
      uVar12 = FUN_006bd550("FortuneApproach",0);
      local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar12);
      puVar13 = (uint *)FUN_021cb820(lVar14 + 0x660,&local_70);
      if (puVar13 != (uint *)0x0) {
        lVar14 = param_1 + (long)iVar11 * 0xba0 + 0x818;
        if (*puVar13 != 0) {
          cVar15 = *PTR_DAT_04bb6378;
          do {
            puVar8 = PTR_DAT_04bb6378;
            if (cVar15 == '\0') {
              cVar15 = '\x01';
              *(undefined8 *)puVar9 = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
              *puVar8 = 1;
              *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
              uVar5 = *puVar13;
            }
            else {
              uVar5 = *(uint *)(puVar9 + 8);
              if (-1 < (int)uVar5) {
                if (((ushort *)((ulong)uVar5 + (long)puVar13) != (ushort *)0x0) &&
                   (uVar6 = *(ushort *)((ulong)uVar5 + (long)puVar13), uVar6 < 0x80)) {
                  lVar14 = lVar14 + (ulong)uVar6;
                }
                break;
              }
              if (uVar5 != 0xffffffff) break;
              uVar5 = *puVar13;
            }
            if ((uVar5 == 0) || (puVar16 = (uint *)(ulong)uVar5, puVar13 == puVar16)) break;
            lVar4 = 0xc;
            if (*(char *)((long)puVar13 + (10 - (long)puVar16)) != '\0') {
              lVar4 = 0x1c;
            }
            lVar4 = (long)puVar13 + (lVar4 - (long)puVar16);
            if (lVar4 == 0) break;
            uVar17 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar16));
            *(undefined4 *)(puVar9 + 8) = 0xfffffffe;
            if (uVar17 == 0) break;
            piVar18 = (int *)(lVar4 + 4);
            while (piVar18[-1] != 0x54706054) {
              piVar18 = piVar18 + 2;
              uVar17 = uVar17 - 1;
              if (uVar17 == 0) goto LAB_021af480;
            }
            iVar2 = 0;
            if (*piVar18 != -1) {
              iVar2 = *piVar18;
            }
            *(int *)(puVar9 + 8) = iVar2;
            if (*puVar13 == 0) break;
          } while( true );
        }
LAB_021af480:
        *(bool *)lVar14 = bVar10;
      }
    }
    iVar11 = iVar11 + 1;
    if (iVar11 == 10) {
      return;
    }
  } while( true );
}

