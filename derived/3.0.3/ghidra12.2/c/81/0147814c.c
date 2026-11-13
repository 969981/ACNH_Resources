
void FUN_0147814c(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,long param_5
                 ,uint param_6)

{
  ulong uVar1;
  long lVar2;
  undefined4 local_18;
  uint local_14;
  
  local_18 = param_3;
  if ((param_6 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x70);
    if (lVar2 == 0) {
      local_14 = 0xffffffff;
    }
    else {
      local_14 = *(uint *)(lVar2 + 0x280);
    }
    if ((((local_14 < 9) && ((1 << (ulong)(local_14 & 0x1f) & 0x160U) != 0)) &&
        (local_14 = 0, lVar2 != 0)) && (*(int *)(lVar2 + 0x280) != 0)) {
      FUN_03ebb160(lVar2 + 0x278);
    }
  }
  *(undefined4 *)(param_1 + 0x860) = *(undefined4 *)(param_5 + 0x10);
  *(undefined4 *)(param_1 + 0x864) = *(undefined4 *)(param_5 + 0x14);
  *(undefined4 *)(param_1 + 0x870) = *(undefined4 *)(param_5 + 0x20);
  *(undefined4 *)(param_1 + 0x874) = *(undefined4 *)(param_5 + 0x24);
  uVar1 = FUN_01478234(param_1,param_2,&local_18);
  if ((uVar1 & 1) != 0) {
    local_14 = 8;
    lVar2 = *(long *)(param_1 + 0x70);
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x280) != 8)) {
      FUN_03ebb160(lVar2 + 0x278);
    }
  }
  return;
}

