
undefined4 * FUN_03ec4d1c(long param_1,long *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined *local_138;
  undefined1 *puStack_130;
  undefined4 local_128;
  undefined1 local_124 [255];
  undefined1 local_25;
  
  if (*param_2 == 0) {
    local_25 = 0;
    local_128 = 0x100;
    puStack_130 = local_124;
    local_124[0] = 0;
    local_138 = PTR_DAT_04bb21f8 + 0x10;
    lVar5 = *(long *)(param_2[2] + 8);
    FUN_038d1270(&local_138,"%s.as",lVar5 + *(int *)(lVar5 + 0x24) + (long)*(int *)(lVar5 + 8));
    return &DAT_0419b56c;
  }
  iVar4 = *(int *)(*param_2 + 8);
  if (0x5fffffff < iVar4) {
    uVar1 = iVar4 + 0xa0000000;
    if (*(uint *)(param_1 + 0x80) <= uVar1) {
      uVar1 = 0;
    }
    lVar5 = *(long *)(param_1 + 0x88) + (ulong)uVar1 * 0x32;
    return (undefined4 *)(lVar5 + (ulong)*(byte *)(lVar5 + param_3 + 0x20));
  }
  piVar2 = (int *)(*(long *)(param_2[2] + 8) + (long)iVar4);
  if (param_3 < *piVar2) {
    puVar6 = (undefined4 *)
             (((ulong)(uint)piVar2[(long)param_3 + 1] & 0xfffffff) + *(long *)(param_2[2] + 8) + 4);
  }
  else {
    puVar6 = (undefined4 *)0x0;
  }
  puVar3 = (undefined4 *)PTR_DAT_04bb2150;
  if (puVar6 != (undefined4 *)0x0) {
    puVar3 = puVar6;
  }
  return puVar3;
}

