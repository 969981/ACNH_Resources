
void FUN_01afb044(undefined4 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_18;
  undefined4 uStack_14;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar4 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4();
  if (*(long *)puVar1 != 0) {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      if ((*(byte *)((long)param_1 + 2) >> 2 & 1) == 0) {
        return;
      }
      *(byte *)((long)param_1 + 2) = *(byte *)((long)param_1 + 2) & 0xfb;
      return;
    }
  }
  iVar3 = FUN_0277d6c4(param_1);
  lVar4 = DAT_05150358;
  if (iVar3 == 0xea79) {
    *(undefined2 *)param_1 = DAT_05586008;
    *(undefined1 *)((long)param_1 + 2) = DAT_0558600a;
    *(undefined1 *)((long)param_1 + 3) = DAT_0558600b;
    param_1[1] = DAT_0558600c;
  }
  else if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
            (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
           ((*(long *)(DAT_05150358 + 0x488) != 0 &&
            (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))) &&
          ((*(long *)(DAT_05150358 + 0x2b0) != 0 &&
           (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))) {
    uVar2 = FUN_0277d6c4(param_1);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_38 = *param_1;
      uStack_34 = param_1[1];
      FUN_0124c1e8(&local_18,&local_38,1);
      *param_1 = local_18;
      param_1[1] = uStack_14;
    }
  }
  return;
}

