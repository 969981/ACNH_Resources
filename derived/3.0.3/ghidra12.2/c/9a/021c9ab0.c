
void FUN_021c9ab0(long param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined *local_88;
  char *local_80;
  undefined4 local_78;
  char local_74 [7];
  undefined1 local_6d;
  uint local_64;
  
  puVar3 = PTR_DAT_04bb46b0;
  lVar14 = param_1 + 0x56020;
  lVar15 = 0;
  puVar1 = PTR_DAT_04bb3768 + 0x10;
  do {
    lVar10 = *(long *)puVar3;
    local_64 = (uint)lVar15;
    if (lVar10 == 0) {
LAB_021c9b80:
      lVar10 = 0;
    }
    else {
      puVar11 = *(undefined8 **)(lVar10 + 0x10);
      if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
        lVar7 = (**(code **)(*(long *)*puVar11 + 0x38))();
        lVar10 = 0;
        if (lVar7 != 0) {
          lVar10 = lVar7 + 0x70;
        }
      }
      else {
        if (puVar11 == (undefined8 *)0x0) goto LAB_021c9b80;
        lVar10 = 0;
        if ((long *)puVar11[0x26] != (long *)0x0) {
          lVar10 = (**(code **)(*(long *)puVar11[0x26] + 0x38))();
        }
      }
    }
    lVar7 = lVar10 + 0x218210 + (ulong)local_64 * 0x38;
    if (7 < local_64) {
      lVar7 = lVar10 + 0x218210;
    }
    if ((*(long **)(lVar7 + 0x28) == (long *)0x0) ||
       (puVar11 = (undefined8 *)**(long **)(lVar7 + 0x28), puVar11 == (undefined8 *)0x0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)*puVar11)();
      uVar8 = uVar8 & 0xffffffff;
    }
    pbVar2 = (byte *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8));
    uVar12 = (ulong)*pbVar2;
    if ((uVar12 < 0x23) && (bVar9 = pbVar2[1], bVar9 <= (byte)PTR_DAT_04bc27f0[uVar12])) {
      bVar9 = (byte)(*(uint *)(PTR_DAT_04bc2a20 + uVar12 * 4) >> (ulong)(bVar9 & 0x1f)) & 1;
    }
    else {
      bVar9 = 0;
    }
    *(byte *)(lVar14 + -0x10) = bVar9;
    FUN_02093358(lVar14,*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8),&local_64);
    if (*(char *)(lVar14 + -0x10) != '\0') {
      local_6d = 0;
      local_78 = 8;
      local_74[0] = '\0';
      pbVar2 = (byte *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8));
      local_88 = puVar1;
      local_80 = local_74;
      FUN_038d1270(&local_88,"-----");
      uVar12 = (ulong)*pbVar2;
      if (uVar12 < 0x23) {
        FUN_038d1270(&local_88,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar12 * 8 + 0xb0),
                     pbVar2[1]);
      }
    }
    if ((((uVar8 & 1) != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar11 != (undefined8 *)0x0)) {
      (**(code **)*puVar11)();
    }
    puVar4 = PTR_DAT_04bb9cf0;
    lVar15 = lVar15 + 1;
    lVar14 = lVar14 + 0x2d8;
    if (lVar15 == 8) {
      lVar14 = -9;
      puVar13 = (undefined1 *)(param_1 + 0x576d0);
      puVar1 = PTR_DAT_04bb3768 + 0x10;
      do {
        local_64 = (int)lVar14 + 0x11;
        local_78 = 8;
        local_6d = 0;
        local_74[0] = '\0';
        local_88 = puVar1;
        local_80 = local_74;
        uVar8 = FUN_021d62e0(&local_88);
        if ((((uVar8 & 1) == 0) || (*local_80 == '\0')) ||
           (iVar6 = FUN_021d7e50(&local_88), iVar6 < 8)) {
          *puVar13 = 0;
          FUN_0219f688(puVar13);
        }
        else {
          local_8c = *(undefined2 *)puVar4;
          local_8a = puVar4[2];
          FUN_020fd3a0(&local_8c,&local_88);
          *puVar13 = *local_80 != '\0';
          FUN_02093358(puVar13 + 0x10,&local_8c,&local_64);
        }
        bVar5 = lVar14 != -1;
        lVar14 = lVar14 + 1;
        puVar13 = puVar13 + 0x2d8;
      } while (bVar5);
      return;
    }
  } while( true );
}

