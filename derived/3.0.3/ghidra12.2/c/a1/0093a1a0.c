
void FUN_0093a1a0(long param_1)

{
  undefined *puVar1;
  uint *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  ushort uVar7;
  uint uVar8;
  undefined *puVar9;
  bool bVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 local_50;
  undefined *local_48;
  
  puVar3 = PTR_DAT_04bb6298;
  *(undefined1 *)(param_1 + 0x1170) = 0;
  sVar6 = *(short *)puVar3;
  if (sVar6 == -1) {
LAB_0093a218:
    iVar5 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
    if ((iVar5 != -0x3f5c743d && iVar5 != -0x24a26848) &&
       ((iVar5 != -0x2f1ac06c || (*(int *)(*(long *)PTR_DAT_04bb3728 + 0xb0) == 0)))) {
      uVar12 = (uint)sVar6;
      if (uVar12 != 0xffffffff) {
        puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar12 * 8);
        if (0xff < uVar12) {
          puVar2 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar2 >> 0x11 & 1) != 0) {
          local_50 = PTR_DAT_04bb2020 + 0x10;
          local_48 = &DAT_040c99dd;
          plVar11 = (long *)FUN_038c6d48(0x300000,&local_50,0,8,1,0);
          *(long **)(param_1 + 0x98) = plVar11;
          local_48 = (undefined *)CONCAT71(local_48._1_7_,1);
          local_50 = (undefined *)0xa0000000a0;
          lVar17 = *(long *)PTR_DAT_04bb2698;
          if (lVar17 == 0) {
            plVar11 = malloc(0x128);
          }
          else {
            if (plVar11 == (long *)0x0) {
              lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar11 = (long *)(lVar17 + 8);
              if (lVar13 != 0) {
                plVar11 = (long *)(lVar13 + 0xa8);
              }
              plVar11 = (long *)*plVar11;
            }
            plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x128,8);
          }
          *(undefined8 *)((long)plVar11 + 0x1d) = 0;
          plVar11[2] = 0;
          plVar11[3] = 0;
          puVar1 = PTR_DAT_04bb5cd0;
          plVar11[5] = 0x4020000040a00000;
          *(undefined4 *)(plVar11 + 6) = 0x4162cccd;
          plVar11[10] = 0;
          *plVar11 = (long)(puVar1 + 0x10);
          plVar11[1] = 0;
          *(undefined4 *)(plVar11 + 0xb) = 0;
          plVar11[0xc] = 0;
          *(undefined4 *)(plVar11 + 0xd) = 0;
          *(undefined8 *)((long)plVar11 + 0x34) = 0;
          *(undefined8 *)((long)plVar11 + 0x3c) = 0;
          *(undefined8 *)((long)plVar11 + 0x44) = 0;
          plVar11[0xe] = 0;
          plVar11[0x10] = 0;
          plVar11[0x11] = 0;
          plVar16 = plVar11 + 0x15;
          *plVar16 = 0;
          plVar15 = plVar11 + 0x12;
          *plVar15 = 0;
          plVar11[0xf] = 0;
          plVar11[0x13] = 0;
          plVar11[0x14] = 0;
          plVar11[0x16] = 0;
          plVar11[0x17] = 0;
          puVar1 = PTR_DAT_04bb5cd8 + 0x10;
          *(undefined1 *)(plVar11 + 0x24) = 0;
          plVar11[0x10] = (long)plVar11;
          plVar11[0x18] = (long)puVar1;
          plVar11[0x19] = (long)(plVar11 + 0xf);
          *(undefined4 *)plVar15 = 1;
          puVar9 = PTR_FUN_04bb5cc8;
          plVar11[0x13] = (long)plVar11;
          plVar11[0x16] = (long)plVar11;
          plVar11[0x1c] = (long)puVar1;
          plVar11[0x1d] = (long)plVar15;
          *(undefined4 *)plVar16 = 2;
          plVar11[0x1a] = (long)puVar9;
          plVar11[0x1b] = 0;
          plVar11[0x1e] = (long)puVar9;
          plVar11[0x1f] = 0;
          plVar11[0x20] = (long)puVar1;
          plVar11[0x21] = (long)plVar16;
          plVar11[0x22] = (long)puVar9;
          plVar11[0x23] = 0;
          *(long **)(param_1 + 0x78) = plVar11;
          FUN_00962298(plVar11,&local_50,*(undefined8 *)(param_1 + 0x98),1);
          (**(code **)(**(long **)(param_1 + 0x98) + 0x28))();
          lVar17 = *(long *)(param_1 + 0x78);
          goto LAB_0093a4fc;
        }
      }
      bVar10 = *(char *)(param_1 + 0x1159) != '\0';
      iVar5 = 0x40;
      if (bVar10) {
        iVar5 = *(int *)(param_1 + 0x1160);
      }
      iVar4 = 0x40;
      if (bVar10) {
        iVar4 = *(int *)(param_1 + 0x115c);
      }
      local_50 = PTR_DAT_04bb2020 + 0x10;
      local_48 = &DAT_0408687b;
      plVar11 = (long *)FUN_038c6d48((long)(iVar4 * iVar5 * 0x80),&local_50,0,8,1,0);
      *(long **)(param_1 + 0x98) = plVar11;
      local_48 = (undefined *)CONCAT71(local_48._1_7_,1);
      local_50 = (undefined *)CONCAT44(iVar5,iVar4);
      lVar17 = *(long *)PTR_DAT_04bb2698;
      if (lVar17 == 0) {
        plVar11 = malloc(0x128);
      }
      else {
        if (plVar11 == (long *)0x0) {
          lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar11 = (long *)(lVar17 + 8);
          if (lVar13 != 0) {
            plVar11 = (long *)(lVar13 + 0xa8);
          }
          plVar11 = (long *)*plVar11;
        }
        plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x128,8);
      }
      *(undefined8 *)((long)plVar11 + 0x1d) = 0;
      plVar11[2] = 0;
      plVar11[3] = 0;
      puVar1 = PTR_DAT_04bb5cd0;
      plVar11[5] = 0x4020000040a00000;
      *(undefined4 *)(plVar11 + 6) = 0x4162cccd;
      plVar11[10] = 0;
      *plVar11 = (long)(puVar1 + 0x10);
      plVar11[1] = 0;
      *(undefined4 *)(plVar11 + 0xb) = 0;
      plVar11[0xc] = 0;
      *(undefined4 *)(plVar11 + 0xd) = 0;
      *(undefined8 *)((long)plVar11 + 0x34) = 0;
      *(undefined8 *)((long)plVar11 + 0x3c) = 0;
      *(undefined8 *)((long)plVar11 + 0x44) = 0;
      plVar11[0xe] = 0;
      plVar11[0x10] = 0;
      plVar11[0x11] = 0;
      plVar16 = plVar11 + 0x15;
      *plVar16 = 0;
      plVar15 = plVar11 + 0x12;
      *plVar15 = 0;
      plVar11[0xf] = 0;
      plVar11[0x13] = 0;
      plVar11[0x14] = 0;
      plVar11[0x16] = 0;
      plVar11[0x17] = 0;
      puVar1 = PTR_DAT_04bb5cd8 + 0x10;
      *(undefined1 *)(plVar11 + 0x24) = 0;
      plVar11[0x10] = (long)plVar11;
      plVar11[0x18] = (long)puVar1;
      plVar11[0x19] = (long)(plVar11 + 0xf);
      *(undefined4 *)plVar15 = 1;
      puVar9 = PTR_FUN_04bb5cc8;
      plVar11[0x13] = (long)plVar11;
      plVar11[0x16] = (long)plVar11;
      plVar11[0x1c] = (long)puVar1;
      plVar11[0x1d] = (long)plVar15;
      *(undefined4 *)plVar16 = 2;
      plVar11[0x1a] = (long)puVar9;
      plVar11[0x1b] = 0;
      plVar11[0x1e] = (long)puVar9;
      plVar11[0x1f] = 0;
      plVar11[0x20] = (long)puVar1;
      plVar11[0x21] = (long)plVar16;
      plVar11[0x22] = (long)puVar9;
      plVar11[0x23] = 0;
      *(long **)(param_1 + 0x70) = plVar11;
      FUN_00962298(plVar11,&local_50,*(undefined8 *)(param_1 + 0x98),1);
      (**(code **)(**(long **)(param_1 + 0x98) + 0x28))();
      lVar17 = *(long *)(param_1 + 0x70);
      goto LAB_0093a4fc;
    }
  }
  else {
    local_50 = (undefined *)CONCAT44(local_50._4_4_,3);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
    if (0xff < (uint)(int)sVar6) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 3 & 1) == 0) goto LAB_0093a218;
  }
  lVar17 = *(long *)(param_1 + 0x68);
