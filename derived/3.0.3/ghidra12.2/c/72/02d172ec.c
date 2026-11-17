
undefined8 FUN_02d172ec(long param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined4 local_70 [2];
  long local_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_34;
  
  uVar4 = *(uint *)(param_1 + 0xe8);
  if (0 < (int)uVar4) {
    uVar3 = nn::os::GetSystemTick();
    uVar2 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
    uVar3 = uVar2 ^ uVar2 * 0x800;
    uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
    uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
    uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
    uVar6 = (ulong)uVar4 * (ulong)(uVar3 >> 8 ^ uVar2 >> 0x13 ^ uVar3 ^ uVar2);
    uVar4 = (uint)(uVar6 >> 0x20);
    *(uint *)(param_1 + 0x280) = uVar4;
    if (*(uint *)(param_1 + 0xe8) <= uVar4) {
      *(undefined8 *)(param_1 + 0xe0) = 0;
      return 0;
    }
    lVar7 = *(long *)(*(long *)(param_1 + 0xf0) + (uVar6 >> 0x20) * 8);
    *(long *)(param_1 + 0xe0) = lVar7;
    if (lVar7 != 0) {
      plVar1 = (long *)(param_1 + 0x138);
      (**(code **)(*(long *)(param_1 + 0x138) + 0x38))(plVar1);
      lVar7 = *(long *)(param_1 + 0xe0);
      if ((*(long **)(lVar7 + 0x28) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar7 + 0x28), puVar5 == (undefined8 *)0x0)) {
        uVar4 = 1;
      }
      else {
        uVar4 = (**(code **)*puVar5)();
        uVar4 = uVar4 ^ 1;
      }
      local_68 = *(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 0x1190;
      local_70[0] = 0x30;
      (**(code **)(*plVar1 + 0x38))(plVar1);
      local_48 = 0;
      uStack_40 = 0;
      local_50 = 0;
      local_38 = 1;
      local_34 = 0;
      local_60 = PTR_DAT_04bc0cd8 + 0x10;
      uStack_58 = 0;
      FUN_02906b00(&local_60,plVar1,local_70);
      if ((uVar4 & 1) != 0) {
        return 1;
      }
      if (*(long *)(lVar7 + 0x28) == 0) {
        return 1;
      }
      puVar5 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8);
      if (puVar5 == (undefined8 *)0x0) {
        return 1;
      }
      (**(code **)*puVar5)();
      return 1;
    }
  }
  return 0;
}

