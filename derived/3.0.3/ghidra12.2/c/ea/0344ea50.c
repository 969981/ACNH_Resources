
bool FUN_0344ea50(long *param_1,byte *param_2)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  byte local_28 [4];
  byte local_24 [4];
  
  puVar1 = PTR_DAT_04bb4f78;
  local_28[0] = *param_2;
  if (7 < local_28[0]) {
    local_28[0] = 0xff;
  }
  lVar4 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_28,1);
  bVar2 = false;
  if (lVar4 != 0) {
    if ((*(long **)(lVar4 + 0x18438) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x18438), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    lVar8 = *(long *)(*(long *)(lVar4 + 0x18420) + *(long *)(lVar4 + 0x18418));
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x18438) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x18438) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    if (lVar8 == 0) {
      bVar2 = false;
    }
    else {
      local_24[0] = *param_2;
      if (7 < local_24[0]) {
        local_24[0] = 0xff;
      }
      lVar4 = FUN_02583354(*(undefined8 *)puVar1,local_24,1);
      if (lVar4 == 0) {
        plVar7 = &DAT_0418ebd8;
      }
      else if ((*(long **)(lVar4 + 0x18438) == (long *)0x0) ||
              (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x18438), puVar5 == (undefined8 *)0x0)) {
        plVar7 = (long *)(*(long *)(lVar4 + 0x18420) + *(long *)(lVar4 + 0x18418));
      }
      else {
        uVar6 = (**(code **)*puVar5)();
        plVar7 = (long *)(*(long *)(lVar4 + 0x18420) + *(long *)(lVar4 + 0x18418));
        if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x18438) != 0)) &&
           (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x18438) + 8), puVar5 != (undefined8 *)0x0))
        {
          (**(code **)*puVar5)();
        }
      }
      bVar2 = *plVar7 == *param_1;
    }
  }
  return bVar2;
}

