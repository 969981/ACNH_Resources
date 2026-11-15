
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01fe5370(long *param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined *local_b0;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined4 local_a4;
  long local_a0;
  undefined1 local_98 [4];
  undefined8 local_94;
  undefined4 local_8c;
  undefined *local_88;
  undefined *puStack_80;
  int local_78;
  int iStack_74;
  undefined *puStack_70;
  int local_68;
  int iStack_64;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_68 = 0;
  iStack_64 = 0;
  local_94 = 0;
  lVar6 = *param_1;
  local_8c = 0;
  local_98[0] = 0;
  local_88 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_80 = PTR_DAT_04bb2010 + 0x10;
  local_78 = 0;
  iStack_74 = 0;
  if (*param_2 != 0) {
    puVar9 = *(undefined8 **)(param_2 + 2);
    lVar10 = (long)*param_2 << 3;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    puStack_70 = puStack_80;
    do {
      if (*(uint *)*puVar9 < *(uint *)param_1[2]) {
        puVar8 = *(undefined2 **)
                  (*(long *)((uint *)param_1[2] + 2) + (long)(int)*(uint *)*puVar9 * 8);
        iVar2 = *(int *)(puVar8 + 0xe);
      }
      else {
        puVar8 = (undefined2 *)0x0;
        iVar2 = _DAT_0000001c;
      }
      if (iVar2 == 0) {
        lVar11 = *(long *)puVar3;
        local_a8 = *puVar8;
        local_a6 = *(undefined1 *)(puVar8 + 1);
        local_a5 = *(undefined1 *)((long)puVar8 + 3);
        local_a4 = *(undefined4 *)(puVar8 + 2);
        local_a0 = 0;
        local_b0 = puVar1;
        uVar4 = FUN_0277d6c4(&local_a8);
        if (*(long *)puVar3 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            lVar11 = *(long *)PTR_DAT_04bc0428;
            uVar4 = FUN_0277d6c4(puVar8);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
               (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8), lVar11 != 0))
            {
              local_a0 = lVar11;
            }
          }
        }
        FUN_01afb480(&local_b0,&local_88);
        local_78 = local_78 + *(int *)(puVar8 + 8);
        iStack_74 = iStack_74 + *(int *)(puVar8 + 10);
        local_68 = local_68 + *(int *)(puVar8 + 8);
        iStack_64 = iStack_64 + *(int *)(puVar8 + 10);
        iVar2 = *(int *)(lVar6 + 0x123bc);
        if ((((iVar2 != 0x16) && (iVar2 != 0x10)) ||
            (uVar5 = FUN_01fd595c(&local_88,puVar8), (uVar5 & 1) != 0)) &&
           (uVar5 = FUN_021f2630(puVar8,&local_88,param_1[3],lVar6 + 0x188,&local_94,local_98,1),
           (uVar5 & 1) != 0)) {
          puVar7 = (undefined2 *)param_1[1];
          *puVar7 = *puVar8;
          *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar8 + 1);
          *(undefined1 *)((long)puVar7 + 3) = *(undefined1 *)((long)puVar8 + 3);
          *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar8 + 2);
          lVar6 = param_1[1];
          *(int *)(lVar6 + 0x28) = local_78;
          *(int *)(lVar6 + 0x2c) = iStack_74;
          *(int *)(lVar6 + 0x38) = local_68;
          *(int *)(lVar6 + 0x3c) = iStack_64;
          lVar6 = param_1[1];
          *(undefined4 *)(lVar6 + 8) = (undefined4)local_94;
          *(undefined4 *)(lVar6 + 0xc) = local_94._4_4_;
          *(undefined4 *)(lVar6 + 0x10) = local_8c;
          *(undefined1 *)(param_1[1] + 0x14) = local_98[0];
          return 1;
        }
      }
      puVar9 = puVar9 + 1;
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
  }
  return 0;
}

