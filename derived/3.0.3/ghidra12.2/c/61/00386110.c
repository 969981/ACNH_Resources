
undefined8 FUN_00386110(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = nn::util::BinaryFileHeader::GetFirstBlock();
  return *(undefined8 *)
          (*(long *)(*(long *)(lVar1 + 0x20) + (long)param_2 * 0x40 +
                    *(long *)(PTR_DAT_04bd0028 + ((ulong)*(uint *)(param_1 + 8) & 7) * 8)) + 0x68);
}

