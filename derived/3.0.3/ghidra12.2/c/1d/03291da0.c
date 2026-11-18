
/* WARNING: Removing unreachable block (ram,0x03291ef8) */
/* WARNING: Removing unreachable block (ram,0x03291ed8) */
/* WARNING: Removing unreachable block (ram,0x03291f08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_03291da0(long param_1,long *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  void *pvVar12;
  
  puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x178,8);
  puVar6[7] = 0;
  *(undefined4 *)(puVar6 + 8) = 0;
  puVar9 = puVar6 + 5;
  *puVar9 = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[4] = 0;
  *(undefined4 *)(puVar6 + 6) = 0;
  *(undefined1 *)(puVar6 + 0xf) = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[9] = puVar9;
  puVar6[10] = puVar9;
  puVar6[0xb] = 0;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  puVar6[0xe] = 0;
  puVar1 = PTR_DAT_04bc9038 + 0x10;
  puVar6[0x1c] = 0;
  puVar6[0x21] = 0;
  puVar6[0x10] = puVar1;
  puVar6[0x11] = 0;
  puVar6[0x16] = puVar1;
  puVar6[0x17] = 0;
  uVar4 = (undefined4)DAT_0572c158;
  puVar1 = PTR_DAT_04bc9040 + 0x10;
  *(undefined4 *)(puVar6 + 0x2c) = 0;
  *(undefined4 *)(puVar6 + 0xd) = uVar4;
  *(undefined4 *)((long)puVar6 + 0x74) = DAT_0572c160._4_4_;
  puVar6[0x26] = puVar1;
  puVar6[0x27] = 0;
  *(undefined4 *)((long)puVar6 + 0x16f) = 0;
  uVar5 = ram0x0572c15c;
  puVar6[0x2d] = 0;
  *(undefined8 *)((long)puVar6 + 0x6c) = uVar5;
  puVar1 = PTR_DAT_04bb2698;
  pvVar12 = *(void **)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x18) = puVar6;
  if (pvVar12 != (void *)0x0) {
    FUN_032903a0(pvVar12);
    lVar7 = *(long *)puVar1;
    if (lVar7 == 0) {
      free(pvVar12);
    }
    else {
      plVar8 = (long *)FUN_038cb610(lVar7,pvVar12);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar12);
      }
    }
  }
  if ((param_3 & 1) != 0) {
    plVar11 = *(long **)(param_1 + 0x18);
    plVar8 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x10,8);
    *plVar8 = (long)(PTR_DAT_04bc9048 + 0x10);
    plVar8[1] = (long)plVar11;
    plVar10 = (long *)*plVar11;
    *plVar11 = (long)plVar8;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))(plVar10);
      plVar8 = (long *)*plVar11;
    }
    plVar11[1] = (long)plVar8;
  }
  puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x1d0,8);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar3 = PTR_DAT_04bc8f90;
  *(undefined8 *)((long)puVar6 + 0x3c) = 0x200000002;
  puVar6[9] = puVar3 + 0x10;
  puVar6[10] = 0;
  puVar2 = PTR_DAT_04bc8e98 + 0x10;
  puVar6[0x1b] = puVar3 + 0x10;
  puVar6[0x1c] = 0;
  puVar6[0xf] = puVar2;
  puVar6[0x10] = 0;
  puVar6[0x15] = puVar2;
  puVar6[0x16] = 0;
  puVar6[0x21] = puVar2;
  puVar6[0x22] = 0;
  puVar3 = PTR_DAT_04bc8e60 + 0x10;
  puVar6[0x27] = puVar2;
  puVar6[0x28] = 0;
  puVar6[0x2d] = puVar3;
  puVar6[0x2e] = 0;
  puVar6[0x33] = puVar3;
  puVar6[0x34] = 0;
  *(undefined4 *)(puVar6 + 0x39) = 0x40a0000;
  *(undefined1 *)(puVar6 + 0x39) = 6;
  pvVar12 = *(void **)(param_1 + 0x20);
  *(undefined8 **)(param_1 + 0x20) = puVar6;
  if (pvVar12 != (void *)0x0) {
    FUN_032ae0c8(pvVar12);
    lVar7 = *(long *)puVar1;
    if (lVar7 == 0) {
      free(pvVar12);
    }
    else {
      plVar8 = (long *)FUN_038cb610(lVar7,pvVar12);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar12);
      }
    }
    puVar6 = *(undefined8 **)(param_1 + 0x20);
  }
  *(undefined4 *)(puVar6 + 7) = 0xf0001;
  return;
}

