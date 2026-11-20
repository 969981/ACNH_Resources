
void FUN_03d48690(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  uint *puVar8;
  uint uVar9;
  long lVar10;
  
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  uVar2 = 0x20 - (int)LZCOUNT(*param_2);
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if ((int)uVar2 < 2) {
    uVar2 = 1;
  }
  if (lVar10 == 0) {
    pvVar7 = malloc((ulong)uVar2 << 3);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar6 = (long *)(lVar10 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) goto LAB_03d4873c;
    pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,(ulong)uVar2 << 3,8);
  }
  if (pvVar7 != (void *)0x0) {
    *(uint *)(param_1 + 0x18) = uVar2;
    *(void **)(param_1 + 0x20) = pvVar7;
  }
LAB_03d4873c:
  uVar9 = 0;
  do {
    if ((*param_2 >> (ulong)(uVar9 & 0x1f) & 1) == 0) {
      puVar8 = (uint *)0x0;
    }
    else {
      lVar10 = *(long *)puVar3;
      if (lVar10 == 0) {
        puVar8 = malloc(0x128);
      }
      else {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        plVar6 = (long *)(lVar10 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        puVar8 = (uint *)0x0;
        if (plVar6 != (long *)0x0) {
          puVar8 = (uint *)(**(code **)(*plVar6 + 0x30))(plVar6,0x128,8);
        }
      }
      *puVar8 = uVar9;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[0x27] = 0;
      puVar8[0x28] = 0;
      *(undefined1 *)(puVar8 + 0x49) = 0;
      puVar8[0x24] = 0xfffffffe;
      puVar8[0x25] = 0xfffffffe;
      puVar8[0x26] = 0xfffffffe;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = 0xfffffffe;
      puVar8[7] = 0xfffffffe;
      puVar8[8] = 0xfffffffe;
      puVar8[9] = 0xfffffffe;
      puVar8[10] = 0xfffffffe;
      puVar8[0xb] = 0xfffffffe;
      puVar8[0xc] = 0xfffffffe;
      puVar8[0xd] = 0xfffffffe;
      puVar8[0xe] = 0xfffffffe;
      puVar8[0xf] = 0xfffffffe;
      puVar8[0x10] = 0xfffffffe;
      puVar8[0x11] = 0xfffffffe;
      puVar8[0x12] = 0xfffffffe;
      puVar8[0x13] = 0xfffffffe;
      puVar8[0x14] = 0xfffffffe;
      puVar8[0x15] = 0xfffffffe;
      puVar8[0x16] = 0xfffffffe;
      puVar8[0x17] = 0xfffffffe;
      puVar8[0x18] = 0xfffffffe;
      puVar8[0x19] = 0xfffffffe;
      puVar8[0x1a] = 0xfffffffe;
      puVar8[0x1b] = 0xfffffffe;
      puVar8[0x1c] = 0xfffffffe;
      puVar8[0x1d] = 0xfffffffe;
      puVar8[0x1e] = 0xfffffffe;
      puVar8[0x1f] = 0xfffffffe;
      puVar8[0x20] = 0xfffffffe;
      puVar8[0x21] = 0xfffffffe;
      puVar8[0x22] = 0xfffffffe;
      puVar8[0x23] = 0xfffffffe;
      puVar8[0x45] = 0;
      puVar8[0x46] = 0;
      puVar8[0x47] = 0;
      puVar8[0x48] = 0;
      puVar8[0x41] = 0;
      puVar8[0x42] = 0;
      puVar8[0x43] = 0;
      puVar8[0x44] = 0;
      puVar8[0x3d] = 0;
      puVar8[0x3e] = 0;
      puVar8[0x3f] = 0;
      puVar8[0x40] = 0;
      puVar8[0x39] = 0;
      puVar8[0x3a] = 0;
      puVar8[0x3b] = 0;
      puVar8[0x3c] = 0;
      puVar8[0x35] = 0;
      puVar8[0x36] = 0;
      puVar8[0x37] = 0;
      puVar8[0x38] = 0;
      puVar8[0x31] = 0;
      puVar8[0x32] = 0;
      puVar8[0x33] = 0;
      puVar8[0x34] = 0;
      puVar8[0x2d] = 0;
      puVar8[0x2e] = 0;
      puVar8[0x2f] = 0;
      puVar8[0x30] = 0;
      puVar8[0x29] = 0;
      puVar8[0x2a] = 0;
      puVar8[0x2b] = 0;
      puVar8[0x2c] = 0;
    }
    uVar1 = uVar9;
    if (*(uint *)(param_1 + 0x18) <= uVar9) {
      uVar1 = 0;
    }
    uVar9 = uVar9 + 1;
    *(uint **)(*(long *)(param_1 + 0x20) + (ulong)uVar1 * 8) = puVar8;
  } while (uVar2 != uVar9);
  return;
}

