
uint FUN_01256964(long param_1,undefined4 param_2,ulong param_3,uint param_4)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *local_40;
  char local_38;
  char local_37;
  undefined4 local_14;
  
  if ((*(int *)(param_1 + 0x60) - 1U < 2) &&
     (local_14 = param_2, iVar2 = FUN_0277d6c4(), iVar2 == 0x3332)) {
    FUN_0071c8d0(&local_40,param_1 + 8,&local_14,0);
    plVar1 = local_40;
    if (local_40 != (long *)0x0) {
      if (((*PTR_DAT_04bbbb50 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bbbb50), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bbbb48 = PTR_DAT_04bbbaf0 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbbb50);
      }
      uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bbbb48);
      if ((uVar3 & 1) == 0) {
        local_37 = '\0';
      }
    }
    if (local_40 == (long *)0x0) {
      return 0;
    }
    if (local_38 == '\0') {
      return 0;
    }
    if (local_37 == '\0') {
      return 0;
    }
    if ((param_3 & 1) == 0) {
      param_4 = param_4 & (*(ushort *)(param_1 + 0x68) & 0x2000) >> 0xd;
    }
    else {
      param_4 = 1;
    }
    plVar1 = local_40 + 0x4f + (ulong)*(uint *)(param_1 + 0x58) * 0x24;
    if (999 < *(uint *)(param_1 + 0x58)) {
      plVar1 = local_40 + 0x4f;
    }
    if ((int)plVar1[0x20] != 0x1d) {
      return 0;
    }
    if (*(short *)((long)plVar1 + 0x112) < 1) {
      return 0;
    }
    if (((ulong)plVar1[0x21] >> 0x21 & 1) != 0) {
      plVar1[0x21] = plVar1[0x21] & 0xfffffffdffffffff;
      return param_4 ^ 1;
    }
    if (((param_4 != 0) &&
        (((lVar5 = *(long *)(param_1 + 0x38), lVar5 == 0 ||
          (*(int *)(lVar5 + 0x20) != *(int *)(param_1 + 0x40))) ||
         ((*(byte *)(lVar5 + 8) >> 4 & 1) == 0)))) &&
       (((lVar4 = *(long *)(param_1 + 0x48), lVar4 == 0 ||
         (*(int *)(lVar4 + 0x20) != *(int *)(param_1 + 0x50))) ||
        ((*(byte *)(lVar4 + 8) >> 4 & 1) == 0)))) {
      if ((lVar5 != 0) && (*(int *)(lVar5 + 0x20) == *(int *)(param_1 + 0x40))) {
        FUN_03be6c50(lVar5);
        lVar4 = *(long *)(param_1 + 0x48);
      }
      if (lVar4 == 0) {
        return 0;
      }
      if (*(int *)(lVar4 + 0x20) == *(int *)(param_1 + 0x50)) {
        FUN_03be6fe8(lVar4,0);
      }
    }
  }
  return 0;
}

