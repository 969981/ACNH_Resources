
void FUN_039fb270(long param_1,long *param_2,long param_3,uint param_4)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  size_t __size;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  undefined *local_70;
  undefined *puStack_68;
  undefined *local_60;
  long lStack_58;
  undefined1 auStack_34 [4];
  
  puVar1 = PTR_DAT_04bb2698;
  if (0 < (int)param_4) {
    lVar14 = *(long *)PTR_DAT_04bb2698;
    uVar13 = (ulong)param_4;
    if (lVar14 == 0) {
      puVar7 = malloc(uVar13 << 5);
    }
    else {
      plVar6 = param_2;
      if (param_2 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar6 = (long *)(lVar14 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_039fb3c4;
      }
      puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,uVar13 << 5,8);
    }
    if (puVar7 != (undefined8 *)0x0) {
      uVar11 = uVar13 & 7;
      puVar10 = puVar7;
      if ((param_4 & 7) != 0) {
        puVar9 = puVar7;
        do {
          *(undefined4 *)(puVar9 + 3) = 0;
          uVar11 = uVar11 - 1;
          puVar9[1] = 0;
          puVar9[2] = 0;
          puVar10 = puVar9 + 4;
          *puVar9 = 0;
          puVar9 = puVar10;
        } while (uVar11 != 0);
      }
      if (6 < (uVar13 - 1 & 0x7ffffffffffffff)) {
        do {
          *(undefined4 *)(puVar10 + 3) = 0;
          *puVar10 = 0;
          puVar10[6] = 0;
          *(undefined4 *)(puVar10 + 7) = 0;
          puVar10[10] = 0;
          *(undefined4 *)(puVar10 + 0xb) = 0;
          puVar10[0xe] = 0;
          *(undefined4 *)(puVar10 + 0xf) = 0;
          *(undefined4 *)(puVar10 + 0x13) = 0;
          puVar10[0x10] = 0;
          *(undefined4 *)(puVar10 + 0x17) = 0;
          puVar10[0x14] = 0;
          *(undefined4 *)(puVar10 + 0x1b) = 0;
          puVar10[0x18] = 0;
          *(undefined4 *)(puVar10 + 0x1f) = 0;
          puVar10[0x1c] = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
          puVar10[4] = 0;
          puVar10[5] = 0;
          puVar10[8] = 0;
          puVar10[9] = 0;
          puVar10[0xc] = 0;
          puVar10[0xd] = 0;
          puVar10[0x11] = 0;
          puVar10[0x12] = 0;
          puVar10[0x15] = 0;
          puVar10[0x16] = 0;
          puVar10[0x19] = 0;
          puVar10[0x1a] = 0;
          puVar10[0x1d] = 0;
          puVar10[0x1e] = 0;
          puVar10 = puVar10 + 0x20;
        } while (puVar10 != puVar7 + uVar13 * 4);
      }
      *(uint *)(param_1 + 8) = param_4;
      *(undefined8 **)(param_1 + 0x10) = puVar7;
    }
  }
LAB_039fb3c4:
  plVar6 = (long *)(*(long *)(*(long *)(param_3 + 8) + 0x118) +
                   (ulong)*(ushort *)(param_3 + 0x14) * 0x70);
  lVar14 = *plVar6;
  bVar2 = *(byte *)(lVar14 + 0x5b);
  if (bVar2 == 0) goto LAB_039fb48c;
  lVar14 = *(long *)puVar1;
  __size = (ulong)bVar2 << 3;
  if (lVar14 == 0) {
    pvVar8 = malloc(__size);
joined_r0x039fb528:
    if (pvVar8 != (void *)0x0) {
      *(uint *)(param_1 + 0x18) = (uint)bVar2;
      *(void **)(param_1 + 0x20) = pvVar8;
    }
  }
  else {
    if (param_2 != (long *)0x0) {
LAB_039fb420:
      pvVar8 = (void *)(**(code **)(*param_2 + 0x30))(param_2,__size,8);
      goto joined_r0x039fb528;
    }
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar7 = (undefined8 *)(lVar14 + 8);
    if (lVar5 != 0) {
      puVar7 = (undefined8 *)(lVar5 + 0xa8);
    }
    param_2 = (long *)*puVar7;
    if (param_2 != (long *)0x0) goto LAB_039fb420;
  }
  uVar13 = 0;
  lVar14 = 0x18;
  do {
    uVar11 = uVar13 & 0xffffffff;
    bVar4 = *(uint *)(param_1 + 0x18) <= uVar13;
    uVar13 = uVar13 + 1;
    if (bVar4) {
      uVar11 = 0;
    }
    puVar7 = (undefined8 *)(*(long *)(*plVar6 + 0x18) + lVar14);
    lVar14 = lVar14 + 0x38;
    *(ulong *)(*(long *)(param_1 + 0x20) + uVar11 * 8) = (ulong)*(uint *)*puVar7;
  } while (bVar2 != uVar13);
  lVar14 = *plVar6;
LAB_039fb48c:
  uVar3 = *(uint *)(*(long *)(lVar14 + 0x18) + 0x28);
  *(uint *)(param_1 + 0x28) = uVar3;
  if (uVar3 < 3) {
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(&DAT_041b41f0 + (long)(int)uVar3 * 4);
  }
  uVar12 = *(undefined8 *)(param_3 + 0x28);
  (**(code **)(PTR_PTR_04c4bc98 + 0x18))(&PTR_PTR_04c4bc98);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  puStack_68 = PTR_s_gsys_geometry_depth_culling_04c4bca0;
  local_70 = puVar1;
  lStack_58 = FUN_039b4320(uVar12,&local_70);
  if (lStack_58 != 0) {
    local_60 = puVar1;
    FUN_038d30c0(auStack_34,&local_60,0xffffffff);
  }
  return;
}

