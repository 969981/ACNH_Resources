
undefined8 FUN_0263e624(undefined2 *param_1,uint param_2,byte *param_3,uint *param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  uint *puVar11;
  long lVar12;
  uint *puVar13;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  *param_1 = (short)param_2;
  puVar4 = PTR_DAT_04bb46f0;
  FUN_0262bd70(&local_78,*(undefined8 *)PTR_DAT_04bb46f0);
  uVar9 = param_2 & 0xffff;
  *(undefined4 *)(param_1 + 2) = (undefined4)local_78;
  *(undefined4 *)(param_1 + 4) = local_78._4_4_;
  lVar10 = *(long *)puVar4;
  uVar6 = uVar9 - *(ushort *)(lVar10 + 0xea6e0);
  if (uVar6 < *(uint *)(lVar10 + 0xea6c0)) {
    puVar11 = *(uint **)(*(long *)(lVar10 + 0xea6c8) + (long)(int)uVar6 * 8);
    uVar6 = 0;
    if (puVar11 != (uint *)0x0) {
      uVar6 = *puVar11;
      if (uVar6 != 0 && puVar11 != (uint *)(ulong)uVar6) {
        puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar6);
        if (((*puVar13 != 0) && (uVar6 = puVar13[1], uVar6 != 0)) &&
           ((ulong)(ushort)puVar13[2] != 0)) {
          lVar10 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar13 + lVar10 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar10 != 0) {
            uVar1 = 0;
            if ((ulong)uVar6 != 0) {
              uVar1 = (uint)((ulong)((long)puVar11 - lVar10) / (ulong)uVar6);
            }
            if (*puVar13 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05557780) &&
               (uVar2 = *(ushort *)(DAT_05557788 + (long)(int)uVar1 * 2), uVar6 = (uint)uVar2,
               uVar2 < 0xb)) goto LAB_0263e730;
          }
        }
      }
      goto LAB_0263e72c;
    }
  }
  else {
LAB_0263e72c:
    uVar6 = 0;
  }
LAB_0263e730:
  *(uint *)(param_1 + 6) = uVar6;
  bVar5 = *param_3;
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
  local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar5);
  lVar10 = FUN_025830c0(DAT_055021a0,&local_78,1);
  if (lVar10 == 0) {
    bVar5 = 0;
  }
  else {
    lVar12 = lVar10 + 0x194b0;
    if (*(long *)(lVar10 + 0x194b8) == 0) {
      lVar12 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((*(long **)(lVar12 + 0x86b0) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar12 + 0x86b0), puVar7 == (undefined8 *)0x0)) {
      uVar6 = 1;
    }
    else {
      uVar6 = (**(code **)*puVar7)();
      uVar6 = uVar6 ^ 1;
    }
    if ((param_2 & 0xffff) < 0x800) {
      bVar5 = *(byte *)(*(long *)(lVar12 + 0x8698) + *(long *)(lVar12 + 0x8690) +
                       (ulong)(uVar9 >> 3)) >> (ulong)(param_2 & 7) & 1;
    }
    else {
      bVar5 = 0;
    }
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar12 + 0x86b0) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar12 + 0x86b0) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  uVar8 = *(undefined8 *)puVar4;
  *(byte *)(param_1 + 8) = bVar5;
  bVar5 = FUN_02624e04(uVar8,param_2);
  local_78 = PTR_DAT_04bc0510;
  *(byte *)((long)param_1 + 0x11) = bVar5 & 1;
  puVar3 = PTR_DAT_04bb43c0;
  local_68 = 0;
  local_78 = local_78 + 0x10;
  local_70 = *(undefined4 *)(param_1 + 2);
  uStack_6c = *(undefined4 *)(param_1 + 4);
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar3 == 0) {
LAB_0263e95c:
    uVar6 = 0xbc;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_0263e95c;
    lVar10 = *(long *)PTR_DAT_04bc0428;
    uVar6 = FUN_0277d6c4(param_1 + 2);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar6) ||
       (puVar11 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8),
       puVar11 == (uint *)0x0)) goto LAB_0263e95c;
    uVar1 = *puVar11;
    uVar6 = 0;
    if ((uVar1 != 0) && (puVar11 != (uint *)(ulong)uVar1)) {
      puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar1);
      uVar6 = 0;
      if (*puVar13 != 0) {
        uVar6 = puVar13[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
          lVar10 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar13 + lVar10 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar10 != 0) {
            uVar1 = 0;
            if ((ulong)uVar6 != 0) {
              uVar1 = (uint)((ulong)((long)puVar11 - lVar10) / (ulong)uVar6);
            }
            if (*puVar13 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar6 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
            goto LAB_0263e960;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_0263e960:
  *(byte *)(param_1 + 9) = uVar6 < 0x15 & (byte)(0x1ff700 >> (ulong)(uVar6 & 0x1f));
  if ((param_2 & 0xffff) < 0x800) {
    lVar12 = *(long *)puVar4;
    lVar10 = lVar12 + (ulong)(uVar9 >> 3);
    uVar9 = 1 << (ulong)(param_2 & 7);
    if ((uVar9 & *(byte *)(lVar10 + 0xe98e0)) == 0) {
      if ((uVar9 & *(byte *)(lVar10 + 0xe99e0)) == 0) goto LAB_0263e9fc;
      uVar6 = FUN_026339a0(lVar12,param_2);
      uVar9 = param_4[1];
    }
    else {
      uVar6 = FUN_026339a0(lVar12,param_2);
      uVar9 = *param_4;
    }
    *(bool *)((long)param_1 + 0x13) = uVar6 <= uVar9;
  }
  else {
LAB_0263e9fc:
    *(undefined1 *)((long)param_1 + 0x13) = 0;
  }
  return 1;
}

