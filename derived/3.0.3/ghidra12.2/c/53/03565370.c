
void FUN_03565370(long param_1,long param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  short sVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int local_1b8;
  int iStack_1b4;
  undefined *local_1b0;
  undefined1 *puStack_1a8;
  undefined4 local_1a0;
  undefined1 local_19c [127];
  undefined1 local_11d;
  undefined **local_118;
  undefined1 *puStack_110;
  undefined4 local_108;
  undefined1 local_104 [63];
  undefined1 local_c5;
  undefined **local_c0;
  undefined1 *puStack_b8;
  undefined4 local_b0;
  undefined1 local_ac [63];
  undefined1 local_6d;
  
  uVar3 = *(uint *)(param_2 + 0x18);
  if (0 < (int)uVar3) {
    sVar6 = *(short *)(param_1 + 8);
    bVar5 = *(byte *)(param_1 + 0xbc);
    uVar11 = 1;
    puVar2 = PTR_DAT_04bb2d88 + 0x10;
    uVar7 = 0;
    do {
      local_118 = &PTR_LAB_048fb9f8;
      uVar1 = uVar7 + 1;
      if ((sVar6 != -2) && (uVar7 < bVar5)) {
        iVar9 = 0;
        iVar10 = 0;
        local_1a0 = 0x80;
        local_11d = 0;
        local_19c[0] = 0;
        local_108 = 0x40;
        local_c5 = 0;
        local_104[0] = 0;
        local_b0 = 0x40;
        local_6d = 0;
        local_ac[0] = 0;
        if (*(short *)(param_1 + 8) != -2) {
          lVar8 = param_1 + 0x2c + (ulong)(uVar7 & 0xff) * 0x18;
          if (5 < (uVar7 & 0xff)) {
            lVar8 = param_1 + 0x2c;
          }
          iVar9 = (uint)*(ushort *)(lVar8 + 8) * param_3;
          iVar10 = (uint)*(ushort *)(lVar8 + 0x12) + (uint)*(ushort *)(lVar8 + 0x10) +
                   *(int *)(lVar8 + 0xc) + (uint)*(ushort *)(lVar8 + 0x14);
        }
        _local_1b8 = CONCAT44(iVar9,iVar10);
        uVar4 = *(uint *)(param_2 + 0x18);
        if (((int)uVar7 < (int)uVar4) && (uVar4 != 0)) {
          if (uVar7 < uVar4) {
            lVar8 = param_2 + 8;
            if (6 < uVar7) {
              uVar7 = uVar11 & 0xfffffff8;
              do {
                uVar7 = uVar7 - 8;
                lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long
                                                                                                *)(
                                                  lVar8 + 8) + 8) + 8) + 8) + 8) + 8) + 8) + 8);
              } while (uVar7 != 0);
            }
            if ((uVar1 & 7) != 0) {
              uVar7 = uVar11 & 7;
              do {
                lVar8 = *(long *)(lVar8 + 8);
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
          }
          else {
            lVar8 = 0;
          }
          if ((lVar8 != 0) && (lVar8 = lVar8 - *(int *)(param_2 + 0x1c), lVar8 != 0)) {
            local_1b0 = puVar2;
            puStack_1a8 = local_19c;
            puStack_110 = local_104;
            local_c0 = local_118;
            puStack_b8 = local_ac;
            FUN_030d8130(lVar8,&local_1b8);
          }
        }
      }
      uVar11 = uVar11 + 1;
      uVar7 = uVar1;
    } while (uVar1 != uVar3);
  }
  return;
}

