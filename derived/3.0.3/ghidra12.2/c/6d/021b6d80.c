
void FUN_021b6d80(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  long lVar8;
  byte *pbVar9;
  char cVar10;
  uint *puVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  undefined4 local_64;
  
  puVar6 = PTR_DAT_04bb6380;
  puVar4 = PTR_DAT_04bb2208;
  lVar14 = 0;
  do {
    if (*(char *)(param_1 + lVar14 * 0xba0 + 0xaf9) != '\0') {
      lVar8 = *(long *)puVar4;
      local_64 = FUN_006bd550("CountdownFieldNpc",0);
      puVar7 = (uint *)FUN_021cb820(lVar8 + 0x660,&local_64);
      if (puVar7 != (uint *)0x0) {
        pbVar9 = (byte *)(param_1 + lVar14 * 0xba0 + 0x818);
        if (*puVar7 != 0) {
          cVar10 = *PTR_DAT_04bb6378;
          do {
            puVar5 = PTR_DAT_04bb6378;
            if (cVar10 == '\0') {
              cVar10 = '\x01';
              *(undefined8 *)puVar6 = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
              *puVar5 = 1;
              *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
              uVar2 = *puVar7;
            }
            else {
              uVar2 = *(uint *)(puVar6 + 8);
              if (-1 < (int)uVar2) {
                if (((ushort *)((ulong)uVar2 + (long)puVar7) != (ushort *)0x0) &&
                   (uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar7), uVar3 < 0x80)) {
                  pbVar9 = pbVar9 + uVar3;
                }
                break;
              }
              if (uVar2 != 0xffffffff) break;
              uVar2 = *puVar7;
            }
            if ((uVar2 == 0) || (puVar11 = (uint *)(ulong)uVar2, puVar7 == puVar11)) break;
            lVar8 = 0xc;
            if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar7 + (lVar8 - (long)puVar11);
            if (lVar8 == 0) break;
            uVar12 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
            *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
            if (uVar12 == 0) break;
            piVar13 = (int *)(lVar8 + 4);
            while (piVar13[-1] != 0x54706054) {
              piVar13 = piVar13 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) goto LAB_021b6de0;
            }
            iVar1 = 0;
            if (*piVar13 != -1) {
              iVar1 = *piVar13;
            }
            *(int *)(puVar6 + 8) = iVar1;
            if (*puVar7 == 0) break;
          } while( true );
        }
LAB_021b6de0:
        *pbVar9 = (byte)((param_2 & 0xffff) >> (ulong)((uint)lVar14 & 0x1f)) & 1;
      }
    }
    lVar14 = lVar14 + 1;
    if (lVar14 == 10) {
      return;
    }
  } while( true );
}

