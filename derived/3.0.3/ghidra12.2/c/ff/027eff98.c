
void FUN_027eff98(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((((DAT_05574040 != 0) && (*(long *)(DAT_05574040 + 0x4c0) != 0)) &&
      (plVar4 = *(long **)(*(long *)(DAT_05574040 + 0x10) + 0x180), plVar4 != (long *)0x0)) &&
     (lVar5 = (**(code **)(*plVar4 + 0x30))(), lVar5 != 0)) {
    if ((*(long *)(lVar5 + 0x28) == 0) ||
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 0x10), puVar6 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar6)();
      uVar3 = uVar3 ^ 1;
    }
    uVar7 = FUN_0272eca4(param_1 + 0x36904,1);
    if ((*(long *)(lVar5 + 0x28) != 0) &&
       (plVar4 = *(long **)(*(long *)(lVar5 + 0x28) + 0x20), plVar4 != (long *)0x0)) {
      local_58 = *(undefined8 *)(lVar5 + 8);
      uStack_50 = *(undefined8 *)(lVar5 + 0x10);
      local_48 = 0x74080;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
    }
    lVar1 = *(long *)(lVar5 + 8);
    lVar2 = *(long *)(lVar5 + 0x10);
    uVar8 = nn::time::IsValidDate
                      ((uint)uVar7 & 0xffff,(uint)uVar7 >> 0x10 & 0xff,
                       (uint)((ulong)uVar7 >> 0x18) & 0xff);
    if ((uVar8 & 1) != 0) {
      lVar2 = lVar2 + lVar1;
      *(short *)(lVar2 + 0x74072) = (short)uVar7;
      *(char *)(lVar2 + 0x74074) = (char)((ulong)uVar7 >> 0x10);
      *(char *)(lVar2 + 0x74075) = (char)((ulong)uVar7 >> 0x18);
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 0x18), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
  }
  return;
}

