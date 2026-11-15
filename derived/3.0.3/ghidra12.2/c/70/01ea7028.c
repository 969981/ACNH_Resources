
void FUN_01ea7028(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  long *plVar6;
  undefined *local_40;
  char *pcStack_38;
  
  lVar3 = param_1[3];
  bVar4 = *(byte *)(lVar3 + 0x290);
  uVar5 = 4;
  *(char *)(lVar3 + 0x290) = (char)(bVar4 & 0xfffffffb);
  if (((bVar4 >> 4 & 1) == 0) && (uVar5 = 3, (bVar4 >> 3 & 1) == 0)) {
    uVar5 = (bVar4 & 0xfffffffb) >> 1 & 1;
  }
  local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar5);
  *(uint *)(lVar3 + 0x294) = uVar5;
  *(byte *)(param_1[1] + 0x286) = *(byte *)(param_1[1] + 0x286) & 0xf7;
  *(undefined1 *)(param_1 + 0x15cc) = 0;
  param_1[0x15ab] = param_1[0x15ab] | 7;
  bVar4 = *(byte *)(param_1 + 0xfad);
  *(undefined1 *)(param_1 + 0xfad) = 0xff;
  if (7 < bVar4) {
    bVar4 = 0xff;
  }
  *(byte *)((long)param_1 + 0x7d69) = bVar4;
  (**(code **)(*param_1 + 0x60))(param_1);
  param_1[0x15ab] = param_1[0x15ab] & 0xffffffffffffffdf;
  FUN_01ea72c8(param_1);
  plVar6 = *(long **)(param_1[1] + 0x60);
  if (plVar6 != (long *)0x0) {
    if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb37b0 = PTR_DAT_04bb3070 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37b8);
    }
    uVar2 = (**(code **)(*plVar6 + 0x10))(plVar6,PTR_DAT_04bb37b0);
    if ((uVar2 & 1) != 0) {
      local_40 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "Feel";
      if (((plVar6[0x227] != 0) && (lVar3 = *(long *)(plVar6[0x227] + 0x78), lVar3 != 0)) &&
         (plVar6 = *(long **)(lVar3 + 0x48), plVar6 != (long *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,&local_40,(int)param_1[0xfeb]);
      }
    }
  }
  if ((((uint)param_1[0x15ab] >> 7 & 1) == 0) || ((*(byte *)(param_1 + 0xf25) & 1) == 0)) {
    (**(code **)(*param_1 + 0x38))(param_1,(int)param_1[0xefe],0,1);
  }
  else {
    param_1[0x15ab] = param_1[0x15ab] | 0x400;
    FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,1,PTR_DAT_04bb32e0);
    param_1[0x15ab] = param_1[0x15ab] & 0xfffffffffffffbff;
  }
  if (((*(int *)(param_1[1] + 0x500) == 0) && (uVar5 = *(uint *)(param_1[1] + 0x508), uVar5 < 10))
     && ((&DAT_053fee41)[(ulong)uVar5 * 0xba0] != '\0')) {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "VisitQuestGoHome";
    iVar1 = FUN_021991a0(&DAT_053fe348 + (ulong)uVar5 * 0xba0,&local_40);
    if (iVar1 != 0) {
      FUN_006fb3d0(param_1[1]);
    }
  }
  return;
}

