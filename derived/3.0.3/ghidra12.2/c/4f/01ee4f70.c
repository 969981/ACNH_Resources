
bool FUN_01ee4f70(long param_1,byte *param_2,ulong param_3)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined4 local_34;
  
  if ((((*(byte *)(*DAT_0537d558 + 0x476) < 2) && (4 < *(int *)(param_1 + 0x77b0) - 3U)) &&
      (uVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x180))(), (uVar3 & 1) != 0)) &&
     (((*(ushort *)(param_1 + 0xad28) >> 3 & 1) == 0 &&
      ((*(ushort *)(param_1 + 0xad2a) >> 3 & 1) == 0)))) {
    if ((*(long *)(param_1 + 8) == 0) ||
       (uVar1 = *(uint *)(*(long *)(param_1 + 8) + 0x508), uVar1 == 0xffffffff)) {
      if ((param_3 & 1) != 0) goto LAB_01ee5070;
    }
    else {
      puVar5 = &DAT_053fe348 + (ulong)uVar1 * 0xba0;
      if (9 < uVar1) {
        puVar5 = &DAT_053fe348;
      }
      if (*(int *)(puVar5 + 0x4e8) != 0) {
        return *(int *)(puVar5 + 0x4e8) == 0;
      }
      if ((param_3 & 1) == 0) {
        return true;
      }
LAB_01ee5070:
      if (((ulong)*param_2 < 8) && (DAT_054f5738 != 0)) {
        puVar4 = (undefined4 *)(DAT_054f5738 + (ulong)*param_2 * 4 + 0xde8);
      }
      else {
        puVar4 = &DAT_04c9a0c8;
      }
      local_34 = *puVar4;
      uVar3 = FUN_02087ce0(*(undefined8 *)(param_1 + 0x18),&local_34,0);
      if ((uVar3 & 1) == 0) goto LAB_01ee5008;
    }
    bVar2 = true;
  }
  else {
LAB_01ee5008:
    bVar2 = false;
  }
  return bVar2;
}

