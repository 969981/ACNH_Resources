
void FUN_030bfe80(long param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  plVar6 = *(long **)(param_1 + 0x388);
  if (plVar6 != (long *)0x0) {
    iVar3 = (**(code **)(*plVar6 + 0x80))(plVar6,0);
    iVar4 = (**(code **)(*plVar6 + 0x80))(plVar6,1);
    lVar5 = *(long *)(plVar6[0xd] + (long)(iVar3 + (int)plVar6[0xc] * iVar4) * 0x18);
    if ((lVar5 != 0) && (*(long *)(lVar5 + 8) != 0)) {
      uVar1 = (param_2 ^ 0xffffffff) & 1;
      plVar6 = *(long **)(param_1 + 0x388);
      if ((char)plVar6[4] != '\0') {
        puVar2 = (uint *)((long)plVar6 + 0x24);
        if (*(char *)((long)plVar6 + 0x21) != '\0') {
          puVar2 = (uint *)(plVar6 + 5);
        }
        if (*puVar2 == uVar1) {
          return;
        }
      }
      *(undefined2 *)(plVar6 + 4) = 1;
      *(undefined4 *)((long)plVar6 + 0x2c) = 0x80000000;
      plVar6[6] = 0;
      plVar6[7] = 0;
      *(uint *)((long)plVar6 + 0x24) = uVar1;
      *(undefined4 *)(plVar6 + 8) = 0;
      (**(code **)(*plVar6 + 0x28))(plVar6,uVar1);
      if ((long *)plVar6[10] != plVar6 + 9) {
        lVar5 = (long)*(int *)((long)plVar6 + 0x5c);
        puVar7 = (undefined8 *)(plVar6[10] - lVar5);
        do {
          (**(code **)*puVar7)(puVar7,*(undefined4 *)((long)plVar6 + 0x24));
          puVar7 = (undefined8 *)(*(long *)((long)puVar7 + lVar5 + 8) - lVar5);
        } while (puVar7 != (undefined8 *)((long)(plVar6 + 9) - lVar5));
      }
      if (*(long *)(param_1 + 0x3c0) != 0) {
        *(uint *)(*(long *)(param_1 + 0x3c0) + 0x40) = (uint)(uVar1 != 0);
      }
    }
  }
  return;
}

