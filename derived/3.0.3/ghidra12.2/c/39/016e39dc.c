
void FUN_016e39dc(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_4c [12];
  
  if (*(long *)(param_1 + 0x2d8) != 0) {
    if ((param_2 & 1) != 0) {
      plVar4 = *(long **)(param_1 + 0x60);
      if (plVar4 == (long *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(&DAT_052461c0);
          plVar4 = &DAT_05240280;
          if (iVar3 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          plVar4 = &DAT_05240280;
        }
      }
      uVar2 = (**(code **)(*plVar4 + 0x100))(plVar4);
      plVar4 = *(long **)(param_1 + 0x60);
      if (plVar4 == (long *)0x0) {
        if (((DAT_052461c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052461c0), iVar3 != 0)) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
          plVar4 = &DAT_05240280;
        }
        else {
          plVar4 = &DAT_05240280;
        }
      }
      (**(code **)(*plVar4 + 0x4e8))(plVar4,1);
      plVar4 = *(long **)(param_1 + 0x60);
      lVar1 = plVar4[0x229];
      if (plVar4[0x227] != 0) {
        lVar1 = plVar4[0x227] + 0xc0;
      }
      if (lVar1 == 0) {
        (**(code **)(*plVar4 + 0x1c8))();
        plVar4 = *(long **)(param_1 + 0x60);
      }
      else {
        *(undefined1 *)(lVar1 + 0x17b) = 0;
        *(undefined2 *)(lVar1 + 0x179) = 0;
        (**(code **)(*plVar4 + 0x1c8))();
        *(undefined1 *)(lVar1 + 0x17b) = 1;
        *(undefined2 *)(lVar1 + 0x179) = 0x101;
        plVar4 = *(long **)(param_1 + 0x60);
      }
      if (plVar4 == (long *)0x0) {
        if (((DAT_052461c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052461c0), iVar3 != 0)) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
          plVar4 = &DAT_05240280;
        }
        else {
          plVar4 = &DAT_05240280;
        }
      }
      (**(code **)(*plVar4 + 0x4e8))(plVar4,uVar2 & 1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x60);
    if (puVar5 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_052461c0);
        puVar5 = &DAT_05240280;
        if (iVar3 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar5 = &DAT_05240280;
      }
    }
    FUN_016ff8c0(puVar5,2,auStack_4c);
    FUN_01738814(*(undefined8 *)(param_1 + 0x2d8),*(undefined8 *)(param_1 + 0x60),auStack_4c);
  }
  return;
}

