
void FUN_028a8398(long param_1,ulong param_2,undefined4 *param_3,uint param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint *puVar9;
  long lVar10;
  undefined *local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 local_75;
  undefined1 auStack_70 [16];
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  uint *local_50;
  uint local_44;
  
  puVar5 = PTR_DAT_04bb43c0;
  local_98 = 0;
  puVar2 = PTR_DAT_04bc0510 + 0x10;
  lVar10 = param_1 + (ulong)param_4 * 0x200;
  if (6 < param_4) {
    lVar10 = param_1;
  }
  plVar1 = (long *)(lVar10 + (param_2 & 0xffffffff) * 8);
  local_a0 = *plVar1;
  local_60 = (undefined *)*plVar1;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  local_a8 = puVar2;
  local_44 = param_4;
  uVar6 = FUN_0277d6c4(&local_a0);
  if (*(long *)puVar5 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      FUN_0277d6c4(&local_60);
    }
  }
  local_50 = (uint *)0x0;
  lVar10 = param_1 + (ulong)local_44 * 0x200;
  if (6 < local_44) {
    lVar10 = param_1;
  }
  puVar3 = (undefined2 *)(lVar10 + (param_2 & 0xffffffff) * 8);
  *puVar3 = *(undefined2 *)param_3;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)((long)param_3 + 2);
  *(undefined1 *)((long)puVar3 + 3) = *(undefined1 *)((long)param_3 + 3);
  *(undefined4 *)(puVar3 + 2) = param_3[1];
  lVar10 = *(long *)puVar5;
  local_58 = *param_3;
  uStack_54 = param_3[1];
  local_60 = puVar2;
  uVar6 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar5 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(param_3);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
         (puVar9 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8),
         puVar9 != (uint *)0x0)) {
        local_50 = puVar9;
      }
    }
  }
  FUN_01afb1a0(&local_60,auStack_70);
  local_75 = 0;
  local_a0 = (long)&local_98 + 4;
  local_98 = CONCAT35(local_98._5_3_,0x20);
  local_a8 = PTR_DAT_04bb2028 + 0x10;
  if (local_44 < 7) {
    puVar7 = (undefined8 *)(&PTR_s_Sunday_04a91ee0)[local_44];
  }
  else {
    puVar7 = &DAT_0407ebb1;
  }
  if (local_50 == (uint *)0x0) {
    uVar6 = 0xbc;
  }
  else {
    uVar4 = *local_50;
    uVar6 = 0;
    if ((uVar4 != 0) && (local_50 != (uint *)(ulong)uVar4)) {
      puVar9 = (uint *)((long)local_50 - (long)(ulong)uVar4);
      uVar6 = 0;
      if (*puVar9 != 0) {
        uVar6 = puVar9[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
          lVar10 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar10 != 0) {
            uVar4 = 0;
            if ((ulong)uVar6 != 0) {
              uVar4 = (uint)((ulong)((long)local_50 - lVar10) / (ulong)uVar6);
            }
            if (*puVar9 <= uVar4) {
              uVar4 = 0xffffffff;
            }
            if ((uVar4 < DAT_05326ec0) &&
               (uVar6 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar4 * 2), uVar6 < 0xbd))
            goto LAB_028a8634;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_028a8634:
  if (uVar6 < 0xbd) {
    puVar8 = (undefined8 *)(&PTR_DAT_0495c4b0)[uVar6];
  }
  else {
    puVar8 = &DAT_0407ebb1;
  }
  FUN_038d1270(&local_a8,"Shop.Zakka.%s.%s",puVar7,puVar8);
  return;
}

