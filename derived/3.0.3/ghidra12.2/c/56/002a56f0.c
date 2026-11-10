
void FUN_002a56f0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  *param_1 = (long)(PTR_DAT_04bce078 + 0x10);
  uVar1 = (ulong)*(ushort *)((long)param_1 + 0x6ae);
  if (*(ushort *)((long)param_1 + 0x6ae) != 0) {
    uVar3 = 0;
    plVar4 = param_1 + 8;
    do {
      lVar2 = *plVar4;
      if (lVar2 != 0) {
        FUN_00285e00(lVar2);
        FUN_00285dc0(lVar2);
        uVar1 = (ulong)*(ushort *)((long)param_1 + 0x6ae);
        *plVar4 = 0;
      }
      uVar3 = uVar3 + 1;
      *(undefined4 *)(plVar4 + 1) = 0;
      plVar4 = plVar4 + 5;
    } while (uVar3 < uVar1);
  }
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    FUN_00285e00(lVar2);
    FUN_00285dc0(lVar2);
    param_1[4] = 0;
  }
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_002adad0(param_1);
  return;
}

