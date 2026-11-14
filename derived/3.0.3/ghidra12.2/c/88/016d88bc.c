
void FUN_016d88bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *local_50;
  char *pcStack_48;
  
  if (param_1 != 0) {
    uVar2 = FUN_016d8030(param_2);
    puVar5 = *(undefined8 **)(param_1 + 0x60);
    if (puVar5 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052461c0), iVar3 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar5 = &DAT_05240280;
      }
      else {
        puVar5 = &DAT_05240280;
      }
    }
    puVar1 = PTR_DAT_04bb2020;
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "HasBackrestChair";
    if (((puVar5[0x227] != 0) && (lVar6 = *(long *)(puVar5[0x227] + 0x78), lVar6 != 0)) &&
       (plVar4 = *(long **)(lVar6 + 0x48), plVar4 != (long *)0x0)) {
      (**(code **)(*plVar4 + 0x38))(plVar4,&local_50,uVar2 & 1);
    }
    (**(code **)(**(long **)(param_1 + 0x68) + 0x100))(*(long **)(param_1 + 0x68),param_2);
    (**(code **)(**(long **)(param_1 + 0x68) + 0x160))(*(long **)(param_1 + 0x68),param_3);
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
    local_50 = puVar1 + 0x10;
    pcStack_48 = "CommonSitWait";
    FUN_017081d0(puVar5,&local_50,6,1,0);
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
    local_50 = (undefined *)CONCAT44(local_50._4_4_,8);
    if ((*(uint *)((long)puVar5 + 0x15f4) >> 8 & 1) != 0) {
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
      FUN_017081d0(puVar5,PTR_DAT_04bbde38,6,1,0);
    }
    FUN_016f8230(param_1,1,uVar2 & 1,0);
  }
  return;
}

