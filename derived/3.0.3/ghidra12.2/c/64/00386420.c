
void FUN_00386420(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar2 = nn::util::BinaryFileHeader::GetFirstBlock();
  uVar1 = *(uint *)(lVar2 + 0x1c);
  if (0 < (int)uVar1) {
    uVar6 = 0;
    if ((param_3 & 1) == 0) {
      do {
        uVar3 = FUN_0034f060(*(long *)(param_1 + 0x10) + uVar6 * 0x20);
        FUN_0034f3d4(*(long *)(param_1 + 0x10) + uVar6 * 0x20,param_2);
        FUN_00367b50(uVar3);
        lVar2 = nn::util::BinaryFileHeader::GetFirstBlock();
        lVar2 = *(long *)(lVar2 + 0x20) + uVar6 * 0x40;
        uVar4 = FUN_0038cbd0(*(undefined8 *)
                              (lVar2 + (&DAT_04beb438)[(ulong)*(uint *)(param_1 + 8) & 7]));
        if ((uVar4 & 1) != 0) {
          FUN_0034e324(*(undefined8 *)
                        (*(long *)(lVar2 + (&DAT_04beb438)[(ulong)*(uint *)(param_1 + 8) & 7]) +
                        0x68),param_2);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar1);
    }
    else {
      do {
        uVar3 = FUN_0034f060(*(long *)(param_1 + 0x10) + uVar6);
        FUN_0034f3d4(*(long *)(param_1 + 0x10) + uVar6,param_2);
        FUN_00367b50(uVar3);
        uVar6 = uVar6 + 0x20;
      } while ((ulong)uVar1 * 0x20 != uVar6);
    }
  }
  if ((param_3 & 1) == 0) {
    uVar3 = nn::util::BinaryFileHeader::GetFirstBlock();
    uVar6 = FUN_0038cba0();
    if ((uVar6 & 1) != 0) {
      FUN_0034ffd8(uVar3,param_2);
    }
    uVar6 = nn::util::BinaryFileHeader::IsRelocated();
    if ((uVar6 & 1) != 0) {
      nn::util::BinaryFileHeader::GetRelocationTable();
      nn::util::RelocationTable::Unrelocate();
    }
  }
  lVar5 = *(long *)(param_1 + 0x10);
  lVar2 = nn::util::BinaryFileHeader::GetFirstBlock();
  if (lVar5 != 0) {
    uVar6 = (ulong)*(uint *)(lVar2 + 0x1c);
    if (0 < (int)*(uint *)(lVar2 + 0x1c)) {
      lVar2 = lVar5;
      do {
        FUN_0034f050(lVar2);
        uVar6 = uVar6 - 1;
        lVar2 = lVar2 + 0x20;
      } while (uVar6 != 0);
    }
    FUN_00367b50(lVar5);
  }
  FUN_00367b50(*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_00367b50();
  }
  FUN_00367b50(*(undefined8 *)(param_1 + 0x28));
  FUN_00367b50(*(undefined8 *)(param_1 + 0x30));
  return;
}

