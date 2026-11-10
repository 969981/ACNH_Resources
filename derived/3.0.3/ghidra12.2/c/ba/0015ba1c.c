
void FUN_0015ba1c(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0xf08) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_1 + 0xf08) + 0x1e8), lVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0x218);
  }
  FUN_00167484(param_2,uVar1,*(undefined4 *)(param_1 + 0xf10),
               *(ulong *)(param_1 + 0xf60) >> 0x34 & 1);
  *(undefined4 *)(param_1 + 0x1560) = *(undefined4 *)(param_1 + 0xf10);
  *(ushort *)(param_1 + 0x15c4) =
       *(ushort *)(param_1 + 0xf65) & 0x1000 | *(ushort *)(param_1 + 0x15c4) & 0xefff;
  *(undefined8 *)(param_1 + 0x1558) = *(undefined8 *)(param_1 + 0xf08);
  return;
}

