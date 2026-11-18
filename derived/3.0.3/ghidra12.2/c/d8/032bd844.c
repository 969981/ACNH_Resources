
/* WARNING: Removing unreachable block (ram,0x032bd878) */

void FUN_032bd844(long param_1,ulong *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  void *__ptr;
  ulong local_60;
  ulong uStack_58;
  undefined *local_50;
  ulong uStack_48;
  undefined1 local_40;
  undefined1 local_3f;
  undefined4 local_3c;
  undefined4 uStack_38;
  
  local_60 = local_60 & 0xffffffff00000000;
  puVar1 = (undefined8 *)(**(code **)(**(long **)*param_2 + 0x30))(*(long **)*param_2,0x90,8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[0x10] = 0;
  *(undefined1 *)(puVar1 + 0x11) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  __ptr = *(void **)(param_1 + 0x30);
  *(undefined8 **)(param_1 + 0x30) = puVar1;
  if (__ptr != (void *)0x0) {
    FUN_032bf210(__ptr);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
  }
  local_3f = 1;
  local_60 = *param_2;
  uStack_58 = param_2[0xe];
  local_40 = *(undefined1 *)((long)param_2 + 0xc);
  uStack_48 = param_2[0x10];
  local_50 = &DAT_04b177a8;
  local_3c = (undefined4)param_2[0x11];
  uStack_38 = *(undefined4 *)((long)param_2 + 0x8c);
  FUN_032bf340(*(undefined8 *)(param_1 + 0x30),&local_60);
  return;
}

