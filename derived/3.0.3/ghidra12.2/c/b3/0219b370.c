
void FUN_0219b370(long param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  uint *puVar8;
  long lVar9;
  byte *pbVar10;
  char cVar11;
  uint *puVar12;
  ulong uVar13;
  int *piVar14;
  byte *pbVar15;
  undefined4 local_38;
  undefined4 local_34;
  
  FUN_0219a020();
  FUN_0219ac30(param_1);
  FUN_02197070(param_1);
  FUN_02197450(param_1);
  FUN_0219af10(param_1);
  FUN_0219b680(param_1);
  pbVar15 = (byte *)(param_1 + 0x818);
  bVar7 = FUN_0219b250(param_1,1);
  puVar4 = PTR_DAT_04bb2208;
  lVar9 = *(long *)PTR_DAT_04bb2208;
  local_38 = FUN_006bd550("EmoticonGetTalk",0);
  puVar8 = (uint *)FUN_021cb820(lVar9 + 0x660,&local_38);
  puVar6 = PTR_DAT_04bb6380;
  puVar5 = PTR_DAT_04bb6378;
  if (puVar8 != (uint *)0x0) {
    if (*puVar8 != 0) {
      cVar11 = *PTR_DAT_04bb6378;
      do {
        if (cVar11 == '\0') {
          cVar11 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          uVar2 = *puVar8;
        }
        else {
          uVar2 = *(uint *)(puVar6 + 8);
          if (-1 < (int)uVar2) {
            if (((ushort *)((ulong)uVar2 + (long)puVar8) != (ushort *)0x0) &&
               (uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar8), uVar3 < 0x80)) {
              pbVar10 = pbVar15 + uVar3;
              goto LAB_0219b518;
            }
            break;
          }
          if (uVar2 != 0xffffffff) break;
          uVar2 = *puVar8;
        }
        if ((uVar2 == 0) || (puVar12 = (uint *)(ulong)uVar2, puVar8 == puVar12)) break;
        lVar9 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar12)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar8 + (lVar9 - (long)puVar12);
        if (lVar9 == 0) break;
        uVar13 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar12));
        *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar14 = (int *)(lVar9 + 4);
        while (piVar14[-1] != 0x54706054) {
          piVar14 = piVar14 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_0219b514;
        }
        iVar1 = 0;
        if (*piVar14 != -1) {
          iVar1 = *piVar14;
        }
        *(int *)(puVar6 + 8) = iVar1;
        if (*puVar8 == 0) break;
      } while( true );
    }
LAB_0219b514:
    pbVar10 = pbVar15;
LAB_0219b518:
    *pbVar10 = bVar7 & 1;
  }
  FUN_02196a08(param_1 + 0x4c8,param_2,param_3 & 1);
  lVar9 = *(long *)puVar4;
  local_34 = FUN_006bd550("ApproachUpdateStop",0);
  puVar8 = (uint *)FUN_021cb820(lVar9 + 0x660,&local_34);
  puVar5 = PTR_DAT_04bb6380;
  puVar4 = PTR_DAT_04bb6378;
  if (puVar8 != (uint *)0x0) {
    if (*puVar8 != 0) {
      cVar11 = *PTR_DAT_04bb6378;
      do {
        if (cVar11 == '\0') {
          cVar11 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          uVar2 = *puVar8;
        }
        else {
          uVar2 = *(uint *)(puVar5 + 8);
          if (-1 < (int)uVar2) {
            if (((ushort *)((ulong)uVar2 + (long)puVar8) != (ushort *)0x0) &&
               (uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar8), uVar3 < 0x80)) {
              pbVar15 = pbVar15 + uVar3;
            }
            break;
          }
          if (uVar2 != 0xffffffff) break;
          uVar2 = *puVar8;
        }
        if ((uVar2 == 0) || (puVar12 = (uint *)(ulong)uVar2, puVar8 == puVar12)) break;
        lVar9 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar12)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar8 + (lVar9 - (long)puVar12);
        if (lVar9 == 0) break;
        uVar13 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar12));
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar14 = (int *)(lVar9 + 4);
        while (piVar14[-1] != 0x54706054) {
          piVar14 = piVar14 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_0219b658;
        }
        iVar1 = 0;
        if (*piVar14 != -1) {
          iVar1 = *piVar14;
        }
        *(int *)(puVar5 + 8) = iVar1;
        if (*puVar8 == 0) break;
      } while( true );
    }
LAB_0219b658:
    *pbVar15 = 0;
  }
  FUN_0219baf0(param_1,param_2);
  return;
}

