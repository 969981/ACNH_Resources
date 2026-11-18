
/* WARNING: Removing unreachable block (ram,0x032a00a0) */

void FUN_032a0074(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
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
  __ptr = *(undefined8 **)(param_1 + 0x68);
  *(undefined8 **)(param_1 + 0x68) = puVar3;
  if (__ptr != (undefined8 *)0x0) {
    FUN_032c6840(__ptr);
    plVar6 = (long *)*__ptr;
    __ptr[4] = 0;
    __ptr[5] = 0;
    __ptr[3] = 0;
    if (plVar6 != (long *)0x0) {
      lVar7 = __ptr[1];
      lVar4 = __ptr[2];
      __ptr[2] = 0;
      *__ptr = 0;
      __ptr[1] = 0;
      if ((undefined8 *)*plVar6 == __ptr) {
        *plVar6 = lVar4;
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 8) = lVar7;
      }
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x10) = lVar4;
      }
    }
    __ptr[1] = 0;
    __ptr[2] = 0;
    *__ptr = 0;
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,__ptr);
      }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x68);
  }
  puVar3[3] = param_2;
  puVar2 = PTR_DAT_04bc8e68;
  lVar7 = *(long *)(param_1 + 0x68);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xf0);
  pcVar1 = PTR_DAT_04bb2120;
  if (*(char **)(PTR_PTR_04bb2238 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(PTR_PTR_04bb2238 + 8);
  }
  if (*pcVar1 != '\0') {
    local_40 = PTR_DAT_04bc8e68 + 0x10;
    pcStack_38 = pcVar1;
    lVar4 = FUN_032cb8e0(&local_50,&local_40);
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar4 + 0xe8);
    }
  }
  *(undefined8 *)(lVar7 + 0x28) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  FUN_032c6ccc(uVar5);
  local_70 = puVar2 + 0x10;
  pcStack_38 = "ImageColor";
  pcStack_48 = "ImageColor";
  puStack_58 = &DAT_0407ebb1;
  puStack_68 = &DAT_0407ebb1;
  local_60 = local_70;
  local_50 = local_70;
  local_40 = local_70;
  FUN_032c7320(uVar5,&local_40,&local_50,&local_60,&local_70);
  FUN_032c83b0(*(undefined8 *)(param_1 + 0x68),0,0);
  return;
}

