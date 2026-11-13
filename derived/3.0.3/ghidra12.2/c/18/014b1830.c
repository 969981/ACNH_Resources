
void FUN_014b1830(long param_1,undefined2 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_16fa [2];
  undefined1 auStack_16f8 [8];
  long local_16f0;
  undefined *local_58;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  long local_48;
  
  local_50 = *param_2;
  *(undefined2 *)(param_1 + 0x40) = local_50;
  local_4e = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0x42) = local_4e;
  local_4d = *(undefined1 *)((long)param_2 + 3);
  local_48 = 0;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  *(undefined1 *)(param_1 + 0x43) = local_4d;
  local_4c = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 0x44) = local_4c;
  puVar1 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar1 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      lVar7 = *(long *)PTR_DAT_04bc0428;
      uVar2 = FUN_0277d6c4((undefined2 *)(param_1 + 0x40));
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
         (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8), lVar7 != 0)) {
        local_48 = lVar7;
      }
    }
  }
  iVar3 = FUN_01afcfa0(&local_58);
  if (((iVar3 != 0) && (puVar4 = (ushort *)FUN_01afd600(&local_58), puVar4 != (ushort *)0x0)) &&
     ((*puVar4 & 0x18) == 0x10)) {
    FUN_01afd2f0(auStack_16fa,&local_58);
    FUN_007e4920(auStack_16f8,auStack_16fa);
    if ((*(long **)(local_16f0 + 0x28) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(local_16f0 + 0x28), puVar5 == (undefined8 *)0x0)) {
      FUN_027c1640(param_1 + 0x48,*(long *)(local_16f0 + 0x10) + *(long *)(local_16f0 + 8));
    }
    else {
      uVar6 = (**(code **)*puVar5)();
      FUN_027c1640(param_1 + 0x48,*(long *)(local_16f0 + 0x10) + *(long *)(local_16f0 + 8));
      if ((((uVar6 & 1) != 0) && (*(long *)(local_16f0 + 0x28) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(local_16f0 + 0x28) + 8), puVar5 != (undefined8 *)0x0))
      {
        (**(code **)*puVar5)();
      }
    }
  }
  return;
}

