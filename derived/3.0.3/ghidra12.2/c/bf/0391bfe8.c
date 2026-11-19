
void FUN_0391bfe8(long param_1,int *param_2,undefined8 param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  if ((*(byte *)(param_1 + 0x550) & 1) != 0) {
    if ((*(byte *)(param_1 + 0x550) >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x188) != 0) {
        if (*(long **)(param_1 + 400) != (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 400) + 8))();
        }
        *(undefined4 *)(param_1 + 0x180) = 0;
        *(undefined8 *)(param_1 + 0x188) = 0;
        *(undefined8 *)(param_1 + 400) = 0;
      }
      if ((*(long *)(param_1 + 0x1a0) != 0) && (*(long **)(param_1 + 0x1a8) != (long *)0x0)) {
        (**(code **)(**(long **)(param_1 + 0x1a8) + 8))();
      }
    }
    *(undefined4 *)(param_1 + 0x180) = 0;
    *(undefined4 *)(param_1 + 0x198) = 0;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 400) = 0;
    *(byte *)(param_1 + 0x550) = *(byte *)(param_1 + 0x550) & 0x78;
  }
  FUN_0390a734(param_1 + 0xe0,8,param_4,param_5,param_5,6,param_6,0,0,1);
  iVar5 = *param_2;
  iVar2 = param_2[1];
  uVar3 = *(undefined8 *)(param_2 + 2);
  uVar4 = *(undefined8 *)(param_2 + 4);
  if (*(int *)(param_1 + 0x120) != 0) {
    *(int *)(param_1 + 0x184) = iVar2;
    *(undefined8 *)(param_1 + 0x188) = uVar3;
    *(undefined8 *)(param_1 + 400) = uVar4;
    uVar1 = (iVar5 + *(int *)(param_1 + 0x11c)) - 1U & -*(int *)(param_1 + 0x11c);
    *(uint *)(param_1 + 0x180) = uVar1;
    iVar5 = uVar1 + *(int *)(param_1 + 0x120);
  }
  if (*(int *)(param_1 + 0x124) != 0) {
    *(int *)(param_1 + 0x19c) = iVar2;
    *(undefined8 *)(param_1 + 0x1a0) = uVar3;
    *(undefined8 *)(param_1 + 0x1a8) = uVar4;
    *(uint *)(param_1 + 0x198) =
         (iVar5 + *(int *)(param_1 + 0x11c)) - 1U & -*(int *)(param_1 + 0x11c);
  }
  FUN_0391be20(param_1);
  *(byte *)(param_1 + 0x550) = *(byte *)(param_1 + 0x550) | 4;
  return;
}

