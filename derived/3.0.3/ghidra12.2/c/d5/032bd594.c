
/* WARNING: Removing unreachable block (ram,0x032bd5cc) */
/* WARNING: Removing unreachable block (ram,0x032bd714) */

void FUN_032bd594(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  
  puVar4 = (undefined8 *)(**(code **)(**(long **)*param_2 + 0x30))(*(long **)*param_2,0x1d0,8);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[6] = 0;
  *(undefined4 *)(puVar4 + 7) = 0;
  *(undefined8 *)((long)puVar4 + 0x3c) = 0x200000002;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar1 = PTR_DAT_04bc8f90 + 0x10;
  puVar2 = PTR_DAT_04bc8e98 + 0x10;
  puVar4[9] = puVar1;
  puVar4[10] = 0;
  puVar4[0xf] = puVar2;
  puVar4[0x10] = 0;
  puVar4[0x15] = puVar2;
  puVar4[0x16] = 0;
  puVar4[0x1b] = puVar1;
  puVar4[0x1c] = 0;
  puVar4[0x21] = puVar2;
  puVar4[0x22] = 0;
  puVar4[0x27] = puVar2;
  puVar4[0x28] = 0;
  puVar1 = PTR_DAT_04bc8e60 + 0x10;
  *(undefined4 *)(puVar4 + 0x39) = 0x40a0000;
  puVar4[0x2d] = puVar1;
  puVar4[0x2e] = 0;
  puVar4[0x33] = puVar1;
  puVar4[0x34] = 0;
  *(undefined1 *)(puVar4 + 0x39) = 6;
  puVar2 = PTR_DAT_04bb2698;
  pvVar7 = *(void **)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x18) = puVar4;
  if (pvVar7 != (void *)0x0) {
    FUN_032ae0c8(pvVar7);
    lVar5 = *(long *)puVar2;
    if (lVar5 == 0) {
      free(pvVar7);
    }
    else {
      plVar6 = (long *)FUN_038cb610(lVar5,pvVar7);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar7);
      }
    }
    puVar4 = *(undefined8 **)(param_1 + 0x18);
  }
  *(undefined4 *)(puVar4 + 7) = 0;
  *(byte *)(*(long *)(param_1 + 0x18) + 0x1c8) = *(byte *)(*(long *)(param_1 + 0x18) + 0x1c8) | 1;
  puVar4 = (undefined8 *)(**(code **)(**(long **)*param_2 + 0x30))(*(long **)*param_2,0x220,8);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  *(undefined8 *)((long)puVar4 + 0x4d) = 0;
  puVar4[0xb] = puVar1;
  puVar4[0xc] = 0;
  puVar4[0x11] = puVar1;
  puVar4[0x12] = 0;
  puVar4[0x17] = puVar1;
  puVar4[0x18] = 0;
  puVar4[0x1d] = puVar1;
  puVar4[0x1e] = 0;
  puVar3 = PTR_DAT_04bc8f88 + 0x10;
  puVar4[0x41] = 0;
  puVar4[0x29] = puVar3;
  puVar4[0x2a] = 0;
  puVar4[0x2f] = puVar3;
  puVar4[0x30] = 0;
  puVar4[0x35] = puVar3;
  puVar4[0x36] = 0;
  puVar4[0x3b] = puVar3;
  puVar4[0x3c] = 0;
  *(undefined8 *)((long)puVar4 + 0x217) = 0;
  puVar4[0x42] = 0;
  puVar4[0x23] = puVar1;
  puVar4[0x24] = 0;
  *(undefined2 *)(puVar4 + 10) = 0x41;
  *(undefined2 *)((long)puVar4 + 0x53) = 0x50f;
  pvVar7 = *(void **)(param_1 + 0x20);
  *(undefined8 **)(param_1 + 0x20) = puVar4;
  if (pvVar7 != (void *)0x0) {
    FUN_032c1b04(pvVar7);
    lVar5 = *(long *)puVar2;
    if (lVar5 == 0) {
      free(pvVar7);
    }
    else {
      plVar6 = (long *)FUN_038cb610(lVar5,pvVar7);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar7);
      }
    }
    puVar4 = *(undefined8 **)(param_1 + 0x20);
  }
  *(ushort *)(puVar4 + 10) = *(ushort *)(puVar4 + 10) | 0x20;
  return;
}

