
/* WARNING: Removing unreachable block (ram,0x032a0c94) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_032a0c64(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *__ptr;
  undefined *local_88;
  undefined8 *puStack_80;
  undefined *local_78;
  undefined8 *puStack_70;
  undefined *local_68;
  char *pcStack_60;
  undefined8 local_58;
  char *pcStack_50;
  undefined8 local_48;
  
  local_58 = (undefined *)((ulong)local_58 & 0xffffffff00000000);
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
  puVar1 = PTR_DAT_04bc8e68;
  lVar7 = *(long *)(param_1 + 0x68);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xf0);
  pcVar2 = PTR_DAT_04bb2120;
  if (*(char **)(PTR_PTR_04bb2238 + 8) != (char *)0x0) {
    pcVar2 = *(char **)(PTR_PTR_04bb2238 + 8);
  }
  if (*pcVar2 != '\0') {
    local_58 = PTR_DAT_04bc8e68 + 0x10;
    pcStack_50 = pcVar2;
    lVar4 = FUN_032cb8e0(&local_68,&local_58);
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar4 + 0xe8);
    }
  }
  *(undefined8 *)(lVar7 + 0x28) = uVar5;
  FUN_032c6b2c(*(undefined8 *)(param_1 + 0x68),2);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  FUN_032c6ccc(uVar5);
  puVar1 = puVar1 + 0x10;
  pcStack_50 = s_ModeCloud_04b19518;
  pcStack_60 = s_ModeCloud_04b19518;
  puStack_70 = &DAT_0407ebb1;
  puStack_80 = &DAT_0407ebb1;
  local_88 = puVar1;
  local_78 = puVar1;
  local_68 = puVar1;
  local_58 = puVar1;
  FUN_032c7320(uVar5,&local_58,&local_68,&local_78,&local_88);
  pcStack_50 = s_ModeLocal_04b19523;
  pcStack_60 = s_ModeLocal_04b19523;
  puStack_70 = &DAT_0407ebb1;
  puStack_80 = &DAT_0407ebb1;
  local_88 = puVar1;
  local_78 = puVar1;
  local_68 = puVar1;
  local_58 = puVar1;
  FUN_032c7320(uVar5,&local_58,&local_68,&local_78,&local_88);
  local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
  local_58 = (undefined *)0x1;
  pcStack_50 = (char *)0x100000002;
  local_48 = 0x100000001;
  FUN_032c8150(0x3f800000,*(undefined8 *)(param_1 + 0x68),0,0);
  FUN_032c8150((float)*(int *)((long)&local_58 + (long)(int)local_68 * 8 + 4),
               *(undefined8 *)(param_1 + 0x68),1,1);
  return;
}

