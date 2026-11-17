
void FUN_03184ca0(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar5 = *(undefined8 **)(param_2 + 8);
  if (((*PTR_DAT_04bc51b0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc51b0), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc51a8 = PTR_DAT_04bc51b8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc51b0);
  }
  if (((puVar5 != (undefined8 *)0x0) &&
      (uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc51a8), (uVar3 & 1) != 0)) &&
     (plVar6 = (long *)puVar5[0x2f], plVar6 != (long *)0x0)) {
    (**(code **)(*plVar6 + 0x120))(plVar6,param_1,*(undefined8 *)(param_2 + 0x10));
    (**(code **)(*plVar6 + 0x128))(plVar6,*(undefined8 *)(param_2 + 0x10));
  }
  if (((DAT_057003f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_057003f0), iVar2 != 0)) {
    DAT_057003e0 = '\x01';
    DAT_057003e4 = '\x01';
    DAT_057003ec = '\x01';
    DAT_057003e8 = DAT_057003f8;
    __cxa_guard_release(&DAT_057003f0);
  }
  uVar4 = 5;
  if (DAT_057003e0 == '\0') {
    uVar4 = 0;
  }
  uVar4 = FUN_0385ad38(param_1,*(undefined8 *)(param_2 + 0x10),uVar4,0);
  cVar1 = DAT_057003e4;
  *(undefined8 *)(param_1 + 0x570) = uVar4;
  uVar4 = 6;
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  uVar4 = FUN_0385ad38(param_1,*(undefined8 *)(param_2 + 0x10),uVar4,0);
  *(undefined8 *)(param_1 + 0x578) = uVar4;
  uVar4 = FUN_0385ad38(param_1,*(undefined8 *)(param_2 + 0x10),DAT_057003e8,0);
  cVar1 = DAT_057003ec;
  *(undefined8 *)(param_1 + 0x580) = uVar4;
  uVar4 = 7;
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  uVar4 = FUN_0385ad38(param_1,*(undefined8 *)(param_2 + 0x10),uVar4,0);
  *(undefined8 *)(param_1 + 0x588) = uVar4;
  return;
}

