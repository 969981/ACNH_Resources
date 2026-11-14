
void FUN_014f0ec0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  
  puVar8 = PTR_DAT_04bb3238;
  lVar17 = *(long *)PTR_DAT_04bb2698;
  if (lVar17 == 0) {
    puVar11 = malloc(0x13248);
    puVar7 = PTR_DAT_04bbcf18;
joined_r0x014f106c:
    PTR_DAT_04bbcf18 = puVar7;
    if (puVar11 != (undefined8 *)0x0) {
      uVar13 = 200;
      puVar15 = puVar11 + 0x1f;
      *puVar11 = 200;
      puVar9 = PTR_DAT_04bb37e0;
      uVar5 = *(undefined4 *)puVar8;
      puVar16 = puVar11 + 0x2e;
      puVar1 = PTR_DAT_04bbbc20 + 0x10;
      puVar2 = PTR_DAT_04bbcf08 + 0x10;
      do {
        puVar15[-0x1e] = puVar7 + 0x10;
        puVar15[-0x1d] = 0;
        puVar15[-0x1c] = 0;
        *(undefined4 *)(puVar15 + -0x1b) = 0;
        puVar15[-0x18] = 0;
        *(undefined4 *)(puVar15 + -0x17) = 0;
        puVar15[-0x14] = 0;
        *(undefined4 *)(puVar15 + -0x13) = 0;
        puVar15[-0x1a] = puVar1;
        puVar15[-0x19] = 0;
        puVar15[-0x16] = puVar1;
        puVar15[-0x15] = 0;
        *(undefined2 *)(puVar15 + -0x12) = *(undefined2 *)puVar9;
        *(undefined *)((long)puVar15 + -0x8e) = puVar9[2];
        *(undefined *)((long)puVar15 + -0x8d) = puVar9[3];
        uVar6 = *(undefined4 *)(puVar9 + 4);
        puVar15[0xc] = 0;
        *(undefined1 *)(puVar15 + -0xf) = 0;
        *(undefined4 *)((long)puVar15 + -0x74) = 0;
        puVar15[-0xe] = 0;
        *(undefined1 *)(puVar15 + -0xd) = 0;
        puVar15[-0x11] = 0;
        *(undefined8 *)((long)puVar15 + -0x83) = 0;
        *(undefined4 *)((long)puVar15 + -100) = uVar5;
        puVar15[-0xc] = puVar2;
        *(undefined4 *)(puVar15 + -0xb) = 0;
        *(undefined4 *)((long)puVar15 + -0x8c) = uVar6;
        puVar15[9] = puVar15 + 0xc;
        puVar15[-1] = 0;
        *puVar15 = 0;
        puVar15[6] = puVar15 + 9;
        puVar12 = puVar15 + 3;
        *puVar12 = puVar15 + 6;
        puVar15[1] = puVar12;
        puVar15[2] = puVar12;
        if (puVar16 != (undefined8 *)0x0) {
          *puVar15 = puVar16;
          *(undefined4 *)((long)puVar15 + -4) = 4;
        }
        puVar12 = puVar15 + 0x13;
        puVar15 = puVar15 + 0x31;
        puVar16 = puVar16 + 0x31;
      } while (puVar12 != puVar11 + 0x2649);
      *(undefined4 *)(param_1 + 0x200) = 200;
      *(undefined8 **)(param_1 + 0x208) = puVar11 + 1;
      goto LAB_014f107c;
    }
  }
  else {
    if (param_2 != (long *)0x0) {
LAB_014f0f20:
      puVar11 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x13248,8);
      puVar7 = PTR_DAT_04bbcf18;
      goto joined_r0x014f106c;
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    param_2 = (long *)(lVar17 + 8);
    if (lVar10 != 0) {
      param_2 = (long *)(lVar10 + 0xa8);
    }
    param_2 = (long *)*param_2;
    if (param_2 != (long *)0x0) goto LAB_014f0f20;
  }
  uVar13 = *(uint *)(param_1 + 0x200);
  if ((int)uVar13 < 1) {
    return;
  }
LAB_014f107c:
  uVar14 = 0;
  do {
    uVar4 = uVar14;
    if (uVar13 <= uVar14) {
      uVar4 = 0;
    }
    uVar14 = uVar14 + 1;
    *(undefined4 *)(*(long *)(param_1 + 0x208) + (ulong)uVar4 * 0x188 + 0x8c) =
         *(undefined4 *)puVar8;
    uVar13 = *(uint *)(param_1 + 0x200);
  } while ((int)uVar14 < (int)uVar13);
  if (0 < (int)uVar13) {
    uVar14 = 0;
    do {
      lVar17 = *(long *)(param_1 + 0x208);
      uVar4 = uVar14;
      if (uVar13 <= uVar14) {
        uVar4 = 0;
      }
      lVar10 = lVar17 + (ulong)uVar4 * 0x188;
      if (*(long *)(lVar10 + 0x10) == 0 && *(long *)(lVar10 + 8) == 0) {
        nn::os::LockMutex((MutexType *)(param_1 + 0x248));
        plVar3 = (long *)((long)*(int *)(param_1 + 0x224) + lVar17 + (ulong)uVar4 * 0x188);
        lVar17 = *(long *)(param_1 + 0x210);
        *(long **)(param_1 + 0x210) = plVar3;
        *plVar3 = lVar17;
        plVar3[1] = param_1 + 0x210;
        if (lVar17 != 0) {
          *(long **)(lVar17 + 8) = plVar3;
        }
        *(int *)(param_1 + 0x220) = *(int *)(param_1 + 0x220) + 1;
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x248));
        uVar13 = *(uint *)(param_1 + 0x200);
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)uVar13);
  }
  return;
}

