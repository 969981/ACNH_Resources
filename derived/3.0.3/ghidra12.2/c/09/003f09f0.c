
size_t FUN_003f09f0(long param_1,undefined8 param_2,void *param_3,ulong param_4,undefined1 *param_5)

{
  uint uVar1;
  size_t sVar2;
  undefined *puVar3;
  uint *puVar4;
  long lVar5;
  void *__src;
  size_t sVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  
  puVar3 = PTR_DAT_04bcb900;
  plVar10 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar4;
    if (uVar1 != 0) {
      lVar5 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar5 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar10 = (long *)(*(long *)(lVar5 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar5 = FUN_001948f0(*(undefined8 *)(*(long *)(*plVar10 + 0x10) + 0x18),
                       *(undefined4 *)(param_1 + 8));
  if (lVar5 != 0) {
    if (*(char *)(param_1 + 0x98) == '\0') {
      pvVar7 = *(void **)(param_1 + 0x68);
      if (pvVar7 != *(void **)(param_1 + 0x70)) {
        sVar6 = (long)*(void **)(param_1 + 0x70) - (long)pvVar7;
        if (param_4 <= sVar6) {
          sVar6 = param_4;
        }
        if (sVar6 != 0) {
          memmove(param_3,pvVar7,sVar6);
          pvVar7 = *(void **)(param_1 + 0x68);
          sVar2 = *(long *)(param_1 + 0x70) - (long)((long)pvVar7 + sVar6);
          if (sVar2 != 0) {
            memmove(pvVar7,(void *)((long)pvVar7 + sVar6),sVar2);
          }
          *(size_t *)(param_1 + 0x70) = (long)pvVar7 + sVar2;
        }
        return sVar6;
      }
      if (*(long *)(param_1 + 0x48) == 0) {
        sVar6 = (**(code **)(**(long **)(param_1 + 0x58) + 0x10))
                          (*(long **)(param_1 + 0x58),param_3,param_4);
        uVar8 = *(long *)(param_1 + 0x60) + sVar6;
        uVar9 = *(ulong *)(param_1 + 0x50);
      }
      else {
        sVar6 = *(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x60);
        if (param_4 <= sVar6) {
          sVar6 = param_4;
        }
        memcpy(param_3,(void *)(*(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x60)),sVar6);
        uVar8 = *(long *)(param_1 + 0x60) + sVar6;
        uVar9 = *(ulong *)(param_1 + 0x50);
        if (uVar8 == uVar9) {
          *(ulong *)(param_1 + 0x60) = uVar8;
          *(undefined1 *)(param_1 + 0x98) = 1;
          return sVar6;
        }
      }
      *(ulong *)(param_1 + 0x60) = uVar8;
      if (uVar8 <= uVar9) {
        return sVar6;
      }
    }
    else {
      __src = *(void **)(param_1 + 0x80);
      pvVar7 = *(void **)(param_1 + 0x88);
      sVar6 = (long)pvVar7 - (long)__src;
      if (param_4 <= (ulong)((long)pvVar7 - (long)__src)) {
        sVar6 = param_4;
      }
      if (sVar6 != 0) {
        memmove(param_3,__src,sVar6);
        pvVar7 = *(void **)(param_1 + 0x80);
        sVar2 = *(long *)(param_1 + 0x88) - (long)((long)pvVar7 + sVar6);
        if (sVar2 == 0) {
          __src = pvVar7;
        }
        else {
          memmove(pvVar7,(void *)((long)pvVar7 + sVar6),sVar2);
          __src = *(void **)(param_1 + 0x80);
        }
        pvVar7 = (void *)((long)pvVar7 + sVar2);
        *(void **)(param_1 + 0x88) = pvVar7;
      }
      if (__src != pvVar7) {
        return sVar6;
      }
      if (*(long *)(param_1 + 0x60) == *(long *)(param_1 + 0x50)) {
        *param_5 = 1;
        return sVar6;
      }
    }
    FUN_00197980(lVar5);
  }
  return 0;
}

