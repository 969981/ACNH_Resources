
void FUN_03b54990(long param_1,long *param_2,undefined8 param_3,undefined4 *param_4,
                 undefined4 param_5,long param_6,uint param_7,long param_8)

{
  ulong *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  ulong *puVar9;
  ulong *puVar10;
  size_t sVar11;
  ulong uVar12;
  long lVar13;
  undefined4 *puVar14;
  uint uVar15;
  MutexType *pMVar16;
  
  puVar14 = (undefined4 *)(param_1 + 0x10);
  *puVar14 = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  uVar15 = param_4[3];
  if (*(char *)(param_1 + 0x28) != '\0') goto LAB_03b54c94;
  *(uint *)(param_1 + 0x48) = uVar15;
  puVar5 = PTR_DAT_04bb2698;
  sVar11 = (ulong)uVar15 << 1;
  if ((int)uVar15 < 0) {
    sVar11 = 0xffffffffffffffff;
  }
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    pvVar8 = malloc(sVar11);
  }
  else {
    plVar7 = param_2;
    if (param_2 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar7 = (long *)(lVar13 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      pvVar8 = (void *)0x0;
      if (plVar7 == (long *)0x0) goto LAB_03b54a5c;
    }
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,sVar11,8);
  }
LAB_03b54a5c:
  *(void **)(param_1 + 0x50) = pvVar8;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    lVar13 = 0;
    do {
      lVar6 = lVar13 + 1;
      *(short *)(*(long *)(param_1 + 0x50) + lVar13 * 2) = (short)lVar6;
      lVar13 = lVar6;
    } while (lVar6 < *(int *)(param_1 + 0x48));
    pvVar8 = *(void **)(param_1 + 0x50);
  }
  *(undefined2 *)((long)pvVar8 + (long)(int)(uVar15 - 1) * 2) = 0xffff;
  *(uint *)(param_1 + 0x38) = uVar15;
  *(uint *)(param_1 + 0x3c) = uVar15;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (long)(int)uVar15;
  lVar13 = *(long *)puVar5;
  sVar11 = (long)(int)uVar15 * 0xe8 + 8;
  if (0xfffffffffffffff7 < (ulong)((long)(int)uVar15 * 0xe8) ||
      SUB168(auVar4 * ZEXT816(0xe8),8) != 0) {
    sVar11 = 0xffffffffffffffff;
  }
  if (lVar13 == 0) {
    puVar9 = malloc(sVar11);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar13 + 8);
      if (lVar6 != 0) {
        param_2 = (long *)(lVar6 + 0xa8);
      }
      param_2 = (long *)*param_2;
    }
    puVar9 = (ulong *)(**(code **)(*param_2 + 0x30))(param_2,sVar11,0x20);
  }
  puVar10 = puVar9 + 1;
  *puVar9 = (long)(int)uVar15;
  if (uVar15 != 0) {
    puVar9 = puVar10;
    do {
      *(undefined4 *)(puVar9 + 2) = 0;
      *puVar9 = (ulong)&PTR___cxa_pure_virtual_04b769d0;
      puVar9[1] = (ulong)&PTR_LAB_04b76a18;
      puVar1 = puVar9 + 7;
      pMVar16 = (MutexType *)(puVar9 + 10);
      *(undefined2 *)pMVar16 = 0;
      puVar9[5] = (ulong)&PTR_LAB_04b76950;
      *(undefined4 *)(puVar9 + 4) = 0;
      puVar9[3] = (ulong)&PTR_LAB_04b76a18;
      *(undefined2 *)(puVar9 + 6) = 0xffff;
      puVar9[7] = (ulong)puVar1;
      *(undefined8 *)((long)puVar9 + 0x54) = 0;
      puVar9[0xc] = 0;
      *(undefined4 *)(puVar9 + 0xd) = 0;
      puVar9[8] = (ulong)puVar1;
      puVar9[9] = 0xffffffff00000000;
      nn::os::InitializeMutex(pMVar16,true,0);
      *(undefined4 *)(puVar9 + 6) = 0xffff;
      *(undefined4 *)((long)puVar9 + 0x4c) = 0x20;
      *(undefined4 *)(puVar9 + 2) = 0;
      *(undefined4 *)(puVar9 + 4) = 0;
      nn::os::LockMutex(pMVar16);
      FUN_03b55fd0(puVar1);
      *(undefined2 *)((long)puVar9 + 0x32) = 0;
      nn::os::UnlockMutex(pMVar16);
      *(undefined2 *)(puVar9 + 6) = 0xffff;
      *puVar9 = (ulong)&PTR___cxa_pure_virtual_04b76710;
      puVar9[0xe] = 0;
      *(undefined8 *)((long)puVar9 + 0x75) = 0;
      *(undefined4 *)(puVar9 + 2) = 0;
      *(undefined4 *)(puVar9 + 4) = 0;
      puVar9[0x10] = (ulong)(puVar9 + 0x10);
      puVar9[0x11] = (ulong)(puVar9 + 0x10);
      puVar9[0x12] = 0x1000000000;
      puVar9[0x13] = (ulong)&PTR_LAB_04b76990;
      puVar9[0x16] = 0;
      puVar9[0x17] = 0;
      puVar9[0x18] = 0;
      puVar9[0x19] = 0;
      puVar9[0x14] = 0;
      puVar9[0x15] = 0;
      nn::os::LockMutex(pMVar16);
      FUN_03b55fd0(puVar1);
      *(undefined2 *)((long)puVar9 + 0x32) = 0;
      nn::os::UnlockMutex(pMVar16);
      *(undefined2 *)(puVar9 + 6) = 0xffff;
      *puVar9 = (ulong)&PTR_LAB_04b76850;
      *(undefined2 *)(puVar9 + 0x1c) = 0xffff;
      puVar9[0x1a] = 0;
      puVar9[0x1b] = 0;
      puVar9 = puVar9 + 0x1d;
    } while (puVar9 != puVar10 + (long)(int)uVar15 * 0x1d);
  }
  *(ulong **)(param_1 + 0x30) = puVar10;
  *(undefined1 *)(param_1 + 0x28) = 1;
  uVar15 = param_4[3];
LAB_03b54c94:
  *(short *)(param_1 + 0x1f0) = (short)uVar15;
  if (*(char *)(param_1 + 0xdc) == '\0') {
    uVar2 = *param_4;
    uVar12 = param_8 << 0x20;
    param_7 = param_6 != 0 & param_7;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    if (param_7 == 0) {
      uVar12 = 0;
    }
    *(undefined4 *)(param_1 + 0xd0) = uVar2;
    *(undefined4 *)(param_1 + 0xd4) = param_5;
    *(ulong *)(param_1 + 0x148) = uVar12 | param_7;
    (**(code **)(*(long *)(param_1 + 0x60) + 0x70))((long *)(param_1 + 0x60),uVar2,param_5);
    uVar15 = (uint)*(ushort *)(param_1 + 0x1f0);
    *(undefined1 *)(param_1 + 0xdc) = 1;
  }
  uVar3 = uVar15 >> 5 & 0x7ff;
  puVar14[uVar3] = 1 << (ulong)(uVar15 & 0x1f) | puVar14[uVar3];
  *(undefined1 *)(param_1 + 0x1f2) = 1;
  return;
}

