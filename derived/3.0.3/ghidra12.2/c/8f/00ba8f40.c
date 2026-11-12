
void FUN_00ba8f40(undefined2 *param_1,undefined2 *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  uint local_88;
  uint uStack_84;
  uint local_80;
  int iStack_7c;
  undefined *local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  long local_68;
  
  uVar6 = *param_2;
  uVar4 = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar6;
  uVar5 = *(undefined1 *)((long)param_2 + 3);
  uVar3 = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)(param_1 + 1) = uVar4;
  *(undefined1 *)((long)param_1 + 3) = uVar5;
  *(undefined4 *)(param_1 + 2) = uVar3;
  puVar7 = PTR_DAT_04bb43c0;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(param_1);
  lVar11 = *(long *)puVar7;
  if (lVar11 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      local_78 = PTR_DAT_04bc0510 + 0x10;
      local_68 = 0;
      local_70 = uVar6;
      local_6e = uVar4;
      local_6d = uVar5;
      local_6c = uVar3;
      uVar8 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar7 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          lVar11 = *(long *)PTR_DAT_04bc0428;
          uVar8 = FUN_0277d6c4(param_1);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar11 + 0x1d8)) &&
             (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8), lVar11 != 0)) {
            local_68 = lVar11;
          }
        }
      }
      iVar9 = FUN_01ad7260(&local_78);
      if (1 < iVar9) {
        puVar10 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
        uVar8 = *puVar10 ^ *puVar10 << 0xb;
        uVar2 = puVar10[3];
        *puVar10 = puVar10[1];
        puVar10[1] = puVar10[2];
        uVar1 = uVar8 ^ uVar2;
        uVar8 = uVar8 >> 8 ^ uVar2 >> 0x13 ^ uVar1;
        puVar10[2] = uVar2;
        puVar10[3] = uVar8;
        local_88 = (uVar8 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
        uStack_84 = (local_88 ^ local_88 >> 0x1e) * 0x6c078965 + 2;
        local_80 = (uStack_84 ^ uStack_84 >> 0x1e) * 0x6c078965 + 3;
        iStack_7c = (local_80 ^ local_80 >> 0x1e) * 0x6c078965 + 4;
        if ((param_3 & 1) == 0) {
          FUN_01a4d6e0(&local_88,param_1,0,PTR_FUN_04bb67e0,0);
        }
        else {
          FUN_01a4c66c(&local_88,param_1);
        }
      }
    }
  }
  return;
}

