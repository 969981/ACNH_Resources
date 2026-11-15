
void FUN_021bf890(undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 uVar9;
  char cVar10;
  ushort uVar11;
  uint *puVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  undefined4 local_64;
  
  puVar5 = PTR_DAT_04bb6380;
  puVar4 = PTR_DAT_04bb2208;
  lVar15 = 0;
  do {
    if ((&DAT_053fee41)[lVar15 * 0xba0] != '\0') {
      uVar11 = *(ushort *)(param_2 + lVar15 * 2);
      lVar8 = *(long *)puVar4;
      local_64 = FUN_006bd550("CarnivalWanderEventPlaza",0);
      puVar6 = (uint *)FUN_021cb820(lVar8 + 0x660,&local_64);
      if (puVar6 != (uint *)0x0) {
        puVar7 = &DAT_053feb60 + lVar15 * 0xba0;
        uVar9 = (undefined1)uVar11;
        if (*puVar6 != 0) {
          cVar10 = *PTR_DAT_04bb6378;
          do {
            if (cVar10 == '\0') {
              cVar10 = '\x01';
              *PTR_DAT_04bb6378 = 1;
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
              uVar2 = *puVar6;
            }
            else {
              uVar2 = *(uint *)(puVar5 + 8);
              if (-1 < (int)uVar2) {
                if ((ushort *)((ulong)uVar2 + (long)puVar6) != (ushort *)0x0) {
                  uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar6);
                  if (0xfe < uVar11) {
                    uVar11 = 0xff;
                  }
                  uVar9 = (undefined1)uVar11;
                  if (uVar3 < 0x80) {
                    puVar7 = puVar7 + uVar3;
                  }
                  goto LAB_021bf8fc;
                }
                break;
              }
              if (uVar2 != 0xffffffff) break;
              uVar2 = *puVar6;
            }
            if ((uVar2 == 0) || (puVar12 = (uint *)(ulong)uVar2, puVar6 == puVar12)) break;
            lVar8 = 0xc;
            if (*(char *)((long)puVar6 + (10 - (long)puVar12)) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar6 + (lVar8 - (long)puVar12);
            if (lVar8 == 0) break;
            uVar13 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar12));
            *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
            if (uVar13 == 0) break;
            piVar14 = (int *)(lVar8 + 4);
            while (piVar14[-1] != 0x54706054) {
              piVar14 = piVar14 + 2;
              uVar13 = uVar13 - 1;
              if (uVar13 == 0) goto LAB_021bf8f0;
            }
            iVar1 = 0;
            if (*piVar14 != -1) {
              iVar1 = *piVar14;
            }
            *(int *)(puVar5 + 8) = iVar1;
            if (*puVar6 == 0) break;
          } while( true );
        }
LAB_021bf8f0:
        if (0xfe < uVar11) {
          uVar9 = 0xff;
        }
LAB_021bf8fc:
        *puVar7 = uVar9;
      }
    }
    lVar15 = lVar15 + 1;
    if (lVar15 == 10) {
      return;
    }
  } while( true );
}

