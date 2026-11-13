
void FUN_014699e4(long *param_1)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  bVar1 = (**(code **)(*param_1 + 0x1a0))(param_1,1);
  *(byte *)(param_1 + 0x61) = bVar1 & 1;
  *(byte *)((long)param_1 + 0x309) = bVar1 & 1;
  if (((((*(uint *)(param_1 + 0x6d) & 0xfffffffe) != 2) ||
       (iVar2 = FUN_0277d6c4(param_1 + 0x59), iVar2 != 0x3d4)) && (param_1[0x5e] != 0)) &&
     (plVar3 = *(long **)(*(long *)(param_1[0x5e] + 0x48) + 0x60), plVar3 != (long *)0x0)) {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    puStack_28 = PTR_DAT_04bbcb98 + 5;
    if (plVar3[0x227] != 0) {
      FUN_038501b0(0,plVar3[0x227],0);
      lVar4 = plVar3[0x227];
      if (*(char *)(lVar4 + 0x2c0) != '\0') {
        *(undefined1 *)(lVar4 + 0x2c0) = 0;
        FUN_03855b20(lVar4 + 0xc0,0);
      }
      FUN_0384f8c0(lVar4,&local_30,0,0);
      (**(code **)(*plVar3 + 0x120))(plVar3,&local_30,0,0);
    }
  }
  return;
}

