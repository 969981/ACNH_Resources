
void FUN_02feea68(long *param_1,short *param_2,byte *param_3)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  byte bVar8;
  undefined *local_1710;
  char *pcStack_1708;
  undefined1 auStack_16fa [2];
  undefined1 auStack_16f8 [5796];
  byte local_54 [4];
  
  puVar2 = PTR_DAT_04bb3170;
  bVar8 = *PTR_DAT_04bb32e0;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  local_54[0] = *param_3;
  if (7 < local_54[0]) {
    local_54[0] = 0xff;
  }
  if (bVar8 != local_54[0]) {
    if ((*param_2 != *(short *)PTR_DAT_04bb3170) &&
       (lVar5 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_54,1), lVar5 != 0)) {
      if ((*(long **)(lVar5 + 0x17bb0) == (long *)0x0) ||
         (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x17bb0), puVar6 == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar6)();
        uVar3 = uVar3 ^ 1;
      }
      lVar7 = *(long *)(lVar5 + 0x17b90);
      lVar1 = *(long *)(lVar5 + 0x17b98);
      FUN_007ef010(auStack_16fa,param_2);
      FUN_007e4920(auStack_16f8,auStack_16fa);
      FUN_007e64e0(auStack_16f8,lVar1 + lVar7);
      FUN_02582a24(param_3);
      uVar4 = FUN_02582d8c(param_3,1);
      if (((uVar4 < 8) &&
          (lVar7 = *(long *)PTR_DAT_04bb4fb8,
          *(char *)(lVar7 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')) &&
         (*(int *)(lVar7 + (ulong)uVar4 * 0x13f0 + 0x13d0) == 0)) {
        uVar4 = (uint)*(byte *)(lVar7 + (ulong)uVar4 * 0x13f0 + 0x13d5);
      }
      else {
        uVar4 = 0xffffffff;
      }
      local_1710 = (undefined *)CONCAT44(local_1710._4_4_,uVar4);
      FUN_007e5260(auStack_16f8,&local_1710);
      uVar4 = FUN_007e87a0(auStack_16f8);
      FUN_007e7e80(auStack_16f8);
      FUN_007e5ab0(auStack_16f8,0);
      (**(code **)(*param_1 + 0x80))(param_1);
      (**(code **)(*param_1 + 0x98))(param_1,param_2,param_3,uVar4 & 1);
      if (((uVar4 & 1) != 0) && (*param_2 != *(short *)puVar2)) {
        local_1710 = PTR_DAT_04bb2020 + 0x10;
        pcStack_1708 = "LE_MakeMydesign";
        FUN_01b5dfa0(&local_1710,param_3);
      }
      FUN_0344d5a0(param_2);
      if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x17bb0) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x17bb0) + 8), puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
      }
    }
  }
  return;
}

