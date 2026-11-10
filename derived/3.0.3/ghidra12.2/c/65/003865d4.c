
void FUN_003865d4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = nn::util::BinaryFileHeader::GetFirstBlock();
  FUN_00348260(param_2,*(undefined8 *)
                        (*(long *)(*(long *)(lVar1 + 0x20) + (long)param_3 * 0x40 +
                                  *(long *)(PTR_DAT_04bd0028 +
                                           ((ulong)*(uint *)(param_1 + 8) & 7) * 8)) + 0x68),0x1ff);
  FUN_0034820c(param_2,*(long *)(param_1 + 0x10) + (long)param_3 * 0x20);
  return;
}

