
undefined8 FUN_021b8f60(undefined8 param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  char cVar10;
  uint *puVar11;
  ulong uVar12;
  int *piVar13;
  undefined4 local_34;
  
  uVar1 = *param_2;
  if ((uVar1 < 10) && ((&DAT_053fee41)[(ulong)uVar1 * 0xba0] != '\0')) {
    lVar8 = *(long *)PTR_DAT_04bb2208;
    local_34 = FUN_006bd550("SeasonEventPlace",0);
    puVar5 = (uint *)FUN_021cb820(lVar8 + 0x660,&local_34);
    puVar4 = PTR_DAT_04bb6380;
    puVar3 = PTR_DAT_04bb6378;
    if (puVar5 != (uint *)0x0) {
      pbVar9 = &DAT_053feb60 + (ulong)uVar1 * 0xba0;
      if (*puVar5 != 0) {
        cVar10 = *PTR_DAT_04bb6378;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            uVar1 = *puVar5;
          }
          else {
            uVar1 = *(uint *)(puVar4 + 8);
            if (-1 < (int)uVar1) {
              if (((ushort *)((ulong)uVar1 + (long)puVar5) != (ushort *)0x0) &&
                 (uVar2 = *(ushort *)((ulong)uVar1 + (long)puVar5), uVar2 < 0x80)) {
                pbVar9 = pbVar9 + uVar2;
              }
              break;
            }
            if (uVar1 != 0xffffffff) break;
            uVar1 = *puVar5;
          }
          if ((uVar1 == 0) || (puVar11 = (uint *)(ulong)uVar1, puVar5 == puVar11)) break;
          lVar8 = 0xc;
          if (*(char *)((long)puVar5 + (10 - (long)puVar11)) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar5 + (lVar8 - (long)puVar11);
          if (lVar8 == 0) break;
          uVar12 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar11));
          *(undefined4 *)(puVar4 + 8) = 0xfffffffe;
          if (uVar12 == 0) break;
          piVar13 = (int *)(lVar8 + 4);
          while (piVar13[-1] != 0x54706054) {
            piVar13 = piVar13 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_021b90d4;
          }
          iVar7 = 0;
          if (*piVar13 != -1) {
            iVar7 = *piVar13;
          }
          *(int *)(puVar4 + 8) = iVar7;
          if (*puVar5 == 0) break;
        } while( true );
      }
LAB_021b90d4:
      iVar7 = *pbVar9 - 2;
      if (1 < *pbVar9) {
        uVar6 = 1;
        if (param_3 == (int *)0x0) {
          return 1;
        }
        goto LAB_021b90f8;
      }
    }
  }
  uVar6 = 0;
  if (param_3 == (int *)0x0) {
    return 0;
  }
  iVar7 = -1;
LAB_021b90f8:
  *param_3 = iVar7;
  return uVar6;
}

