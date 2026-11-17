
void FUN_02f262f4(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined *local_40;
  char *pcStack_38;
  
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "MainmenuMap";
  iVar1 = FUN_0274bce0(param_1 + 0x1f8,&local_40);
  *(bool *)(param_1 + 0x239) = iVar1 != 0;
  bVar6 = *(byte *)(param_1 + 0x1f8);
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  local_40 = (undefined *)CONCAT71(local_40._1_7_,bVar6);
  lVar2 = FUN_025830c0(DAT_055021a0,&local_40,1);
  if (lVar2 == 0) {
    uVar7 = 0;
  }
  else {
    lVar5 = lVar2 + 0x194b0;
    if (*(long *)(lVar2 + 0x194b8) == 0) {
      lVar5 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((*(long **)(lVar5 + 0x85d0) == (long *)0x0) ||
       (puVar3 = (undefined8 *)**(long **)(lVar5 + 0x85d0), puVar3 == (undefined8 *)0x0)) {
      uVar7 = *(undefined1 *)(*(long *)(lVar5 + 0x85b8) + *(long *)(lVar5 + 0x85b0));
    }
    else {
      uVar4 = (**(code **)*puVar3)();
      uVar7 = *(undefined1 *)(*(long *)(lVar5 + 0x85b8) + *(long *)(lVar5 + 0x85b0));
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar5 + 0x85d0) != 0)) &&
         (puVar3 = *(undefined8 **)(*(long *)(lVar5 + 0x85d0) + 8), puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)();
      }
    }
  }
  *(undefined1 *)(param_1 + 0x238) = uVar7;
  return;
}

