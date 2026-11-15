
/* WARNING: Removing unreachable block (ram,0x0231b740) */
/* WARNING: Removing unreachable block (ram,0x0231b79c) */

void FUN_0231b68c(long param_1,ulong param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined *local_50;
  char *pcStack_48;
  
  if (*(int *)(param_1 + 0x1810) == 7) {
    puVar6 = *(undefined8 **)(param_1 + 0x60);
    if (puVar6 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_052461c0);
        puVar6 = &DAT_05240280;
        if (iVar4 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar6 = &DAT_05240280;
      }
    }
    pcStack_48 = "PlayerSWalkWait";
    goto LAB_0231b81c;
  }
  bVar2 = *(byte *)(param_1 + 0x18f4);
  bVar1 = *(byte *)(param_1 + 0x18f4) >> 2 & 1;
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    local_50 = (undefined *)CONCAT44(local_50._4_4_,2);
    if ((DAT_052461c0 & 1) != 0) {
      puVar6 = &DAT_05240280;
      goto LAB_0231b7c0;
    }
    iVar4 = __cxa_guard_acquire(&DAT_052461c0,param_2,bVar1);
    lVar3 = DAT_052413b8;
    if (iVar4 != 0) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      lVar3 = DAT_052413b8;
    }
  }
  else {
LAB_0231b7c0:
    local_50 = (undefined *)CONCAT44(local_50._4_4_,2);
    lVar3 = puVar6[0x227];
  }
  if (((lVar3 != 0) && (*(long *)(lVar3 + 0x78) != 0)) &&
     (plVar5 = *(long **)(*(long *)(lVar3 + 0x78) + 0x48), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x28))(plVar5,&DAT_0548ff00,bVar1);
  }
  if ((bVar2 >> 3 & 1) == 0) {
    FUN_023164ec(param_1,param_2 & 0xffffffff);
    return;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  pcStack_48 = "PlayerMenuWait";
LAB_0231b81c:
  local_50 = PTR_DAT_04bb2020 + 0x10;
  FUN_017081d0(puVar6,&local_50,param_2 & 0xffffffff,1,0);
  return;
}

