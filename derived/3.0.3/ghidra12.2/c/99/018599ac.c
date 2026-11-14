
undefined8 FUN_018599ac(undefined8 *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  long local_30;
  undefined2 local_28;
  undefined1 local_26;
  undefined1 local_25;
  undefined4 local_24;
  
  lVar5 = *(long *)*param_1;
  if (lVar5 == 0) {
    lVar5 = param_1[2];
    if (*(int *)(param_2 + 8) < *(int *)(lVar5 + 0x10) ||
        *(int *)(lVar5 + 0x20) < *(int *)(param_2 + 8)) {
      return 0;
    }
    if (*(int *)(param_2 + 0xc) < *(int *)(lVar5 + 0x14)) {
      return 0;
    }
    if (*(int *)(lVar5 + 0x24) < *(int *)(param_2 + 0xc)) {
      return 0;
    }
    puVar3 = (undefined2 *)FUN_01a5190c(param_1[1],0,param_2,0);
    local_28 = *puVar3;
    local_26 = *(undefined1 *)(puVar3 + 1);
    local_25 = *(undefined1 *)((long)puVar3 + 3);
    local_24 = *(undefined4 *)(puVar3 + 2);
    if (DAT_05150358 == 0) {
      return 0;
    }
    if (*(long *)(DAT_05150358 + 0xb0) == 0) {
      return 0;
    }
    if (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) == 0) {
      return 0;
    }
    if (*(long *)(DAT_05150358 + 0x488) == 0) {
      return 0;
    }
    if (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) == 0) {
      return 0;
    }
    if (*(long *)(DAT_05150358 + 0x2b0) == 0) {
      return 0;
    }
    lVar6 = *(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8);
    lVar5 = DAT_05150358;
  }
  else {
    if (*(int *)(param_2 + 8) < *(int *)(lVar5 + 0x10) ||
        *(int *)(lVar5 + 0x20) < *(int *)(param_2 + 8)) {
      return 0;
    }
    if (*(int *)(param_2 + 0xc) < *(int *)(lVar5 + 0x14)) {
      return 0;
    }
    if (*(int *)(lVar5 + 0x24) < *(int *)(param_2 + 0xc)) {
      return 0;
    }
    puVar3 = (undefined2 *)FUN_01a5190c(param_1[1],0,param_2,0);
    local_28 = *puVar3;
    local_26 = *(undefined1 *)(puVar3 + 1);
    local_25 = *(undefined1 *)((long)puVar3 + 3);
    local_24 = *(undefined4 *)(puVar3 + 2);
    if (DAT_05150358 == 0) {
      return 0;
    }
    if (*(long *)(DAT_05150358 + 0xb0) == 0) {
      return 0;
    }
    if (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) == 0) {
      return 0;
    }
    if (*(long *)(DAT_05150358 + 0x488) == 0) {
      return 0;
    }
    if (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) == 0) {
      return 0;
    }
    if (*(long *)(DAT_05150358 + 0x2b0) == 0) {
      return 0;
    }
    lVar6 = *(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8);
    lVar5 = DAT_05150358;
  }
  DAT_05150358 = lVar5;
  if (lVar6 != 0) {
    uVar1 = FUN_0277d6c4(&local_28);
    uVar1 = (uVar1 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar1 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar1 * 8) != 0)) {
      FUN_0124c030(auStack_40,&local_28);
      iVar2 = FUN_0123db50(auStack_38,local_30);
      if ((iVar2 - 0x23U < 9) &&
         (((local_30 == 0 ||
           (pbVar4 = (byte *)FUN_01246470(local_30,0x16,0x623dc307,*(undefined8 *)PTR_DAT_04bbbc98),
           pbVar4 == (byte *)0x0)) || ((*pbVar4 & 1) == 0)))) {
        return 1;
      }
    }
  }
  return 0;
}

