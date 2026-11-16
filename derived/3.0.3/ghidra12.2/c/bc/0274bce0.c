
uint FUN_0274bce0(byte *param_1,long *param_2)

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
  ushort *puVar11;
  char cVar12;
  uint *puVar13;
  ulong uVar14;
  int *piVar15;
  uint uVar16;
  undefined8 uVar17;
  byte local_28 [4];
  undefined4 local_24;
  
  local_28[0] = *param_1;
  if (7 < local_28[0]) {
    local_28[0] = 0xff;
  }
  lVar8 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_28,1);
  if (lVar8 == 0) {
    uVar17 = *(undefined8 *)PTR_DAT_04bb2208;
    (**(code **)(*param_2 + 0x18))(param_2);
    local_24 = FUN_006bd550(param_2[1],0);
    puVar10 = (uint *)FUN_00d654a0(uVar17,&local_24);
    puVar6 = PTR_DAT_04bb6348;
    puVar5 = PTR_DAT_04bb6340;
    if ((puVar10 != (uint *)0x0) && (uVar16 = *puVar10, uVar16 != 0)) {
      cVar12 = *PTR_DAT_04bb6340;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          uVar16 = *puVar10;
        }
        else {
          uVar7 = *(uint *)puVar6;
          if (-1 < (int)uVar7) {
            if ((uint *)((ulong)uVar7 + (long)puVar10) != (uint *)0x0) {
              return *(uint *)((ulong)uVar7 + (long)puVar10);
            }
            break;
          }
          if (uVar7 != 0xffffffff) break;
        }
        puVar13 = (uint *)(ulong)uVar16;
        if (puVar13 == (uint *)0x0) {
          return 0;
        }
        if (puVar10 == puVar13) {
          return 0;
        }
        lVar8 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar13)) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar10 + (lVar8 - (long)puVar13);
        if (lVar8 == 0) break;
        uVar14 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar13));
        *(undefined4 *)puVar6 = 0xfffffffe;
        if (uVar14 == 0) break;
        piVar15 = (int *)(lVar8 + 4);
        while (piVar15[-1] != 0x4c24f1cf) {
          piVar15 = piVar15 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_0274bfcc;
        }
        iVar1 = 0;
        if (*piVar15 != -1) {
          iVar1 = *piVar15;
        }
        *(int *)puVar6 = iVar1;
        uVar16 = *puVar10;
        if (uVar16 == 0) {
          return 0;
        }
      } while( true );
    }
LAB_0274bfcc:
    uVar16 = 0;
  }
  else {
    if ((*(long **)(lVar8 + 0x18320) == (long *)0x0) ||
       (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x18320), puVar9 == (undefined8 *)0x0)) {
      uVar7 = 1;
    }
    else {
      uVar7 = (**(code **)*puVar9)();
      uVar7 = uVar7 ^ 1;
    }
    lVar2 = *(long *)(lVar8 + 0x18300);
    lVar3 = *(long *)(lVar8 + 0x18308);
    puVar10 = (uint *)FUN_0274eeb0(param_2);
    puVar6 = PTR_DAT_04bb6348;
    puVar5 = PTR_DAT_04bb6340;
    if (puVar10 == (uint *)0x0) {
      uVar16 = 0;
    }
    else {
      puVar11 = (ushort *)(lVar3 + lVar2);
      if (*puVar10 != 0) {
        cVar12 = *PTR_DAT_04bb6340;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            uVar16 = *puVar10;
          }
          else {
            uVar16 = *(uint *)(puVar6 + 8);
            if (-1 < (int)uVar16) {
              if (((ushort *)((ulong)uVar16 + (long)puVar10) != (ushort *)0x0) &&
                 (uVar4 = *(ushort *)((ulong)uVar16 + (long)puVar10), uVar4 < 0x800)) {
                puVar11 = puVar11 + uVar4;
              }
              break;
            }
            if (uVar16 != 0xffffffff) break;
            uVar16 = *puVar10;
          }
          if ((uVar16 == 0) || (puVar13 = (uint *)(ulong)uVar16, puVar10 == puVar13)) break;
          lVar2 = 0xc;
          if (*(char *)((long)puVar10 + (10 - (long)puVar13)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar10 + (lVar2 - (long)puVar13);
          if (lVar2 == 0) break;
          uVar14 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar13));
          *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
          if (uVar14 == 0) break;
          piVar15 = (int *)(lVar2 + 4);
          while (piVar15[-1] != 0x54706054) {
            piVar15 = piVar15 + 2;
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) goto LAB_0274bf94;
          }
          iVar1 = 0;
          if (*piVar15 != -1) {
            iVar1 = *piVar15;
          }
          *(int *)(puVar6 + 8) = iVar1;
          if (*puVar10 == 0) break;
        } while( true );
      }
LAB_0274bf94:
      uVar16 = (uint)*puVar11;
    }
    if ((((uVar7 & 1) == 0) && (*(long *)(lVar8 + 0x18320) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x18320) + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
    }
  }
  return uVar16;
}

