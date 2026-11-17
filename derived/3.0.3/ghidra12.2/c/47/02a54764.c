
undefined8 FUN_02a54764(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 uStack_31;
  
  uVar3 = FUN_02a1e7e4(param_2 + 1,*param_2);
  FUN_02a1db74(uVar3,&uStack_31);
  puVar1 = PTR_DAT_04bc3ee8;
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  lVar4 = FUN_03baab40(*(undefined8 *)(*(long *)puVar1 + 0x20),param_2 + 1);
  *(long *)(param_1 + 0x60) = lVar4;
  puVar1 = PTR_DAT_04bc4310;
  plVar5 = *(long **)(lVar4 + 0xf0);
  if (((*PTR_DAT_04bc4310 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4310), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc4308 = PTR_DAT_04bc4318 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4310);
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5,PTR_DAT_04bc4308);
  }
  *(undefined1 *)(lVar4 + 0xe8) = 1;
  plVar5 = *(long **)(param_1 + 0x58);
  lVar4 = *(long *)(param_1 + 0x60);
  *(long **)(lVar4 + 0xf0) = plVar5;
  if (((*puVar1 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4310), iVar2 != 0)) {
    *(undefined **)PTR_DAT_04bc4308 = PTR_DAT_04bc4318 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4310);
  }
  if ((plVar5 != (long *)0x0) &&
     (uVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,PTR_DAT_04bc4308), (uVar6 & 1) != 0)) {
    *(undefined1 *)(lVar4 + 0xe8) = 1;
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0x4234000042340000;
  *(undefined8 *)(param_1 + 0x3c) = 0x408000003f4ccccd;
  *(undefined8 *)(param_1 + 0x44) = 0x4200000042000000;
  *(undefined8 *)(param_1 + 0x4c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x70) = 0x3f8000003f4ccccd;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return 1;
}

