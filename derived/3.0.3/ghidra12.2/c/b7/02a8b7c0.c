
void FUN_02a8b7c0(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint *puVar5;
  byte *pbVar6;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined2 local_31;
  undefined2 local_2f;
  undefined2 local_2d;
  undefined2 local_2b;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined1 local_1c;
  undefined1 local_1b;
  uint local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if (((*(long *)PTR_DAT_04bb3728 != 0) && (*(int *)(*(long *)PTR_DAT_04bb3728 + 0xb0) == 1)) &&
     (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476))) {
    local_34 = 0;
    local_27 = 0;
    puVar4 = (undefined8 *)PTR_DAT_04bb27d0;
    puVar5 = (uint *)PTR_DAT_04bb4268;
    pbVar6 = PTR_DAT_04bb4270;
    if (*(char *)(param_1 + 0x2a4) != '\0') {
      local_34 = 1;
      local_33 = (undefined1)*(undefined4 *)(param_1 + 0x284);
      local_32 = (undefined1)*(undefined4 *)(param_1 + 0x288);
      iVar2 = (int)(*(float *)(param_1 + 0x28c) * 4.0);
      if (0x7ffe < iVar2) {
        iVar2 = 0x7fff;
      }
      if (iVar2 < -0x7fff) {
        iVar2 = -0x8000;
      }
      local_31 = (undefined2)iVar2;
      iVar2 = (int)(*(float *)(param_1 + 0x290) * 4.0);
      if (0x7ffe < iVar2) {
        iVar2 = 0x7fff;
      }
      if (iVar2 < -0x7fff) {
        iVar2 = -0x8000;
      }
      local_2f = (undefined2)iVar2;
      iVar2 = (int)(*(float *)(param_1 + 0x294) * 4.0);
      if (0x7ffe < iVar2) {
        iVar2 = 0x7fff;
      }
      if (iVar2 < -0x7fff) {
        iVar2 = -0x8000;
      }
      local_2d = (undefined2)iVar2;
      local_2b = *(undefined2 *)(param_1 + 0x29a);
      local_18 = *(uint *)(param_1 + 0x29c);
      if (((*PTR_DAT_04bb4270 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb4270), iVar2 != 0)) {
        FUN_007a9614(PTR_DAT_04bb4268);
        __cxa_guard_release(PTR_DAT_04bb4270);
      }
      pbVar6 = PTR_DAT_04bb4270;
      puVar5 = (uint *)PTR_DAT_04bb4268;
      puVar4 = (undefined8 *)PTR_DAT_04bb27d0;
      uVar1 = local_18;
      if (*(uint *)PTR_DAT_04bb4268 <= local_18) {
        uVar1 = 0;
      }
      local_29 = (undefined1)*(undefined4 *)(*(long *)(PTR_DAT_04bb4268 + 8) + (long)(int)uVar1 * 4)
      ;
      if (*(char *)(param_1 + 0x2a4) == '\0') {
        *(undefined8 *)(param_1 + 0x29c) = 0;
        *(undefined8 *)(param_1 + 0x284) = 0x100000007;
        *(undefined8 *)(param_1 + 0x28c) = 0;
        *(undefined8 *)(param_1 + 0x294) = 0;
        if ((*pbVar6 & 1) == 0) {
          iVar2 = __cxa_guard_acquire(PTR_DAT_04bb4270);
          puVar4 = (undefined8 *)PTR_DAT_04bb27d0;
          puVar5 = (uint *)PTR_DAT_04bb4268;
          pbVar6 = PTR_DAT_04bb4270;
          if (iVar2 != 0) {
            FUN_007a9614(PTR_DAT_04bb4268);
            __cxa_guard_release(PTR_DAT_04bb4270);
            puVar4 = (undefined8 *)PTR_DAT_04bb27d0;
            puVar5 = (uint *)PTR_DAT_04bb4268;
            pbVar6 = PTR_DAT_04bb4270;
          }
        }
        if (0 < (int)*puVar5) {
          uVar3 = 0;
          do {
            if (*(int *)(*(long *)(puVar5 + 2) + uVar3 * 4) == 0) goto LAB_02a8b93c;
            uVar3 = uVar3 + 1;
          } while (*puVar5 != uVar3);
        }
        uVar3 = 0;
LAB_02a8b93c:
        local_28 = 0;
        *(int *)(param_1 + 0x29c) = (int)uVar3;
        *(undefined4 *)(param_1 + 0x2a0) = 0;
      }
      else {
        local_28 = (undefined1)*(undefined4 *)(param_1 + 0x2a0);
      }
    }
    if (*(char *)(param_1 + 0x2c8) != '\0') {
      local_27 = 1;
      local_26 = (undefined1)*(undefined4 *)(param_1 + 0x2a8);
      local_25 = (undefined1)*(undefined4 *)(param_1 + 0x2ac);
      iVar2 = (int)(*(float *)(param_1 + 0x2b0) * 4.0);
      if (0x7ffe < iVar2) {
        iVar2 = 0x7fff;
      }
      if (iVar2 < -0x7fff) {
        iVar2 = -0x8000;
      }
      local_24 = (undefined2)iVar2;
      iVar2 = (int)(*(float *)(param_1 + 0x2b4) * 4.0);
      if (0x7ffe < iVar2) {
        iVar2 = 0x7fff;
      }
      if (iVar2 < -0x7fff) {
        iVar2 = -0x8000;
      }
      local_22 = (undefined2)iVar2;
      iVar2 = (int)(*(float *)(param_1 + 0x2b8) * 4.0);
      if (0x7ffe < iVar2) {
        iVar2 = 0x7fff;
      }
      if (iVar2 < -0x7fff) {
        iVar2 = -0x8000;
      }
      local_20 = (undefined2)iVar2;
      local_1e = *(undefined2 *)(param_1 + 0x2be);
      local_18 = *(uint *)(param_1 + 0x2c0);
      if ((*pbVar6 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(PTR_DAT_04bb4270);
        puVar4 = (undefined8 *)PTR_DAT_04bb27d0;
        puVar5 = (uint *)PTR_DAT_04bb4268;
        pbVar6 = PTR_DAT_04bb4270;
        if (iVar2 != 0) {
          FUN_007a9614(PTR_DAT_04bb4268);
          __cxa_guard_release(PTR_DAT_04bb4270);
          puVar4 = (undefined8 *)PTR_DAT_04bb27d0;
          puVar5 = (uint *)PTR_DAT_04bb4268;
          pbVar6 = PTR_DAT_04bb4270;
        }
      }
      uVar1 = local_18;
      if (*puVar5 <= local_18) {
        uVar1 = 0;
      }
      local_1c = (undefined1)*(undefined4 *)(*(long *)(puVar5 + 2) + (long)(int)uVar1 * 4);
      if (*(char *)(param_1 + 0x2c8) == '\0') {
        *(undefined8 *)(param_1 + 0x2c0) = 0;
        *(undefined8 *)(param_1 + 0x2b0) = 0;
        *(undefined8 *)(param_1 + 0x2b8) = 0;
        *(undefined8 *)(param_1 + 0x2a8) = 0x100000007;
        if ((*pbVar6 & 1) == 0) {
          iVar2 = __cxa_guard_acquire(PTR_DAT_04bb4270);
          puVar4 = (undefined8 *)PTR_DAT_04bb27d0;
          puVar5 = (uint *)PTR_DAT_04bb4268;
          if (iVar2 != 0) {
            FUN_007a9614(PTR_DAT_04bb4268);
            __cxa_guard_release(PTR_DAT_04bb4270);
            puVar4 = (undefined8 *)PTR_DAT_04bb27d0;
            puVar5 = (uint *)PTR_DAT_04bb4268;
          }
        }
        if (0 < (int)*puVar5) {
          uVar3 = 0;
          do {
            if (*(int *)(*(long *)(puVar5 + 2) + uVar3 * 4) == 0) goto LAB_02a8ba78;
            uVar3 = uVar3 + 1;
          } while (*puVar5 != uVar3);
        }
        uVar3 = 0;
LAB_02a8ba78:
        local_1b = 0;
        *(int *)(param_1 + 0x2c0) = (int)uVar3;
        *(undefined4 *)(param_1 + 0x2c4) = 0;
      }
      else {
        local_1b = (undefined1)*(undefined4 *)(param_1 + 0x2c4);
      }
    }
    local_18 = 0;
    local_12 = 0;
    local_14 = 0xff00;
    if (-1 < DAT_0560a020) {
      FUN_01db1df0(*(long *)*puVar4 + 0x480,DAT_0560a020,&local_18,&local_34,0x1a,0);
    }
  }
  return;
}

