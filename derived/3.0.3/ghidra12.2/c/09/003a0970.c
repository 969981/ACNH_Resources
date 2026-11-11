
long FUN_003a0970(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = nn::util::BinaryFileHeader::IsRelocated();
  if ((uVar1 & 1) == 0) {
    nn::util::BinaryFileHeader::GetRelocationTable();
    nn::util::RelocationTable::Relocate();
  }
  uVar1 = (ulong)*(ushort *)(*(long *)(param_1 + 0x20) + 0x40);
  if (uVar1 != 0) {
    lVar3 = 0;
    do {
      uVar2 = nn::util::BinaryFileHeader::IsRelocated();
      if ((uVar2 & 1) == 0) {
        nn::util::BinaryFileHeader::GetRelocationTable();
        nn::util::RelocationTable::Relocate();
      }
      lVar3 = lVar3 + 0x100;
    } while (uVar1 * 0x100 != lVar3);
  }
  nn::util::BinaryFileHeader::IsEndianReverse();
  return param_1;
}

