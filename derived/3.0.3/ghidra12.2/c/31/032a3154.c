
/* WARNING: Removing unreachable block (ram,0x032a3180) */

void FUN_032a3154(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *__ptr;
  undefined *local_70;
  undefined8 *puStack_68;
  undefined *local_60;
  undefined8 *puStack_58;
  undefined *local_50;
  char *pcStack_48;
  undefined *local_40;
  char *pcStack_38;
  
  local_40 = (undefined *)((ulong)local_40 & 0xffffffff00000000);
  puVar3 = (undefined8 *)(**(code **)(*(long *)*param_2 + 0x30))((long *)*param_2,0x58,8);
  puVar3[7] = 0;
  *(undefined4 *)(puVar3 + 8) = 0;
  puVar3[9] = 0;
  *(undefined1 *)(puVar3 + 10) = 0;
  *(undefined4 *)(puVar3 + 6) = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  __ptr = *(undefined8 **)(param_1 + 0x10);
  *(undefined8 **)(param_1 + 0x10) = puVar3;
  if (__ptr != (undefined8 *)0x0) {
    FUN_032c6840(__ptr);
    plVar4 = (long *)*__ptr;
    __ptr[4] = 0;
    __ptr[5] = 0;
    __ptr[3] = 0;
    if (plVar4 != (long *)0x0) {
      lVar1 = __ptr[1];
      lVar2 = __ptr[2];
      __ptr[2] = 0;
      *__ptr = 0;
      __ptr[1] = 0;
      if ((undefined8 *)*plVar4 == __ptr) {
        *plVar4 = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x10) = lVar2;
      }
    }
    __ptr[1] = 0;
    __ptr[2] = 0;
    *__ptr = 0;
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
      }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
  }
  puVar3[3] = param_2;
  *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28) = *(undefined8 *)(*(long *)(param_1 + 8) + 0xf0)
  ;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  FUN_032c6ccc(uVar5);
  local_70 = PTR_DAT_04bc8e68 + 0x10;
  pcStack_38 = "ModeUser";
  pcStack_48 = "ModeUser";
  puStack_58 = &DAT_0407ebb1;
  puStack_68 = &DAT_0407ebb1;
  local_60 = local_70;
  local_50 = local_70;
  local_40 = local_70;
  FUN_032c7320(uVar5,&local_40,&local_50,&local_60,&local_70);
  FUN_032c8150(0x3f800000,*(undefined8 *)(param_1 + 0x10),0,0);
  return;
}

