
void FUN_02773d54(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  if (*(int *)(param_1 + 0xc) == 1) {
    plVar3 = (long *)(param_1 + 0x18);
    lVar2 = *plVar3;
  }
  else {
    plVar3 = (long *)(param_1 + 0x38);
    lVar2 = *plVar3;
  }
  uVar1 = (**(code **)(lVar2 + 0x10))(plVar3);
  if ((uVar1 & 1) != 0) {
    (**(code **)*plVar3)(plVar3,param_1);
  }
  if (((1 < *(uint *)(param_1 + 0xc)) &&
      (((*(uint *)(param_1 + 0xc) != 4 || ((*(uint *)(param_1 + 0x10) >> 1 & 1) == 0)) &&
       (DAT_055a1b78 != 0)))) && (*(char *)(DAT_055a1b78 + 0x3c) != '\0')) {
    *(undefined1 *)(DAT_055a1b78 + 0x3d) = 1;
    FUN_02833830();
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  return;
}

