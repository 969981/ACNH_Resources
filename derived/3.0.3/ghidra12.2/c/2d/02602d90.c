
void FUN_02602d90(long param_1)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *local_40;
  char *pcStack_38;
  
  lVar4 = *(long *)PTR_DAT_04bb46b0;
  if (lVar4 != 0) {
    puVar5 = *(undefined8 **)(lVar4 + 0x10);
    if ((*(byte *)(lVar4 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
      if (lVar4 == 0) {
        return;
      }
      lVar4 = lVar4 + 0x70;
    }
    else {
      if (puVar5 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar5[0x26] == (long *)0x0) {
        return;
      }
      lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
      if (lVar4 == 0) {
        return;
      }
    }
    if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    lVar1 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8);
    cVar2 = *(long *)(lVar1 + 0x1e33f8) != 0 || *(long *)(lVar1 + 0x1e3400) != 0;
    if (*(long *)(lVar1 + 0x1e33b0) != 0 || *(long *)(lVar1 + 0x1e33b8) != 0) {
      cVar2 = cVar2 + '\x01';
    }
    if (*(long *)(lVar1 + 0x1e3440) != 0 || *(long *)(lVar1 + 0x1e3448) != 0) {
      cVar2 = cVar2 + '\x01';
    }
    if (*(long *)(lVar1 + 0x1e3488) != 0 || *(long *)(lVar1 + 0x1e3490) != 0) {
      cVar2 = cVar2 + '\x01';
    }
    if (*(long *)(lVar1 + 0x1e34d0) != 0 || *(long *)(lVar1 + 0x1e34d8) != 0) {
      cVar2 = cVar2 + '\x01';
    }
    if (*(long *)(lVar1 + 0x1e3518) != 0 || *(long *)(lVar1 + 0x1e3520) != 0) {
      cVar2 = cVar2 + '\x01';
    }
    if (*(long *)(lVar1 + 0x1e3560) != 0 || *(long *)(lVar1 + 0x1e3568) != 0) {
      cVar2 = cVar2 + '\x01';
    }
    if (*(long *)(lVar1 + 0x1e35a8) != 0 || *(long *)(lVar1 + 0x1e35b0) != 0) {
      cVar2 = cVar2 + '\x01';
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "PlayerVillagerNum";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_40,cVar2);
    }
  }
  return;
}

