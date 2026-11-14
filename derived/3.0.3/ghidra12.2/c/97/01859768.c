
uint FUN_01859768(undefined8 *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  long local_38;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined1 local_29;
  undefined4 local_28;
  uint local_24;
  
  lVar4 = *(long *)*param_1;
  if (lVar4 == 0) {
    lVar4 = param_1[3];
    if (((*(int *)(lVar4 + 0x10) <= *(int *)(param_2 + 8) &&
          *(int *)(param_2 + 8) <= *(int *)(lVar4 + 0x20)) &&
        (*(int *)(lVar4 + 0x14) <= *(int *)(param_2 + 0xc))) &&
       (*(int *)(param_2 + 0xc) <= *(int *)(lVar4 + 0x24))) {
      puVar3 = (undefined2 *)FUN_01a5190c(param_1[1],0,param_2,0);
      local_2c = *puVar3;
      local_2a = *(undefined1 *)(puVar3 + 1);
      local_29 = *(undefined1 *)((long)puVar3 + 3);
      local_28 = *(undefined4 *)(puVar3 + 2);
      if ((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
          ((*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0 &&
           ((*(long *)(DAT_05150358 + 0x488) != 0 &&
            (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))))) &&
         (*(long *)(DAT_05150358 + 0x2b0) != 0)) {
        lVar5 = *(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8);
        lVar4 = DAT_05150358;
        goto joined_r0x018598d8;
      }
    }
  }
  else if (((*(int *)(lVar4 + 0x10) <= *(int *)(param_2 + 8) &&
             *(int *)(param_2 + 8) <= *(int *)(lVar4 + 0x20)) &&
           (*(int *)(lVar4 + 0x14) <= *(int *)(param_2 + 0xc))) &&
          (*(int *)(param_2 + 0xc) <= *(int *)(lVar4 + 0x24))) {
    puVar3 = (undefined2 *)FUN_01a5190c(param_1[1],0,param_2,0);
    local_2c = *puVar3;
    local_2a = *(undefined1 *)(puVar3 + 1);
    local_29 = *(undefined1 *)((long)puVar3 + 3);
    local_28 = *(undefined4 *)(puVar3 + 2);
    if (((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
       (((*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0 &&
         ((*(long *)(DAT_05150358 + 0x488) != 0 &&
          (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))) &&
        (*(long *)(DAT_05150358 + 0x2b0) != 0)))) {
      lVar5 = *(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8);
      lVar4 = DAT_05150358;
joined_r0x018598d8:
      DAT_05150358 = lVar4;
      if (lVar5 != 0) {
        uVar1 = FUN_0277d6c4(&local_2c);
        uVar1 = (uVar1 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
        if ((uVar1 < *(uint *)(lVar4 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar1 * 8) != 0)) {
          FUN_0124c030(auStack_48,&local_2c);
          iVar2 = FUN_0123db50(auStack_40,local_38);
          if (iVar2 - 0xbU < 7) {
            if (local_38 != 0) {
              local_24 = 0;
              lVar4 = FUN_01246470(local_38,0x16,0x623dc307,*(undefined8 *)PTR_DAT_04bbbc98);
              if (lVar4 != 0) {
                uVar1 = local_24 + 7;
                if (-1 < (int)local_24) {
                  uVar1 = local_24;
                }
                if ((*(byte *)(lVar4 + (ulong)(uint)((int)uVar1 >> 3)) >> (ulong)(local_24 & 7) & 1)
                    != 0) goto LAB_01859984;
              }
            }
            uVar1 = FUN_0124e92c(auStack_48,param_1[2]);
            goto LAB_01859988;
          }
        }
      }
    }
  }
LAB_01859984:
  uVar1 = 0;
LAB_01859988:
  return uVar1 & 1;
}

