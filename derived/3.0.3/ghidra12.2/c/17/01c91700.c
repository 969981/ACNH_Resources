
void FUN_01c91700(long param_1,int *param_2)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  undefined *local_1a0;
  undefined8 *puStack_198;
  undefined4 local_190;
  undefined1 local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined **local_170;
  undefined1 *puStack_168;
  undefined4 local_160;
  undefined1 local_15c [63];
  undefined1 local_11d;
  undefined **local_118;
  undefined1 *puStack_110;
  undefined4 local_108;
  undefined1 local_104 [63];
  undefined1 local_c5;
  undefined8 local_be;
  undefined8 uStack_b6;
  undefined4 local_ae;
  undefined4 local_a8 [2];
  int *local_a0;
  undefined **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 != 0) {
    iVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x10);
    puVar1 = PTR_DAT_04bb2df8 + 0x10;
    do {
      piVar7 = (int *)(lVar6 + (long)iVar5 * 0x58 + 0x24);
      if (*piVar7 != *param_2) {
        local_18c = 0;
        local_11d = 0;
        local_15c[0] = 0;
        local_c5 = 0;
        local_104[0] = 0;
        local_190 = 0xb;
        local_178 = 0xffffffff;
        local_188 = 0xffffffff;
        uStack_180 = 0xffffffff00000000;
        local_160 = 0x40;
        local_108 = 0x40;
        local_170 = &PTR_LAB_048fb9f8;
        local_118 = &PTR_LAB_048fb9f8;
        local_a8[0] = 10;
        local_1a0 = puVar1;
        puStack_198 = &local_be;
        puStack_168 = local_15c;
        puStack_110 = local_104;
        local_a0 = param_2 + 1;
        FUN_006f5e38(&local_1a0);
        local_6c = 0;
        local_70 = 1;
        local_80 = 0;
        uStack_78 = 0;
        local_98 = &PTR_LAB_04a3f840;
        local_90 = 0;
        uStack_88 = 0;
        FUN_02906b00(&local_98,&local_1a0,local_a8);
        lVar4 = lVar6 + (long)iVar5 * 0x58;
        *(undefined4 *)(lVar4 + 0x38) = local_ae;
        *(undefined8 *)(lVar4 + 0x28) = local_be;
        *(undefined8 *)(lVar4 + 0x30) = uStack_b6;
        *piVar7 = *param_2;
        bVar2 = 2;
        if (*(byte *)(param_2 + 6) < 4) {
          bVar2 = *(byte *)(param_2 + 6);
        }
        *(byte *)(lVar4 + 0x22) = bVar2;
        *(undefined4 *)(lVar4 + 0x50) = 0x1e;
      }
      iVar5 = iVar5 + 1;
    } while (iVar3 != iVar5);
  }
  *(undefined1 *)(param_1 + 0xf5) = 1;
  return;
}

