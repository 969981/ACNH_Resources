
void FUN_012e9810(long param_1,long *param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar2 = PTR_DAT_04bb2698;
  if (param_2 != (long *)0x0) {
    uVar1 = param_4 * param_3;
    uVar4 = (ulong)uVar1;
    if (0 < (int)uVar1) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        puVar3 = malloc(uVar4 << 3);
      }
      else {
        puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,uVar4 << 3,8);
      }
      if (puVar3 != (undefined8 *)0x0) {
        puVar5 = puVar3;
        do {
          puVar6 = puVar5 + 1;
          *puVar5 = 0xfffe;
          FUN_0277d4ac(puVar5);
          puVar5 = puVar6;
        } while (puVar6 != puVar3 + uVar4);
        *(uint *)(param_1 + 0x18) = uVar1;
        *(undefined8 **)(param_1 + 0x20) = puVar3;
      }
    }
    *(int *)(param_1 + 0x10) = param_3;
    *(int *)(param_1 + 0x14) = param_4;
    if (0 < (int)uVar1) {
      if (*(long *)puVar2 == 0) {
        puVar3 = malloc(uVar4 << 3);
      }
      else {
        puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,uVar4 << 3,8);
      }
      if (puVar3 != (undefined8 *)0x0) {
        puVar5 = puVar3;
        do {
          puVar6 = puVar5 + 1;
          *puVar5 = 0xfffe;
          FUN_0277d4ac(puVar5);
          puVar5 = puVar6;
        } while (puVar6 != puVar3 + uVar4);
        *(uint *)(param_1 + 0x48) = uVar1;
        *(undefined8 **)(param_1 + 0x50) = puVar3;
      }
    }
    *(int *)(param_1 + 0x40) = param_3;
    *(int *)(param_1 + 0x44) = param_4;
  }
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x74);
  return;
}

