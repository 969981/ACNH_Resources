
void FUN_016b0734(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  ushort uVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined **local_70;
  undefined8 *puStack_68;
  undefined4 local_34;
  
  *(undefined4 *)(param_1 + 0x11) = 0;
  *param_1 = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_020fc590(param_1,&LAB_016b2910);
  puVar5 = PTR_DAT_04bb46b0;
  lVar9 = *(long *)PTR_DAT_04bb46b0;
  if (lVar9 == 0) goto LAB_016b12d8;
  puVar10 = *(undefined8 **)(lVar9 + 0x10);
  if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
    lVar9 = (**(code **)(*(long *)*puVar10 + 0x38))();
    if (lVar9 != 0) {
      lVar9 = lVar9 + 0x70;
LAB_016b07e4:
      if ((*(long **)(lVar9 + 0xd0) == (long *)0x0) ||
         (puVar10 = (undefined8 *)**(long **)(lVar9 + 0xd0), puVar10 == (undefined8 *)0x0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)*puVar10)();
        uVar7 = uVar7 & 0xffffffff;
      }
      pbVar8 = (byte *)(*(long *)(lVar9 + 0xb8) + *(long *)(lVar9 + 0xb0));
      uVar11 = (ulong)*pbVar8;
      if (((uVar11 < 0x23) && (pbVar8[1] <= (byte)PTR_DAT_04bc27f0[uVar11])) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar11 * 4) >> (ulong)(pbVar8[1] & 0x1f) & 1) != 0)) {
        FUN_020fcb1c(param_1);
        pbVar8 = (byte *)(*(long *)(lVar9 + 0xb8) + *(long *)(lVar9 + 0xb0));
      }
      uVar11 = (ulong)pbVar8[0x13230];
      if (((uVar11 < 0x23) && (pbVar8[0x13231] <= (byte)PTR_DAT_04bc27f0[uVar11])) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar11 * 4) >> (ulong)(pbVar8[0x13231] & 0x1f) & 1) != 0)) {
        FUN_020fcb1c(param_1,pbVar8 + 0x13230);
        pbVar8 = (byte *)(*(long *)(lVar9 + 0xb8) + *(long *)(lVar9 + 0xb0));
      }
      uVar11 = (ulong)pbVar8[0x26460];
      if (((uVar11 < 0x23) && (pbVar8[0x26461] <= (byte)PTR_DAT_04bc27f0[uVar11])) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar11 * 4) >> (ulong)(pbVar8[0x26461] & 0x1f) & 1) != 0)) {
        FUN_020fcb1c(param_1,pbVar8 + 0x26460);
        pbVar8 = (byte *)(*(long *)(lVar9 + 0xb8) + *(long *)(lVar9 + 0xb0));
      }
      uVar11 = (ulong)pbVar8[0x39690];
      if (((uVar11 < 0x23) && (pbVar8[0x39691] <= (byte)PTR_DAT_04bc27f0[uVar11])) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar11 * 4) >> (ulong)(pbVar8[0x39691] & 0x1f) & 1) != 0)) {
        FUN_020fcb1c(param_1,pbVar8 + 0x39690);
        pbVar8 = (byte *)(*(long *)(lVar9 + 0xb8) + *(long *)(lVar9 + 0xb0));
      }
      uVar11 = (ulong)pbVar8[0x4c8c0];
      if (((uVar11 < 0x23) && (pbVar8[0x4c8c1] <= (byte)PTR_DAT_04bc27f0[uVar11])) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar11 * 4) >> (ulong)(pbVar8[0x4c8c1] & 0x1f) & 1) != 0)) {
        FUN_020fcb1c(param_1,pbVar8 + 0x4c8c0);
        pbVar8 = (byte *)(*(long *)(lVar9 + 0xb8) + *(long *)(lVar9 + 0xb0));
      }
      uVar11 = (ulong)pbVar8[0x5faf0];
      if (((uVar11 < 0x23) && (pbVar8[0x5faf1] <= (byte)PTR_DAT_04bc27f0[uVar11])) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar11 * 4) >> (ulong)(pbVar8[0x5faf1] & 0x1f) & 1) != 0)) {
        FUN_020fcb1c(param_1,pbVar8 + 0x5faf0);
        pbVar8 = (byte *)(*(long *)(lVar9 + 0xb8) + *(long *)(lVar9 + 0xb0));
      }
      uVar11 = (ulong)pbVar8[0x72d20];
      if (((uVar11 < 0x23) && (pbVar8[0x72d21] <= (byte)PTR_DAT_04bc27f0[uVar11])) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar11 * 4) >> (ulong)(pbVar8[0x72d21] & 0x1f) & 1) != 0)) {
        FUN_020fcb1c(param_1,pbVar8 + 0x72d20);
        pbVar8 = (byte *)(*(long *)(lVar9 + 0xb8) + *(long *)(lVar9 + 0xb0));
      }
      uVar11 = (ulong)pbVar8[0x85f50];
      if (((uVar11 < 0x23) && (pbVar8[0x85f51] <= (byte)PTR_DAT_04bc27f0[uVar11])) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar11 * 4) >> (ulong)(pbVar8[0x85f51] & 0x1f) & 1) != 0)) {
        FUN_020fcb1c(param_1,pbVar8 + 0x85f50);
        pbVar8 = (byte *)(*(long *)(lVar9 + 0xb8) + *(long *)(lVar9 + 0xb0));
      }
      uVar11 = (ulong)pbVar8[0x99180];
      if (((uVar11 < 0x23) && (pbVar8[0x99181] <= (byte)PTR_DAT_04bc27f0[uVar11])) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar11 * 4) >> (ulong)(pbVar8[0x99181] & 0x1f) & 1) != 0)) {
        FUN_020fcb1c(param_1,pbVar8 + 0x99180);
        pbVar8 = (byte *)(*(long *)(lVar9 + 0xb8) + *(long *)(lVar9 + 0xb0));
      }
      uVar11 = (ulong)pbVar8[0xac3b0];
      if (((uVar11 < 0x23) && (pbVar8[0xac3b1] <= (byte)PTR_DAT_04bc27f0[uVar11])) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar11 * 4) >> (ulong)(pbVar8[0xac3b1] & 0x1f) & 1) != 0)) {
        FUN_020fcb1c(param_1,pbVar8 + 0xac3b0);
        pbVar8 = (byte *)(*(long *)(lVar9 + 0xb8) + *(long *)(lVar9 + 0xb0));
      }
      uVar11 = (ulong)pbVar8[0xbf670];
      if (((uVar11 < 0x23) && (pbVar8[0xbf671] <= (byte)PTR_DAT_04bc27f0[uVar11])) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar11 * 4) >> (ulong)(pbVar8[0xbf671] & 0x1f) & 1) != 0)) {
        FUN_020fcb1c(param_1,pbVar8 + 0xbf670);
        pbVar8 = (byte *)(*(long *)(lVar9 + 0xb8) + *(long *)(lVar9 + 0xb0));
      }
      uVar11 = (ulong)pbVar8[0xd28a0];
      if (((uVar11 < 0x23) && (pbVar8[0xd28a1] <= (byte)PTR_DAT_04bc27f0[uVar11])) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar11 * 4) >> (ulong)(pbVar8[0xd28a1] & 0x1f) & 1) != 0)) {
        FUN_020fcb1c(param_1,pbVar8 + 0xd28a0);
        pbVar8 = (byte *)(*(long *)(lVar9 + 0xb8) + *(long *)(lVar9 + 0xb0));
      }
      uVar11 = (ulong)pbVar8[0xe5ad0];
      if (((uVar11 < 0x23) && (pbVar8[0xe5ad1] <= (byte)PTR_DAT_04bc27f0[uVar11])) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar11 * 4) >> (ulong)(pbVar8[0xe5ad1] & 0x1f) & 1) != 0)) {
        FUN_020fcb1c(param_1,pbVar8 + 0xe5ad0);
        pbVar8 = (byte *)(*(long *)(lVar9 + 0xb8) + *(long *)(lVar9 + 0xb0));
      }
      uVar11 = (ulong)pbVar8[0xf8d00];
      if (((uVar11 < 0x23) && (pbVar8[0xf8d01] <= (byte)PTR_DAT_04bc27f0[uVar11])) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar11 * 4) >> (ulong)(pbVar8[0xf8d01] & 0x1f) & 1) != 0)) {
        FUN_020fcb1c(param_1);
      }
      if ((((uVar7 & 1) != 0) && (*(long *)(lVar9 + 0xd0) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0xd0) + 8), puVar10 != (undefined8 *)0x0)) {
        (**(code **)*puVar10)();
      }
    }
  }
  else if (((puVar10 != (undefined8 *)0x0) && ((long *)puVar10[0x26] != (long *)0x0)) &&
          (lVar9 = (**(code **)(*(long *)puVar10[0x26] + 0x38))(), lVar9 != 0)) goto LAB_016b07e4;
  lVar9 = *(long *)puVar5;
  if (lVar9 == 0) goto LAB_016b12d8;
  puVar10 = *(undefined8 **)(lVar9 + 0x10);
  if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
    lVar9 = (**(code **)(*(long *)*puVar10 + 0x38))();
    if (lVar9 != 0) {
      lVar9 = lVar9 + 0x70;
LAB_016b0d00:
      if ((*(long **)(lVar9 + 0x1c2980) == (long *)0x0) ||
         (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x1c2980), puVar10 == (undefined8 *)0x0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)*puVar10)();
        uVar7 = uVar7 & 0xffffffff;
      }
      lVar1 = *(long *)(lVar9 + 0x1c2960);
      lVar2 = *(long *)(lVar9 + 0x1c2968);
      uVar11 = FUN_027c5f10();
      if ((uVar11 & 1) == 0) {
        local_70 = (undefined **)CONCAT53(local_70._3_5_,0x80023);
        uVar4 = *(ushort *)(lVar2 + lVar1);
        if ((byte)(uVar4 >> 8) < 0x23) {
          FUN_020fd218(&local_70,uVar4 >> 8,uVar4 & 0xff);
        }
      }
      else {
        local_70 = (undefined **)CONCAT53(local_70._3_5_,*(undefined3 *)PTR_DAT_04bb9cf0);
      }
      if (((ushort)local_70 & 0xff) < 0x23) {
        if (((uint)((ushort)local_70 >> 8) <= (uint)(byte)PTR_DAT_04bc27f0[(ulong)local_70 & 0xff])
           && ((*(uint *)(PTR_DAT_04bc2a20 + ((ulong)local_70 & 0xff) * 4) >>
                (ulong)((ushort)local_70 >> 8 & 0x1f) & 1) != 0)) {
          FUN_020fcb1c(param_1,&local_70);
        }
      }
      if ((((uVar7 & 1) != 0) && (*(long *)(lVar9 + 0x1c2980) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x1c2980) + 8), puVar10 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar10)();
      }
    }
  }
  else if (((puVar10 != (undefined8 *)0x0) && ((long *)puVar10[0x26] != (long *)0x0)) &&
          (lVar9 = (**(code **)(*(long *)puVar10[0x26] + 0x38))(), lVar9 != 0)) goto LAB_016b0d00;
  lVar9 = *(long *)puVar5;
  if (lVar9 != 0) {
    puVar10 = *(undefined8 **)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
      lVar9 = (**(code **)(*(long *)*puVar10 + 0x38))();
      if (lVar9 == 0) goto LAB_016b12d8;
      lVar9 = lVar9 + 0x70;
    }
    else if (((puVar10 == (undefined8 *)0x0) || ((long *)puVar10[0x26] == (long *)0x0)) ||
            (lVar9 = (**(code **)(*(long *)puVar10[0x26] + 0x38))(), lVar9 == 0)) goto LAB_016b12d8;
    if ((*(long **)(lVar9 + 0x218238) == (long *)0x0) ||
       (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x218238), puVar10 == (undefined8 *)0x0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)*puVar10)();
      uVar7 = uVar7 & 0xffffffff;
    }
    pbVar8 = (byte *)(*(long *)(lVar9 + 0x218220) + *(long *)(lVar9 + 0x218218));
    uVar11 = (ulong)*pbVar8;
    if (((uVar11 < 0x23) && (bVar3 = pbVar8[1], bVar3 <= (byte)PTR_DAT_04bc27f0[uVar11])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar11 * 4) >> (ulong)(bVar3 & 0x1f) & 1) != 0)) {
      FUN_020fcb1c(param_1);
    }
    if ((((uVar7 & 1) != 0) && (*(long *)(lVar9 + 0x218238) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x218238) + 8), puVar10 != (undefined8 *)0x0))
    {
      (**(code **)*puVar10)();
    }
    if ((*(long **)(lVar9 + 0x218270) == (long *)0x0) ||
       (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x218270), puVar10 == (undefined8 *)0x0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)*puVar10)();
      uVar7 = uVar7 & 0xffffffff;
    }
    pbVar8 = (byte *)(*(long *)(&UNK_00218258 + lVar9) + *(long *)(lVar9 + 0x218250));
    uVar11 = (ulong)*pbVar8;
    if (((uVar11 < 0x23) && (bVar3 = pbVar8[1], bVar3 <= (byte)PTR_DAT_04bc27f0[uVar11])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar11 * 4) >> (ulong)(bVar3 & 0x1f) & 1) != 0)) {
      FUN_020fcb1c(param_1);
    }
    if ((((uVar7 & 1) != 0) && (*(long *)(lVar9 + 0x218270) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x218270) + 8), puVar10 != (undefined8 *)0x0))
    {
      (**(code **)*puVar10)();
    }
    if ((*(long **)(lVar9 + 0x2182a8) == (long *)0x0) ||
       (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x2182a8), puVar10 == (undefined8 *)0x0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)*puVar10)();
      uVar7 = uVar7 & 0xffffffff;
    }
    pbVar8 = (byte *)(*(long *)(lVar9 + 0x218290) + *(long *)(lVar9 + 0x218288));
    uVar11 = (ulong)*pbVar8;
    if (((uVar11 < 0x23) && (bVar3 = pbVar8[1], bVar3 <= (byte)PTR_DAT_04bc27f0[uVar11])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar11 * 4) >> (ulong)(bVar3 & 0x1f) & 1) != 0)) {
      FUN_020fcb1c(param_1);
    }
    if ((((uVar7 & 1) != 0) && (*(long *)(lVar9 + 0x2182a8) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x2182a8) + 8), puVar10 != (undefined8 *)0x0))
    {
      (**(code **)*puVar10)();
    }
    if ((*(long **)(lVar9 + 0x2182e0) == (long *)0x0) ||
       (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x2182e0), puVar10 == (undefined8 *)0x0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)*puVar10)();
      uVar7 = uVar7 & 0xffffffff;
    }
    pbVar8 = (byte *)(*(long *)(lVar9 + 0x2182c8) + *(long *)(FUN_002182c0 + lVar9));
    uVar11 = (ulong)*pbVar8;
    if (((uVar11 < 0x23) && (bVar3 = pbVar8[1], bVar3 <= (byte)PTR_DAT_04bc27f0[uVar11])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar11 * 4) >> (ulong)(bVar3 & 0x1f) & 1) != 0)) {
      FUN_020fcb1c(param_1);
    }
    if ((((uVar7 & 1) != 0) && (*(long *)(lVar9 + 0x2182e0) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x2182e0) + 8), puVar10 != (undefined8 *)0x0))
    {
      (**(code **)*puVar10)();
    }
    if ((*(long **)(lVar9 + 0x218318) == (long *)0x0) ||
       (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x218318), puVar10 == (undefined8 *)0x0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)*puVar10)();
      uVar7 = uVar7 & 0xffffffff;
    }
    pbVar8 = (byte *)(*(long *)(lVar9 + 0x218300) + *(long *)(lVar9 + 0x2182f8));
    uVar11 = (ulong)*pbVar8;
    if (((uVar11 < 0x23) && (bVar3 = pbVar8[1], bVar3 <= (byte)PTR_DAT_04bc27f0[uVar11])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar11 * 4) >> (ulong)(bVar3 & 0x1f) & 1) != 0)) {
      FUN_020fcb1c(param_1);
    }
    if ((((uVar7 & 1) != 0) && (*(long *)(lVar9 + 0x218318) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x218318) + 8), puVar10 != (undefined8 *)0x0))
    {
      (**(code **)*puVar10)();
    }
    if ((*(long **)(lVar9 + 0x218350) == (long *)0x0) ||
       (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x218350), puVar10 == (undefined8 *)0x0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)*puVar10)();
      uVar7 = uVar7 & 0xffffffff;
    }
    pbVar8 = (byte *)(*(long *)(lVar9 + 0x218338) + *(long *)(lVar9 + 0x218330));
    uVar11 = (ulong)*pbVar8;
    if (((uVar11 < 0x23) && (bVar3 = pbVar8[1], bVar3 <= (byte)PTR_DAT_04bc27f0[uVar11])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar11 * 4) >> (ulong)(bVar3 & 0x1f) & 1) != 0)) {
      FUN_020fcb1c(param_1);
    }
    if ((((uVar7 & 1) != 0) && (*(long *)(lVar9 + 0x218350) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x218350) + 8), puVar10 != (undefined8 *)0x0))
    {
      (**(code **)*puVar10)();
    }
    if ((*(long **)(lVar9 + 0x218388) == (long *)0x0) ||
       (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x218388), puVar10 == (undefined8 *)0x0)) {
      uVar6 = 1;
    }
    else {
      uVar6 = (**(code **)*puVar10)();
      uVar6 = uVar6 ^ 1;
    }
    pbVar8 = (byte *)(*(long *)(lVar9 + 0x218370) + *(long *)(lVar9 + 0x218368));
    uVar7 = (ulong)*pbVar8;
    if (((uVar7 < 0x23) && (bVar3 = pbVar8[1], bVar3 <= (byte)PTR_DAT_04bc27f0[uVar7])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar7 * 4) >> (ulong)(bVar3 & 0x1f) & 1) != 0)) {
      FUN_020fcb1c(param_1);
    }
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar9 + 0x218388) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x218388) + 8), puVar10 != (undefined8 *)0x0))
    {
      (**(code **)*puVar10)();
    }
    if ((*(long **)(lVar9 + 0x2183c0) == (long *)0x0) ||
       (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x2183c0), puVar10 == (undefined8 *)0x0)) {
      uVar6 = 1;
    }
    else {
      uVar6 = (**(code **)*puVar10)();
      uVar6 = uVar6 ^ 1;
    }
    pbVar8 = (byte *)(*(long *)(lVar9 + 0x2183a8) + *(long *)(lVar9 + 0x2183a0));
    uVar7 = (ulong)*pbVar8;
    if (((uVar7 < 0x23) && (bVar3 = pbVar8[1], bVar3 <= (byte)PTR_DAT_04bc27f0[uVar7])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar7 * 4) >> (ulong)(bVar3 & 0x1f) & 1) != 0)) {
      FUN_020fcb1c(param_1);
    }
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar9 + 0x2183c0) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x2183c0) + 8), puVar10 != (undefined8 *)0x0))
    {
      (**(code **)*puVar10)();
    }
  }
LAB_016b12d8:
  if ((param_2 & 1) != 0) {
    uVar7 = (ulong)DAT_05454055;
    if (((uVar7 < 0x23) && (DAT_05454056 <= (byte)PTR_DAT_04bc27f0[uVar7])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar7 * 4) >> (ulong)(DAT_05454056 & 0x1f) & 1) != 0)) {
      FUN_020fcb1c(param_1,&DAT_05454055);
    }
    local_70 = &PTR_LAB_049bb828;
    local_34 = 1;
    puStack_68 = param_1;
    FUN_03777940(&local_70,&local_34);
    local_34 = 0;
    local_70 = &PTR_LAB_049bb850;
    puStack_68 = param_1;
    FUN_03777940(&local_70,&local_34);
  }
  return;
}

