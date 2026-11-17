
/* WARNING: Removing unreachable block (ram,0x02f07f08) */

void FUN_02f07ed0(int param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  char local_24;
  char local_23;
  undefined1 local_22;
  undefined1 local_21;
  
  puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xa8);
  if (((*PTR_DAT_04bc73c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc73c8);
  }
  if ((puVar4 != (undefined8 *)0x0) &&
     (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc73c0), (uVar2 & 1) != 0)) {
    lVar3 = puVar4[0x48];
    local_21 = 1;
    *(undefined1 *)(lVar3 + 0x230) = 1;
    *(undefined1 *)(lVar3 + 0x232) = 1;
    *(int *)(lVar3 + 0x234) = param_1;
    local_22 = *(undefined1 *)(lVar3 + 0x239);
    local_24 = (char)(param_1 / 0x3c);
    local_23 = (char)param_1 + local_24 * -0x3c;
    *(undefined4 *)(lVar3 + 0x23c) = 0x5a;
    FUN_03464034(*(undefined8 *)(lVar3 + 0x228),&local_24);
  }
  return;
}

