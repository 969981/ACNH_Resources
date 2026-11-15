
void FUN_0248d124(long param_1)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  undefined1 auStack_3c [8];
  undefined1 local_34 [4];
  ulong local_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  uVar3 = *(uint *)(param_1 + 0x17cc);
  *(uint *)(param_1 + 0x17cc) = uVar3 & 0xfffffffe;
  if ((uVar3 & 1) != 0) {
    uVar3 = (uint)*(byte *)(param_1 + 0x1ee8);
    bVar2 = 7 < uVar3;
    if (bVar2) {
      uVar3 = 0xff;
    }
    local_34[0] = (undefined1)uVar3;
    lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar3 * 0x740;
    if (bVar2) {
      lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    if (*(short *)(param_1 + 0x18e1) == DAT_04c487d4) {
      *(undefined4 *)(lVar1 + 0xc) = 3;
      FUN_01393458(lVar1 + 0xb0);
    }
    else {
      *(undefined4 *)(lVar1 + 0xc) = 4;
    }
    local_30 = 0xfffe;
    FUN_0277d4ac(&local_30);
    local_30 = *(ulong *)(param_1 + 0x190c);
    FUN_02326130(local_34,&local_30,1);
    local_28 = 6;
    local_30 = local_30 & 0xffffff0000000000;
    local_22 = 0;
    local_24 = 0;
    FUN_02321e44(auStack_3c,param_1,&local_30);
  }
  return;
}

