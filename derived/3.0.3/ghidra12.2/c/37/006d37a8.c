
uint FUN_006d37a8(long *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  EventType *pEVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 local_40;
  undefined4 local_38;
  uint local_14;
  
  plVar1 = param_1 + 2;
  pEVar4 = (EventType *)FUN_0069157c(plVar1);
  uVar2 = nn::os::TryWaitEvent(pEVar4);
  if ((uVar2 & 1) == 0) {
    if (*(char *)((long)param_1 + 0x5a) != '\0') {
      FUN_0069156c(plVar1);
    }
  }
  else {
    local_14 = FUN_0069155c(plVar1);
    uVar3 = FUN_00691564(plVar1);
    uVar5 = (**(code **)(*param_1 + 0x28))(param_1,&local_14,uVar3);
    if ((uVar5 & 1) == 0) {
      if (((local_14 & 0x1ff) == 0xdb) && ((local_14 >> 9 & 0x1ffe) - 10 < 10)) {
        puVar6 = &DAT_05ae6798;
      }
      else {
        lVar7 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x30);
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)&local_40,(Result *)&local_14);
        if ((*(int *)(lVar7 + 0x24) < 2) &&
           ((*(int *)(lVar7 + 0x24) < 1 || (1 < *(int *)(lVar7 + 0x24))))) {
          *(int *)(lVar7 + 0x3c) = (int)param_1[1];
          *(undefined8 *)(lVar7 + 0x34) = 0x150000000c;
          *(undefined8 *)(lVar7 + 0x28) = local_40;
          *(undefined4 *)(lVar7 + 0x30) = local_38;
          *(undefined4 *)(lVar7 + 0x24) = 1;
        }
        puVar6 = &DAT_05ae6794;
      }
      *(undefined1 *)(param_1 + 0xb) = *puVar6;
    }
    else {
      *(undefined *)(param_1 + 0xb) = *PTR_DAT_04bb2958;
      (**(code **)(*param_1 + 0x30))(param_1);
    }
  }
  return uVar2 & 1;
}

