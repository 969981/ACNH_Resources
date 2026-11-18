
/* WARNING: Removing unreachable block (ram,0x032ede04) */
/* WARNING: Removing unreachable block (ram,0x032edd60) */
/* WARNING: Removing unreachable block (ram,0x032edd80) */
/* WARNING: Removing unreachable block (ram,0x032ede28) */

void FUN_032edd20(undefined8 param_1,undefined2 *param_2,uint param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined2 *__s;
  ulong uVar2;
  undefined2 *puVar3;
  ulong __n;
  long *plVar4;
  
  uVar2 = (ulong)param_3;
  __n = -(ulong)(param_3 >> 0x1f) & 0xfffffffe00000000 | uVar2 << 1;
  plVar4 = *(long **)PTR_DAT_04bc96a8;
  if (*plVar4 == 0) {
    __s = (undefined2 *)0x0;
  }
  else {
    __s = (undefined2 *)(**(code **)(*(long *)*plVar4 + 0x30))((long *)*plVar4,__n,8);
  }
  memset(__s,0,__n);
  FUN_032f9248(*(undefined8 *)PTR_DAT_04bc96d0,plVar4 + 2,0,param_4,__s,uVar2 << 1 & 0xffffffff);
  if (0 < (int)param_3) {
    puVar3 = __s;
    do {
      uVar1 = FUN_038cd950(*puVar3);
      uVar2 = uVar2 - 1;
      *param_2 = uVar1;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != 0);
  }
  if (*plVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x032ede44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*plVar4 + 0x38))((long *)*plVar4,__s);
  return;
}

