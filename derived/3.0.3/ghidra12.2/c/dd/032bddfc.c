
/* WARNING: Removing unreachable block (ram,0x032bde34) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_032bddfc(long param_1,ulong *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  void *__ptr;
  undefined **local_1b0;
  long lStack_1a8;
  undefined1 *local_1a0;
  undefined8 uStack_198;
  undefined *local_190;
  undefined ***local_188;
  undefined **local_180;
  long lStack_178;
  undefined1 *local_170;
  undefined8 uStack_168;
  ulong local_160;
  undefined4 local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined8 local_130;
  undefined8 local_128;
  ulong uStack_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined4 local_e0;
  undefined local_dc [63];
  undefined1 local_9d;
  undefined *local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined local_84 [63];
  undefined1 local_45;
  
  local_160 = local_160 & 0xffffffff00000000;
  plVar3 = (long *)(**(code **)(**(long **)*param_2 + 0x30))(*(long **)*param_2,0xb8,8);
  plVar3[2] = 0;
  puVar1 = PTR_DAT_04bc9078 + 0x10;
  *plVar3 = (long)(PTR_DAT_04bc9330 + 0x10);
  plVar3[1] = (long)puVar1;
  puVar2 = PTR_DAT_04bc8e60;
  *(undefined8 *)((long)plVar3 + 0xac) = 0;
  *(undefined4 *)((long)plVar3 + 0xb4) = 0;
  *(undefined2 *)(plVar3 + 0x11) = 0;
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[0x10] = 0;
  plVar3[0x14] = 0;
  plVar3[0x12] = 0;
  plVar3[0x13] = 0;
  *(undefined1 *)(plVar3 + 0x15) = 0;
  plVar3[7] = (long)(puVar2 + 0x10);
  plVar3[8] = 0;
  __ptr = *(void **)(param_1 + 0x38);
  *(long **)(param_1 + 0x38) = plVar3;
  if (__ptr != (void *)0x0) {
    FUN_032bac20(__ptr);
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
  local_45 = 0;
  local_88 = 0x40;
  local_90 = local_84;
  local_9d = 0;
  local_84[0] = 0;
  local_e0 = 0x40;
  local_f0 = PTR_DAT_04bb2bc0 + 0x10;
  local_dc[0] = 0;
  local_e8 = local_dc;
  local_98 = local_f0;
  FUN_038d1270(&local_98,"%s.bflyt",
               *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x30) + 0xe8) + 0x30)
              );
  FUN_038d1270(&local_f0,"%s.bflyt",
               *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + 0xe8) + 0x30)
              );
  local_108 = 0;
  local_150 = PTR_DAT_04bc8e68 + 0x10;
  local_160 = *param_2;
  local_158 = (undefined4)param_2[1];
  local_118 = *(undefined1 *)((long)param_2 + 0xc);
  local_140 = local_150;
  (**(code **)(local_98 + 0x18))(&local_98);
  local_148 = PTR_DAT_04bb2120;
  local_138 = PTR_DAT_04bb2120;
  if (local_90 != (undefined *)0x0) {
    local_138 = local_90;
  }
  (**(code **)(local_f0 + 0x18))(&local_f0);
  uStack_120 = param_2[0xe];
  local_110 = *(undefined8 *)(param_1 + 0x10);
  local_128 = *(undefined8 *)(param_1 + 0x18);
  local_130 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20);
  local_100 = *(undefined8 *)(param_1 + 0x40);
  if (local_e8 != (undefined *)0x0) {
    local_148 = local_e8;
  }
  local_f8 = 2;
  FUN_032bae10(*(undefined8 *)(param_1 + 0x38),&local_160);
  lVar6 = *(long *)(param_1 + 0x38);
  ppuVar5 = &PTR_LAB_04b1ab28;
  local_188 = &local_180;
  local_180 = &PTR_LAB_04b1ab28;
  local_170 = &LAB_032be130;
  uStack_168 = 0;
  plVar3 = *(long **)(lVar6 + 0x10);
  local_190 = puVar1;
  lStack_178 = param_1;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
    if (local_188 == (undefined ***)0x0) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      goto LAB_032be08c;
    }
    ppuVar5 = *local_188;
  }
  uVar4 = (*(code *)ppuVar5[3])(local_188,lVar6 + 0x18);
  *(undefined8 *)(lVar6 + 0x10) = uVar4;
  if (local_188 != (undefined ***)0x0) {
    (*(code *)(*local_188)[1])();
  }
LAB_032be08c:
  lVar6 = *(long *)(param_1 + 0x38);
  local_1a0 = &LAB_032be350;
  uStack_198 = 0;
  local_1b0 = &PTR_LAB_04b1abb0;
  plVar3 = *(long **)(lVar6 + 0x40);
  lStack_1a8 = param_1;
  if ((plVar3 != (long *)0x0) &&
     ((**(code **)(*plVar3 + 8))(plVar3), &local_1b0 == (undefined ***)0x0)) {
    *(undefined8 *)(lVar6 + 0x40) = 0;
    return;
  }
  uVar4 = (*(code *)local_1b0[3])(&local_1b0,lVar6 + 0x48);
  *(undefined8 *)(lVar6 + 0x40) = uVar4;
  if (&local_1b0 != (undefined ***)0x0) {
    (*(code *)local_1b0[1])();
  }
  return;
}

