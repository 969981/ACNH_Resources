
void FUN_0266fb20(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (DAT_05574040 != 0) {
    lVar2 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
    if (lVar2 != 0) {
      if ((*(long *)(&LAB_00284e28 + lVar2) == 0) ||
         (puVar3 = *(undefined8 **)(*(long *)(&LAB_00284e28 + lVar2) + 0x10),
         puVar3 == (undefined8 *)0x0)) {
        uVar1 = 1;
      }
      else {
        uVar1 = (**(code **)*puVar3)();
        uVar1 = uVar1 ^ 1;
      }
      lVar6 = *(long *)PTR_DAT_04bb32e8;
      local_38 = *(long *)(lVar6 + 0x20) / 1000000000 + *(long *)(lVar6 + 8) +
                 (((*(long *)(lVar6 + 0x10) + (long)*(int *)(lVar6 + 0x38)) - *(long *)(lVar6 + 8))
                 * 1000000000) / 1000000000;
      local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
      if ((*(long *)(&LAB_00284e28 + lVar2) != 0) &&
         (plVar4 = *(long **)(*(long *)(&LAB_00284e28 + lVar2) + 0x20), plVar4 != (long *)0x0)) {
        local_38 = *(long *)(&LAB_00284e08 + lVar2);
        local_30 = *(undefined8 *)(&LAB_00284e10 + lVar2);
        uStack_28 = 0x28370;
        (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
      }
      uVar5 = FUN_0280f530(*(long *)(&LAB_00284e10 + lVar2) + *(long *)(&LAB_00284e08 + lVar2),
                           &local_40,&local_38);
      FUN_0266f010(uVar5,&local_40);
      if ((((uVar1 & 1) == 0) && (*(long *)(&LAB_00284e28 + lVar2) != 0)) &&
         (puVar3 = *(undefined8 **)(*(long *)(&LAB_00284e28 + lVar2) + 0x18),
         puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)();
      }
    }
  }
  return;
}

