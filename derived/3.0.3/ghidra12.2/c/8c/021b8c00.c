
bool FUN_021b8c00(undefined8 param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint *puVar7;
  long lVar8;
  char *pcVar9;
  char cVar10;
  uint *puVar11;
  ulong uVar12;
  int *piVar13;
  undefined4 local_14;
  
  uVar2 = *param_2;
  if ((uVar2 < 10) && ((&DAT_053fee41)[(ulong)uVar2 * 0xba0] != '\0')) {
    lVar8 = *(long *)PTR_DAT_04bb2208;
    local_14 = FUN_006bd550("SeasonEventPlace",0);
    puVar7 = (uint *)FUN_021cb820(lVar8 + 0x660,&local_14);
    puVar5 = PTR_DAT_04bb6380;
    puVar4 = PTR_DAT_04bb6378;
    bVar6 = false;
    if (puVar7 != (uint *)0x0) {
      pcVar9 = &DAT_053feb60 + (ulong)uVar2 * 0xba0;
      if (*puVar7 != 0) {
        cVar10 = *PTR_DAT_04bb6378;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            uVar2 = *puVar7;
          }
          else {
            uVar2 = *(uint *)(puVar5 + 8);
            if (-1 < (int)uVar2) {
              if (((ushort *)((ulong)uVar2 + (long)puVar7) != (ushort *)0x0) &&
                 (uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar7), uVar3 < 0x80)) {
                pcVar9 = pcVar9 + uVar3;
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
          *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
          if (uVar12 == 0) break;
          piVar13 = (int *)(lVar8 + 4);
          while (piVar13[-1] != 0x54706054) {
            piVar13 = piVar13 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_021b8d6c;
          }
          iVar1 = 0;
          if (*piVar13 != -1) {
            iVar1 = *piVar13;
          }
          *(int *)(puVar5 + 8) = iVar1;
          if (*puVar7 == 0) break;
        } while( true );
      }
LAB_021b8d6c:
      bVar6 = *pcVar9 == '\x01';
    }
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}

