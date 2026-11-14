
void FUN_01d54130(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 *puVar5;
  int iVar6;
  long lVar7;
  undefined4 uVar8;
  long lVar9;
  undefined2 *puVar10;
  ulong uVar11;
  undefined4 uStack_8c;
  undefined8 local_88;
  ushort uStack_7e;
  undefined *local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 local_5c [5];
  undefined2 local_52;
  
  puVar3 = PTR_DAT_04bb27d0;
  local_52 = 0;
  local_60 = 6;
  local_68 = local_5c;
  local_5c[0] = 0;
  local_70 = PTR_DAT_04bb84e0 + 0x10;
  uVar2 = *(undefined4 *)(param_1 + 0xaa0);
  uVar8 = 0xc;
  lVar9 = **(long **)PTR_DAT_04bb27d0;
  if ((lVar9 != 0) && (uVar8 = 8, *(char *)(lVar9 + 0x55d) == '\0' || *(int *)(lVar9 + 0x508) == 0))
  {
    uVar8 = 0xc;
  }
  uStack_8c = CONCAT31((int3)((uint)uStack_8c >> 8),1);
  iVar6 = FUN_0250a5c8(*(undefined8 *)PTR_DAT_04bb4fb8);
  puVar5 = local_68;
  puVar4 = PTR_DAT_04bc1260;
  if (iVar6 < 2) {
    iVar6 = 1;
  }
  uVar1 = 0x30000;
  if (*(int *)(param_1 + 0xaa0) != 1) {
    uVar1 = (uint)*(byte *)(param_1 + 0xab5) << 0x11;
  }
  local_88 = CONCAT44(uVar1 | *(uint *)(param_1 + 0xaa0) & 0xff,iVar6);
  if (*(byte *)(param_1 + 0xab5) != 0) {
    (**(code **)(*(long *)PTR_DAT_04bc1260 + 0x18))(PTR_DAT_04bc1260);
    puVar10 = *(undefined2 **)(puVar4 + 8);
    if (puVar5 != puVar10) {
      (**(code **)(*(long *)puVar4 + 0x18))(puVar4);
      lVar9 = 0;
      do {
        if (*(short *)(*(long *)(puVar4 + 8) + lVar9 * 2) == 0) goto LAB_01d542b0;
        lVar7 = *(long *)(puVar4 + 8) + lVar9 * 2;
        if (*(short *)(lVar7 + 2) == 0) {
          lVar9 = lVar9 + 1;
          goto LAB_01d542b0;
        }
        if (*(short *)(lVar7 + 4) == 0) {
          lVar9 = lVar9 + 2;
          goto LAB_01d542b0;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_01d542b0:
      uVar1 = (uint)lVar9;
      if (local_60 <= (int)(uint)lVar9) {
        uVar1 = local_60 - 1;
      }
      uVar11 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
      memcpy(puVar5,puVar10,uVar11);
      *(undefined2 *)((long)puVar5 + uVar11) = 0;
    }
  }
  lVar9 = *(long *)PTR_DAT_04bb21d0;
  *(undefined **)(*(long *)(lVar9 + 0x28) + 0x10) = PTR_DAT_04bc1268;
  puVar10 = *(undefined2 **)(lVar9 + 0x1b8);
  *(undefined4 *)(lVar9 + 0x188) = 0;
  *(undefined4 *)(lVar9 + 0x18c) = uVar2;
  *(ulong *)(lVar9 + 400) = CONCAT44(uStack_8c,uVar8);
  *(undefined8 *)(lVar9 + 0x198) = local_88;
  *(ulong *)(lVar9 + 0x1a0) = (ulong)uStack_7e << 0x10;
  *(undefined2 *)(lVar9 + 0x1a8) = 0x100;
  (**(code **)(local_70 + 0x18))(&local_70);
  puVar5 = local_68;
  if (puVar10 != local_68) {
    (**(code **)(local_70 + 0x18))(&local_70);
    lVar7 = 0;
    do {
      if (local_68[lVar7] == 0) goto LAB_01d5438c;
      if (local_68[lVar7 + 1] == 0) {
        lVar7 = lVar7 + 1;
        goto LAB_01d5438c;
      }
      if (local_68[lVar7 + 2] == 0) {
        lVar7 = lVar7 + 2;
        goto LAB_01d5438c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_01d5438c:
    uVar1 = (uint)lVar7;
    if (*(int *)(lVar9 + 0x1c0) <= (int)(uint)lVar7) {
      uVar1 = *(int *)(lVar9 + 0x1c0) - 1;
    }
    uVar11 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
    memcpy(puVar10,puVar5,uVar11);
    *(undefined2 *)((long)puVar10 + uVar11) = 0;
  }
  *(undefined1 *)(lVar9 + 0x180) = 1;
  FUN_01d3ed78(**(undefined8 **)puVar3);
  return;
}

