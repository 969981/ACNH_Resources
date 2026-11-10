
void FUN_00288f40(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  
  lVar1 = param_1 + 0x70;
  *(ushort *)(param_1 + 0xd0) = *(ushort *)(param_1 + 0xd0) | 2;
  if (*(long *)(param_1 + 0x78) != lVar1) {
    uVar3 = *(uint *)(param_1 + 0x84);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x78) - (long)(int)uVar3);
    uVar4 = (ulong)uVar3;
    if (param_2 == (undefined8 *)0x0 && param_3 == (undefined8 *)0x0) {
      do {
        while (puVar2[1] != 0) {
          (**(code **)*puVar2)();
          uVar3 = *(uint *)(param_1 + 0x84);
          uVar4 = (ulong)(int)uVar3;
          puVar2 = (undefined8 *)(*(long *)(param_1 + 0x78) - uVar4);
          if (puVar2 == (undefined8 *)(lVar1 - uVar4)) goto LAB_00289058;
        }
        puVar2 = (undefined8 *)(*(long *)((long)puVar2 + (long)(int)uVar3 + 8) + (long)(int)-uVar3);
      } while (puVar2 != (undefined8 *)(-(int)uVar4 + lVar1));
    }
    else {
      do {
        while ((puVar2[1] != 0 && param_2 <= puVar2) && puVar2 < param_3) {
          (**(code **)*puVar2)();
          uVar3 = *(uint *)(param_1 + 0x84);
          uVar4 = (ulong)(int)uVar3;
          puVar2 = (undefined8 *)(*(long *)(param_1 + 0x78) - uVar4);
          if (puVar2 == (undefined8 *)(lVar1 - uVar4)) goto LAB_00289058;
        }
        puVar2 = (undefined8 *)(*(long *)((long)puVar2 + (long)(int)uVar3 + 8) + (long)(int)-uVar3);
      } while (puVar2 != (undefined8 *)(-(int)uVar4 + lVar1));
    }
  }
LAB_00289058:
  *(ushort *)(param_1 + 0xd0) = *(ushort *)(param_1 + 0xd0) & 0xfffd;
  return;
}

