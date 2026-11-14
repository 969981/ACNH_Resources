
void FUN_017adb00(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  short *psVar5;
  long *plVar6;
  
  lVar2 = param_1 + 0x14;
  lVar3 = lVar2 + ((ulong)~*(uint *)(param_1 + 0x10) & 1) * 0x1c;
  *(undefined4 *)(lVar3 + 0x14) = 0;
  FUN_017ac9b0(lVar3,param_1 + 0xc,1,1,1);
  FUN_017ac8f4(lVar2 + ((ulong)*(uint *)(param_1 + 0x10) & 1) * 0x1c,param_1 + 0xc,
               *(undefined1 *)(param_1 + 0xba));
  uVar1 = *(int *)(param_1 + 0x10) + 1;
  *(uint *)(param_1 + 0x10) = uVar1;
  plVar6 = (long *)(param_1 + 0x70);
  uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6);
  if (((uVar4 & 1) == 0) ||
     (((psVar5 = (short *)(lVar2 + (ulong)(uVar1 & 1) * 0x1c), *psVar5 == -1 &&
       (psVar5[2] == DAT_04cb6038)) && (*(int *)(psVar5 + 4) == -1)))) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x017adbac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*plVar6)(plVar6);
  return;
}

