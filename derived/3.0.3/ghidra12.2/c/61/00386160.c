
void FUN_00386160(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 uVar8;
  short sVar9;
  ulong uVar10;
  ulong uVar11;
  ulong local_120;
  undefined8 uStack_118;
  undefined1 local_110 [4];
  undefined2 auStack_10c [2];
  undefined8 local_108;
  char *apcStack_100 [13];
  undefined8 local_98;
  undefined1 *local_90;
  ulong *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar3 = nn::util::BinaryFileHeader::GetFirstBlock();
  uVar1 = *(uint *)(lVar3 + 0x1c);
  if (0 < (int)uVar1) {
    uVar6 = 0;
    do {
      lVar3 = nn::util::BinaryFileHeader::GetFirstBlock();
      uVar8 = *(undefined8 *)
               (*(long *)(*(long *)(lVar3 + 0x20) + uVar6 * 0x40 +
                         *(long *)(PTR_DAT_04bd0028 + ((ulong)*(uint *)(param_1 + 8) & 7) * 8)) +
               0x68);
      local_78 = 0;
      uStack_70 = 0;
      local_88 = (ulong *)0x0;
      uStack_80 = 0;
      local_98 = 0;
      local_90 = (undefined1 *)0x0;
      FUN_0034fd0c(&local_98);
      _local_110 = 0;
      apcStack_100[0xb] = (char *)0x0;
      apcStack_100[0xc] = (char *)0x0;
      apcStack_100[9] = (char *)0x0;
      apcStack_100[10] = (char *)0x0;
      apcStack_100[7] = (char *)0x0;
      apcStack_100[8] = (char *)0x0;
      apcStack_100[5] = (char *)0x0;
      apcStack_100[6] = (char *)0x0;
      apcStack_100[3] = (char *)0x0;
      apcStack_100[4] = (char *)0x0;
      apcStack_100[1] = (char *)0x0;
      apcStack_100[2] = (char *)0x0;
      local_108 = 0;
      apcStack_100[0] = (char *)0x0;
      iVar2 = FUN_0034e3c0(uVar8,0,0,"aVertexIndex");
      if (iVar2 < 0) {
        uVar7 = 0;
      }
      else {
        FUN_0034fcf0(local_110);
        uVar7 = 8;
        _local_110 = (uint6)(uint)local_110;
        local_108 = 0x170500000000;
        apcStack_100[0] = "aVertexIndex";
      }
      uVar10 = (ulong)(iVar2 >= 0);
      iVar2 = FUN_0034e3c0(uVar8,0,0,"aPosition");
      uVar11 = uVar10;
      if (-1 < iVar2) {
        FUN_0034fcf0(local_110 + uVar10 * 0x28);
        apcStack_100[uVar10 * 5] = "aPosition";
        *(uint *)(&local_108 + uVar10 * 5) = uVar7;
        *(undefined4 *)((long)&local_108 + (uVar10 * 10 + 1) * 4) = 0x1805;
        uVar11 = uVar10 + 1;
        uVar7 = uVar7 + 0xc;
        auStack_10c[uVar10 * 0x14] = 0;
      }
      sVar9 = (short)uVar11;
      iVar2 = FUN_0034e3c0(uVar8,0,0,"aPositionVg");
      if (iVar2 < 0) {
        iVar2 = FUN_0034e3c0(uVar8,0,0,"aTexCoord");
        uVar10 = uVar11;
      }
      else {
        FUN_0034fcf0(local_110 + uVar11 * 0x28);
        *(uint *)(&local_108 + uVar11 * 5) = uVar7;
        *(undefined4 *)((long)&local_108 + (uVar11 * 10 + 1) * 4) = 0x1705;
        uVar10 = uVar11 + 1;
        sVar9 = (short)uVar10;
        uVar7 = uVar7 + 8;
        apcStack_100[uVar11 * 5] = "aPositionVg";
        auStack_10c[uVar11 * 0x14] = 0;
        iVar2 = FUN_0034e3c0(uVar8,0,0,"aTexCoord");
      }
      if (-1 < iVar2) {
        FUN_0034fcf0(local_110 + uVar10 * 0x28);
        *(uint *)(&local_108 + uVar10 * 5) = uVar7;
        *(undefined4 *)((long)&local_108 + (uVar10 * 10 + 1) * 4) = 0x1705;
        sVar9 = (short)uVar10 + 1;
        uVar7 = uVar7 + 8;
        apcStack_100[uVar10 * 5] = "aTexCoord";
        auStack_10c[uVar10 * 0x14] = 0;
      }
      local_120 = 0;
      uStack_118 = 0;
      FUN_0034fd04(&local_120);
      local_88 = &local_120;
      local_120 = (ulong)uVar7;
      local_98._0_4_ = CONCAT22(1,sVar9);
      local_90 = local_110;
      uVar4 = FUN_0034efc0(&local_98);
      lVar3 = *(long *)(param_1 + 0x10);
      uVar5 = FUN_00367b14(uVar4,8);
      FUN_0034f054(lVar3 + uVar6 * 0x20,uVar5,uVar4);
      FUN_0034f070(*(long *)(param_1 + 0x10) + uVar6 * 0x20,param_2,&local_98,uVar8);
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar1);
  }
  return;
}

