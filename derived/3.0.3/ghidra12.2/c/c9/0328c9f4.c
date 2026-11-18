
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0328c9f4(long param_1,long param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined **local_40;
  long lStack_38;
  
  if (*(char *)(param_2 + 0x57c) == '\x02') {
    uVar1 = *(ushort *)(param_2 + 0x578) & 0xfff7 | 4;
    if (*(char *)(param_1 + 0x48) != '\0') {
      uVar1 = *(ushort *)(param_2 + 0x578) | 0xc;
    }
    *(ushort *)(param_2 + 0x578) = uVar1;
  }
  local_40 = &PTR_LAB_04b17e48;
  plVar3 = *(long **)(param_2 + 0x4e8);
  lStack_38 = param_1;
  if ((plVar3 == (long *)0x0) ||
     ((**(code **)(*plVar3 + 8))(plVar3), &local_40 != (undefined ***)0x0)) {
    uVar2 = (*(code *)local_40[3])(&local_40,param_2 + 0x4f0);
    *(undefined8 *)(param_2 + 0x4e8) = uVar2;
    if (&local_40 != (undefined ***)0x0) {
      (*(code *)local_40[1])();
    }
  }
  else {
    *(undefined8 *)(param_2 + 0x4e8) = 0;
  }
  if (*(int *)(param_1 + 0x38) < *(int *)(param_1 + 0x3c)) {
    *(long *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x38) * 8) = param_2;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  }
  return;
}

