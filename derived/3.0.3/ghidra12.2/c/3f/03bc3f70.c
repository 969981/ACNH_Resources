
void FUN_03bc3f70(long param_1,int param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  size_t __size;
  long lVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  long *plVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  ulong uVar11;
  int iVar12;
  
  lVar4 = DAT_05ae7600;
  if (*(long *)(param_1 + 0x10) != 0) {
    return;
  }
  if (param_2 < 1) goto LAB_03bc4270;
  if (DAT_05ae7600 == 0) {
    pvVar7 = malloc((long)(param_2 << 3));
joined_r0x03bc4298:
    if (pvVar7 != (void *)0x0) {
      *(void **)(param_1 + 0x10) = pvVar7;
      *(undefined4 *)(param_1 + 8) = 0;
      *(int *)(param_1 + 0xc) = param_2;
    }
  }
  else {
    plVar6 = param_3;
    if (param_3 != (long *)0x0) {
LAB_03bc3ff8:
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,(long)(param_2 << 3),8);
      goto joined_r0x03bc4298;
    }
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar6 = (long *)(lVar4 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) goto LAB_03bc3ff8;
  }
  iVar12 = 0;
  puVar2 = PTR_DAT_04bd22c8 + 0x10;
  do {
    lVar4 = DAT_05ae7600;
    if (DAT_05ae7600 == 0) {
      plVar6 = malloc(0x30);
    }
    else {
      plVar6 = param_3;
      if (param_3 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar6 = (long *)(lVar4 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
      }
      plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x30,8);
    }
    *plVar6 = (long)puVar2;
    *(undefined1 *)(plVar6 + 1) = 0;
    plVar6[5] = 0;
    *(undefined8 *)((long)plVar6 + 0xc) = 0x7f7fffff;
    *(undefined8 *)((long)plVar6 + 0x14) = 0x7f7fffff;
    *(undefined8 *)((long)plVar6 + 0x1c) = 0;
    lVar4 = DAT_05ae7600;
    uVar3 = *(uint *)(*(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x20) + 0x14);
    if (0 < (int)uVar3) {
      __size = (ulong)uVar3 * 0x1c;
      if (DAT_05ae7600 == 0) {
        puVar9 = malloc(__size);
      }
      else {
        plVar8 = param_3;
        if (param_3 == (long *)0x0) {
          lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar8 = (long *)(lVar4 + 8);
          if (lVar5 != 0) {
            plVar8 = (long *)(lVar5 + 0xa8);
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_03bc4244;
        }
        puVar9 = (undefined4 *)(**(code **)(*plVar8 + 0x30))(plVar8,__size,8);
      }
      if (puVar9 != (undefined4 *)0x0) {
        uVar1 = ((uint)((__size - 0x1c) / 0x1c) & 0x7fffffff) + 1;
        uVar11 = (ulong)uVar1 & 7;
        puVar10 = puVar9;
        if ((uVar1 & 7) != 0) {
          do {
            *puVar10 = 0xffffffff;
            uVar11 = uVar11 - 1;
            *(undefined8 *)(puVar10 + 1) = 0;
            *(undefined8 *)(puVar10 + 3) = 0;
            *(undefined8 *)(puVar10 + 5) = 0;
            puVar10 = puVar10 + 7;
          } while (uVar11 != 0);
        }
        if (0xc3 < __size - 0x1c) {
          do {
            *puVar10 = 0xffffffff;
            *(undefined8 *)(puVar10 + 1) = 0;
            *(undefined8 *)(puVar10 + 3) = 0;
            *(undefined8 *)(puVar10 + 5) = 0;
            puVar10[7] = 0xffffffff;
            *(undefined8 *)(puVar10 + 0xc) = 0;
            puVar10[0xe] = 0xffffffff;
            *(undefined8 *)(puVar10 + 0xf) = 0;
            *(undefined8 *)(puVar10 + 0x11) = 0;
            *(undefined8 *)(puVar10 + 0x13) = 0;
            puVar10[0x15] = 0xffffffff;
            *(undefined8 *)(puVar10 + 0x1a) = 0;
            puVar10[0x1c] = 0xffffffff;
            *(undefined8 *)(puVar10 + 0x1d) = 0;
            *(undefined8 *)(puVar10 + 0x1f) = 0;
            *(undefined8 *)(puVar10 + 0x21) = 0;
            puVar10[0x23] = 0xffffffff;
            *(undefined8 *)(puVar10 + 0x24) = 0;
            puVar10[0x2a] = 0xffffffff;
            *(undefined8 *)(puVar10 + 0x2f) = 0;
            *(undefined8 *)(puVar10 + 0x2d) = 0;
            *(undefined8 *)(puVar10 + 0x2b) = 0;
            puVar10[0x31] = 0xffffffff;
            *(undefined8 *)(puVar10 + 0x32) = 0;
            *(undefined8 *)(puVar10 + 8) = 0;
            *(undefined8 *)(puVar10 + 10) = 0;
            *(undefined8 *)(puVar10 + 0x16) = 0;
            *(undefined8 *)(puVar10 + 0x18) = 0;
            *(undefined8 *)(puVar10 + 0x26) = 0;
            *(undefined8 *)(puVar10 + 0x28) = 0;
            *(undefined8 *)(puVar10 + 0x34) = 0;
            *(undefined8 *)(puVar10 + 0x36) = 0;
            puVar10 = puVar10 + 0x38;
          } while (puVar10 != puVar9 + (ulong)uVar3 * 7);
        }
        *(uint *)(plVar6 + 4) = uVar3;
        plVar6[5] = (long)puVar9;
      }
    }
LAB_03bc4244:
    *(undefined1 *)(plVar6 + 1) = 0;
    if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
      *(long **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = plVar6;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 != param_2);
LAB_03bc4270:
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

