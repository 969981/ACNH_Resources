
void FUN_01df2eb0(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  
  if (*(int *)(DAT_05358908 + 0x38) != 0 && *(char *)(DAT_05358908 + 0xfd8) == '\0') {
    plVar3 = *(long **)(DAT_05ae6a60 + 0x30);
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
    if (((((uVar2 & 1) == 0) && (uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3), (uVar2 & 1) == 0))
        && (*(int *)((long)plVar3 + 0x24) < 2)) &&
       ((*(int *)((long)plVar3 + 0x24) < 1 || (1 < *(int *)((long)plVar3 + 0x24))))) {
      *(undefined4 *)((long)plVar3 + 0x3c) = param_2;
      *(undefined8 *)((long)plVar3 + 0x34) = 0x140000000e;
      lVar1 = DAT_05b03f00;
      *(undefined4 *)(plVar3 + 6) = DAT_05b03f08;
      plVar3[5] = lVar1;
      *(undefined4 *)((long)plVar3 + 0x24) = 1;
    }
  }
  return;
}

