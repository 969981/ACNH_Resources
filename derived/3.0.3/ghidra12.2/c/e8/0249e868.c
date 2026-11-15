
void FUN_0249e868(long param_1,long param_2)

{
  byte *pbVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  byte bVar7;
  byte bVar8;
  undefined8 *puVar9;
  long *local_40;
  char local_38;
  char local_37;
  char local_36;
  int local_14;
  
  uVar5 = *(uint *)(param_2 + 0x6c);
  if ((uVar5 >> 0xc & 1) != 0) {
    *(undefined4 *)(param_1 + 0xb08) = *(undefined4 *)(param_2 + 0x5c);
    puVar9 = *(undefined8 **)(param_1 + 0x60);
    if (puVar9 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_052461c0);
        puVar9 = &DAT_05240280;
        if (iVar3 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar9 = &DAT_05240280;
      }
    }
    *(undefined1 *)((long)puVar9 + 0x5e95) = 1;
    *(undefined4 *)(param_1 + 0xb14) = *(undefined4 *)(param_2 + 0xd8);
    *(undefined4 *)(param_1 + 0xb18) = *(undefined4 *)(param_2 + 0xdc);
    *(undefined4 *)(param_1 + 0xb1c) = *(undefined4 *)(param_2 + 0xe0);
    uVar5 = *(uint *)(param_2 + 0x6c);
  }
  if (((uVar5 >> 0xb & 1) != 0) && (*(int *)(param_1 + 0x230) != *(int *)(param_2 + 0x5c))) {
    puVar9 = *(undefined8 **)(param_1 + 0x60);
    *(int *)(param_1 + 0xb0c) = *(int *)(param_2 + 0x5c);
    if (puVar9 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_052461c0);
        puVar9 = &DAT_05240280;
        if (iVar3 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar9 = &DAT_05240280;
      }
    }
    *(undefined1 *)((long)puVar9 + 0x5e95) = 1;
    *(undefined4 *)(param_1 + 0xb14) = *(undefined4 *)(param_2 + 0xd8);
    *(undefined4 *)(param_1 + 0xb18) = *(undefined4 *)(param_2 + 0xdc);
    *(undefined4 *)(param_1 + 0xb1c) = *(undefined4 *)(param_2 + 0xe0);
    uVar5 = *(uint *)(param_2 + 0x6c);
  }
  if ((uVar5 >> 0x10 & 1) != 0) {
    lVar6 = *(long *)PTR_DAT_04bb39b0;
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x15c) != 0)) {
      bVar8 = *(byte *)(param_1 + 0x1ee8);
      pbVar1 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar6 + 0x15c) != 0) {
        pbVar1 = (byte *)(lVar6 + 0x158);
      }
      bVar7 = *pbVar1;
      if (7 < bVar7) {
        bVar7 = 0xff;
      }
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      if (bVar7 != bVar8) {
        local_14 = *(int *)(param_1 + 0x230);
        FUN_0071cb58(&local_40,param_2 + 0x5c,&local_14,0);
        plVar2 = local_40;
        if (local_40 != (long *)0x0) {
          if (((*PTR_DAT_04bb3fe0 & 1) == 0) &&
             (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3fe0), iVar3 != 0)) {
            *(undefined **)PTR_DAT_04bb3fd8 = PTR_DAT_04bb2e50 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb3fe0);
          }
          uVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bb3fd8);
          if ((uVar4 & 1) == 0) {
            local_36 = '\0';
          }
        }
        if ((((local_40 != (long *)0x0) && (local_38 != '\0')) && (local_36 != '\0')) &&
           ((local_37 != '\0' && (local_14 = *(int *)((long)local_40 + 700), local_14 == 0x1d))))
        goto LAB_0249ea40;
      }
    }
    *(undefined4 *)(param_1 + 0xb04) = *(undefined4 *)(param_2 + 0x5c);
    *(undefined4 *)(param_1 + 0xb14) = *(undefined4 *)(param_2 + 0xd8);
    *(undefined4 *)(param_1 + 0xb18) = *(undefined4 *)(param_2 + 0xdc);
    *(undefined4 *)(param_1 + 0xb1c) = *(undefined4 *)(param_2 + 0xe0);
  }
LAB_0249ea40:
  if ((*(byte *)(param_2 + 0x6d) >> 5 & 1) != 0) {
    *(undefined4 *)(param_1 + 0xb10) = *(undefined4 *)(param_2 + 0x5c);
    puVar9 = *(undefined8 **)(param_1 + 0x60);
    if (puVar9 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_052461c0);
        puVar9 = &DAT_05240280;
        if (iVar3 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar9 = &DAT_05240280;
      }
    }
    *(undefined1 *)((long)puVar9 + 0x5e95) = 1;
    *(undefined4 *)(param_1 + 0xb14) = *(undefined4 *)(param_2 + 0xd8);
    *(undefined4 *)(param_1 + 0xb18) = *(undefined4 *)(param_2 + 0xdc);
    *(undefined4 *)(param_1 + 0xb1c) = *(undefined4 *)(param_2 + 0xe0);
  }
  return;
}