LAB_0093a4fc:
  *(long *)(param_1 + 0x80) = lVar17;
  iVar5 = *(int *)(lVar17 + 0x38);
  iVar4 = *(int *)(lVar17 + 0x3c);
  *(undefined1 *)(param_1 + 0x1159) = 0;
  uVar12 = iVar5 - 1;
  uVar8 = iVar4 - 1;
  *(uint *)(param_1 + 0x1188) = uVar12 & (int)uVar12 >> 0x1f;
  *(uint *)(param_1 + 0x1198) = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_1 + 0x118c) = uVar8 & (int)uVar8 >> 0x1f;
  *(uint *)(param_1 + 0x119c) = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
  if (*(long *)(lVar17 + 0x10) == 0 && *(long *)(lVar17 + 8) == 0) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x28));
    plVar16 = (long *)(param_1 + 0x48);
    lVar13 = *plVar16;
    plVar11 = (long *)(*(int *)(param_1 + 0x5c) + lVar17);
    *plVar16 = (long)plVar11;
    *plVar11 = lVar13;
    plVar11[1] = (long)plVar16;
    if (lVar13 != 0) {
      *(long **)(lVar13 + 8) = plVar11;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  }
  uVar7 = *(ushort *)puVar3;
  uVar14 = (ulong)(short)uVar7;
  if (uVar14 != 0xffffffffffffffff) {
    local_50._0_4_ = 3;
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar7 * 8);
    if (0xff < (uint)(int)(short)uVar7) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 3 & 1) == 0) {
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar14 & 0xffffffff) * 8);
      if (0xff < uVar7) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar2 >> 0x19 & 1) == 0) || (local_50._0_4_ = 1, (*puVar2 >> 1 & 1) == 0)) {
        local_50._0_4_ = 0x20;
        puVar3 = PTR_DAT_04bc39f8 + (uVar14 & 0xffffffff) * 8;
        if (0xff < uVar7) {
          puVar3 = PTR_DAT_04bc39f8;
        }
        if ((*(uint *)(puVar3 + 4) & 1) == 0) {
          return;
        }
      }
    }
    if (*(char *)(param_1 + 0x1158) != '\0') {
      FUN_01384d80();
      *(char *)(param_1 + 0x1158) = '\0';
    }
  }
  return;
}

