
void FUN_007b0de0(undefined2 *param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)param_2 + 3);
  uVar1 = *(undefined4 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 2) = uVar1;
  puVar2 = PTR_DAT_04bb43c0;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4();
  lVar3 = DAT_04ca7a08;
  if (*(long *)puVar2 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0 && DAT_04ca7a08 != 0)) {
      uVar5 = FUN_0277d6c4(param_2);
      lVar6 = lVar3 + (uVar5 & 0xffffffff) * 0x23;
      if (0x752 < ((uint)(uVar5 >> 3) & 0x1fffffff)) {
        lVar6 = lVar3;
      }
      *(long *)(param_1 + 4) = lVar6;
    }
  }
  return;
}

