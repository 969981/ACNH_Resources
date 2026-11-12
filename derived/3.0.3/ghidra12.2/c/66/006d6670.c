
void FUN_006d6670(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  EventType *pEVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_60 [16];
  
  lVar2 = nn::os::GetSystemTick();
  pEVar3 = (EventType *)FUN_0069157c(param_2);
  lVar7 = *(long *)PTR_DAT_04bb29d0;
  uVar4 = nn::os::TryWaitEvent(pEVar3);
  puVar1 = PTR_DAT_04bcb7d8;
  do {
    if ((uVar4 & 1) != 0) {
      return;
    }
    if (*(char *)(param_1 + 0x4e) == '\0') {
      if (*(char *)(param_1 + 0x4d) == '\0') {
        if (0 < *(int *)(param_1 + 0x48)) {
          lVar6 = nn::os::GetSystemTick();
          lVar5 = 0;
          if (lVar7 != 0) {
            lVar5 = (lVar6 - lVar2) / lVar7;
          }
          if (*(int *)(param_1 + 0x48) <= lVar5) goto LAB_006d673c;
        }
      }
      else {
LAB_006d673c:
        FUN_0069156c(param_2);
        *(undefined1 *)(param_1 + 0x4e) = 1;
      }
    }
    lVar5 = *(long *)puVar1;
    if ((*(int *)(*(long *)(lVar5 + 0x60) + 0x5c) == 1) &&
       (*(char *)(*(long *)(lVar5 + 0x38) + 10) != '\0')) {
      FUN_0389df38(auStack_60);
      lVar5 = *(long *)puVar1;
    }
    nn::os::ConvertToTimeSpan
              ((long)(lVar7 * (ulong)*(uint *)(*(long *)(lVar5 + 0x18) + 0x70)) / 1000);
    nn::os::SleepThread();
    uVar4 = nn::os::TryWaitEvent(pEVar3);
  } while( true );
}

