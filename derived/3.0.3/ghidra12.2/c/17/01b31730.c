
void FUN_01b31730(long *param_1,long *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  short sVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  short sVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ushort *puVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  ulong uVar27;
  uint uVar28;
  long lVar29;
  undefined8 local_88;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  char local_64 [4];
  
  if (*(long *)*param_1 == 0) {
    return;
  }
  lVar29 = *param_2;
  if ((*(long **)(lVar29 + 0x28) == (long *)0x0) ||
     (puVar13 = (undefined8 *)**(long **)(lVar29 + 0x28), puVar13 == (undefined8 *)0x0)) {
    uVar14 = 0;
    lVar19 = lVar29;
  }
  else {
    uVar14 = (**(code **)*puVar13)();
    uVar14 = uVar14 & 0xffffffff;
    lVar19 = *param_2;
  }
  lVar26 = lVar19 + 0x194b0;
  if (*(long *)(lVar19 + 0x194b8) == 0) {
    lVar26 = *(long *)(DAT_05574040 + 0x20);
    lVar19 = *(long *)(lVar26 + 0x28);
    if (lVar19 != 0) goto LAB_01b317cc;
LAB_01b317e8:
    uVar27 = 0;
  }
  else {
    lVar19 = *(long *)(lVar19 + 0x194d8);
    if (lVar19 == 0) goto LAB_01b317e8;
LAB_01b317cc:
    if (*(undefined8 **)(lVar19 + 0x10) == (undefined8 *)0x0) goto LAB_01b317e8;
    uVar27 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
    uVar27 = uVar27 & 0xffffffff;
  }
  lVar19 = *(long *)(lVar29 + 0x10) + *(long *)(lVar29 + 8);
  pbVar1 = (byte *)(lVar19 + 0x1341c);
  bVar5 = *pbVar1;
  if (0xb < (bVar5 - 1 & 0xff)) goto LAB_01b31d54;
  pbVar2 = (byte *)(lVar19 + 0x1341d);
  bVar6 = *pbVar2;
  uVar24 = (uint)bVar6;
  if ((byte)(&DAT_0417b531)[bVar5 - 1] <= (byte)(bVar6 - 1)) goto LAB_01b31d54;
  lVar19 = *param_1;
  uVar12 = (uint)bVar5;
  uVar7 = *(ushort *)(lVar19 + 0x10);
  uVar8 = (short)*(char *)(lVar19 + 0x13) | (ushort)*(byte *)(lVar19 + 0x12) << 8;
  uVar25 = (uint)uVar7 - (uint)(uVar8 < CONCAT11(bVar5,bVar6));
  uVar18 = (uint)bVar5;
  if (CONCAT11(bVar5,bVar6) == 0x21d) {
    uVar18 = (uint)uVar7;
    if ((uVar7 & 3) == 0) {
      if ((uVar18 * 0x170a4000 & 0xffff | uVar18 * 0x5c29 >> 2 & 0x3fff) < 0x290) {
        bVar10 = (uVar7 & 0xf) == 0;
      }
      else {
        bVar10 = true;
      }
    }
    else {
      bVar10 = false;
    }
    if (uVar8 != 0x21c) {
      bVar10 = true;
    }
    if (!bVar10) {
      uVar25 = uVar18;
    }
    if ((uVar25 & 3) == 0) {
      if ((uVar25 & 0xf) != 0 &&
          (uVar25 * 0x170a4000 & 0xffff | uVar25 * 0x5c29 >> 2 & 0x3fff) < 0x290) {
        uVar24 = 0x1c;
        uVar12 = 2;
      }
      uVar18 = uVar12;
    }
    else {
      uVar24 = 0x1c;
      uVar18 = 2;
    }
  }
  lVar19 = *(long *)(lVar26 + 0x28);
  if (lVar19 == 0) {
    lVar20 = *(long *)(lVar26 + 0x10) + *(long *)(lVar26 + 8);
    puVar23 = (ushort *)(lVar20 + 0x13694);
    lVar19 = lVar20;
  }
  else {
    plVar15 = *(long **)(lVar19 + 0x20);
    if (plVar15 == (long *)0x0) {
      lVar21 = *(long *)(lVar26 + 8);
      lVar22 = *(long *)(lVar26 + 0x10);
      lVar20 = lVar22 + lVar21;
      puVar23 = (ushort *)(lVar20 + 0x13694);
      plVar15 = *(long **)(lVar19 + 0x20);
      lVar19 = lVar20;
      if (plVar15 == (long *)0x0) goto LAB_01b319e8;
LAB_01b31980:
      local_70 = 0x3ce60;
      local_80 = lVar21;
      lStack_78 = lVar22;
      (**(code **)(*plVar15 + 0x20))(plVar15,&local_80);
      lVar20 = *(long *)(lVar26 + 0x10) + *(long *)(lVar26 + 8);
    }
    else {
      local_80 = *(long *)(lVar26 + 8);
      lStack_78 = *(long *)(lVar26 + 0x10);
      local_70 = 0x3ce60;
      (**(code **)(*plVar15 + 0x20))(plVar15,&local_80);
      lVar21 = *(long *)(lVar26 + 8);
      lVar22 = *(long *)(lVar26 + 0x10);
      lVar20 = lVar22 + lVar21;
      puVar23 = (ushort *)(lVar20 + 0x13694);
      if ((*(long *)(lVar26 + 0x28) != 0) &&
         (plVar15 = *(long **)(*(long *)(lVar26 + 0x28) + 0x20), lVar19 = lVar20,
         plVar15 != (long *)0x0)) goto LAB_01b31980;
LAB_01b319e8:
      lVar19 = lVar20;
    }
  }
  pbVar3 = (byte *)(lVar19 + 0x13696);
  uVar16 = nn::time::IsValidDate((uint)*puVar23,(uint)*pbVar3,(uint)*(byte *)(lVar19 + 0x13697));
  sVar4 = (short)uVar25;
  if ((uVar16 & 1) == 0) {
    uVar16 = nn::time::IsValidDate
                       ((uint)*(ushort *)(lVar20 + 0x13690),(uint)*(byte *)(lVar20 + 0x13692),
                        (uint)*(byte *)(lVar20 + 0x13693));
    if ((uVar16 & 1) == 0) goto LAB_01b31d54;
    bVar5 = *pbVar1;
    uVar12 = (uint)bVar5;
    if ((0xb < bVar5 - 1) ||
       (uVar28 = (uint)*pbVar2, (byte)(&DAT_0417b531)[bVar5 - 1] <= (byte)(*pbVar2 - 1))) {
      uVar12 = 1;
      uVar28 = 1;
    }
    uVar16 = FUN_0272eca4((ushort *)(lVar20 + 0x13690),1);
    iVar11 = (int)uVar16;
    uVar28 = uVar28 | uVar12 << 8;
    uVar12 = iVar11 >> 0x18 & 0xffffU | (uint)(uVar16 >> 8) & 0xff00;
    iVar9 = iVar11 - (uint)(uVar12 < uVar28);
    sVar17 = (short)iVar9;
    if (uVar28 == 0x21d) {
      if ((uVar16 & 3) == 0) {
        if ((iVar11 * 0x170a4000 & 0xffffU | (uint)(iVar11 * 0x5c29) >> 2 & 0x3fff) < 0x290) {
          bVar10 = (uVar16 & 0xf) == 0;
        }
        else {
          bVar10 = true;
        }
      }
      else {
        bVar10 = false;
      }
      if (uVar12 != 0x21c) {
        bVar10 = true;
      }
      if (!bVar10) {
        iVar9 = iVar11;
      }
      sVar17 = (short)iVar9;
    }
  }
  else {
    bVar5 = *pbVar1;
    uVar12 = (uint)bVar5;
    if ((0xb < bVar5 - 1) ||
       (uVar28 = (uint)*pbVar2, (byte)(&DAT_0417b531)[bVar5 - 1] <= (byte)(*pbVar2 - 1))) {
      uVar12 = 1;
      uVar28 = 1;
    }
    uVar16 = FUN_0272eca4(puVar23,1);
    iVar11 = (int)uVar16;
    uVar28 = uVar28 | uVar12 << 8;
    uVar12 = iVar11 >> 0x18 & 0xffffU | (uint)(uVar16 >> 8) & 0xff00;
    iVar9 = iVar11 - (uint)(uVar12 < uVar28);
    sVar17 = (short)iVar9;
    if (uVar28 == 0x21d) {
      if ((uVar16 & 3) == 0) {
        if ((iVar11 * 0x170a4000 & 0xffffU | (uint)(iVar11 * 0x5c29) >> 2 & 0x3fff) < 0x290) {
          bVar10 = (uVar16 & 0xf) == 0;
        }
        else {
          bVar10 = true;
        }
      }
      else {
        bVar10 = false;
      }
      if (uVar12 != 0x21c) {
        bVar10 = true;
      }
      if (!bVar10) {
        iVar9 = iVar11;
      }
      sVar17 = (short)iVar9;
    }
    if ((int)sVar4 < sVar17 + -1) {
      lVar20 = *param_1;
      uVar7 = *(ushort *)(lVar20 + 0x10);
      bVar5 = *(byte *)(lVar20 + 0x12);
      bVar6 = *(byte *)(lVar20 + 0x13);
      uVar16 = nn::time::IsValidDate((uint)uVar7,(uint)bVar5,(uint)bVar6);
      if ((uVar16 & 1) != 0) {
        *puVar23 = uVar7;
        *pbVar3 = bVar5;
        *(byte *)(lVar19 + 0x13697) = bVar6;
      }
      goto LAB_01b31d54;
    }
  }
  if ((*(char *)((long)param_2 + 0x1f6) == '\0') && (sVar17 < sVar4)) {
    local_88 = 0x1bea;
    FUN_0277d4ac(&local_88);
    lVar20 = param_1[0x1fe];
    if ((*(long **)(lVar20 + 0x28) == (long *)0x0) ||
       (puVar13 = (undefined8 *)**(long **)(lVar20 + 0x28), puVar13 == (undefined8 *)0x0)) {
      uVar12 = 1;
    }
    else {
      uVar12 = (**(code **)*puVar13)();
      uVar12 = uVar12 ^ 1;
    }
    uVar28 = *(short *)(*param_1 + 0x10) * 0x6667;
    local_64[0] = (char)*(undefined4 *)((long)param_2 + 0x24) +
                  *(char *)(*(long *)(lVar20 + 0x10) + *(long *)(lVar20 + 8) + 1) +
                  (char)*(short *)(*param_1 + 0x10) +
                  ((char)(uVar28 >> 0x12) - (char)((int)uVar28 >> 0x1f)) * -10;
    local_80 = local_88;
    FUN_01af193c(&local_80,local_64,PTR_LAB_04bc0418);
    if ((((uVar12 & 1) == 0) && (*(long *)(lVar20 + 0x28) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar20 + 0x28) + 8), puVar13 != (undefined8 *)0x0)) {
      (**(code **)*puVar13)();
    }
    lVar20 = param_2[8];
    local_88._0_4_ = CONCAT13((char)uVar24,CONCAT12((char)uVar18,sVar4));
    nn::time::IsValidDate(uVar25 & 0xffff,uVar18,uVar24);
    FUN_01b333b0((int)lVar20,0x34,&local_88,&local_80,1);
    lVar20 = *param_1;
    uVar7 = *(ushort *)(lVar20 + 0x10);
    bVar5 = *(byte *)(lVar20 + 0x12);
    bVar6 = *(byte *)(lVar20 + 0x13);
    uVar16 = nn::time::IsValidDate((uint)uVar7,(uint)bVar5,(uint)bVar6);
    if ((uVar16 & 1) != 0) {
      *puVar23 = uVar7;
      *pbVar3 = bVar5;
      *(byte *)(lVar19 + 0x13697) = bVar6;
    }
    *(undefined1 *)((long)param_2 + 0x1f6) = 1;
  }
LAB_01b31d54:
  if ((((uVar27 & 1) != 0) && (*(long *)(lVar26 + 0x28) != 0)) &&
     (puVar13 = *(undefined8 **)(*(long *)(lVar26 + 0x28) + 0x18), puVar13 != (undefined8 *)0x0)) {
    (**(code **)*puVar13)();
  }
  if ((((uVar14 & 1) != 0) && (*(long *)(lVar29 + 0x28) != 0)) &&
     (puVar13 = *(undefined8 **)(*(long *)(lVar29 + 0x28) + 8), puVar13 != (undefined8 *)0x0)) {
    (**(code **)*puVar13)();
  }
  return;
}

