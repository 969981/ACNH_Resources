
byte FUN_01ff20a4(long param_1)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  long *plVar7;
  
  uVar2 = *(ushort *)(param_1 + 0xaf64);
  iVar6 = *(int *)(param_1 + 0x77f4);
  if (iVar6 == 0x10) {
    bVar3 = (uVar2 & 0x40) == 0;
    bVar5 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x77b0);
    bVar5 = 0;
    if ((iVar6 != 0x3f && iVar1 != 0x10) && (iVar1 != 0x3f)) {
      if ((*(int *)(*(long *)(param_1 + 0x10) + 0x360) == 0x13) ||
         (*(int *)(*(long *)(param_1 + 0x10) + 0x378) == 0x13)) {
        bVar5 = 0;
      }
      else {
        plVar7 = *(long **)(*(long *)(param_1 + 8) + 0x60);
        if (plVar7 == (long *)0x0) {
          if (((DAT_052461c0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_052461c0), iVar6 != 0))
          {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
            plVar7 = &DAT_05240280;
          }
          else {
            plVar7 = &DAT_05240280;
          }
        }
        bVar5 = (**(code **)(*plVar7 + 0x100))();
        iVar6 = *(int *)(param_1 + 0x77f4);
      }
    }
    bVar3 = (uVar2 & 0x40) == 0;
    if (iVar6 == 0x3e) {
      bVar4 = true;
      goto LAB_01ff2190;
    }
  }
  bVar4 = *(int *)(param_1 + 0x77b0) == 0x3e;
LAB_01ff2190:
  return bVar4 | ((bVar3 | bVar5) ^ 0xff) & 1;
}

