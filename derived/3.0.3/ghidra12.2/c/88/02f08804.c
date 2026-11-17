
/* WARNING: Removing unreachable block (ram,0x02f08840) */

void FUN_02f08804(uint param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xa8);
  if (((*PTR_DAT_04bc73c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc73c8);
  }
  if ((puVar4 != (undefined8 *)0x0) &&
     (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc73c0), (uVar2 & 1) != 0)) {
    if (((param_1 & 1) != 0) && (-1 < param_2)) {
      lVar3 = puVar4[0x49];
      if ((*(int *)(lVar3 + 0x22c) < param_2) && (*(int *)(lVar3 + 0x240) < 0)) {
        *(undefined4 *)(lVar3 + 0x240) = 0;
      }
      *(int *)(lVar3 + 0x22c) = param_2;
    }
    if ((param_1 >> 1 & 1) != 0) {
      FUN_030e9cc8(puVar4[0x49],param_2);
    }
    if (((param_1 >> 2 & 1) != 0) && (-1 < param_2)) {
      lVar3 = puVar4[0x49];
      if ((*(int *)(lVar3 + 0x28c) < param_2) && (*(int *)(lVar3 + 0x2a0) < 0)) {
        *(undefined4 *)(lVar3 + 0x2a0) = 0;
      }
      *(int *)(lVar3 + 0x28c) = param_2;
    }
    if (((param_1 >> 4 & 1) != 0) && (-1 < param_2)) {
      lVar3 = puVar4[0x49];
      if ((*(int *)(lVar3 + 0x2ec) < param_2) && (*(int *)(lVar3 + 0x300) < 0)) {
        *(undefined4 *)(lVar3 + 0x300) = 0;
      }
      *(int *)(lVar3 + 0x2ec) = param_2;
    }
    if (((param_1 >> 3 & 1) != 0) && (-1 < param_2)) {
      lVar3 = puVar4[0x49];
      if ((*(int *)(lVar3 + 700) < param_2) && (*(int *)(lVar3 + 0x2d0) < 0)) {
        *(undefined4 *)(lVar3 + 0x2d0) = 0;
      }
      *(int *)(lVar3 + 700) = param_2;
    }
    if (((param_1 >> 5 & 1) != 0) && (-1 < param_2)) {
      lVar3 = puVar4[0x49];
      if ((*(int *)(lVar3 + 0x31c) < param_2) && (*(int *)(lVar3 + 0x330) < 0)) {
        *(undefined4 *)(lVar3 + 0x330) = 0;
      }
      *(int *)(lVar3 + 0x31c) = param_2;
    }
  }
  return;
}

