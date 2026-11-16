
undefined2 FUN_02754e30(byte *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  undefined2 *puVar13;
  char cVar14;
  uint *puVar15;
  ulong uVar16;
  int *piVar17;
  undefined2 uVar18;
  byte local_48 [4];
  undefined4 local_44;
  
  local_48[0] = *param_1;
  if ((local_48[0] < 8) &&
     (lVar8 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_48,1), lVar8 != 0)) {
    lVar11 = lVar8 + 0x194b0;
    if (*(long *)(lVar8 + 0x194b8) == 0) {
      lVar11 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    if ((*(long **)(lVar11 + 0x2ad48) == (long *)0x0) ||
       (puVar9 = (undefined8 *)**(long **)(lVar11 + 0x2ad48), puVar9 == (undefined8 *)0x0)) {
      uVar7 = 1;
    }
    else {
      uVar7 = (**(code **)*puVar9)();
      uVar7 = uVar7 ^ 1;
    }
    lVar8 = *(long *)(lVar11 + 0x2ad28);
    lVar2 = *(long *)(lVar11 + 0x2ad30);
    lVar12 = *(long *)PTR_DAT_04bb2208;
    (**(code **)(*param_2 + 0x18))(param_2);
    local_44 = FUN_006bd550(param_2[1],0);
    puVar10 = (uint *)FUN_02755c10(lVar12 + 0x1300,&local_44);
    puVar6 = PTR_DAT_04bb63e0;
    puVar5 = PTR_DAT_04bb63d8;
    if (puVar10 == (uint *)0x0) {
      uVar18 = 0;
    }
    else {
      puVar13 = (undefined2 *)(lVar2 + lVar8);
      if (*puVar10 != 0) {
        cVar14 = *PTR_DAT_04bb63d8;
        do {
          if (cVar14 == '\0') {
            cVar14 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            uVar3 = *puVar10;
          }
          else {
            uVar3 = *(uint *)(puVar6 + 8);
            if (-1 < (int)uVar3) {
              if (((ushort *)((ulong)uVar3 + (long)puVar10) != (ushort *)0x0) &&
                 (uVar4 = *(ushort *)((ulong)uVar3 + (long)puVar10), uVar4 < 0x80)) {
                puVar13 = puVar13 + uVar4;
              }
              break;
            }
            if (uVar3 != 0xffffffff) break;
            uVar3 = *puVar10;
          }
          if ((uVar3 == 0) || (puVar15 = (uint *)(ulong)uVar3, puVar10 == puVar15)) break;
          lVar8 = 0xc;
          if (*(char *)((long)puVar10 + (10 - (long)puVar15)) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar10 + (lVar8 - (long)puVar15);
          if (lVar8 == 0) break;
          uVar16 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar15));
          *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
          if (uVar16 == 0) break;
          piVar17 = (int *)(lVar8 + 4);
          while (piVar17[-1] != 0x54706054) {
            piVar17 = piVar17 + 2;
            uVar16 = uVar16 - 1;
            if (uVar16 == 0) goto LAB_02755030;
          }
          iVar1 = 0;
          if (*piVar17 != -1) {
            iVar1 = *piVar17;
          }
          *(int *)(puVar6 + 8) = iVar1;
          if (*puVar10 == 0) break;
        } while( true );
      }
LAB_02755030:
      uVar18 = *puVar13;
    }
    if ((((uVar7 & 1) == 0) && (*(long *)(lVar11 + 0x2ad48) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar11 + 0x2ad48) + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
    }
  }
  else {
    uVar18 = 0;
  }
  return uVar18;
}

