
bool FUN_0336591c(long param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  uint uVar7;
  undefined *local_40;
  char *pcStack_38;
  
  uVar1 = *(uint *)(param_1 + 0x3c);
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "DoneCharacterCreation";
  iVar2 = FUN_0274bce0(param_2,&local_40);
  if (iVar2 == 0) {
    uVar7 = 1;
  }
  else {
    bVar6 = *param_2;
    uVar7 = 1;
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    local_40 = (undefined *)CONCAT71(local_40._1_7_,bVar6);
    lVar4 = FUN_025830c0(DAT_055021a0,&local_40,1);
    if (lVar4 != 0) {
      if ((*(long **)(lVar4 + 0x17f68) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x17f68), puVar5 == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar5)();
        uVar3 = uVar3 ^ 1;
      }
      uVar7 = *(uint *)(*(long *)(lVar4 + 0x17f50) + *(long *)(lVar4 + 0x17f48) + 0x18);
      if (1 < uVar7) {
        uVar7 = 0;
      }
      if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x17f68) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17f68) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
    }
  }
  return uVar1 != uVar7;
}

