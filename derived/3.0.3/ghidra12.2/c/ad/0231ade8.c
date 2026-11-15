
/* WARNING: Type propagation algorithm not settling */

void FUN_0231ade8(long param_1,undefined4 param_2)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined **ppuVar6;
  long lVar7;
  byte bVar8;
  byte bVar9;
  undefined *local_40;
  char *pcStack_38;
  
  lVar7 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar7 == 0) || (*(int *)(lVar7 + 0x15c) == 0)) {
LAB_0231ae80:
    bVar2 = false;
    puVar4 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar1 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar7 + 0x15c) != 0) {
        pbVar1 = (byte *)(lVar7 + 0x158);
      }
      bVar9 = *(byte *)(param_1 + 0x1ee8);
      bVar8 = *pbVar1;
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      if (7 < bVar9) {
        bVar9 = 0xff;
      }
      if (bVar8 != bVar9) goto LAB_0231ae80;
    }
    iVar3 = FUN_0254a1e4();
    bVar2 = iVar3 == 1;
    puVar4 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar4 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052461c0), iVar3 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar4 = &DAT_05240280;
    }
    else {
      puVar4 = &DAT_05240280;
    }
  }
  if (bVar2) {
    if (((puVar4[0x227] != 0) && (lVar7 = *(long *)(puVar4[0x227] + 0x78), lVar7 != 0)) &&
       (plVar5 = *(long **)(lVar7 + 0x48), plVar5 != (long *)0x0)) {
      (**(code **)(*plVar5 + 0x28))(plVar5,&DAT_0548ff00,0);
    }
    puVar4 = *(undefined8 **)(param_1 + 0x60);
    if (puVar4 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_052461c0);
        puVar4 = &DAT_05240280;
        if (iVar3 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar4 = &DAT_05240280;
      }
    }
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "PlayerMenuWait";
    ppuVar6 = &local_40;
  }
  else {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "PlayerWait";
    FUN_017081d0(puVar4,&local_40,param_2,1,0);
    puVar4 = *(undefined8 **)(param_1 + 0x60);
    if (puVar4 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_052461c0);
        puVar4 = &DAT_05240280;
        if (iVar3 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar4 = &DAT_05240280;
      }
    }
    local_40 = (undefined *)CONCAT44(local_40._4_4_,8);
    if ((*(uint *)((long)puVar4 + 0x15f4) >> 8 & 1) == 0) {
      return;
    }
    puVar4 = *(undefined8 **)(param_1 + 0x60);
    if (puVar4 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_052461c0);
        puVar4 = &DAT_05240280;
        if (iVar3 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar4 = &DAT_05240280;
      }
    }
    ppuVar6 = (undefined **)PTR_DAT_04bbde38;
  }
  FUN_017081d0(puVar4,ppuVar6,param_2,1,0);
  return;
}

