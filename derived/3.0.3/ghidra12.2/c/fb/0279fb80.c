
bool FUN_0279fb80(byte *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  uint uVar8;
  uint *puVar9;
  undefined8 *puVar10;
  int *piVar11;
  long lVar12;
  char *pcVar13;
  char cVar14;
  uint *puVar15;
  ulong uVar16;
  byte local_18 [4];
  undefined4 local_14;
  
  lVar12 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_14 = FUN_006bd550(param_2[1],0);
  puVar9 = (uint *)FUN_00ad5fc0(lVar12 + 0x1960,&local_14);
  bVar7 = false;
  if (puVar9 != (uint *)0x0) {
    local_18[0] = *param_1;
    if (7 < local_18[0]) {
      local_18[0] = 0xff;
    }
    lVar12 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_18,1);
    if (lVar12 == 0) {
      bVar7 = false;
    }
    else {
      if ((*(long **)(lVar12 + 0x18358) == (long *)0x0) ||
         (puVar10 = (undefined8 *)**(long **)(lVar12 + 0x18358), puVar10 == (undefined8 *)0x0)) {
        uVar8 = 1;
      }
      else {
        uVar8 = (**(code **)*puVar10)();
        uVar8 = uVar8 ^ 1;
      }
      puVar6 = PTR_DAT_04bb6428;
      puVar5 = PTR_DAT_04bb6420;
      pcVar13 = (char *)(*(long *)(lVar12 + 0x18340) + *(long *)(lVar12 + 0x18338) + 0x800);
      if (*puVar9 != 0) {
        cVar14 = *PTR_DAT_04bb6420;
        do {
          if (cVar14 == '\0') {
            cVar14 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined4 *)(puVar6 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
            uVar3 = *puVar9;
          }
          else {
            uVar3 = *(uint *)(puVar6 + 0x20);
            if (-1 < (int)uVar3) {
              if (((ushort *)((ulong)uVar3 + (long)puVar9) != (ushort *)0x0) &&
                 (uVar4 = *(ushort *)((ulong)uVar3 + (long)puVar9), uVar4 < 0x200)) {
                pcVar13 = pcVar13 + uVar4;
              }
              break;
            }
            if (uVar3 != 0xffffffff) break;
            uVar3 = *puVar9;
          }
          if ((uVar3 == 0) || (puVar15 = (uint *)(ulong)uVar3, puVar9 == puVar15)) break;
          lVar2 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar15)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar9 + (lVar2 - (long)puVar15);
          if (lVar2 == 0) break;
          uVar16 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar15));
          *(undefined4 *)(puVar6 + 0x20) = 0xfffffffe;
          if (uVar16 == 0) break;
          piVar11 = (int *)(lVar2 + 4);
          while (piVar11[-1] != 0x54706054) {
            piVar11 = piVar11 + 2;
            uVar16 = uVar16 - 1;
            if (uVar16 == 0) goto LAB_0279fd5c;
          }
          iVar1 = 0;
          if (*piVar11 != -1) {
            iVar1 = *piVar11;
          }
          *(int *)(puVar6 + 0x20) = iVar1;
          if (*puVar9 == 0) break;
        } while( true );
      }
LAB_0279fd5c:
      bVar7 = *pcVar13 != '\0';
      if ((((uVar8 & 1) == 0) && (*(long *)(lVar12 + 0x18358) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar12 + 0x18358) + 8), puVar10 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar10)();
      }
    }
  }
  return bVar7;
}

