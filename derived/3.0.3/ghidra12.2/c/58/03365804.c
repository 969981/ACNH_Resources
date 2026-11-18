
void FUN_03365804(long param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  uint uVar6;
  undefined *local_40;
  char *pcStack_38;
  
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "DoneCharacterCreation";
  iVar1 = FUN_0274bce0(param_2,&local_40);
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  else {
    bVar5 = *param_2;
    uVar6 = 1;
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    local_40 = (undefined *)CONCAT71(local_40._1_7_,bVar5);
    lVar3 = FUN_025830c0(DAT_055021a0,&local_40,1);
    if (lVar3 != 0) {
      if ((*(long **)(lVar3 + 0x17f68) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x17f68), puVar4 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar4)();
        uVar2 = uVar2 ^ 1;
      }
      uVar6 = *(uint *)(*(long *)(lVar3 + 0x17f50) + *(long *)(lVar3 + 0x17f48) + 0x18);
      if (1 < uVar6) {
        uVar6 = 0;
      }
      if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x17f68) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x17f68) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
    }
  }
  local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar6);
  if (*(uint *)(param_1 + 0x3c) != uVar6) {
    *(uint *)(param_1 + 0x3c) = uVar6;
    FUN_033654d4(param_1);
  }
  return;
}

