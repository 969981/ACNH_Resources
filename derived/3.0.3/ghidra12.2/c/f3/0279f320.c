
uint FUN_0279f320(byte *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  uint *puVar10;
  uint extraout_w8;
  long lVar11;
  char *pcVar12;
  char cVar13;
  uint *puVar14;
  ulong uVar15;
  int *piVar16;
  uint uVar17;
  byte local_48 [4];
  undefined4 local_44;
  
  local_48[0] = *param_1;
  if (7 < local_48[0]) {
    local_48[0] = 0xff;
  }
  lVar8 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_48,1);
  if (lVar8 == 0) {
    uVar17 = 0;
  }
  else {
    if ((*(long **)(lVar8 + 0x18358) == (long *)0x0) ||
       (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x18358), puVar9 == (undefined8 *)0x0)) {
      uVar7 = 1;
    }
    else {
      uVar7 = (**(code **)*puVar9)();
      uVar7 = uVar7 ^ 1;
    }
    lVar2 = *(long *)(lVar8 + 0x18338);
    lVar3 = *(long *)(lVar8 + 0x18340);
    lVar11 = *(long *)PTR_DAT_04bb2208;
    (**(code **)(*param_2 + 0x18))(param_2);
    local_44 = FUN_006bd550(param_2[1],0);
    puVar10 = (uint *)FUN_00ad5fc0(lVar11 + 0x1960,&local_44);
    puVar6 = PTR_DAT_04bb6428;
    puVar5 = PTR_DAT_04bb6420;
    uVar17 = extraout_w8;
    if (puVar10 != (uint *)0x0) {
      pcVar12 = (char *)(lVar3 + lVar2 + 0xc40);
      if (*puVar10 != 0) {
        cVar13 = *PTR_DAT_04bb6420;
        do {
          if (cVar13 == '\0') {
            cVar13 = '\x01';
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
            uVar17 = *puVar10;
          }
          else {
            uVar17 = *(uint *)(puVar6 + 0x20);
            if (-1 < (int)uVar17) {
              if (((ushort *)((ulong)uVar17 + (long)puVar10) != (ushort *)0x0) &&
                 (uVar4 = *(ushort *)((ulong)uVar17 + (long)puVar10), uVar4 < 0x200)) {
                pcVar12 = pcVar12 + uVar4;
              }
              break;
            }
            if (uVar17 != 0xffffffff) break;
            uVar17 = *puVar10;
          }
          if ((uVar17 == 0) || (puVar14 = (uint *)(ulong)uVar17, puVar10 == puVar14)) break;
          lVar2 = 0xc;
          if (*(char *)((long)puVar10 + (10 - (long)puVar14)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar10 + (lVar2 - (long)puVar14);
          if (lVar2 == 0) break;
          uVar15 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar14));
          *(undefined4 *)(puVar6 + 0x20) = 0xfffffffe;
          if (uVar15 == 0) break;
          piVar16 = (int *)(lVar2 + 4);
          while (piVar16[-1] != 0x54706054) {
            piVar16 = piVar16 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_0279f500;
          }
          iVar1 = 0;
          if (*piVar16 != -1) {
            iVar1 = *piVar16;
          }
          *(int *)(puVar6 + 0x20) = iVar1;
          if (*puVar10 == 0) break;
        } while( true );
      }
LAB_0279f500:
      uVar17 = (uint)(*pcVar12 != '\0');
    }
    uVar17 = puVar10 != (uint *)0x0 & uVar17;
    if ((((uVar7 & 1) == 0) && (*(long *)(lVar8 + 0x18358) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x18358) + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
    }
  }
  return uVar17;
}

