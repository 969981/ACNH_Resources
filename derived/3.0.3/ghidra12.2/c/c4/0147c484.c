
void FUN_0147c484(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar4 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x284) = uVar4;
  plVar3 = *(long **)(param_1 + 0x48);
  uVar5 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x288) = uVar5;
  uVar6 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x278) = uVar4;
  *(undefined4 *)(param_1 + 0x27c) = uVar5;
  *(undefined4 *)(param_1 + 0x28c) = uVar6;
  *(undefined4 *)(param_1 + 0x280) = uVar6;
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x2a0) = uVar4;
  *(undefined4 *)(param_1 + 0x2a4) = uVar4;
  *(undefined4 *)(param_1 + 0x2a8) = uVar4;
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x290) = 0;
  *(undefined4 *)(param_1 + 0x2b4) = uVar4;
  *(undefined4 *)(param_1 + 0x2ac) = uVar4;
  *(undefined8 *)(param_1 + 0x2dc) = 0;
  *(undefined8 *)(param_1 + 0x2cc) = 0;
  *(undefined8 *)(param_1 + 0x2d4) = 0;
  if (((*PTR_DAT_04bb5928 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb5928);
  }
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)0x0;
  }
  else {
    uVar2 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bb5920);
    if ((uVar2 & 1) == 0) {
      plVar3 = (long *)0x0;
    }
  }
  *(long **)(param_1 + 0x2e8) = plVar3;
  return;
}

