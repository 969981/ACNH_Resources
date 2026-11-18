
void FUN_03444de0(uint *param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined1 auVar3 [16];
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined1 *__dest;
  ulong uVar10;
  ulong *puVar11;
  uint uVar12;
  
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  lVar4 = DAT_05ae7600;
  if ((int)param_2 < 1) {
    return;
  }
  uVar10 = (ulong)param_2;
  uVar9 = (uVar10 + (ulong)param_2 * 2) * 0x10 | 8;
  if (DAT_05ae7600 == 0) {
    puVar7 = malloc(uVar9);
joined_r0x03444f34:
    if (puVar7 != (ulong *)0x0) {
      puVar11 = puVar7 + 1;
      *puVar7 = uVar10;
      puVar1 = PTR_DAT_04bb2ab0;
      uVar9 = uVar10 * 0x30 - 0x30;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar9;
      puVar8 = puVar11;
      if ((SUB164(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 5 & 1) == 0) {
        *(undefined1 *)((long)puVar7 + 0x1c) = 0;
        *(undefined4 *)(puVar7 + 3) = 0x10;
        puVar7[1] = (ulong)(puVar1 + 0x10);
        puVar8 = puVar7 + 7;
        puVar7[2] = (ulong)((long)puVar7 + 0x1c);
        *(undefined1 *)((long)puVar7 + 0x2b) = 0;
        *(undefined2 *)(puVar7 + 6) = 0;
      }
      if (0x2f < uVar9) {
        puVar1 = puVar1 + 0x10;
        do {
          *(undefined4 *)(puVar8 + 2) = 0x10;
          *(undefined1 *)((long)puVar8 + 0x14) = 0;
          *(undefined1 *)((long)puVar8 + 0x44) = 0;
          *(undefined1 *)((long)puVar8 + 0x23) = 0;
          *(undefined2 *)(puVar8 + 5) = 0;
          *(undefined4 *)(puVar8 + 8) = 0x10;
          *(undefined1 *)((long)puVar8 + 0x53) = 0;
          *(undefined2 *)(puVar8 + 0xb) = 0;
          *puVar8 = (ulong)puVar1;
          puVar8[1] = (ulong)((long)puVar8 + 0x14);
          puVar8[6] = (ulong)puVar1;
          puVar8[7] = (ulong)((long)puVar8 + 0x44);
          puVar8 = puVar8 + 0xc;
        } while (puVar8 != puVar11 + uVar10 * 6);
      }
      *param_1 = param_2;
      *(ulong **)(param_1 + 2) = puVar11;
      goto joined_r0x03444f24;
    }
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar6 = (long *)(lVar4 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) {
      puVar7 = (ulong *)(**(code **)(*plVar6 + 0x30))(plVar6,uVar9,8);
      goto joined_r0x03444f34;
    }
  }
  puVar11 = *(ulong **)(param_1 + 2);
  param_2 = *param_1;
joined_r0x03444f24:
  if (param_2 != 0) {
    uVar12 = 0;
    do {
      __dest = (undefined1 *)puVar11[(long)(int)uVar12 * 6 + 1];
      if (__dest != &DAT_04066e12) {
        iVar2 = 3;
        if ((int)puVar11[(long)(int)uVar12 * 6 + 2] < 4) {
          iVar2 = (int)puVar11[(long)(int)uVar12 * 6 + 2] + -1;
        }
        memcpy(__dest,&DAT_04066e12,(long)iVar2);
        __dest[iVar2] = 0;
      }
      *(undefined2 *)(puVar11 + (long)(int)uVar12 * 6 + 5) = 0;
      uVar12 = uVar12 + 1;
    } while (param_2 != uVar12);
  }
  return;
}

