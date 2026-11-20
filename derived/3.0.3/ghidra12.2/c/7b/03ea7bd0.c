
void FUN_03ea7bd0(long param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  void *__ptr;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long local_a0;
  long lStack_98;
  uint local_90;
  long local_88;
  void *local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar4 = PTR_DAT_04bb2698;
  uVar2 = *(uint *)(param_1 + 0x80);
  lStack_98 = param_1 + 0xbc;
  local_88 = param_1 + 0x88;
  local_a0 = param_1;
  local_90 = uVar2;
  local_78 = param_2;
  local_70 = param_3;
  uStack_68 = param_4;
  if ((int)uVar2 < 1) {
    __ptr = (void *)0x0;
  }
  else {
    lVar8 = *(long *)PTR_DAT_04bb2698;
    if (lVar8 == 0) {
      __ptr = malloc((ulong)uVar2 << 3);
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar8 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        __ptr = (void *)0x0;
      }
      else {
        __ptr = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,(ulong)uVar2 << 3,0xfffffffc);
      }
    }
    if (*(long *)(param_1 + 0x78) != param_1 + 0x70) {
      lVar8 = (long)*(int *)(param_1 + 0x84);
      plVar6 = (long *)(*(long *)(param_1 + 0x78) - lVar8);
      if (__ptr == (void *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Does not return */
        pcVar3 = (code *)UndefinedInstructionException(0,0x3ea7df4);
        (*pcVar3)();
      }
      uVar10 = 0;
      do {
        uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6);
        uVar1 = uVar10;
        if (uVar2 <= uVar10) {
          uVar1 = 0;
        }
        uVar10 = uVar10 + 1;
        *(undefined8 *)((long)__ptr + (ulong)uVar1 * 8) = uVar7;
        plVar6 = (long *)(*(long *)((long)plVar6 + lVar8 + 8) - lVar8);
      } while (plVar6 != (long *)((param_1 + 0x70) - lVar8));
    }
    local_80 = __ptr;
  }
  if (*(long *)(param_1 + 0x18) != param_1 + 0x10) {
    lVar5 = (long)*(int *)(param_1 + 0x24);
    lVar8 = *(long *)(param_1 + 0x18) - lVar5;
    do {
      FUN_03ea6b10(lVar8,&local_a0);
      lVar9 = *(long *)(lVar8 + 0x30);
      if ((*(byte *)(lVar9 + 0xd8) >> 1 & 1) == 0) {
        FUN_03bf3a60(lVar9);
        *(byte *)(lVar9 + 0xd8) = *(byte *)(lVar9 + 0xd8) | 2;
      }
      lVar9 = *(long *)(lVar8 + 0x38);
      if ((*(byte *)(lVar9 + 0xd8) >> 1 & 1) == 0) {
        FUN_03bf3a60(lVar9);
        *(byte *)(lVar9 + 0xd8) = *(byte *)(lVar9 + 0xd8) | 2;
      }
      lVar8 = *(long *)(lVar8 + lVar5 + 8) - lVar5;
    } while (lVar8 != (param_1 + 0x10) - lVar5);
  }
  if ((__ptr != (void *)0x0) && (0 < *(int *)(param_1 + 0x80))) {
    if (*(long *)puVar4 == 0) {
      free(__ptr);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar4,__ptr);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,__ptr);
      }
    }
  }
  return;
}

