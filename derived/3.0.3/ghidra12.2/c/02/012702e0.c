
void FUN_012702e0(long *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long *local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined8 local_68;
  
  local_80 = (long *)(PTR_DAT_04bb2020 + 0x10);
  local_78 = "FieldCloudIslandFirstMapCreator";
  plVar5 = (long *)FUN_038c6d48(0xa00000,&local_80,param_2,8,1,0);
  *param_1 = (long)plVar5;
  lVar11 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    pvVar7 = malloc(0x60);
  }
  else {
    if (plVar5 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar11 + 8);
      if (lVar6 != 0) {
        plVar5 = (long *)(lVar6 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_012703a0;
    }
    pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x60,8);
  }
  if (pvVar7 != (void *)0x0) {
    param_1[2] = (long)pvVar7;
    *(undefined4 *)(param_1 + 1) = 0xc;
  }
LAB_012703a0:
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  uVar12 = 0;
  do {
    lVar11 = DAT_05ae7600;
    plVar5 = (long *)*param_1;
    uStack_70 = 0;
    local_68 = (ulong)uVar12 << 0x20;
    local_78 = (char *)CONCAT44(uVar12,uVar12 * 4);
    local_80 = plVar5;
    if (DAT_05ae7600 == 0) {
      puVar8 = malloc(200);
    }
    else {
      if (plVar5 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar11 + 8);
        if (lVar6 != 0) {
          plVar5 = (long *)(lVar6 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
      }
      puVar8 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,200,8);
    }
    uVar9 = uVar12 * 4;
    uVar10 = 0;
    *(undefined4 *)(puVar8 + 0x12) = 0;
    puVar8[0x10] = 0;
    puVar8[0x11] = 0;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    *puVar8 = 0;
    puVar8[1] = 0;
    do {
      lVar11 = uVar10 << 0x20;
      uVar3 = uVar10 << 1;
      uVar4 = uVar10 >> 0x1f;
      uVar1 = (int)uVar10 + 6;
      uVar10 = (ulong)uVar1;
      *(undefined2 *)((long)puVar8 + (-uVar4 & 0xfffffffe00000000 | uVar3) + 4) = 0;
      *(undefined2 *)((long)puVar8 + (lVar11 + 0x100000000 >> 0x1f) + 4) = 0;
      *(undefined2 *)((long)puVar8 + (lVar11 + 0x200000000 >> 0x1f) + 4) = 0;
      *(undefined2 *)((long)puVar8 + (lVar11 + 0x300000000 >> 0x1f) + 4) = 0;
      *(undefined2 *)((long)puVar8 + (lVar11 + 0x400000000 >> 0x1f) + 4) = 0;
      *(undefined2 *)((long)puVar8 + (lVar11 + 0x500000000 >> 0x1f) + 4) = 0;
    } while (uVar1 != 0x48);
    puVar8[0x17] = puVar2;
    puVar8[0x18] = 0;
    uVar1 = uVar9;
    if (*(uint *)(param_1 + 1) <= uVar9) {
      uVar1 = 0;
    }
    *(undefined8 **)(param_1[2] + (long)(int)uVar1 * 8) = puVar8;
    uVar1 = uVar9;
    if (*(uint *)(param_1 + 1) <= uVar9) {
      uVar1 = 0;
    }
    FUN_0126e7f0(*(undefined8 *)(param_1[2] + (long)(int)uVar1 * 8),&local_80);
    if (*(uint *)(param_1 + 1) <= uVar9) {
      uVar9 = 0;
    }
    FUN_0126ec30(*(undefined8 *)(param_1[2] + (long)(int)uVar9 * 8));
    lVar11 = DAT_05ae7600;
    plVar5 = (long *)*param_1;
    uStack_70 = 1;
    local_68 = CONCAT44(uVar12,1);
    local_78 = (char *)CONCAT44(uVar12,uVar12 * 4 + 1);
    local_80 = plVar5;
    if (DAT_05ae7600 == 0) {
      puVar8 = malloc(200);
    }
    else {
      if (plVar5 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar11 + 8);
        if (lVar6 != 0) {
          plVar5 = (long *)(lVar6 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
      }
      puVar8 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,200,8);
    }
    uVar9 = uVar12 * 4 + 1;
    uVar10 = 0;
    *(undefined4 *)(puVar8 + 0x12) = 0;
    puVar8[0x10] = 0;
    puVar8[0x11] = 0;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    *puVar8 = 0;
    puVar8[1] = 0;
    do {
      lVar11 = uVar10 << 0x20;
      uVar3 = uVar10 << 1;
      uVar4 = uVar10 >> 0x1f;
      uVar1 = (int)uVar10 + 6;
      uVar10 = (ulong)uVar1;
      *(undefined2 *)((long)puVar8 + (-uVar4 & 0xfffffffe00000000 | uVar3) + 4) = 0;
      *(undefined2 *)((long)puVar8 + (lVar11 + 0x100000000 >> 0x1f) + 4) = 0;
      *(undefined2 *)((long)puVar8 + (lVar11 + 0x200000000 >> 0x1f) + 4) = 0;
      *(undefined2 *)((long)puVar8 + (lVar11 + 0x300000000 >> 0x1f) + 4) = 0;
      *(undefined2 *)((long)puVar8 + (lVar11 + 0x400000000 >> 0x1f) + 4) = 0;
      *(undefined2 *)((long)puVar8 + (lVar11 + 0x500000000 >> 0x1f) + 4) = 0;
    } while (uVar1 != 0x48);
    puVar8[0x17] = PTR_DAT_04bb2010 + 0x10;
    puVar8[0x18] = 0;
    uVar1 = uVar9;
    if (*(uint *)(param_1 + 1) <= uVar9) {
      uVar1 = 0;
    }
    *(undefined8 **)(param_1[2] + (long)(int)uVar1 * 8) = puVar8;
    uVar1 = uVar9;
    if (*(uint *)(param_1 + 1) <= uVar9) {
      uVar1 = 0;
    }
    FUN_0126e7f0(*(undefined8 *)(param_1[2] + (long)(int)uVar1 * 8),&local_80);
    if (*(uint *)(param_1 + 1) <= uVar9) {
      uVar9 = 0;
    }
    FUN_0126ec30(*(undefined8 *)(param_1[2] + (long)(int)uVar9 * 8));
    lVar11 = DAT_05ae7600;
    plVar5 = (long *)*param_1;
    uStack_70 = 2;
    local_68 = CONCAT44(uVar12,2);
    local_78 = (char *)CONCAT44(uVar12,uVar12 * 4 + 2);
    local_80 = plVar5;
    if (DAT_05ae7600 == 0) {
      puVar8 = malloc(200);
    }
    else {
      if (plVar5 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar11 + 8);
        if (lVar6 != 0) {
          plVar5 = (long *)(lVar6 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
      }
      puVar8 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,200,8);
    }
    uVar9 = uVar12 * 4 + 2;
    uVar10 = 0;
    *(undefined4 *)(puVar8 + 0x12) = 0;
    puVar8[0x10] = 0;
    puVar8[0x11] = 0;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    *puVar8 = 0;
    puVar8[1] = 0;
    do {
      lVar11 = uVar10 << 0x20;
      uVar3 = uVar10 << 1;
      uVar4 = uVar10 >> 0x1f;
      uVar1 = (int)uVar10 + 6;
      uVar10 = (ulong)uVar1;
      *(undefined2 *)((long)puVar8 + (-uVar4 & 0xfffffffe00000000 | uVar3) + 4) = 0;
      *(undefined2 *)((long)puVar8 + (lVar11 + 0x100000000 >> 0x1f) + 4) = 0;
      *(undefined2 *)((long)puVar8 + (lVar11 + 0x200000000 >> 0x1f) + 4) = 0;
      *(undefined2 *)((long)puVar8 + (lVar11 + 0x300000000 >> 0x1f) + 4) = 0;
      *(undefined2 *)((long)puVar8 + (lVar11 + 0x400000000 >> 0x1f) + 4) = 0;
      *(undefined2 *)((long)puVar8 + (lVar11 + 0x500000000 >> 0x1f) + 4) = 0;
    } while (uVar1 != 0x48);
    puVar8[0x17] = PTR_DAT_04bb2010 + 0x10;
    puVar8[0x18] = 0;
    uVar1 = uVar9;
    if (*(uint *)(param_1 + 1) <= uVar9) {
      uVar1 = 0;
    }
    *(undefined8 **)(param_1[2] + (long)(int)uVar1 * 8) = puVar8;
    uVar1 = uVar9;
    if (*(uint *)(param_1 + 1) <= uVar9) {
      uVar1 = 0;
    }
    FUN_0126e7f0(*(undefined8 *)(param_1[2] + (long)(int)uVar1 * 8),&local_80);
    if (*(uint *)(param_1 + 1) <= uVar9) {
      uVar9 = 0;
    }
    FUN_0126ec30(*(undefined8 *)(param_1[2] + (long)(int)uVar9 * 8));
    lVar11 = DAT_05ae7600;
    plVar5 = (long *)*param_1;
    uStack_70 = 3;
    local_68 = CONCAT44(uVar12,3);
    local_78 = (char *)CONCAT44(uVar12,uVar12 * 4 + 3);
    local_80 = plVar5;
    if (DAT_05ae7600 == 0) {
      puVar8 = malloc(200);
    }
    else {
      if (plVar5 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar11 + 8);
        if (lVar6 != 0) {
          plVar5 = (long *)(lVar6 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
      }
      puVar8 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,200,8);
    }
    uVar9 = uVar12 * 4 + 3;
    uVar10 = 0;
    *(undefined4 *)(puVar8 + 0x12) = 0;
    puVar8[0x10] = 0;
    puVar8[0x11] = 0;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    *puVar8 = 0;
    puVar8[1] = 0;
    do {
      lVar11 = uVar10 << 0x20;
      uVar3 = uVar10 << 1;
      uVar4 = uVar10 >> 0x1f;
      uVar1 = (int)uVar10 + 6;
      uVar10 = (ulong)uVar1;
      *(undefined2 *)((long)puVar8 + (-uVar4 & 0xfffffffe00000000 | uVar3) + 4) = 0;
      *(undefined2 *)((long)puVar8 + (lVar11 + 0x100000000 >> 0x1f) + 4) = 0;
      *(undefined2 *)((long)puVar8 + (lVar11 + 0x200000000 >> 0x1f) + 4) = 0;
      *(undefined2 *)((long)puVar8 + (lVar11 + 0x300000000 >> 0x1f) + 4) = 0;
      *(undefined2 *)((long)puVar8 + (lVar11 + 0x400000000 >> 0x1f) + 4) = 0;
      *(undefined2 *)((long)puVar8 + (lVar11 + 0x500000000 >> 0x1f) + 4) = 0;
    } while (uVar1 != 0x48);
    puVar8[0x17] = PTR_DAT_04bb2010 + 0x10;
    puVar8[0x18] = 0;
    uVar1 = uVar9;
    if (*(uint *)(param_1 + 1) <= uVar9) {
      uVar1 = 0;
    }
    *(undefined8 **)(param_1[2] + (long)(int)uVar1 * 8) = puVar8;
    uVar1 = uVar9;
    if (*(uint *)(param_1 + 1) <= uVar9) {
      uVar1 = 0;
    }
    FUN_0126e7f0(*(undefined8 *)(param_1[2] + (long)(int)uVar1 * 8),&local_80);
    if (*(uint *)(param_1 + 1) <= uVar9) {
      uVar9 = 0;
    }
    FUN_0126ec30(*(undefined8 *)(param_1[2] + (long)(int)uVar9 * 8));
    uVar9 = 3;
    if ((int)uVar12 < 3) {
      uVar9 = uVar12 + 1;
    }
    uVar12 = uVar9;
  } while (uVar9 != 3);
  return;
}

