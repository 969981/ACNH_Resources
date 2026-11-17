
/* WARNING: Removing unreachable block (ram,0x02f07634) */

void FUN_02f075fc(ulong param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xa8);
  if (((*PTR_DAT_04bc73c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc73c8);
  }
  if (((puVar4 != (undefined8 *)0x0) &&
      (uVar3 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc73c0), (uVar3 & 1) != 0)) &&
     (lVar5 = puVar4[0x51], uVar1 = *(uint *)(*(long *)(lVar5 + 0x220) + 0xa8),
     uVar1 < 7 && (1 << (ulong)(uVar1 & 0x1f) & 0x58U) != 0)) {
    if (((param_1 & 1) == 0) || (uVar3 = FUN_02c0ea78(lVar5), (uVar3 & 1) == 0)) {
      *(undefined1 *)(lVar5 + 0x228) = 0;
      *(undefined4 *)(lVar5 + 0x23c) = 0xc;
    }
    else {
      *(undefined1 *)(lVar5 + 0x228) = 0;
    }
  }
  return;
}

