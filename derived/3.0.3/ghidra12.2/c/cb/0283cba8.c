
bool FUN_0283cba8(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long local_50;
  long lStack_48;
  undefined1 local_40 [16];
  undefined1 *local_18;
  
  lVar3 = *(long *)PTR_DAT_04bb46b0;
  if (lVar3 == 0) {
    bVar1 = false;
    *(undefined4 *)(param_1 + 0x288) = 2;
  }
  else {
    FUN_026f5738(lVar3);
    local_40 = FUN_02700ee8(lVar3);
    uVar2 = local_40._8_8_ & 0xffffffff;
    local_50 = param_1;
    lStack_48 = param_1;
    if (uVar2 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00d72dc0();
    }
    local_18 = (undefined1 *)&local_50;
    (*(code *)(&PTR_LAB_04a91810)[uVar2])(&local_18,local_40);
    bVar1 = *(int *)(param_1 + 0x288) == 1;
    FUN_026f5820(lVar3);
  }
  return bVar1;
}

