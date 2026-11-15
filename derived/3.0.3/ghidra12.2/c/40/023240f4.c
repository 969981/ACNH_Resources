
void FUN_023240f4(long param_1,byte param_2)

{
  undefined *__src;
  byte *pbVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  byte local_38;
  byte local_37;
  undefined4 local_34;
  
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x10000000;
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  local_38 = *pbVar1;
  if (7 < local_38) {
    local_38 = 0xff;
  }
  local_37 = param_2;
  FUN_00a77ec0(&local_38);
  if (DAT_054f5738 == 0) {
    if ((DAT_054f08c8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_054f08c8);
      puVar4 = &DAT_054f08c0;
      if (iVar2 != 0) {
        DAT_054f08c0 = 0;
        __cxa_guard_release(&DAT_054f08c8);
      }
    }
    else {
      puVar4 = &DAT_054f08c0;
    }
  }
  else {
    puVar4 = (uint *)(DAT_054f5738 + 0x1fc);
  }
  local_34 = 0xf;
  *puVar4 = *puVar4 & 0xffff7fff;
  if (local_37 != 0) {
    lVar3 = *(long *)PTR_DAT_04bb26a8;
    *(undefined1 *)(lVar3 + 0xa7669) = 1;
    *(undefined **)(lVar3 + 0xa7678) = &DAT_040bbb5b;
  }
  if ((param_2 & 1) != 0) {
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x20000000;
  }
  FUN_02569d74(param_1 + 0xec0,2);
  __src = PTR_DAT_04bbe208 + 8;
  memcpy(PTR_DAT_04bbe208 + 0x2410,__src,0x2400);
  memset(__src,0,0x2400);
  if (*(int *)(param_1 + 0x178) == 0) {
    FUN_02544b38(pbVar1,&DAT_0417a6d8);
    FUN_02544c78(pbVar1,&DAT_0417a6d8);
  }
  return;
}

