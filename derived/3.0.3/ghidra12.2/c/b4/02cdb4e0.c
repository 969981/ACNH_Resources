
/* WARNING: Removing unreachable block (ram,0x02cdb7dc) */
/* WARNING: Removing unreachable block (ram,0x02cdb79c) */
/* WARNING: Removing unreachable block (ram,0x02cdb75c) */
/* WARNING: Removing unreachable block (ram,0x02cdb6bc) */
/* WARNING: Removing unreachable block (ram,0x02cdb6dc) */
/* WARNING: Removing unreachable block (ram,0x02cdb60c) */
/* WARNING: Removing unreachable block (ram,0x02cdb5cc) */
/* WARNING: Removing unreachable block (ram,0x02cdb58c) */
/* WARNING: Removing unreachable block (ram,0x02cdb54c) */
/* WARNING: Removing unreachable block (ram,0x02cdb530) */
/* WARNING: Removing unreachable block (ram,0x02cdb56c) */
/* WARNING: Removing unreachable block (ram,0x02cdb5ac) */
/* WARNING: Removing unreachable block (ram,0x02cdb5ec) */
/* WARNING: Removing unreachable block (ram,0x02cdb6fc) */
/* WARNING: Removing unreachable block (ram,0x02cdb73c) */
/* WARNING: Removing unreachable block (ram,0x02cdb77c) */
/* WARNING: Removing unreachable block (ram,0x02cdb7bc) */
/* WARNING: Removing unreachable block (ram,0x02cdb698) */
/* WARNING: Removing unreachable block (ram,0x02cdb71c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff08 : 0x02cdb69c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02cdb4e0(undefined4 *param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined1 auStack_118 [8];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 auStack_e8 [2];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_3c [2];
  undefined4 local_34;
  
  if (7 < *param_2) {
    return;
  }
  FUN_02cde8f4(auStack_118);
  FUN_02cdeb4c(auStack_118,param_2);
  local_3c[0] = 0;
  *param_1 = uStack_110;
  param_1[1] = uStack_10c;
  local_3c[0] = 1;
  param_1[2] = uStack_108;
  param_1[3] = uStack_104;
  local_3c[0] = 2;
  param_1[4] = uStack_100;
  param_1[5] = uStack_fc;
  puVar2 = PTR_DAT_04bb43c0;
  local_34 = 3;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(local_3c);
  if (*(long *)puVar2 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_3c[0] = 3;
      puVar4 = (undefined4 *)&DAT_05586008;
      param_1[6] = uStack_f8;
      param_1[7] = uStack_f4;
      goto LAB_02cdb720;
    }
  }
  local_3c[0] = 4;
  param_1[6] = uStack_f0;
  param_1[7] = uStack_ec;
  local_3c[0] = 5;
  puVar4 = auStack_e8;
LAB_02cdb720:
  uVar1 = puVar4[1];
  param_1[8] = *puVar4;
  param_1[9] = uVar1;
  local_3c[0] = 6;
  param_1[10] = uStack_e0;
  param_1[0xb] = uStack_dc;
  local_3c[0] = 7;
  param_1[0xc] = uStack_d8;
  param_1[0xd] = uStack_d4;
  local_3c[0] = 8;
  param_1[0xe] = uStack_d0;
  param_1[0xf] = uStack_cc;
  return;
}

