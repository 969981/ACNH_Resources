
undefined4 FUN_03ec4c28(long param_1,long *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
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
    lVar4 = *(long *)(param_2[2] + 8);
    FUN_038d1270(&local_138,"%s.as",lVar4 + *(int *)(lVar4 + 0x24) + (long)*(int *)(lVar4 + 8));
    return 0;
  }
  iVar3 = *(int *)(*param_2 + 8);
  if (iVar3 < 0x60000000) {
    piVar2 = (int *)(*(long *)(param_2[2] + 8) + (long)iVar3);
    if (param_3 < *piVar2) {
      return *(undefined4 *)
              (((ulong)(uint)piVar2[(long)param_3 + 1] & 0xfffffff) + *(long *)(param_2[2] + 8) + 4)
      ;
    }
    return 0;
  }
  uVar1 = iVar3 + 0xa0000000;
  if (*(uint *)(param_1 + 0x80) <= uVar1) {
    uVar1 = 0;
  }
  lVar4 = *(long *)(param_1 + 0x88) + (ulong)uVar1 * 0x32;
  return *(undefined4 *)(lVar4 + (ulong)*(byte *)(lVar4 + param_3 + 0x20));
}

