
undefined8 FUN_0244bf8c(long param_1,undefined4 param_2,ulong param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if (*(int *)(param_1 + 0x1810) == 4 || *(int *)(param_1 + 0x1810) == 7) {
LAB_0244bfb0:
    uVar5 = 0;
  }
  else {
    if ((param_3 & 1) != 0) {
      if (((*(long *)(param_1 + 0x70) != 0) &&
          (uVar1 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280), uVar1 < 0x149)) &&
         ((uVar1 & 0xfffffffe) == 0x2a)) goto LAB_0244bfb0;
      puVar6 = *(undefined8 **)(param_1 + 0x60);
      if (puVar6 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar2 = __cxa_guard_acquire(&DAT_052461c0);
          puVar6 = &DAT_05240280;
          if (iVar2 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar6 = &DAT_05240280;
        }
      }
      if ((*(uint *)((long)puVar6 + 0x15f4) >> 5 & 1) == 0) {
        return 1;
      }
    }
    puVar6 = *(undefined8 **)(param_1 + 0x60);
    if (puVar6 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_052461c0);
        puVar6 = &DAT_05240280;
        if (iVar2 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar6 = &DAT_05240280;
      }
    }
    *(uint *)((long)puVar6 + 0x15f4) = *(uint *)((long)puVar6 + 0x15f4) & 0xfffffeff;
    if (((puVar6[0x227] != 0) && (lVar4 = *(long *)(puVar6[0x227] + 0x78), lVar4 != 0)) &&
       (plVar3 = *(long **)(lVar4 + 0x48), plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 0x28))(plVar3,&DAT_05248628,0);
    }
    iVar2 = FUN_00a74b78(param_1 + 0x1ee8);
    if (iVar2 == 4) {
      param_2 = 1;
    }
    uVar5 = 1;
    FUN_024780c0(param_1,param_2,1,0,param_4,0);
  }
  return uVar5;
}

