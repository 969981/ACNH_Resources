
void FUN_02847bbc(long param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong local_28;
  
  if ((*(char *)(param_1 + 299) == '\x02' && *(char *)(param_1 + 0x132) == '\0') &&
     (local_28 = *(ulong *)(param_1 + 0x120), (local_28 & 0xffff) != 0)) {
    lVar7 = *(long *)PTR_DAT_04bb32e8;
    lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
    lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar7 + 0x4060));
    if ((lVar4 <= lVar5) &&
       ((lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar7 + 0x4060)), lVar5 != lVar4 &&
        (*(char *)(param_1 + 0x131) != '\x01')))) {
      cVar1 = *(char *)(param_1 + 0x128);
      lVar4 = FUN_0265c2a0((int)cVar1);
      if (lVar4 != 0) {
        if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
           (puVar6 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar6 == (undefined8 *)0x0)) {
          uVar2 = 1;
        }
        else {
          uVar2 = (**(code **)*puVar6)();
          uVar2 = uVar2 ^ 1;
        }
        iVar3 = FUN_026b318c(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8),param_1 + 0xfc);
        if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
           (puVar6 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar6 != (undefined8 *)0x0)) {
          (**(code **)*puVar6)();
        }
        if (-1 < iVar3) {
          FUN_021d7650((int)cVar1,iVar3,0xfffffffb,1);
        }
      }
    }
  }
  FUN_0285090c(param_1 + 0xfc,0);
  return;
}

