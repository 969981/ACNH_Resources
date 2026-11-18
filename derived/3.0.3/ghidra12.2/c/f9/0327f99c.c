
/* WARNING: Removing unreachable block (ram,0x0327fb80) */
/* WARNING: Removing unreachable block (ram,0x0327f9e4) */
/* WARNING: Removing unreachable block (ram,0x0327fa94) */
/* WARNING: Removing unreachable block (ram,0x0327fbe8) */

void FUN_0327f99c(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  short sVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  void *pvVar11;
  
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x24);
  puVar10 = (undefined8 *)(param_2 + 8);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *puVar10;
  *(undefined8 *)(param_1 + 0x18) = uVar8;
  puVar5 = (undefined8 *)(**(code **)(*(long *)*puVar10 + 0x30))((long *)*puVar10,0xa0,8);
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined4 *)(puVar5 + 10) = 0xffffffff;
  puVar5[0x11] = 0;
  puVar5[0x12] = "agl::TextureData";
  *(undefined4 *)(puVar5 + 0x13) = 0x10000;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5[0x10] = 0;
  pvVar11 = *(void **)(param_1 + 0x20);
  *(undefined8 **)(param_1 + 0x20) = puVar5;
  puVar1 = PTR_DAT_04bb2698;
  if (pvVar11 != (void *)0x0) {
    FUN_038fd0e0((long)pvVar11 + 0x50);
    lVar6 = *(long *)puVar1;
    if (lVar6 == 0) {
      free(pvVar11);
    }
    else {
      plVar7 = (long *)FUN_038cb610(lVar6,pvVar11);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar11);
      }
    }
  }
  uVar8 = (**(code **)(*(long *)*puVar10 + 0x30))((long *)*puVar10,0xe0,8);
  FUN_0390cee0();
  pvVar11 = *(void **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar8;
  if (pvVar11 != (void *)0x0) {
    if (*(short *)((long)pvVar11 + 0xda) != -1) {
      lVar6 = *(long *)PTR_DAT_04bc1010;
      nn::os::LockMutex((MutexType *)(lVar6 + 0x580));
      uVar4 = (int)*(short *)((long)pvVar11 + 0xda) - (uint)*(ushort *)(lVar6 + 0x5c0);
      if (*(uint *)(lVar6 + 0x5a0) <= uVar4) {
        uVar4 = 0;
      }
      lVar2 = *(long *)(lVar6 + 0x5a8) + (long)(int)uVar4 * 0x80;
      sVar3 = *(short *)(lVar2 + 0x76) + -1;
      *(short *)(lVar2 + 0x76) = sVar3;
      if (sVar3 == 0) {
        *(short *)(lVar6 + 0x5c4) = *(short *)(lVar6 + 0x5c4) + -1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x580));
      *(undefined2 *)((long)pvVar11 + 0xda) = 0xffff;
    }
    FUN_038fd0e0((long)pvVar11 + 0x50);
    lVar6 = *(long *)puVar1;
    if (lVar6 == 0) {
      free(pvVar11);
    }
    else {
      plVar7 = (long *)FUN_038cb610(lVar6,pvVar11);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar11);
      }
    }
  }
  plVar7 = (long *)(**(code **)(*(long *)*puVar10 + 0x30))((long *)*puVar10,0x38,8);
  plVar7[6] = 0;
  *(undefined2 *)((long)plVar7 + 0x2a) = 0;
  plVar7[4] = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  puVar1 = PTR_DAT_04bb2cc8 + 0x10;
  *(undefined1 *)(plVar7 + 5) = 0;
  *plVar7 = (long)puVar1;
  plVar7[1] = 0;
  plVar9 = *(long **)(param_1 + 0x30);
  *(long **)(param_1 + 0x30) = plVar7;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  plVar7 = (long *)(**(code **)(*(long *)*puVar10 + 0x30))((long *)*puVar10,0x18,8);
  *(undefined4 *)(plVar7 + 2) = 0;
  *plVar7 = (long)(PTR_DAT_04bc8e10 + 0x10);
  plVar7[1] = -1;
  *(long **)(param_1 + 0x38) = plVar7;
  *(undefined4 *)(param_1 + 8) = 1;
  return;
}

