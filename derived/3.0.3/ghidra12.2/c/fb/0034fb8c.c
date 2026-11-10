
undefined8 FUN_0034fb8c(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = nn::util::BinaryFileHeader::IsRelocated();
  if ((uVar1 & 1) == 0) {
    nn::util::BinaryFileHeader::GetRelocationTable();
    nn::util::RelocationTable::Relocate();
  }
  return param_1;
}

