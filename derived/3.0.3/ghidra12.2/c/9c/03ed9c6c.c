
void FUN_03ed9c6c(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  FUN_03ecfff0();
  uVar3 = *(ushort *)(param_3 + 0x5a);
  if (-1 < (short)uVar3) {
    uVar1 = (ulong)uVar3;
    if (3 < uVar3) {
      uVar1 = 0;
    }
    lVar6 = *(long *)(param_3 + uVar1 * 8);
    if (lVar6 != 0) {
      lVar5 = *(long *)(param_3 + 0x90);
      plVar2 = (long *)(param_3 + 0x28) + uVar3;
      if (3 < uVar3) {
        plVar2 = (long *)(param_3 + 0x28);
      }
      lVar4 = *plVar2;
      *(undefined4 *)(lVar4 + 0x7c) = *(undefined4 *)(*(long *)(param_2 + 8) + 0x78);
      lVar5 = FUN_03ec8650(*(undefined8 *)(lVar6 + 0x10),lVar6,*(undefined8 *)(param_2 + 8),lVar4,
                           lVar6 != lVar5,*(undefined8 *)(param_3 + 0x90));
      if (lVar5 != 0) {
        lVar6 = lVar5;
      }
      FUN_03ed2218(param_1,param_2,param_3,lVar6);
    }
  }
  *(undefined4 *)(param_3 + 0x54) = *(undefined4 *)(*(long *)(param_2 + 8) + 0xa4);
                    /* WARNING: Could not recover jumptable at 0x03ed9d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))(param_1,param_2,param_3);
  return;
}

