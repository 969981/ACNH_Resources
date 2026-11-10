
undefined8 FUN_0023d010(long param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long *plVar16;
  undefined1 auStack_40 [16];
  
  puVar6 = PTR_DAT_04bcd350;
  iVar7 = FUN_0026c5a0(*(undefined8 *)PTR_DAT_04bcd350);
  uVar9 = FUN_0026b3b4(*(undefined8 *)puVar6);
  if ((iVar7 == 1) && ((uVar9 & 1) == 0)) {
    plVar16 = *(long **)(DAT_04c60f48 + (ulong)*(byte *)(DAT_04c60f48 + 0x162) * 8 + 0x168);
    uVar10 = FUN_00232c2c(plVar16);
    puVar6 = PTR_DAT_04bc1510;
    lVar11 = FUN_002ba788(*(undefined8 *)PTR_DAT_04bc1510);
    FUN_002415c4(uVar10,lVar11 + 8);
    lVar11 = FUN_002ba788(*(undefined8 *)puVar6);
    uVar10 = FUN_002b43ec(lVar11 + 8);
    (**(code **)(*plVar16 + 0xf8))(plVar16,uVar10);
    (**(code **)(*plVar16 + 0xe8))(plVar16,1);
    lVar11 = DAT_04c60f48;
    uVar8 = FUN_00232c24(plVar16);
    lVar12 = FUN_002ba788(*(undefined8 *)puVar6);
    uVar10 = FUN_002b43ec(lVar12 + 8);
    FUN_0029d210(auStack_40,lVar11,uVar8,uVar10);
    if (*(int *)(param_1 + 0x12a8) != 1) {
      FUN_00220f24(param_1 + 0x12a8);
      FUN_00220f78(param_1 + 0x12a8);
      uVar3 = *(ushort *)(param_1 + 0xd0);
      *(undefined4 *)(param_1 + 0x12d8) = 0;
      if (uVar3 != 0) {
        uVar13 = uVar3 & 3;
        if (uVar3 < 4) {
          uVar14 = 0;
          uVar15 = 0;
        }
        else {
          uVar14 = 0;
          uVar15 = 0;
          do {
            uVar4 = uVar14 & 0x1f;
            uVar5 = uVar14 + 2;
            uVar1 = uVar14 + 1;
            uVar2 = uVar14 + 3;
            uVar14 = uVar14 + 4;
            uVar15 = uVar15 | 1 << (ulong)uVar4 |
                     1 << (ulong)(uVar1 & 0x1f) | 1 << (ulong)(uVar5 & 0x1f) |
                     1 << (ulong)(uVar2 & 0x1f);
          } while (uVar14 != (uVar3 & 0xfffc));
        }
        if ((uVar3 & 3) != 0) {
          do {
            uVar5 = uVar14 & 0x1f;
            uVar14 = uVar14 + 1;
            uVar13 = uVar13 - 1;
            uVar15 = uVar15 | 1 << (ulong)uVar5;
          } while (uVar13 != 0);
        }
        *(uint *)(param_1 + 0x12d8) = uVar15;
      }
    }
  }
  return 1;
}

