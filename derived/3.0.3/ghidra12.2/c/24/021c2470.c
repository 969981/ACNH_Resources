
void FUN_021c2470(long param_1)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  uint *puVar7;
  long lVar8;
  undefined1 *puVar9;
  char cVar10;
  uint *puVar11;
  int *piVar12;
  undefined4 local_24;
  
  FUN_021ca0d0(param_1,2);
  uVar6 = FUN_0290d828();
  if (((uVar6 & 1) == 0) && (*(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x6622bd46)) {
    lVar8 = *(long *)PTR_DAT_04bb2208;
    local_24 = FUN_006bd550("IsCalmlyWandering",0);
    puVar7 = (uint *)FUN_021cb9c0(lVar8 + 0x2400,&local_24);
    puVar5 = PTR_DAT_04bb6498;
    puVar4 = PTR_DAT_04bb6490;
    if (puVar7 != (uint *)0x0) {
      puVar9 = (undefined1 *)(param_1 + 0x22c);
      if (*puVar7 != 0) {
        cVar10 = *PTR_DAT_04bb6490;
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
                puVar9 = puVar9 + uVar3;
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
          uVar6 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
          *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
          if (uVar6 == 0) break;
          piVar12 = (int *)(lVar8 + 4);
          while (piVar12[-1] != 0x54706054) {
            piVar12 = piVar12 + 2;
            uVar6 = uVar6 - 1;
            if (uVar6 == 0) goto LAB_021c25e4;
          }
          iVar1 = 0;
          if (*piVar12 != -1) {
            iVar1 = *piVar12;
          }
          *(int *)(puVar5 + 8) = iVar1;
          if (*puVar7 == 0) break;
        } while( true );
      }
LAB_021c25e4:
      *puVar9 = 0;
    }
  }
  return;
}

