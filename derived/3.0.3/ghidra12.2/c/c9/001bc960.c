
bool FUN_001bc960(long param_1)

{
  long *plVar1;
  MutexType *pMVar2;
  long lVar3;
  void *__src;
  void *pvVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined2 *puVar9;
  long *plVar10;
  bool bVar11;
  ulong __n;
  uint uVar12;
  long lVar13;
  long local_2f0 [2];
  undefined2 local_2e0;
  undefined8 local_2d8;
  undefined2 local_2d0;
  undefined8 local_2c8;
  undefined2 local_2c0;
  undefined8 local_2b8;
  undefined2 local_2b0;
  undefined8 local_2a8;
  undefined2 local_2a0;
  undefined8 local_298;
  undefined2 local_290;
  undefined8 local_288;
  undefined2 local_280;
  undefined8 local_278;
  undefined2 local_270;
  undefined8 local_268;
  undefined2 local_260;
  undefined8 local_258;
  undefined2 local_250;
  undefined8 local_248;
  undefined2 local_240;
  undefined8 local_238;
  undefined2 local_230;
  undefined8 local_228;
  undefined2 local_220;
  undefined8 local_218;
  undefined2 local_210;
  undefined8 local_208;
  undefined2 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 auStack_f0 [144];
  
  pMVar2 = (MutexType *)(param_1 + 0x48);
  nn::os::LockMutex(pMVar2);
  __src = *(void **)(param_1 + 0x20);
  pvVar4 = *(void **)(param_1 + 0x28);
  if (__src == pvVar4) {
    nn::os::UnlockMutex(pMVar2);
  }
  else {
    __n = (long)pvVar4 - (long)__src;
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_110 = 0;
    local_108 = 0;
    local_100 = 0;
    local_f8 = 0;
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_1d0 = 0;
    uStack_1c8 = 0;
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_1a0 = 0;
    uStack_198 = 0;
    local_190 = 0;
    uStack_188 = 0;
    local_180 = 0;
    uStack_178 = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_150 = 0;
    uStack_148 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_120 = 0;
    uStack_118 = 0;
    memcpy(&local_1f0,__src,__n);
    puVar9 = *(undefined2 **)(param_1 + 8);
    puVar5 = *(undefined2 **)(param_1 + 0x10);
    local_2f0[0]._0_2_ = 0;
    local_2f0[1] = 0;
    local_2e0 = 0;
    local_2d8 = 0;
    local_2d0 = 0;
    local_2c8 = 0;
    local_2c0 = 0;
    local_2b8 = 0;
    local_2b0 = 0;
    local_2a8 = 0;
    local_2a0 = 0;
    local_298 = 0;
    local_290 = 0;
    local_288 = 0;
    local_280 = 0;
    local_278 = 0;
    local_270 = 0;
    local_268 = 0;
    local_260 = 0;
    local_258 = 0;
    local_250 = 0;
    local_248 = 0;
    local_240 = 0;
    local_238 = 0;
    local_230 = 0;
    local_228 = 0;
    local_220 = 0;
    local_218 = 0;
    local_210 = 0;
    local_208 = 0;
    local_200 = 0;
    local_1f8 = 0;
    if (puVar9 != puVar5) {
      plVar10 = local_2f0;
      do {
        *(undefined2 *)plVar10 = *puVar9;
        plVar1 = (long *)(puVar9 + 4);
        puVar9 = puVar9 + 8;
        plVar10[1] = *plVar1;
        plVar10 = plVar10 + 2;
      } while (puVar9 != puVar5);
    }
    nn::os::UnlockMutex(pMVar2);
    plVar10 = (long *)(param_1 + 0x80);
    iVar6 = *(int *)PTR_DAT_04bcbfe8;
    do {
      if (*(int *)(param_1 + 200) != 0) {
        *(int *)(param_1 + 200) = 0;
        break;
      }
      (**(code **)(*(long *)(param_1 + 0x80) + 0x10))(plVar10);
      uVar8 = (**(code **)(**(long **)(PTR_DAT_04bcbf10 +
                                      (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x9c)
                                      * 8) + 0x20))
                        (*(long **)(PTR_DAT_04bcbf10 +
                                   (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x9c) *
                                   8),&local_1f0,__n >> 4,100);
      if ((uVar8 & 1) == 0) {
        (**(code **)(*plVar10 + 0x20))(plVar10);
        break;
      }
      uVar8 = 0;
      uVar12 = 0;
      bVar11 = false;
      do {
        if (((*(byte *)((long)&uStack_1e8 + uVar8 * 0x10 + 4) & 1) != 0) &&
           (lVar13 = local_2f0[uVar8 * 2 + 1],
           *(char *)(lVar13 + 0x299) == '\0' && *(int *)(lVar13 + 0xc0) == 0)) {
          lVar3 = lVar13 + 0x1f0;
          FUN_001e1500(auStack_f0);
          *(undefined8 *)(lVar13 + 0x208) = 0;
          *(undefined8 *)(lVar13 + 0x218) = 0;
          *(undefined2 *)(lVar13 + 0x221) = 0;
          *(byte *)(lVar13 + 0x220) = *(byte *)(lVar13 + 0x220) & 4;
          iVar7 = FUN_001e7470(lVar13,lVar3,auStack_f0);
          if (iVar7 == iVar6) {
            uVar8 = FUN_001c39cc(lVar13 + 0x298,lVar3,auStack_f0);
            if ((uVar8 & 1) != 0) {
              do {
                if (*(undefined8 **)(lVar13 + 0x470) != (undefined8 *)0x0) {
                  (**(code **)**(undefined8 **)(lVar13 + 0x470))();
                }
                FUN_001e1868(auStack_f0);
                bVar11 = true;
                if ((*(char *)(lVar13 + 0x299) != '\0') || (*(int *)(lVar13 + 0xc0) != 0))
                goto LAB_001bcb68;
                FUN_001e1500(auStack_f0);
                *(undefined8 *)(lVar13 + 0x208) = 0;
                *(undefined2 *)(lVar13 + 0x221) = 0;
                *(undefined8 *)(lVar13 + 0x218) = 0;
                *(byte *)(lVar13 + 0x220) = *(byte *)(lVar13 + 0x220) & 4;
                iVar7 = FUN_001e7470(lVar13,lVar3,auStack_f0);
              } while ((iVar7 == iVar6) &&
                      (uVar8 = FUN_001c39cc(lVar13 + 0x298,lVar3,auStack_f0), (uVar8 & 1) != 0));
              bVar11 = true;
            }
          }
          FUN_001e1868(auStack_f0);
        }
LAB_001bcb68:
        uVar12 = uVar12 + 1;
        uVar8 = (ulong)uVar12;
      } while (uVar8 < (ulong)((long)__n >> 4));
      (**(code **)(*plVar10 + 0x20))(plVar10);
    } while (bVar11);
  }
  return __src != pvVar4;
}

