
/* WARNING: Removing unreachable block (ram,0x02f07738) */

void FUN_02f07700(byte *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar5 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xa8);
  if (((*PTR_DAT_04bc73c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc73c8);
  }
  if ((puVar5 != (undefined8 *)0x0) &&
     (uVar2 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc73c0), (uVar2 & 1) != 0)) {
    plVar6 = (long *)puVar5[0x51];
    if ((int)plVar6[0x15] == 5 || (int)plVar6[0x15] == 2) {
      FUN_03869260(puVar5,plVar6);
      *(undefined1 *)((long)plVar6 + 0x165) = 1;
    }
    else if (*(uint *)(plVar6 + 0x15) < 7 &&
             (1 << (ulong)(*(uint *)(plVar6 + 0x15) & 0x1f) & 0x58U) != 0) {
      (**(code **)(*plVar6 + 0xa8))(plVar6);
    }
    bVar4 = *param_1;
    lVar3 = puVar5[0x51];
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    *(byte *)(lVar3 + 0x1f8) = bVar4;
    *(undefined4 *)(lVar3 + 0x23c) = 0xe;
  }
  return;
}

