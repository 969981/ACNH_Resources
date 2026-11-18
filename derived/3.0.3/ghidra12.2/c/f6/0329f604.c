
/* WARNING: Removing unreachable block (ram,0x0329f630) */

void FUN_0329f604(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *__ptr;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  char *pcStack_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined1 local_38;
  
  local_88 = (undefined8 *)((ulong)local_88 & 0xffffffff00000000);
  lVar2 = (**(code **)(*(long *)*param_2 + 0x30))((long *)*param_2,0xa0,8);
  puVar1 = PTR_DAT_04bc92e8;
  *(undefined4 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined4 *)(lVar2 + 0x70) = 0;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  *(undefined1 *)(lVar2 + 0x80) = 0;
  *(undefined4 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined **)(lVar2 + 8) = puVar1 + 0x10;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  __ptr = *(void **)(param_1 + 0x68);
  *(long *)(param_1 + 0x68) = lVar2;
  if (__ptr != (void *)0x0) {
    FUN_032afbc8(__ptr);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
    }
  }
  local_38 = 0;
  local_78 = PTR_DAT_04bc8e68 + 0x10;
  pcStack_60 = "L_ProgressBar";
  puStack_40 = &DAT_040c1e5f;
  pcStack_50 = "L_Icon";
  uStack_80 = *(undefined8 *)(param_1 + 0x18);
  puStack_70 = &DAT_040a7f70;
  local_88 = param_2;
  local_68 = local_78;
  local_58 = local_78;
  local_48 = local_78;
  FUN_032afc90(*(undefined8 *)(param_1 + 0x68),&local_88);
  return;
}

