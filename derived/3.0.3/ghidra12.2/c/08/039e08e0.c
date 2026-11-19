
void FUN_039e08e0(long param_1,long *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  void *__ptr;
  undefined8 uVar7;
  long *plVar8;
  bool bVar9;
  long lVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  
  lVar10 = DAT_05ae7600;
  bVar3 = (&DAT_041b2e5c)[(ulong)*(ushort *)(param_1 + 0x2c0) * 0x14];
  if (DAT_05ae7600 == 0) {
    __ptr = malloc((ulong)bVar3 << 0xc);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar10 + 8);
      if (lVar6 != 0) {
        param_2 = (long *)(lVar6 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        __ptr = (void *)0x0;
        goto LAB_039e0990;
      }
    }
    __ptr = (void *)(**(code **)(*param_2 + 0x30))(param_2,(ulong)bVar3 << 0xc,0x10);
  }
LAB_039e0990:
  uVar11 = 0;
  do {
    lVar10 = 0;
    lVar6 = param_1 + 0x6e8 + ((long)((ulong)uVar11 << 0x20) >> 0x18);
    pbVar1 = (byte *)(lVar6 + 0x78);
    do {
      fVar12 = (float)(int)lVar10 / 127.0;
      if (uVar11 != 2) {
        if (uVar11 == 1) {
          fVar12 = fVar12 * fVar12;
        }
        else if (uVar11 == 0) {
          fVar12 = fVar12 * 2.0 + -1.0;
        }
        else {
          fVar12 = (float)(**(code **)(PTR_PTR_04bb4f80 + (ulong)*pbVar1 * 8))
                                    (pbVar1,*(undefined8 *)(lVar6 + 0x70));
        }
      }
      fVar14 = 255.0;
      if (fVar12 <= 1.0) {
        fVar14 = fVar12 * 255.0;
      }
      fVar13 = 0.0;
      if (0.0 <= fVar12) {
        fVar13 = fVar14;
      }
      if (*(short *)(param_1 + 0x2c0) == 0x1d) {
        uVar5 = FUN_038cd970((int)fVar13 * 0x1010101);
        *(undefined4 *)((long)__ptr + lVar10 * 4 + (ulong)(uVar11 << 7) * 4) = uVar5;
      }
      else {
        *(char *)((long)__ptr + lVar10 + (ulong)(uVar11 << 7)) = (char)(int)fVar13;
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 != 0x80);
    uVar11 = uVar11 + 1;
  } while (uVar11 != 0x20);
  FUN_0390a734(param_1 + 0x228,1,*(undefined2 *)(param_1 + 0x2c0),0x80,0x20,1,1,0,0,1);
  local_98 = *(undefined4 *)(param_1 + 0x208);
  bVar9 = false;
  *(undefined4 *)(param_1 + 0x228) = local_98;
  uStack_94 = *(undefined4 *)(param_1 + 0x20c);
  local_90 = *(undefined8 *)(param_1 + 0x210);
  uStack_88 = *(undefined8 *)(param_1 + 0x218);
  *(undefined4 *)(param_1 + 0x22c) = uStack_94;
  *(undefined8 *)(param_1 + 0x230) = local_90;
  *(undefined8 *)(param_1 + 0x238) = uStack_88;
  if ((*(byte *)(param_1 + 0x276) >> 1 & 1) != 0) {
    bVar9 = 0x11 < *(ushort *)(param_1 + 0x2c0) && *(ushort *)(param_1 + 0x2c0) - 0x59 < 0xffffffd6;
  }
  uVar7 = FUN_038fd3e0(param_1 + 0x278,&local_98,param_1 + 600,0,*(undefined8 *)(param_1 + 0x2b8),
                       bVar9,1);
  FUN_038faf2c(uVar7,param_1 + 0x228,__ptr,0);
  *(char **)(param_1 + 0x2b8) = "LMM_LUT";
  *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_1 + 0x22c);
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x238);
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_1 + 0x240);
  *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(param_1 + 0x244);
  *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x250);
  *(undefined8 *)(param_1 + 0x30f) = *(undefined8 *)(param_1 + 0x26f);
  *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x268);
  *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x260);
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_1 + 600);
  FUN_038fd1e0(param_1 + 0x318);
  FUN_038fd2f0(param_1 + 0x318,param_1 + 0x278);
  *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)(param_1 + 0x2b8);
  *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(param_1 + 0x2c0);
  puVar2 = (uint *)(param_1 + 0x39c);
  do {
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *puVar2 = *puVar2 | 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (DAT_05ae7600 == 0) {
    free(__ptr);
  }
  else if ((__ptr != (void *)0x0) &&
          (plVar8 = (long *)FUN_038cb610(DAT_05ae7600,__ptr), plVar8 != (long *)0x0)) {
    (**(code **)(*plVar8 + 0x38))(plVar8,__ptr);
  }
  return;
}

