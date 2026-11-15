
void FUN_0242ed14(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  undefined8 local_38;
  undefined8 local_18;
  
  if ((*(int *)(param_1 + 0x178) == 0) && ((*(byte *)(param_1 + 0x17d2) >> 6 & 1) != 0)) {
    local_38 = 0xfffe;
    FUN_0277d4ac(&local_38);
    local_38 = *(undefined8 *)(param_1 + 0x1900);
    local_18 = 0xfffe;
    FUN_0277d4ac(&local_18);
    FUN_016e49e4(&local_18,&local_38,0);
    puVar1 = PTR_DAT_04bb43c0;
    lVar4 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(&local_18);
    if (*(long *)puVar1 != 0) {
      lVar4 = *(long *)(lVar4 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        FUN_026738b0(param_1 + 0x1ee8,&local_18,1,0);
      }
    }
  }
  uVar3 = *(uint *)(param_1 + 0x17cc);
  *(uint *)(param_1 + 0x17cc) = uVar3 & 0xfffffffe;
  if ((uVar3 & 1) != 0) {
    uVar3 = (uint)*(byte *)(param_1 + 0x1ee8);
    bVar2 = 7 < uVar3;
    if (bVar2) {
      uVar3 = 0xff;
    }
    lVar4 = DAT_055021a0 + 0x20 + (ulong)uVar3 * 0x740;
    if (bVar2) {
      lVar4 = DAT_055021a0 + 0x20;
    }
    if (*(short *)(param_1 + 0x18e1) == DAT_04c487d4) {
      *(undefined4 *)(lVar4 + 0xc) = 3;
      FUN_01393458(lVar4 + 0xb0);
    }
    else {
      *(undefined4 *)(lVar4 + 0xc) = 4;
    }
  }
  return;
}

