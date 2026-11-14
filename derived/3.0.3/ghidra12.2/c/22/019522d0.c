
bool FUN_019522d0(void)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *local_30;
  undefined2 local_28;
  
  local_30 = PTR_DAT_04bb7648 + 0x10;
  local_28 = *DAT_05ab5ea8;
  lVar4 = FUN_03775a30(&local_30);
  if (lVar4 == 0) {
    bVar2 = false;
  }
  else {
    if ((*(long **)(lVar4 + 0x108) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x108), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    lVar1 = *(long *)(lVar4 + 0xf0) + *(long *)(lVar4 + 0xe8);
    if ((((((*(short *)(lVar1 + 0x4848) == -2) || (*(short *)(lVar1 + 0x4850) == -2)) ||
          (*(short *)(lVar1 + 0x4858) == -2)) ||
         (((*(short *)(lVar1 + 0x4860) == -2 || (*(short *)(lVar1 + 0x4868) == -2)) ||
          ((*(short *)(lVar1 + 0x4870) == -2 ||
           ((*(short *)(lVar1 + 0x4878) == -2 || (*(short *)(lVar1 + 0x4880) == -2)))))))) ||
        (*(short *)(lVar1 + 0x4888) == -2)) ||
       ((*(short *)(lVar1 + 0x4890) == -2 || (*(short *)(lVar1 + 0x4898) == -2)))) {
      bVar2 = false;
    }
    else {
      bVar2 = *(short *)(lVar1 + 0x48a0) != -2;
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x108) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x108) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  return bVar2;
}

