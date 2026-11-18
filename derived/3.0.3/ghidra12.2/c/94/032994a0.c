
/* WARNING: Removing unreachable block (ram,0x032995bc) */
/* WARNING: Removing unreachable block (ram,0x03299520) */

void FUN_032994a0(long *param_1,undefined8 *param_2,long param_3)

{
  char *pcVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  void *__ptr;
  undefined8 *__ptr_00;
  undefined1 auStack_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined *puStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined2 local_c8;
  undefined1 local_c6;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined *local_80;
  undefined8 *puStack_78;
  undefined *local_70;
  undefined8 *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  char *pcStack_48;
  
  local_c6 = 0;
  param_1[2] = param_3;
  puVar2 = PTR_DAT_04bc8e68;
  local_c0 = 0;
  puStack_e0 = PTR_DAT_04bc8e68 + 0x10;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = (undefined8 *)0x0;
  local_c8 = 0;
  local_e8 = 0;
  local_d0 = 0x100000258;
  (**(code **)(*param_1 + 0x28))(auStack_f8);
  local_50 = (undefined *)((ulong)local_50._4_4_ << 0x20);
  local_d8 = local_f0;
  lVar3 = (**(code **)(*(long *)*param_2 + 0x30))((long *)*param_2,0xf80,8);
  FUN_032d04c4(lVar3,param_2);
  __ptr = (void *)param_1[1];
  param_1[1] = lVar3;
  if (__ptr != (void *)0x0) {
    FUN_032d0688(__ptr);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar4 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
      }
    }
    lVar3 = param_1[1];
  }
  FUN_032d0880(lVar3,&local_e8);
  if (*(char *)(param_1[2] + 0x229) == '\0') {
    local_50 = (undefined *)((ulong)local_50 & 0xffffffff00000000);
    puVar5 = (undefined8 *)(**(code **)(*(long *)*param_2 + 0x30))((long *)*param_2,0x58,8);
    puVar5[7] = 0;
    *(undefined4 *)(puVar5 + 8) = 0;
    puVar5[9] = 0;
    *(undefined1 *)(puVar5 + 10) = 0;
    *(undefined4 *)(puVar5 + 6) = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    __ptr_00 = (undefined8 *)param_1[3];
    param_1[3] = (long)puVar5;
    if (__ptr_00 != (undefined8 *)0x0) {
      FUN_032c6840(__ptr_00);
      plVar4 = (long *)*__ptr_00;
      __ptr_00[4] = 0;
      __ptr_00[5] = 0;
      __ptr_00[3] = 0;
      if (plVar4 != (long *)0x0) {
        lVar3 = __ptr_00[1];
        lVar6 = __ptr_00[2];
        __ptr_00[2] = 0;
        *__ptr_00 = 0;
        __ptr_00[1] = 0;
        if ((undefined8 *)*plVar4 == __ptr_00) {
          *plVar4 = lVar6;
        }
        if (lVar6 != 0) {
          *(long *)(lVar6 + 8) = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x10) = lVar6;
        }
      }
      __ptr_00[1] = 0;
      __ptr_00[2] = 0;
      *__ptr_00 = 0;
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(__ptr_00);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr_00);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,__ptr_00);
        }
      }
      puVar5 = (undefined8 *)param_1[3];
    }
    puVar5[3] = param_2;
    lVar3 = param_1[3];
    uVar7 = *(undefined8 *)(param_1[1] + 0xf0);
    pcVar1 = "";
    if (*(char **)(PTR_PTR_04bb2238 + 8) != (char *)0x0) {
      pcVar1 = *(char **)(PTR_PTR_04bb2238 + 8);
    }
    if (*pcVar1 != '\0') {
      local_50 = puVar2 + 0x10;
      pcStack_48 = pcVar1;
      lVar6 = FUN_032cb8e0(&local_60,&local_50);
      if (lVar6 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(lVar6 + 0xe8);
      }
    }
    *(undefined8 *)(lVar3 + 0x28) = uVar7;
    lVar3 = param_1[3];
    FUN_032c6ccc(lVar3);
    local_80 = puVar2 + 0x10;
    pcStack_48 = "Loop";
    puStack_58 = &DAT_040fcedb;
    puStack_68 = &DAT_0407ebb1;
    puStack_78 = &DAT_0407ebb1;
    local_70 = local_80;
    local_60 = local_80;
    local_50 = local_80;
    FUN_032c7320(lVar3,&local_50,&local_60,&local_70,&local_80);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  if (local_a8 != (undefined8 *)0x0) {
    (**(code **)*local_a8)();
  }
  return;
}

