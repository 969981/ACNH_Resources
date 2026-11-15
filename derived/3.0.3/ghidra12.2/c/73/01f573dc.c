
void FUN_01f573dc(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 local_4;
  
  uVar4 = (**(code **)(**(long **)(param_1 + 8) + 0x180))();
  if (((((uVar4 & 1) == 0) || (lVar5 = *(long *)(param_1 + 8), lVar5 == 0)) ||
      (uVar2 = *(uint *)(lVar5 + 0x508), uVar2 == 0xffffffff)) ||
     (((*(int *)(param_1 + 0x77f4) != 0x5b && (*(int *)(param_1 + 0x77b0) != 0x5b)) ||
      (*(char *)(param_1 + 0x7878) == '\0')))) goto LAB_01f5755c;
  if ((uVar2 < 10) && ((&DAT_053fee41)[(ulong)uVar2 * 0xba0] != '\0')) {
    if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
      if ((int)(&DAT_053fe898)[(ulong)uVar2 * 0x2e8] < 1) goto LAB_01f574e4;
      uVar4 = (ulong)uVar2;
      iVar3 = (&DAT_053fe898)[(ulong)uVar2 * 0x2e8] + (&DAT_053fe894)[uVar4 * 0x2e8] + -1;
      iVar1 = 0;
      if ((int)(&DAT_053fe890)[uVar4 * 0x2e8] <= iVar3) {
        iVar1 = (&DAT_053fe890)[uVar4 * 0x2e8];
      }
      puVar7 = (uint *)((&DAT_053fe888)[uVar4 * 0x174] + (long)(iVar3 - iVar1) * 0x14 + 8);
      goto LAB_01f574ec;
    }
    uVar6 = *(byte *)(*(long *)PTR_DAT_04bb3968 + (ulong)uVar2 * 0x28 + 0xe23) & 3;
  }
  else {
LAB_01f574e4:
    puVar7 = &DAT_0538ea6c;
LAB_01f574ec:
    uVar6 = *puVar7;
  }
  if ((uVar6 == 1) ||
     ((((uVar2 < 10 && ((&DAT_053fee41)[(ulong)uVar2 * 0xba0] != '\0')) &&
       ((&DAT_053fede8)[(ulong)uVar2 * 0x174] != 0)) &&
      (*(int *)((&DAT_053fede8)[(ulong)uVar2 * 0x174] + 4) == 1)))) {
    local_4 = 1;
    FUN_021dafb0(lVar5 + 0x508,&local_4,0,0,0,1);
  }
LAB_01f5755c:
  FUN_01e64490(param_1);
  return;
}

