
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014bec54(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  uVar1 = *(int *)(param_3 + 0x14) + 0x20000000U >> 0x1e;
  if (((DAT_051ebdb0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_051ebdb0), iVar5 != 0)) {
    DAT_051ebda0 = PTR_DAT_04bb2e18 + 0x10;
    _DAT_051ebda8 = 0x200000002;
    __cxa_guard_release(&DAT_051ebdb0);
  }
  iVar5 = DAT_051ebda8;
  iVar2 = DAT_051ebdac;
  fVar7 = *(float *)(param_3 + 8);
  fVar8 = *(float *)(param_3 + 0x10);
  if (((DAT_051ebdb0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_051ebdb0), iVar6 != 0)) {
    DAT_051ebda0 = PTR_DAT_04bb2e18 + 0x10;
    _DAT_051ebda8 = 0x200000002;
    __cxa_guard_release(&DAT_051ebdb0);
  }
  iVar6 = iVar2;
  if ((uVar1 & 0x80000001) != 1) {
    iVar6 = iVar5;
    iVar5 = iVar2;
  }
  iVar4 = DAT_051ebda8;
  iVar3 = DAT_051ebdac;
  fVar8 = fVar8 - ((float)iVar5 * 0.5 * 5.0 + -2.5);
  fVar7 = fVar7 - ((float)iVar6 * 0.5 * 5.0 + -2.5);
  iVar2 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
  iVar6 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
  *(int *)(param_2 + 0x10) = iVar6;
  *(int *)(param_2 + 0x14) = iVar2;
  iVar5 = iVar4;
  if ((uVar1 & 0x80000001) != 1) {
    iVar5 = iVar3;
    iVar3 = iVar4;
  }
  *(int *)(param_2 + 0x20) = iVar6 + iVar3 + -1;
  *(int *)(param_2 + 0x24) = iVar2 + iVar5 + -1;
  return;
}

