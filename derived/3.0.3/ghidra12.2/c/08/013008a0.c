
/* WARNING: Removing unreachable block (ram,0x01300b90) */
/* WARNING: Removing unreachable block (ram,0x013009b0) */
/* WARNING: Removing unreachable block (ram,0x01300a20) */
/* WARNING: Removing unreachable block (ram,0x01300b08) */

void FUN_013008a0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  uint uVar10;
  long lVar11;
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined *local_98;
  long local_90;
  uint local_88;
  long local_80;
  long local_78;
  undefined *local_70;
  int local_68;
  int local_64;
  
  iVar6 = *(int *)(param_1 + 0x20);
  local_64 = *(int *)(param_1 + 0x24);
  local_80 = param_1 + 0x18;
  iVar7 = *(int *)(param_1 + 0x34);
  local_78 = param_1 + 0x28;
  *(int *)(param_1 + 0xe0) = iVar6;
  *(int *)(param_1 + 0xe4) = local_64;
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0x30);
  *(int *)(param_1 + 0xf4) = iVar7;
  *(int *)(param_1 + 0xa10) = iVar6;
  *(int *)(param_1 + 0xa14) = local_64;
  *(undefined4 *)(param_1 + 0xa20) = *(undefined4 *)(param_1 + 0x30);
  *(int *)(param_1 + 0xa24) = iVar7;
  local_70 = PTR_DAT_04bb2018 + 0x10;
  if (iVar7 + 1 != local_64) {
    lVar1 = param_1 + 200;
    puVar2 = PTR_DAT_04bbc330 + 0x10;
    puVar3 = PTR_DAT_04bbc328 + 0x10;
    local_68 = iVar6;
    do {
      sVar8 = *(short *)(param_1 + 0x3c);
      if (*(short *)(param_1 + 0x40) <= *(short *)(param_1 + 0x3c)) {
        sVar8 = *(short *)(param_1 + 0x40);
      }
      sVar9 = *(short *)(param_1 + 0x3e);
      if (*(short *)(param_1 + 0x42) <= *(short *)(param_1 + 0x3e)) {
        sVar9 = *(short *)(param_1 + 0x42);
      }
      puVar5 = (ushort *)
               (param_1 + 0x44 + (ulong)(uint)((local_64 - sVar9) * 3 + (local_68 - sVar8)) * 0xe);
      if (2 < (uint)(local_64 - sVar9) || 2 < (uint)(local_68 - sVar8)) {
        puVar5 = (ushort *)PTR_DAT_04bbc2f8;
      }
      local_90 = 0;
      local_88 = (uint)(byte)puVar5[2];
      lVar11 = *(long *)PTR_DAT_04bb27a8;
      uVar10 = (uint)*puVar5 - (uint)*(ushort *)(lVar11 + 0x408);
      if ((uVar10 < *(uint *)(lVar11 + 1000)) &&
         (lVar11 = *(long *)(*(long *)(lVar11 + 0x3f0) + (long)(int)uVar10 * 8), lVar11 != 0)) {
        local_90 = lVar11;
      }
      uStack_d8 = 0x500000005;
      local_d0 = 0x500000005;
      uStack_c8 = 0x500000005;
      local_c0 = 0x500000005;
      uStack_b8 = 0x500000005;
      local_b0 = 0x500000005;
      uStack_a8 = 0x500000005;
      local_a0 = 0x500000005;
      local_e0 = puVar3;
      local_98 = puVar2;
      FUN_01313c40(&local_98,&local_e0,0);
      FUN_01302290(lVar1,&local_e0,0,&local_70);
      local_a0 = 0x500000005;
      uStack_d8 = 0x500000005;
      local_d0 = 0x500000005;
      uStack_c8 = 0x500000005;
      local_c0 = 0x500000005;
      uStack_b8 = 0x500000005;
      local_b0 = 0x500000005;
      uStack_a8 = 0x500000005;
      local_e0 = puVar3;
      FUN_01313c40(&local_98,&local_e0,1);
      FUN_01302290(lVar1,&local_e0,1,&local_70);
      local_a0 = 0x500000005;
      uStack_d8 = 0x500000005;
      local_d0 = 0x500000005;
      uStack_c8 = 0x500000005;
      local_c0 = 0x500000005;
      uStack_b8 = 0x500000005;
      local_b0 = 0x500000005;
      uStack_a8 = 0x500000005;
      local_e0 = puVar3;
      FUN_01313c40(&local_98,&local_e0,2);
      FUN_01302290(lVar1,&local_e0,2,&local_70);
      local_a0 = 0x500000005;
      uStack_d8 = 0x500000005;
      local_d0 = 0x500000005;
      uStack_c8 = 0x500000005;
      local_c0 = 0x500000005;
      uStack_b8 = 0x500000005;
      local_b0 = 0x500000005;
      uStack_a8 = 0x500000005;
      local_e0 = puVar3;
      FUN_01313c40(&local_98,&local_e0,3);
      FUN_01302290(lVar1,&local_e0,3,&local_70);
      local_98 = PTR_DAT_04bbc330 + 0x10;
      local_88 = (uint)(byte)puVar5[5];
      local_90 = 0;
      lVar11 = *(long *)PTR_DAT_04bb27a8;
      uVar10 = (uint)puVar5[3] - (uint)*(ushort *)(lVar11 + 0x408);
      if ((uVar10 < *(uint *)(lVar11 + 1000)) &&
         (lVar11 = *(long *)(*(long *)(lVar11 + 0x3f0) + (long)(int)uVar10 * 8), lVar11 != 0)) {
        local_90 = lVar11;
      }
      local_a0 = 0x500000005;
      local_d0 = 0x500000005;
      uStack_c8 = 0x500000005;
      puVar4 = PTR_DAT_04bbc328 + 0x10;
      lVar11 = param_1 + 0x9f8;
      uStack_d8 = 0x500000005;
      local_c0 = 0x500000005;
      uStack_b8 = 0x500000005;
      local_b0 = 0x500000005;
      uStack_a8 = 0x500000005;
      local_e0 = puVar4;
      FUN_01313c40(&local_98,&local_e0,0);
      FUN_01302290(lVar11,&local_e0,0,&local_70);
      local_a0 = 0x500000005;
      uStack_d8 = 0x500000005;
      local_d0 = 0x500000005;
      uStack_c8 = 0x500000005;
      local_c0 = 0x500000005;
      uStack_b8 = 0x500000005;
      local_b0 = 0x500000005;
      uStack_a8 = 0x500000005;
      local_e0 = puVar4;
      FUN_01313c40(&local_98,&local_e0,1);
      FUN_01302290(lVar11,&local_e0,1,&local_70);
      local_a0 = 0x500000005;
      uStack_d8 = 0x500000005;
      local_d0 = 0x500000005;
      uStack_c8 = 0x500000005;
      local_c0 = 0x500000005;
      uStack_b8 = 0x500000005;
      local_b0 = 0x500000005;
      uStack_a8 = 0x500000005;
      local_e0 = puVar4;
      FUN_01313c40(&local_98,&local_e0,2);
      FUN_01302290(lVar11,&local_e0,2,&local_70);
      local_a0 = 0x500000005;
      uStack_d8 = 0x500000005;
      local_d0 = 0x500000005;
      uStack_c8 = 0x500000005;
      local_c0 = 0x500000005;
      uStack_b8 = 0x500000005;
      local_b0 = 0x500000005;
      uStack_a8 = 0x500000005;
      local_e0 = puVar4;
      FUN_01313c40(&local_98,&local_e0,3);
      FUN_01302290(lVar11,&local_e0,3,&local_70);
      if (local_68 < *(int *)(local_78 + 8)) {
        local_68 = local_68 + 1;
      }
      else {
        local_68 = *(int *)(local_80 + 8);
        local_64 = local_64 + 1;
      }
    } while ((iVar6 != local_68) || (iVar7 + 1 != local_64));
  }
  return;
}

