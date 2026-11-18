
uint FUN_03235430(long param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  uint *puVar12;
  char cVar13;
  ulong uVar14;
  uint *puVar15;
  int *piVar16;
  undefined *local_50;
  long lStack_48;
  byte local_28 [4];
  byte local_24 [4];
  
  puVar5 = PTR_DAT_04bb4f78;
  bVar4 = *(byte *)(param_1 + 0x1f8);
  uVar3 = *(undefined4 *)(param_1 + 0x220);
  local_28[0] = bVar4;
  if (7 < bVar4) {
    local_28[0] = 0xff;
  }
  local_50 = (undefined *)CONCAT71(local_50._1_7_,local_28[0]);
  lVar10 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_50,1);
  if (lVar10 != 0) {
    if ((*(long **)(lVar10 + 0x18358) == (long *)0x0) ||
       (puVar11 = (undefined8 *)**(long **)(lVar10 + 0x18358), puVar11 == (undefined8 *)0x0)) {
      uVar8 = 1;
    }
    else {
      uVar8 = (**(code **)*puVar11)();
      uVar8 = uVar8 ^ 1;
    }
    puVar12 = (uint *)FUN_027a0fc0(*(long *)(lVar10 + 0x18340) + *(long *)(lVar10 + 0x18338),uVar3);
    if ((((uVar8 & 1) == 0) && (*(long *)(lVar10 + 0x18358) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x18358) + 8), puVar11 != (undefined8 *)0x0))
    {
      (**(code **)*puVar11)();
    }
    puVar7 = PTR_DAT_04bb6428;
    puVar6 = PTR_DAT_04bb6420;
    uVar8 = 0;
    if (puVar12 == (uint *)0x0) goto LAB_03235640;
    if (*puVar12 != 0) {
      cVar13 = *PTR_DAT_04bb6420;
      do {
        if (cVar13 == '\0') {
          cVar13 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined4 *)(puVar7 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar8 = *(uint *)(puVar7 + 0x3c);
          if (-1 < (int)uVar8) {
            lVar10 = (ulong)uVar8 + (long)puVar12;
            goto LAB_032355c8;
          }
          if (uVar8 != 0xffffffff) break;
        }
        puVar15 = (uint *)(ulong)*puVar12;
        lVar10 = 0;
        if ((*puVar12 == 0) || (puVar12 == puVar15)) goto LAB_032355c8;
        lVar10 = 0xc;
        if (*(char *)((long)puVar12 + (10 - (long)puVar15)) != '\0') {
          lVar10 = 0x1c;
        }
        lVar1 = (long)puVar12 + (lVar10 - (long)puVar15);
        if (lVar1 == 0) break;
        uVar14 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar15));
        *(undefined4 *)(puVar7 + 0x3c) = 0xfffffffe;
        lVar10 = 0;
        if (uVar14 == 0) goto LAB_032355c8;
        piVar16 = (int *)(lVar1 + 4);
        while (piVar16[-1] != 0x45f320f2) {
          piVar16 = piVar16 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) {
            lVar10 = 0;
            goto LAB_032355c8;
          }
        }
        iVar2 = 0;
        if (*piVar16 != -1) {
          iVar2 = *piVar16;
        }
        *(int *)(puVar7 + 0x3c) = iVar2;
      } while (*puVar12 != 0);
    }
    lVar10 = 0;
LAB_032355c8:
    lStack_48 = *(long *)PTR_PTR_04bb6418;
    if (lVar10 != 0) {
      lStack_48 = lVar10;
    }
    local_50 = PTR_DAT_04bb2020 + 0x10;
    local_24[0] = bVar4;
    if (7 < bVar4) {
      local_24[0] = 0xff;
    }
    lVar10 = FUN_025830c0(*(undefined8 *)puVar5,local_24,1);
    if (lVar10 != 0) {
      if ((*(long **)(lVar10 + 0x18358) == (long *)0x0) ||
         (puVar11 = (undefined8 *)**(long **)(lVar10 + 0x18358), puVar11 == (undefined8 *)0x0)) {
        uVar9 = 1;
      }
      else {
        uVar9 = (**(code **)*puVar11)();
        uVar9 = uVar9 ^ 1;
      }
      uVar8 = FUN_0279f560(*(long *)(lVar10 + 0x18340) + *(long *)(lVar10 + 0x18338),local_28,
                           &local_50);
      if ((((uVar9 & 1) == 0) && (*(long *)(lVar10 + 0x18358) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x18358) + 8), puVar11 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar11)();
      }
      goto LAB_03235640;
    }
  }
  uVar8 = 0;
LAB_03235640:
  return uVar8 & 1;
}

