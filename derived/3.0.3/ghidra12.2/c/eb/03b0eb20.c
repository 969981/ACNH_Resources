
undefined8 FUN_03b0eb20(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  
  puVar4 = (undefined8 *)FUN_0038a89c();
  if (((*PTR_DAT_04bc0890 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc0890), puVar2 = PTR_DAT_04bc0898, iVar3 != 0)) {
    if (((*PTR_DAT_04bc08a0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc08a0), iVar3 != 0)) {
      *(undefined8 *)puVar2 = 0;
      __cxa_guard_release(PTR_DAT_04bc08a0);
    }
    *(undefined **)PTR_DAT_04bc0888 = puVar2;
    __cxa_guard_release(PTR_DAT_04bc0890);
  }
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)(**(code **)*puVar4)(puVar4);
    if (puVar5 == (undefined8 *)PTR_DAT_04bc0888) goto LAB_03b0eb8c;
    do {
      puVar5 = (undefined8 *)*puVar5;
    } while (puVar5 != (undefined8 *)PTR_DAT_04bc0888 && puVar5 != (undefined8 *)0x0);
    if (puVar5 != (undefined8 *)0x0) goto LAB_03b0eb8c;
  }
  puVar4 = (undefined8 *)0x0;
LAB_03b0eb8c:
  uVar6 = FUN_03b0e4b0(param_2,*(undefined8 *)(param_1 + 0xd8),*(undefined2 *)(param_1 + 0x112),
                       puVar4,0xffffffff,0);
  if ((uVar6 & 1) == 0) {
    uVar8 = 1;
  }
  else {
    *(ushort *)(param_1 + 0x114) = *(ushort *)(param_1 + 0x114) | 4;
    uVar8 = 2;
  }
  *(undefined1 *)(param_1 + 0x15c) = uVar8;
  uVar7 = *(undefined8 *)(param_1 + 0x168);
  uVar1 = *(undefined4 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x160) = uVar1;
  return uVar7;
}

