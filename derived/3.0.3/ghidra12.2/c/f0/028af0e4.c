
void FUN_028af0e4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *local_60;
  char *pcStack_58;
  undefined *local_50;
  char *pcStack_48;
  
  lVar6 = *(long *)PTR_DAT_04bb46b0;
  if (lVar6 != 0) {
    puVar7 = *(undefined8 **)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar7 + 0x38))();
      lVar6 = 0;
      if (lVar4 != 0) {
        lVar6 = lVar4 + 0x70;
      }
      goto LAB_028af160;
    }
    if (puVar7 != (undefined8 *)0x0) {
      lVar6 = 0;
      if ((long *)puVar7[0x26] != (long *)0x0) {
        lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
      }
      goto LAB_028af160;
    }
  }
  lVar6 = 0;
LAB_028af160:
  if ((*(long **)(lVar6 + 0x1a0b70) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x1a0b70), puVar7 == (undefined8 *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (**(code **)*puVar7)();
    uVar3 = uVar3 ^ 1;
  }
  uVar2 = *(uint *)(*(long *)(lVar6 + 0x1a0b58) + *(long *)(lVar6 + 0x1a0b50));
  if (3 < uVar2) {
    uVar2 = 0;
  }
  local_50 = (undefined *)CONCAT44(local_50._4_4_,uVar2);
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar6 + 0x1a0b70) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x1a0b70) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  if (2 < (int)uVar2) {
    uVar5 = *(ulong *)(param_2 + 0x10);
    uVar8 = *(undefined8 *)PTR_DAT_04bb32f0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "Carnival";
    local_50 = puVar1;
    uVar5 = FUN_00879dd0(uVar8,&local_50,uVar5,uVar5 >> 0x10,uVar5 >> 0x18,0);
    if ((uVar5 & 1) == 0) {
      uVar5 = *(ulong *)(param_2 + 0x10);
      pcStack_58 = "Carnival";
      local_60 = puVar1;
      uVar5 = FUN_0087a8f0(uVar8,&local_60,uVar5,uVar5 >> 0x10,uVar5 >> 0x18,0);
      if ((uVar5 & 1) == 0) {
        return;
      }
    }
    FUN_028ad3e0(param_1,param_2,0x120);
  }
  return;
}

