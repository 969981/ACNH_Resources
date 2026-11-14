
void FUN_017322f0(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint *local_50;
  uint local_48;
  uint local_44;
  
  puVar2 = PTR_DAT_04bb43c0;
  if (*(char *)(param_1 + 0xb0) != '\0') goto LAB_017325d0;
  if (*(char *)(param_1 + 0x1d5) == '\0') {
LAB_01732390:
    puVar10 = (undefined4 *)(param_1 + 0xd4);
  }
  else {
    lVar11 = *(long *)PTR_DAT_04bb43c0;
    puVar10 = (undefined4 *)(param_1 + 0xcc);
    uVar5 = FUN_0277d6c4(puVar10);
    if (*(long *)puVar2 == 0) {
LAB_01732370:
      iVar6 = FUN_0277d6c4(puVar10);
      if (iVar6 != 0xfffd) goto LAB_01732390;
      puVar10 = (undefined4 *)&DAT_05586008;
    }
    else {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((*(uint *)(lVar11 + 0x1d8) <= uVar5) ||
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_01732370;
    }
  }
  lVar12 = *(long *)puVar2;
  uVar5 = FUN_0277d6c4(puVar10);
  lVar11 = *(long *)puVar2;
  if (lVar11 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      local_50 = (uint *)0x0;
      local_58 = *puVar10;
      local_54 = puVar10[1];
      local_60 = 0x4a36b50;
      uStack_5c = 0;
      uVar5 = FUN_0277d6c4(&local_58);
      if (*(long *)puVar2 == 0) {
LAB_0173250c:
        local_48 = 0xbc;
      }
      else {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((*(uint *)(lVar11 + 0x1d8) <= uVar5) ||
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_0173250c;
        lVar11 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(puVar10);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((*(uint *)(lVar11 + 0x1d8) <= uVar5) ||
           (puVar8 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8),
           puVar8 == (uint *)0x0)) goto LAB_0173250c;
        local_48 = 0;
        uVar5 = *puVar8;
        local_50 = puVar8;
        if ((uVar5 != 0) && (puVar8 != (uint *)(ulong)uVar5)) {
          puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar5);
          local_48 = 0;
          if (*puVar9 != 0) {
            uVar5 = puVar9[1];
            if ((uVar5 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
              lVar11 = 0xc;
              if (*(char *)((long)puVar9 + 10) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
              if (lVar11 != 0) {
                uVar1 = 0;
                if ((ulong)uVar5 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar8 - lVar11) / (ulong)uVar5);
                }
                if (*puVar9 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (local_48 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2),
                   local_48 < 0xbd)) goto LAB_01732518;
              }
            }
            local_48 = 0;
          }
        }
      }
LAB_01732518:
      local_44 = 0xac;
      if (local_48 == 0xac) {
        FUN_01b086f4(&local_44,&local_60);
        bVar3 = (local_44 & 0xffff) != (uint)*(ushort *)PTR_DAT_04bb3170;
      }
      else {
        bVar3 = false;
      }
      uVar7 = FUN_01ae89e0(&local_60);
      if (((((uVar7 & 1) != 0) &&
           (FUN_01b08c14(&local_44,&local_60), (short)local_44 != DAT_04cb6038)) || (bVar3)) &&
         (*(char *)(param_1 + 0xb0) != '\0')) goto LAB_017325d0;
    }
  }
  FUN_00765f94(&local_60,puVar10,*(undefined1 *)(param_1 + 0xed),*(undefined4 *)(param_1 + 0x1d0));
  *(undefined4 *)(param_1 + 0x9c) = local_60;
  *(ulong *)(param_1 + 0xa0) = CONCAT44(local_58,uStack_5c);
  *(undefined4 *)(param_1 + 0xa8) = local_54;
  *(undefined1 *)(param_1 + 0xac) = local_50._0_1_;
  *(undefined1 *)(param_1 + 0xb0) = 1;
LAB_017325d0:
  bVar4 = FUN_0076b570(param_1,param_2,param_2);
  *(byte *)(param_1 + 0xee) = bVar4 & 1;
  *(byte *)(param_1 + 0xef) = bVar4 & 1;
  return;
}

