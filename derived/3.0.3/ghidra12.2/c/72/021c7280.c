
void FUN_021c7280(short *param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  int *piVar7;
  short sVar8;
  long lVar9;
  byte *pbVar10;
  char cVar11;
  uint *puVar12;
  ulong uVar13;
  undefined4 local_34;
  
  uVar2 = *param_3;
  if ((uVar2 < 10) && ((&DAT_053fee41)[(ulong)uVar2 * 0xba0] != '\0')) {
    lVar9 = *(long *)PTR_DAT_04bb2208;
    local_34 = FUN_006bd550("EasterExchangeEggKind",0);
    puVar6 = (uint *)FUN_021cb820(lVar9 + 0x660,&local_34);
    puVar5 = PTR_DAT_04bb6380;
    puVar4 = PTR_DAT_04bb6378;
    sVar8 = 0x30dd;
    if (puVar6 != (uint *)0x0) {
      pbVar10 = &DAT_053feb60 + (ulong)uVar2 * 0xba0;
      if (*puVar6 != 0) {
        cVar11 = *PTR_DAT_04bb6378;
        do {
          if (cVar11 == '\0') {
            cVar11 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            uVar2 = *puVar6;
          }
          else {
            uVar2 = *(uint *)(puVar5 + 8);
            if (-1 < (int)uVar2) {
              if (((ushort *)((ulong)uVar2 + (long)puVar6) != (ushort *)0x0) &&
                 (uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar6), uVar3 < 0x80)) {
                pbVar10 = pbVar10 + uVar3;
              }
              break;
            }
            if (uVar2 != 0xffffffff) break;
            uVar2 = *puVar6;
          }
          if ((uVar2 == 0) || (puVar12 = (uint *)(ulong)uVar2, puVar6 == puVar12)) break;
          lVar9 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar12)) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar6 + (lVar9 - (long)puVar12);
          if (lVar9 == 0) break;
          uVar13 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar12));
          *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
          if (uVar13 == 0) break;
          piVar7 = (int *)(lVar9 + 4);
          while (piVar7[-1] != 0x54706054) {
            piVar7 = piVar7 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_021c73fc;
          }
          iVar1 = 0;
          if (*piVar7 != -1) {
            iVar1 = *piVar7;
          }
          *(int *)(puVar5 + 8) = iVar1;
          if (*puVar6 == 0) break;
        } while( true );
      }
LAB_021c73fc:
      sVar8 = 0x30e2;
      if (*pbVar10 < 5) {
        sVar8 = *pbVar10 + 0x30dd;
      }
    }
  }
  else {
    sVar8 = 0x30dd;
  }
  *param_1 = sVar8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_0277d4ac(param_1);
  return;
}

