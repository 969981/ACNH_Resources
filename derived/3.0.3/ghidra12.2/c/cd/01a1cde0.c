
undefined8 FUN_01a1cde0(float param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  ulong uVar5;
  float fVar6;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined2 local_28;
  undefined1 local_26;
  undefined1 local_25;
  undefined4 local_24;
  
  puVar4 = (undefined2 *)FUN_01a5190c(param_2,0,param_3,0);
  lVar1 = DAT_05150358;
  local_28 = *puVar4;
  local_26 = *(undefined1 *)(puVar4 + 1);
  local_25 = *(undefined1 *)((long)puVar4 + 3);
  local_24 = *(undefined4 *)(puVar4 + 2);
  if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
      ((*(long *)(DAT_05150358 + 0x488) != 0 &&
       (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))) &&
     ((*(long *)(DAT_05150358 + 0x2b0) != 0 && (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)
      ))) {
    uVar2 = FUN_0277d6c4(&local_28);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar1 + 0x1f8);
    if (((uVar2 < *(uint *)(lVar1 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar1 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) &&
       (fVar6 = (float)FUN_01a1c140(param_3), fVar6 <= param_1)) {
      FUN_0124c030(auStack_48,&local_28);
      iVar3 = FUN_0123db50(auStack_40,local_38);
      if ((iVar3 - 0xbU < 7) && (uVar5 = FUN_0123d890(local_38,0), (uVar5 & 1) == 0)) {
        return 1;
      }
    }
  }
  return 0;
}

