
/* WARNING: Removing unreachable block (ram,0x03d48988) */

void FUN_03d488f0(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long local_60;
  uint local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_44;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 0x20) + (long)(int)uVar3 * 8);
      if (((lVar4 != 0) && (param_2 != 0)) && (*(long *)(lVar4 + 0x10) == param_2)) {
        local_44 = 1;
        *(undefined4 *)(lVar4 + 4) = *(undefined4 *)(param_2 + 0x14a0);
        *(undefined4 *)(lVar4 + 8) = *(undefined4 *)(param_2 + 0x14a4);
        uStack_54 = 0;
        local_50 = 0;
        local_60 = param_2;
        local_58 = uVar3;
        (*(code *)**(undefined8 **)(param_2 + 0x40))((undefined8 *)(param_2 + 0x40),1,&local_60);
        *(undefined8 *)(lVar4 + 0x10) = 0;
        uVar2 = *(uint *)(param_1 + 0x18);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  plVar1 = (long *)(*(int *)(param_1 + 0x14) + param_2);
  if (*plVar1 != 0) {
    *(long *)(*plVar1 + 8) = plVar1[1];
  }
  if ((long *)plVar1[1] != (long *)0x0) {
    *(long *)plVar1[1] = *plVar1;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}

