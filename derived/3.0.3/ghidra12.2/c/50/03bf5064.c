
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03bf5064(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint local_14;
  
  if (param_1[3] != 0) {
    return;
  }
  lVar2 = (**(code **)(*param_1 + 0x28))();
  DataMemoryBarrier(2,2);
  param_1[3] = lVar2;
  lVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  local_14 = 0;
  lVar2 = *(long *)(lVar2 + 8);
  puVar3 = (undefined4 *)FUN_03bec770(lVar2,*(undefined8 *)(param_1[1] + 0x10),&local_14);
  if (puVar3 == (undefined4 *)0x0) {
    (**(code **)(*param_1 + 0x20))(param_1);
    if (((DAT_05aec270 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05aec270), iVar1 != 0)) {
      DAT_05aec25c = 0;
      DAT_05aec264 = 0;
      DAT_05aec24c = 0;
      DAT_05aec254 = 0;
      _DAT_05aec23c = 0;
      DAT_05aec244 = 0;
      __cxa_guard_release(&DAT_05aec270);
    }
    _DAT_05aec23c = CONCAT44(DAT_05aec23c_4,1);
    if (((DAT_05aec310 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05aec310), iVar1 != 0)) {
      DAT_05aec2a0 = 0;
      DAT_05aec2a8 = 0;
      DAT_05aec298 = 0;
      DAT_05aec2e0 = 0;
      DAT_05aec2e8 = 0;
      DAT_05aec300._0_5_ = 0;
      DAT_05aec300._5_3_ = 0;
      uRam0000000005aec308 = 0;
      DAT_05aec30c = 0;
      DAT_05aec278 = 0;
      DAT_05aec280 = 0;
      DAT_05aec288 = 0;
      DAT_05aec290 = 0;
      DAT_05aec2b0 = 0;
      DAT_05aec2b8 = 0;
      DAT_05aec2c0 = 0;
      DAT_05aec2c8 = 0;
      DAT_05aec2d0 = 0;
      DAT_05aec2d8 = 0;
      DAT_05aec2f0 = 0;
      DAT_05aec2f8 = 0;
      __cxa_guard_release(&DAT_05aec310);
    }
    puVar4 = &DAT_05aec278;
    puVar3 = &DAT_05aec23c;
    DAT_05aec30c = 1;
  }
  else {
    puVar4 = (undefined8 *)0x0;
    if (((int)local_14 < 8) && (local_14 < *(uint *)(lVar2 + 0x10))) {
      puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0x18) + (long)(int)local_14 * 8);
      puVar4 = (undefined8 *)0x0;
      if (*(char *)((long)puVar5 + 0x94) != '\0') {
        puVar4 = puVar5;
      }
    }
  }
  FUN_03bf5220(param_1,param_1[3],puVar3,puVar4,lVar2 + 0x530,param_2);
  return;
}

