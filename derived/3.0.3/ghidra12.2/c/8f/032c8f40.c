
/* WARNING: Removing unreachable block (ram,0x032c8f78) */
/* WARNING: Removing unreachable block (ram,0x032c917c) */

void FUN_032c8f40(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  void *__dest;
  void *__src;
  undefined *local_310;
  undefined1 *puStack_308;
  undefined8 local_300;
  undefined *local_2f8;
  undefined1 *local_2f0;
  undefined4 local_2e8;
  undefined1 local_2e4 [255];
  undefined1 local_1e5;
  undefined *local_1e0;
  undefined4 local_1d8;
  undefined *local_1d0;
  undefined *puStack_1c8;
  undefined4 local_1c0;
  undefined1 local_1bc;
  undefined1 local_1bb;
  undefined1 uStack_1ba;
  undefined2 uStack_1b9;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined *puStack_178;
  undefined1 *local_170;
  undefined *local_168;
  undefined1 *local_160;
  undefined4 local_158;
  undefined1 local_154 [255];
  undefined1 local_55;
  
  local_168 = (undefined *)((ulong)local_168 & 0xffffffff00000000);
  plVar5 = (long *)(**(code **)(*(long *)*param_3 + 0x30))((long *)*param_3,0x38,8);
  puVar2 = PTR_DAT_04bdf0c8;
  *(undefined1 *)(plVar5 + 1) = 1;
  *(undefined4 *)((long)plVar5 + 0xc) = 0;
  *plVar5 = (long)(puVar2 + 0x10);
  puVar2 = PTR_DAT_04bdf1d8;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[2] = 0;
  plVar5[3] = (long)(puVar2 + 0x10);
  *(long **)(param_1 + 0x10) = plVar5;
  puVar3 = PTR_DAT_04bb21f8;
  local_158 = 0x100;
  local_160 = local_154;
  local_55 = 0;
  local_154[0] = 0;
  local_168 = PTR_DAT_04bb21f8 + 0x10;
  plVar5 = param_2 + 1;
  (**(code **)(*plVar5 + 0x18))(plVar5);
  FUN_038d1270(&local_168,"Layout/%s.Nin_NX_NVN.zs",param_2[2]);
  puVar2 = PTR_DAT_04bb2020;
  local_1d8 = 1;
  local_1c0 = 0x1010100;
  local_1d0 = PTR_DAT_04bb2020 + 0x10;
  puStack_1c8 = PTR_DAT_04bb2120;
  local_180 = 0;
  local_1bc = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1e0 = PTR_DAT_04bdf0b0 + 0x10;
  local_190 = 0;
  uStack_188 = 0;
  local_170 = local_160;
  uStack_198 = *param_2;
  local_1a0 = 0;
  local_1b4 = 0x2000;
  _local_1bb = CONCAT22(0x101,CONCAT11(*(undefined1 *)(param_2 + 3),1));
  puStack_178 = local_1d0;
  FUN_0081a630(*(undefined8 *)(param_1 + 0x10),&local_168,&local_1e0,1);
  uVar6 = FUN_03f2d924(*(undefined8 *)(param_1 + 0x10));
  if ((uVar6 & 1) != 0) {
    plVar7 = (long *)FUN_03f2d7f0(*(undefined8 *)(param_1 + 0x10));
    if (((*PTR_DAT_04bb2868 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2868);
    }
    if ((plVar7 != (long *)0x0) &&
       (uVar6 = (**(code **)*plVar7)(plVar7,PTR_DAT_04bb2860), (uVar6 & 1) != 0)) {
      local_1e5 = 0;
      local_2f0 = local_2e4;
      local_2e8 = 0x100;
      local_2f8 = puVar3 + 0x10;
      local_2e4[0] = 0;
      (**(code **)(param_2[1] + 0x18))(plVar5);
      FUN_038d1270(&local_2f8,"%s.arc",param_2[2]);
      local_300 = 0;
      (**(code **)(local_2f8 + 0x18))(&local_2f8);
      local_310 = puVar2 + 0x10;
      puStack_308 = local_2f0;
      uVar8 = (**(code **)(*plVar7 + 0x30))(plVar7,&local_310,&local_300);
      local_310 = (undefined *)((ulong)local_310 & 0xffffffff00000000);
      uVar9 = (**(code **)(*(long *)*param_3 + 0x30))((long *)*param_3,0xe8,8);
      FUN_00361c7c();
      plVar7 = *(long **)(param_1 + 8);
      *(undefined8 *)(param_1 + 8) = uVar9;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
        uVar9 = *(undefined8 *)(param_1 + 8);
      }
      FUN_00361d50(uVar9,uVar8,&DAT_0407ec0b,0,0,0);
      __dest = *(void **)(param_1 + 0x20);
      (**(code **)(param_2[1] + 0x18))(plVar5);
      __src = (void *)param_2[2];
      if (__dest != __src) {
        (**(code **)(param_2[1] + 0x18))(plVar5);
        lVar10 = 0;
        do {
          if (*(char *)(param_2[2] + lVar10) == '\0') goto LAB_032c9250;
          lVar1 = param_2[2] + lVar10;
          if (*(char *)(lVar1 + 1) == '\0') {
            lVar10 = lVar10 + 1;
            goto LAB_032c9250;
          }
          if (*(char *)(lVar1 + 2) == '\0') {
            lVar10 = lVar10 + 2;
            goto LAB_032c9250;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        lVar10 = 0;
LAB_032c9250:
        iVar4 = (int)lVar10;
        if (*(int *)(param_1 + 0x28) <= (int)lVar10) {
          iVar4 = *(int *)(param_1 + 0x28) + -1;
        }
        memcpy(__dest,__src,(long)iVar4);
        *(undefined1 *)((long)__dest + (long)iVar4) = 0;
      }
    }
  }
  return;
}

