
void FUN_021b77d0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  byte bVar6;
  uint *puVar7;
  long lVar8;
  byte *pbVar9;
  char cVar10;
  uint *puVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  int iVar15;
  undefined *local_78;
  char *local_70;
  undefined4 local_64;
  
  puVar5 = PTR_DAT_04bb6380;
  lVar8 = **(long **)PTR_DAT_04bb27d0;
  bVar6 = *(byte *)(lVar8 + 0x473);
  if ((long)(char)bVar6 != 0xffffffffffffffff) {
    pbVar9 = (byte *)(lVar8 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x80;
    if (7 < bVar6) {
      pbVar9 = (byte *)(lVar8 + 0x48);
    }
    if (((*pbVar9 >> 3 & 1) != 0) && (*(byte *)(lVar8 + 0x472) != bVar6)) {
      return;
    }
  }
  iVar15 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  do {
    if (*(char *)(param_1 + (long)iVar15 * 0xba0 + 0xaf9) != '\0') {
      lVar14 = param_1 + (long)iVar15 * 0xba0;
      local_70 = "EmoticonGetTalk";
      local_78 = puVar1;
      bVar6 = FUN_0219b250(lVar14,0);
      lVar8 = *(long *)PTR_DAT_04bb2208;
      (**(code **)(local_78 + 0x18))(&local_78);
      local_64 = FUN_006bd550(local_70,0);
      puVar7 = (uint *)FUN_021cb820(lVar8 + 0x660,&local_64);
      if (puVar7 != (uint *)0x0) {
        pbVar9 = (byte *)(lVar14 + 0x818);
        if (*puVar7 != 0) {
          cVar10 = *PTR_DAT_04bb6378;
          do {
            if (cVar10 == '\0') {
              cVar10 = '\x01';
              *PTR_DAT_04bb6378 = 1;
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
              uVar3 = *puVar7;
            }
            else {
              uVar3 = *(uint *)(puVar5 + 8);
              if (-1 < (int)uVar3) {
                if (((ushort *)((ulong)uVar3 + (long)puVar7) != (ushort *)0x0) &&
                   (uVar4 = *(ushort *)((ulong)uVar3 + (long)puVar7), uVar4 < 0x80)) {
                  pbVar9 = pbVar9 + uVar4;
                }
                break;
              }
              if (uVar3 != 0xffffffff) break;
              uVar3 = *puVar7;
            }
            if ((uVar3 == 0) || (puVar11 = (uint *)(ulong)uVar3, puVar7 == puVar11)) break;
            lVar8 = 0xc;
            if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar7 + (lVar8 - (long)puVar11);
            if (lVar8 == 0) break;
            uVar12 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
            *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
            if (uVar12 == 0) break;
            piVar13 = (int *)(lVar8 + 4);
            while (piVar13[-1] != 0x54706054) {
              piVar13 = piVar13 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) goto LAB_021b7874;
            }
            iVar2 = 0;
            if (*piVar13 != -1) {
              iVar2 = *piVar13;
            }
            *(int *)(puVar5 + 8) = iVar2;
            if (*puVar7 == 0) break;
          } while( true );
        }
LAB_021b7874:
        *pbVar9 = bVar6 & 1;
      }
    }
    iVar15 = iVar15 + 1;
    if (iVar15 == 10) {
      return;
    }
  } while( true );
}

