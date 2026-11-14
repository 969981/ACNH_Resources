
void FUN_0158ba84(undefined8 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  void *__ptr;
  
  uVar2 = *(uint *)(param_1 + 0x81);
  *param_1 = &PTR_FUN_049ac018;
  puVar3 = PTR_DAT_04bb27c0;
  if (uVar2 != 0) {
    lVar7 = *(long *)PTR_DAT_04bb27c0;
    if (lVar7 != 0) {
      lVar8 = *(long *)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + ((ulong)(uVar2 >> 0x11) & 0x7ff8))
      ;
      if (((lVar8 == 0) || ((*(uint *)(lVar8 + 0x248) >> 1 & 1) != 0)) ||
         (*(uint *)(lVar8 + 0x230) != uVar2)) {
        lVar8 = 0;
      }
      if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
        plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar7 = *(long *)puVar3;
        iVar4 = (**(code **)(*plVar5 + 0x60))();
        if (((iVar4 < 0x11) ||
            ((*(uint *)(lVar7 + 0x5e8) < 5 &&
             ((1 << (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 0x1aU) != 0)))) && (lVar8 != 0)) {
          FUN_006fb3d0(lVar8);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x81) = 0;
  }
  if ((*(byte *)(param_1 + 0x85) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x85) = *(byte *)(param_1 + 0x85) & 0xf8 | 4;
    if (param_1[0x89] == 0) {
      if (param_1[0x86] == 0) goto LAB_0158bbc0;
    }
    else {
      FUN_03f45838(param_1 + 0x87);
      if (param_1[0x86] == 0) {
        *(undefined4 *)((long)param_1 + 0x42c) = 0xe;
        goto LAB_0158bbc0;
      }
    }
    if (*(long *)PTR_DAT_04bb49b8 != 0) {
      FUN_03f350f4(*(long *)PTR_DAT_04bb49b8,param_1 + 0x84);
    }
  }
LAB_0158bbc0:
  FUN_03f457c4(param_1 + 0x87);
  puVar3 = PTR_DAT_04bb31d0;
  param_1[0x80] = 0;
  param_1[0x7b] = puVar3 + 0x10;
  puVar3 = PTR_DAT_04bb3058;
  param_1[0x74] = PTR_DAT_04bb2fe8 + 0x10;
  uVar6 = (**(code **)(**(long **)(*(long *)puVar3 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar3 + 0x330),param_1[0x7a]);
  if (((uVar6 & 1) != 0) && (__ptr = (void *)param_1[0x7a], __ptr != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,__ptr);
      }
    }
  }
  param_1[0x7a] = 0;
  puVar1 = PTR_DAT_04bb33d0 + 0x10;
  lVar7 = *(long *)puVar3;
  param_1[0x5b] = puVar1;
  uVar6 = (**(code **)(**(long **)(lVar7 + 0x330) + 0x88))(*(long **)(lVar7 + 0x330),param_1[0x73]);
  if (((uVar6 & 1) != 0) && ((long *)param_1[0x73] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x73] + 8))();
  }
  lVar7 = *(long *)puVar3;
  param_1[0x73] = 0;
  param_1[0x42] = puVar1;
  uVar6 = (**(code **)(**(long **)(lVar7 + 0x330) + 0x88))(*(long **)(lVar7 + 0x330),param_1[0x5a]);
  if (((uVar6 & 1) != 0) && ((long *)param_1[0x5a] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x5a] + 8))();
  }
  param_1[0x5a] = 0;
  param_1[0x31] = PTR_DAT_04bb3578 + 0x10;
  uVar6 = (**(code **)(**(long **)(*(long *)puVar3 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar3 + 0x330),param_1[0x41]);
  if (((uVar6 & 1) != 0) && ((long *)param_1[0x41] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
  }
  param_1[0x41] = 0;
  puVar3 = PTR_DAT_04bb33a8;
  param_1[0x30] = 0;
  param_1[0x2b] = puVar3 + 0x10;
  return;
}

