
void FUN_0039c3c0(void)

{
  ulong uVar1;
  
  uVar1 = nn::util::BinaryFileHeader::IsRelocated();
  if ((uVar1 & 1) == 0) {
    return;
  }
  nn::util::BinaryFileHeader::GetRelocationTable();
  nn::util::RelocationTable::Unrelocate();
  return;
}

