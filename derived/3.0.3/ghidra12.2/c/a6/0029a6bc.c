
void FUN_0029a6bc(int *param_1,long param_2,long param_3)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  if (*(int *)(param_2 + 0x110) == 1) {
LAB_0029a78c:
    local_44 = 0x10c08;
  }
  else {
    if (*(int *)(param_2 + 0x140) != 0) {
      FUN_00220f24(param_2 + 0x110);
      *(undefined4 *)(param_2 + 0x140) = 0;
    }
    if (*(long **)(param_2 + 0x178) != (long *)0x0) {
      (**(code **)(**(long **)(param_2 + 0x178) + 0x40))();
    }
    if (param_3 != 0) {
      if ((*(int *)(param_2 + 0xd0) != 1) ||
         (sVar1 = (**(code **)(**(long **)(param_2 + 0x178) + 0x38))(), sVar1 == 0))
      goto LAB_0029a78c;
      iVar2 = FUN_002a38a4(param_3);
      if ((iVar2 == 2) || (iVar2 = FUN_002a38a4(param_3), iVar2 == 3)) {
LAB_0029a7cc:
        FUN_00291468(param_1,*(undefined8 *)(param_2 + 0x28),param_2 + 0x110,
                     *(undefined8 *)(param_2 + (ulong)*(byte *)(param_2 + 0x162) * 8 + 0x168),
                     param_3);
        if (*param_1 == 0) {
          FUN_002211bc(*(undefined8 *)(param_2 + 0x28),0);
          *(undefined4 *)(param_2 + 0x140) = 2;
          return;
        }
        return;
      }
      uVar3 = (**(code **)(**(long **)(param_2 + 0x178) + 0x38))();
      uVar4 = FUN_002a38b4(param_3);
      if (uVar4 <= (uVar3 & 0xffff)) goto LAB_0029a7cc;
    }
    local_44 = 0x10c07;
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  FUN_002296c4(param_1,&local_44);
  return;
}

