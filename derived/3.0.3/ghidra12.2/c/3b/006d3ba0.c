
void FUN_006d3ba0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 != 0) {
    lVar4 = *(long *)PTR_DAT_04bb29d0;
    do {
      lVar5 = *(long *)(param_1 + 0x20);
      if (iVar3 < 1) {
        lVar5 = 0;
      }
      lVar6 = lVar5 - *(int *)(param_1 + 0x2c);
      if (lVar5 != 0 && lVar6 != 0) {
        *(undefined1 *)(*(long *)(lVar6 + 0x10) + 0x5a) = 1;
        uVar2 = FUN_006d37a8(*(undefined8 *)(lVar6 + 0x10));
        if ((uVar2 & 1) == 0) {
          nn::os::ConvertToTimeSpan(lVar4 / 500);
          nn::os::SleepThread();
        }
        else {
          plVar1 = (long *)(lVar6 + *(int *)(param_1 + 0x2c));
          if (*plVar1 != 0) {
            *(long *)(*plVar1 + 8) = plVar1[1];
          }
          if ((long *)plVar1[1] != (long *)0x0) {
            *(long *)plVar1[1] = *plVar1;
          }
          *plVar1 = 0;
          plVar1[1] = 0;
          plVar1 = (long *)(lVar6 + *(int *)(param_1 + 0x44));
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
          lVar5 = *(long *)(param_1 + 0x30);
          *(long **)(param_1 + 0x30) = plVar1;
          *plVar1 = lVar5;
          plVar1[1] = param_1 + 0x30;
          if (lVar5 != 0) {
            *(long **)(lVar5 + 8) = plVar1;
          }
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        }
      }
      iVar3 = *(int *)(param_1 + 0x28);
    } while (iVar3 != 0);
  }
  return;
}

