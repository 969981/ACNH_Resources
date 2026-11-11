
void FUN_003a08d0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = (ulong)*(ushort *)(*(long *)(param_1 + 0x20) + 0x40);
  if (uVar2 != 0) {
    lVar3 = 0;
    do {
      uVar1 = nn::util::BinaryFileHeader::IsRelocated();
      if ((uVar1 & 1) != 0) {
        nn::util::BinaryFileHeader::GetRelocationTable();
        nn::util::RelocationTable::Unrelocate();
      }
      lVar3 = lVar3 + 0x100;
    } while (uVar2 * 0x100 != lVar3);
  }
  uVar2 = nn::util::BinaryFileHeader::IsRelocated();
  if ((uVar2 & 1) == 0) {
    return;
  }
  nn::util::BinaryFileHeader::GetRelocationTable();
  nn::util::RelocationTable::Unrelocate();
  return;
}

