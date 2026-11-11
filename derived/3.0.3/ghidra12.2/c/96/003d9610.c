
undefined8 FUN_003d9610(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined1 local_e0;
  undefined1 local_df;
  byte local_dd;
  undefined4 local_dc;
  uint local_d8;
  uint uStack_d4;
  uint local_cc;
  uint uStack_c8;
  uint local_c0;
  uint uStack_bc;
  uint local_9c;
  uint local_98;
  undefined4 local_94;
  long local_90;
  undefined8 local_88;
  undefined4 local_7c;
  undefined2 local_78;
  undefined8 local_76;
  undefined8 local_6e;
  undefined8 local_66;
  undefined8 local_5e;
  undefined2 local_56;
  undefined4 local_54;
  
  FUN_003db690(&local_90);
  uVar5 = FUN_003db2d0(param_1,&local_90,PTR_DAT_04bd0478,0x5200);
  if (((uVar5 & 1) != 0) && (uVar5 = FUN_003db7a0(&local_90,&local_e0), (uVar5 & 1) != 0)) {
    if (*(char *)(param_1 + 0x57) != '\0') {
      local_df = *(undefined1 *)(param_1 + 0x56);
    }
    puVar6 = (uint *)FUN_003dbc54(local_88);
    uVar1 = *puVar6;
    uVar10 = (ulong)uVar1;
    *(uint *)(param_1 + 0x50) = uVar1;
    *(uint *)(*(long *)(param_1 + 0x30) + 0x60) = uVar1;
    puVar9 = *(undefined4 **)(param_1 + 0x30);
    bVar2 = FUN_003db774(&local_90);
    uVar3 = FUN_003d40b8(local_e0);
    *puVar9 = uVar3;
    *(undefined8 *)(puVar9 + 0x16) = 0;
    puVar9[1] = local_dc;
    *(undefined1 *)(puVar9 + 2) = local_df;
    *(ulong *)(puVar9 + 4) = (ulong)local_d8;
    *(ulong *)(puVar9 + 6) = (ulong)uStack_d4;
    *(ulong *)(puVar9 + 8) = (ulong)local_9c;
    *(ulong *)(puVar9 + 0xe) = (ulong)uStack_c8;
    *(ulong *)(puVar9 + 0x10) = (ulong)local_cc;
    *(ulong *)(puVar9 + 10) = (ulong)local_98;
    *(ulong *)(puVar9 + 0x12) = (ulong)uStack_bc;
    *(ulong *)(puVar9 + 0x14) = (ulong)local_c0;
    *(byte *)(puVar9 + 0xc) = bVar2 & 1;
    puVar9[0xd] = local_94;
    puVar9[0x36] = (uint)local_dd;
    uVar5 = FUN_003db760(&local_90);
    if (((uVar5 & 1) == 0) || (uVar5 = FUN_003d9c10(param_1,&local_90), (uVar5 & 1) != 0)) {
      iVar4 = **(int **)(param_1 + 0x30);
      *(int *)(param_1 + 0x27c8) = iVar4;
      if (iVar4 == 2) {
        if (0 < (int)uVar1) {
          uVar5 = FUN_003db98c(&local_90,&local_76,&local_7c,0);
          if ((uVar5 & 1) == 0) {
            return 0;
          }
          uVar5 = 0;
          puVar11 = (undefined8 *)(param_1 + 0x2800);
          do {
            *puVar11 = local_76;
            puVar11[1] = local_6e;
            puVar11[2] = local_66;
            puVar11[3] = local_5e;
            *(undefined2 *)(puVar11 + 8) = local_56;
            *(undefined4 *)((long)puVar11 + 0x42) = local_54;
            *(undefined4 *)(puVar11 + 0x10) = local_7c;
            *(undefined2 *)((long)puVar11 + 0x84) = local_78;
            *(undefined8 **)(param_2 + 0x20 + uVar5 * 8) = puVar11;
            if (uVar10 - 1 == uVar5) goto LAB_003d97e8;
            uVar5 = uVar5 + 1;
            uVar7 = FUN_003db98c(&local_90,&local_76,&local_7c,uVar5 & 0xffffffff);
            puVar11 = puVar11 + 0x18;
          } while ((uVar7 & 1) != 0);
          if (uVar5 < uVar10) {
            return 0;
          }
        }
      }
      else if (uVar1 != 0) {
        memset((void *)(param_2 + 0x20),0,uVar10 << 3);
      }
LAB_003d97e8:
      if (local_90 == 0) {
        uVar5 = 0;
      }
      else {
        iVar4 = FUN_003dbb80();
        lVar8 = FUN_003dbc20(local_88);
        uVar5 = (ulong)(iVar4 + *(int *)(lVar8 + 0x34) + 8);
      }
      lVar8 = *(long *)(param_1 + 0x30);
      *(ulong *)(param_1 + 800) = uVar5;
      uVar3 = 0;
      if (*(ulong *)(lVar8 + 0x38) != 0) {
        uVar3 = (undefined4)((*(long *)(lVar8 + 0x18) - 1U) / *(ulong *)(lVar8 + 0x38));
      }
      *(undefined4 *)(param_1 + 0x314) = uVar3;
      uVar10 = 0;
      if (*(ulong *)(lVar8 + 0x38) != 0) {
        uVar10 = *(ulong *)(lVar8 + 0x10) / *(ulong *)(lVar8 + 0x38);
      }
      *(int *)(param_1 + 0x318) = (int)uVar10;
      lVar8 = *(long *)(lVar8 + 0x40);
      *(undefined8 *)(param_1 + 0x330) = 0;
      *(ulong *)(param_1 + 0x328) =
           uVar5 + lVar8 * (uVar10 & 0xffffffff) * (long)*(int *)(param_1 + 0x50);
      bVar2 = FUN_003db788(&local_90);
      *(byte *)(*(long *)(param_1 + 0x30) + 0x31) = bVar2 & 1;
      uVar5 = FUN_003dbd14(param_1 + 0x340,param_1,*(undefined8 *)(param_1 + 0x30));
      if ((uVar5 & 1) != 0) {
        uVar10 = *(ulong *)(*(long *)(param_1 + 0x30) + 0x38);
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = *(ulong *)(param_1 + 0x368) / uVar10;
        }
        *(int *)(param_1 + 0x310) = (int)uVar5;
        (**(code **)(**(long **)(param_1 + 0x28) + 0x30))
                  (*(long **)(param_1 + 0x28),
                   *(long *)(param_1 + 800) +
                   *(long *)(*(long *)(param_1 + 0x30) + 0x40) * (uVar5 & 0xffffffff) *
                   (long)*(int *)(param_1 + 0x50),0);
        return 1;
      }
    }
  }
  return 0;
}

