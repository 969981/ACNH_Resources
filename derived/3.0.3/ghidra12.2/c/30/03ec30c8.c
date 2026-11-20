
void FUN_03ec30c8(long param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  undefined **local_158;
  undefined1 *puStack_150;
  undefined4 local_148;
  undefined1 local_144 [255];
  undefined1 local_45;
  
  if (((int)param_3 < 0) || (*(int *)(param_1 + 0x18) <= (int)param_3)) {
    local_45 = 0;
    local_148 = 0x100;
    puStack_150 = local_144;
    local_144[0] = 0;
    local_158 = (undefined **)(PTR_DAT_04bb21f8 + 0x10);
    lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x10) + 8);
    FUN_038d1270(&local_158,"%s.as",lVar2 + *(int *)(lVar2 + 0x24) + (long)*(int *)(lVar2 + 8));
  }
  else {
    lVar2 = *(long *)((*(undefined8 **)(param_1 + 0x20))[(ulong)param_3 * 2] + 0x10);
    puStack_150 = (undefined1 *)*(long *)(PTR_PTR_04bb2238 + 8);
    if (lVar2 != 0) {
      puStack_150 = (undefined1 *)lVar2;
    }
    local_158 = &PTR_LAB_048f9770;
    (**(code **)(**(long **)(param_1 + 0x50) + 0x1b8))
              (*(long **)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x48),&local_158,param_2,
               **(undefined8 **)(param_1 + 0x20));
    uVar1 = param_3;
    if (*(uint *)(param_1 + 0x18) <= param_3) {
      uVar1 = 0;
    }
    FUN_03ebed08(*(undefined8 *)(*(long *)(param_1 + 0x20) + (ulong)uVar1 * 0x10),param_2,
                 *(undefined8 *)(param_1 + 0x38),param_4 & 1,param_5 & 1,0);
    if ((*(byte *)(*(long *)(param_1 + 0x38) + 0xb0) & 1) != 0) {
      FUN_03ec5760(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
    }
    FUN_03ec3220(0,param_1,1,param_3);
  }
  return;
}

