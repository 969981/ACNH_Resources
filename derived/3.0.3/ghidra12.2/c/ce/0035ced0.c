
void FUN_0035ced0(long param_1,undefined8 param_2,long param_3,uint param_4,undefined8 param_5,
                 long *param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  long lStack_68;
  
  uVar12 = (ulong)*(uint *)(param_3 + 0x80);
  local_70 = *param_6;
  lStack_68 = param_6[1];
  if (*(uint *)(param_3 + 0x80) != 0) {
    uVar7 = 1;
    if ((param_4 & 1) != 0) {
      uVar7 = 2;
    }
    lVar3 = 0x40;
    if ((param_4 & 4) != 0) {
      lVar3 = 0x60;
    }
    uVar5 = param_4 >> 1 & 1;
    puVar9 = (uint *)(param_3 + 8);
    uVar10 = 7;
    do {
      uVar4 = *puVar9;
      if (uVar4 != 0) {
        uVar1 = 3;
        if ((puVar9[1] & 2) != 0) {
          uVar1 = param_4 & 1 | 4;
        }
        uVar2 = uVar7 & (int)(puVar9[1] << 0x1e) >> 0x1f;
        if ((param_4 & 4) != 0) {
          uVar2 = uVar1;
        }
        uVar8 = (ulong)uVar2;
        if (uVar2 != uVar10) {
          lVar6 = nn::util::BinaryFileHeader::GetFirstBlock();
          FUN_00348260(param_2,*(undefined8 *)
                                (*(long *)(*(long *)(lVar6 + 0x20) + uVar8 * 0x40 +
                                          *(long *)(PTR_DAT_04bd0028 +
                                                   (ulong)*(uint *)(param_1 + 0x10) * 8)) + 0x68),
                       0x1ff);
          FUN_0034820c(param_2,param_1 + uVar8 * 0x20 + 0x90);
          local_80 = 0;
          uStack_78 = 0;
          FUN_00347d1c(param_1 + 0x270,&local_80);
          lVar6 = param_1 + (ulong)uVar2 * 4;
          FUN_0034836c(param_2,*(undefined4 *)(lVar6 + 0x14),&local_80,0x1c,0x70);
          FUN_00348cdc(param_2,*(undefined4 *)(lVar6 + 0x14),0,param_5,0x80);
          FUN_00348cdc(param_2,*(undefined4 *)(lVar6 + 0x44),4,param_5,0x80);
          uVar4 = *puVar9;
          uVar10 = uVar2;
        }
        lVar6 = param_1 + uVar8 * 4;
        lVar11 = lVar3 * (ulong)uVar4 << uVar5;
        FUN_00348d48(param_2,*(undefined4 *)(lVar6 + 0x2c),0,&local_70,lVar11);
        local_70 = local_70 + lVar11;
        FUN_00348c64(param_2,*(undefined4 *)(lVar6 + 0x74),4,*(long *)(puVar9 + -2) + 0x20,
                     param_1 + 0x408);
        lVar11 = param_1 + 0x348;
        if ((puVar9[1] & 1) != 0) {
          lVar11 = param_1 + 0x300;
        }
        local_80 = 0;
        uStack_78 = 0;
        FUN_00347d1c(lVar11,&local_80);
        FUN_00348cdc(param_2,*(undefined4 *)(lVar6 + 0x5c),4,&local_80,4);
        local_80 = 0;
        uStack_78 = 0;
        FUN_00347d1c(param_1 + 0x2b8,&local_80);
        FUN_00347ef4(param_2,3,1,&local_80,6,0,*puVar9 << uVar5,0);
      }
      puVar9 = puVar9 + 4;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return;
}

