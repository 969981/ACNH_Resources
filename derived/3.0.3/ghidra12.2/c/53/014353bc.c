
void FUN_014353bc(long *param_1)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  bVar1 = (**(code **)(*param_1 + 0x1a0))(param_1,3);
  *(byte *)(param_1 + 0x61) = bVar1 & 1;
  *(byte *)((long)param_1 + 0x309) = bVar1 & 1;
  if ((param_1[0x5e] != 0) &&
     (plVar2 = *(long **)(*(long *)(param_1[0x5e] + 0x48) + 0x60), plVar2 != (long *)0x0)) {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    puStack_28 = PTR_DAT_04bbcb98 + 0x14;
    if (plVar2[0x227] != 0) {
      FUN_038501b0(0,plVar2[0x227],0);
      lVar3 = plVar2[0x227];
      if (*(char *)(lVar3 + 0x2c0) != '\0') {
        *(undefined1 *)(lVar3 + 0x2c0) = 0;
        FUN_03855b20(lVar3 + 0xc0,0);
      }
      FUN_0384f8c0(lVar3,&local_30,0,0);
      (**(code **)(*plVar2 + 0x120))(plVar2,&local_30,0,0);
    }
  }
  return;
}

