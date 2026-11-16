
uint FUN_0279d6d0(byte *param_1,long *param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  undefined8 *puVar10;
  int *piVar11;
  long lVar12;
  char cVar13;
  uint *puVar14;
  ulong uVar15;
  byte local_38 [4];
  undefined4 local_34;
  
  local_38[0] = *param_1;
  if (7 < local_38[0]) {
    local_38[0] = 0xff;
  }
  lVar8 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_38,1);
  if (lVar8 != 0) {
    lVar12 = *(long *)PTR_DAT_04bb2208;
    (**(code **)(*param_2 + 0x18))(param_2);
    local_34 = FUN_006bd550(param_2[1],0);
    puVar9 = (uint *)FUN_01b1ee90(lVar12 + 0x1b80,&local_34);
    if (puVar9 != (uint *)0x0) {
      if ((*(long **)(lVar8 + 0x18358) == (long *)0x0) ||
         (puVar10 = (undefined8 *)**(long **)(lVar8 + 0x18358), puVar10 == (undefined8 *)0x0)) {
        uVar7 = 1;
      }
      else {
        uVar7 = (**(code **)*puVar10)();
        uVar7 = uVar7 ^ 1;
      }
      puVar6 = PTR_DAT_04bb6448;
      puVar5 = PTR_DAT_04bb6440;
      lVar12 = *(long *)(lVar8 + 0x18340) + *(long *)(lVar8 + 0x18338);
      if (*puVar9 == 0) {
LAB_0279d8b0:
        puVar9 = (uint *)(lVar12 + 0xe98);
LAB_0279d8b4:
        uVar3 = *puVar9 >> (ulong)(param_3 & 0x1f) & 1;
        if ((uVar7 & 1) != 0) {
          return uVar3;
        }
        if (*(long *)(lVar8 + 0x18358) == 0) {
          return uVar3;
        }
        puVar10 = *(undefined8 **)(*(long *)(lVar8 + 0x18358) + 8);
        if (puVar10 == (undefined8 *)0x0) {
          return uVar3;
        }
        (**(code **)*puVar10)();
        return uVar3;
      }
      cVar13 = *PTR_DAT_04bb6440;
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
          uVar3 = *puVar9;
        }
        else {
          uVar3 = *(uint *)(puVar6 + 0x3c);
          if (-1 < (int)uVar3) {
            if ((ushort *)((ulong)uVar3 + (long)puVar9) != (ushort *)0x0) {
              uVar4 = *(ushort *)((ulong)uVar3 + (long)puVar9);
              puVar9 = (uint *)(lVar12 + 0xe98);
              if (uVar4 < 0x200) {
                puVar9 = puVar9 + uVar4;
              }
              goto LAB_0279d8b4;
            }
            goto LAB_0279d8b0;
          }
          if (uVar3 != 0xffffffff) goto LAB_0279d8b0;
          uVar3 = *puVar9;
        }
        if ((uVar3 == 0) || (puVar14 = (uint *)(ulong)uVar3, puVar9 == puVar14)) goto LAB_0279d8b0;
        lVar2 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar14)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar9 + (lVar2 - (long)puVar14);
        if (lVar2 == 0) goto LAB_0279d8b0;
        uVar15 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar14));
        *(undefined4 *)(puVar6 + 0x3c) = 0xfffffffe;
        if (uVar15 == 0) goto LAB_0279d8b0;
        piVar11 = (int *)(lVar2 + 4);
        while (piVar11[-1] != 0x54706054) {
          piVar11 = piVar11 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) goto LAB_0279d8b0;
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(puVar6 + 0x3c) = iVar1;
        if (*puVar9 == 0) goto LAB_0279d8b0;
      } while( true );
    }
  }
  return 0;
}

