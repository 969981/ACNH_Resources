
void FUN_0357c7d4(undefined4 *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  uint *puVar11;
  byte bVar12;
  ushort uVar13;
  long lVar14;
  byte *pbVar15;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint *local_48;
  int local_24;
  
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)param_2;
  *(undefined1 *)((long)param_1 + 0xe) = *(undefined1 *)((long)param_2 + 2);
  *(undefined1 *)((long)param_1 + 0xf) = *(undefined1 *)((long)param_2 + 3);
  local_48 = (uint *)0x0;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  param_1[4] = param_2[1];
  puVar3 = PTR_DAT_04bb43c0;
  local_50 = *param_2;
  uStack_4c = param_2[1];
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar3 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar14 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar14 + 0x1d8)) &&
         (puVar11 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar11 != (uint *)0x0)) {
        local_48 = puVar11;
      }
    }
  }
  if (param_2[3] == 0) {
    uVar8 = FUN_01ae6580(&local_58);
    if ((uVar8 & 1) == 0) goto LAB_0357c900;
    uVar8 = FUN_01affd70(&local_58);
    if ((uVar8 & 1) == 0) goto LAB_0357c8f0;
LAB_0357c910:
    *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | 1;
    uVar6 = FUN_01ad7260(&local_58);
    param_1[1] = uVar6;
  }
  else {
    if (param_2[3] == 1) {
LAB_0357c900:
      iVar5 = FUN_01ad7260(&local_58);
      if (iVar5 != 0) goto LAB_0357c910;
    }
LAB_0357c8f0:
    *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfe;
  }
  pbVar15 = (byte *)(param_1 + 7);
  iVar5 = FUN_01afcfa0(&local_58);
  if (iVar5 == 0) {
    *pbVar15 = *pbVar15 & 0xfd;
  }
  else {
    *(byte *)(param_1 + 7) = *pbVar15 | 2;
    uVar6 = FUN_01afcfa0(&local_58);
    param_1[2] = uVar6;
  }
  local_24 = 2;
  pbVar1 = (byte *)(param_2 + 2);
  iVar7 = FUN_01afcfa0(&local_58);
  iVar5 = local_24;
  if ((iVar7 == 0) || (iVar7 = FUN_01b006b0(&local_58), iVar5 != iVar7)) {
    bVar12 = 0;
  }
  else {
    uVar8 = FUN_03423670(pbVar1);
    bVar12 = 4;
    if ((uVar8 & 1) == 0) {
      bVar12 = 0;
    }
  }
  *pbVar15 = *pbVar15 & 0xfb | bVar12;
  uVar8 = FUN_03423cb0(&local_58,pbVar1);
  bVar12 = 8;
  if ((uVar8 & 1) == 0) {
    bVar12 = 0;
  }
  *pbVar15 = *pbVar15 & 0xf7 | bVar12;
  local_24 = 0x61;
  if (local_48 == (uint *)0x0) {
    uVar13 = 0xbc;
  }
  else {
    uVar4 = *local_48;
    uVar13 = 0;
    if ((uVar4 != 0) && (local_48 != (uint *)(ulong)uVar4)) {
      puVar11 = (uint *)((long)local_48 - (long)(ulong)uVar4);
      uVar13 = 0;
      if (*puVar11 != 0) {
        uVar4 = puVar11[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar11 + lVar14 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar14 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)local_48 - lVar14) / (ulong)uVar4);
            }
            if (*puVar11 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar13 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
               uVar13 < 0xbd)) goto LAB_0357ca84;
          }
        }
        uVar13 = 0;
      }
    }
  }
LAB_0357ca84:
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xef | (uVar13 == 0x61) << 4;
  uVar8 = FUN_01b00bc8(&local_58);
  bVar12 = 0x20;
  if ((uVar8 & 1) == 0) {
    bVar12 = 0;
  }
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xdf | bVar12;
  uVar8 = FUN_03423f00(param_2);
  bVar12 = 0x40;
  if ((uVar8 & 1) == 0) {
    bVar12 = 0;
  }
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xbf | bVar12;
  uVar6 = FUN_01aff960(&local_58);
  *param_1 = uVar6;
  if ((*(byte *)(param_1 + 7) >> 4 & 1) != 0) {
    bVar12 = *pbVar1;
    if (7 < bVar12) {
      bVar12 = 0xff;
    }
    local_24 = CONCAT31(local_24._1_3_,bVar12);
    lVar14 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_24,1);
    if (lVar14 != 0) {
      if ((*(long **)(lVar14 + 0x108) == (long *)0x0) ||
         (puVar9 = (undefined8 *)**(long **)(lVar14 + 0x108), puVar9 == (undefined8 *)0x0)) {
        uVar4 = 1;
      }
      else {
        uVar4 = (**(code **)*puVar9)();
        uVar4 = uVar4 ^ 1;
      }
      puVar10 = (undefined2 *)FUN_028160a8(*(long *)(lVar14 + 0xf0) + *(long *)(lVar14 + 0xe8));
      *(undefined2 *)(param_1 + 5) = *puVar10;
      *(undefined1 *)((long)param_1 + 0x16) = *(undefined1 *)(puVar10 + 1);
      *(undefined1 *)((long)param_1 + 0x17) = *(undefined1 *)((long)puVar10 + 3);
      param_1[6] = *(undefined4 *)(puVar10 + 2);
      if ((((uVar4 & 1) == 0) && (*(long *)(lVar14 + 0x108) != 0)) &&
         (puVar9 = *(undefined8 **)(*(long *)(lVar14 + 0x108) + 8), puVar9 != (undefined8 *)0x0)) {
        (**(code **)*puVar9)();
      }
    }
  }
  return;
}

