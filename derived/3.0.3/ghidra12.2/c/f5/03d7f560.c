
void FUN_03d7f560(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  puVar4 = PTR_DAT_04bd3328;
  puVar3 = PTR_DAT_04bd3320;
  if (((*PTR_DAT_04bd3328 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd3328), puVar2 = PTR_DAT_04bd3340, iVar5 != 0)) {
    puVar1 = PTR_DAT_04bd3338 + 0x10;
    *(undefined **)puVar3 = PTR_DAT_04bd3330 + 0x10;
    *(undefined **)(puVar3 + 8) = puVar1;
    puVar1 = PTR_DAT_04bd3348;
    *(undefined **)(puVar3 + 0x28) = puVar2 + 0x10;
    *(undefined **)(puVar3 + 0x48) = puVar1 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd3328);
  }
  uVar6 = (*(code *)**(undefined8 **)(puVar3 + 0x28))(puVar3 + 0x28,param_1 + 0x28,param_2);
  if ((uVar6 & 1) == 0) {
    if (((*puVar4 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd3328), puVar4 = PTR_DAT_04bd3340, iVar5 != 0)) {
      puVar2 = PTR_DAT_04bd3338 + 0x10;
      *(undefined **)puVar3 = PTR_DAT_04bd3330 + 0x10;
      *(undefined **)(puVar3 + 8) = puVar2;
      puVar2 = PTR_DAT_04bd3348;
      *(undefined **)(puVar3 + 0x28) = puVar4 + 0x10;
      *(undefined **)(puVar3 + 0x48) = puVar2 + 0x10;
      __cxa_guard_release(PTR_DAT_04bd3328);
    }
    (*(code *)**(undefined8 **)(puVar3 + 0x48))(puVar3 + 0x48,param_1 + 0x28,param_2);
    if (*(long *)(param_1 + 0x18) != param_1 + 0x10) {
      lVar7 = (long)*(int *)(param_1 + 0x24);
      lVar8 = *(long *)(param_1 + 0x18) - lVar7;
      do {
        *(undefined1 *)(lVar8 + 0x18) = 1;
        lVar8 = *(long *)(lVar8 + lVar7 + 8) - lVar7;
      } while (lVar8 != (param_1 + 0x10) - lVar7);
    }
  }
  return;
}

