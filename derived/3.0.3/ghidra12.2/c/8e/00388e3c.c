
void FUN_00388e3c(long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  ushort uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  FUN_00388d30();
  uVar2 = *(ushort *)(param_2 + 0x110);
  iVar1 = 0;
  if (uVar2 != 0) {
    iVar1 = uVar2 - 1;
  }
  if (1 < uVar2) {
    if (*(long *)(param_2 + 0x148) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*(long *)(param_2 + 0x148) + 0x98);
    }
    (**(code **)(*param_1 + 0xf0))(param_1,param_3,iVar1,uVar4);
    lVar3 = 0x110;
    if (*(char *)((long)param_1 + 0x117) != '\0') {
      lVar3 = 0x118;
    }
    (**(code **)(*param_1 + lVar3))
              (param_1,*(undefined8 *)(param_2 + 0xd8),0,*(undefined2 *)(param_2 + 0x112));
  }
  uVar5 = *(undefined8 *)(param_2 + 0x140);
  lVar3 = FUN_00367b30(0x50);
  if (lVar3 != 0) {
    FUN_00376d0c(lVar3,uVar5,param_3);
  }
  param_1[0x28] = lVar3;
  return;
}

