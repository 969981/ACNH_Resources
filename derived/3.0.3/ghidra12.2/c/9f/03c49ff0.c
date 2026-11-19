
void FUN_03c49ff0(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  ulong *puVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  
  puVar2 = PTR_DAT_04bb2698;
  if (param_2 == (uint *)0x0) {
    uVar10 = 0x200;
LAB_03c4a02c:
    lVar8 = *(long *)PTR_DAT_04bb2698;
    if (lVar8 == 0) {
      pvVar3 = malloc((long)(int)(uVar10 * 0x110));
joined_r0x03c4a0a4:
      if (pvVar3 != (void *)0x0) {
        uVar7 = uVar10 - 1;
        *(void **)(param_1 + 0x88) = pvVar3;
        if (1 < uVar10) {
          if (uVar7 == 1) {
            uVar9 = 0;
          }
          else {
            uVar9 = 0;
            plVar5 = (long *)((long)pvVar3 + 0x110);
            do {
              uVar9 = uVar9 + 2;
              plVar5[-0x22] = (long)plVar5;
              *plVar5 = (long)(plVar5 + 0x22);
              plVar5 = plVar5 + 0x44;
            } while (((ulong)uVar7 & 0xfffffffe) != uVar9);
          }
          if ((uVar7 & 1) != 0) {
            plVar5 = (long *)((long)pvVar3 + uVar9 * 0x110);
            *plVar5 = (long)(plVar5 + 0x22);
          }
        }
        *(undefined8 *)((long)pvVar3 + (long)(int)(uVar7 * 0x22) * 8) = 0;
        *(void **)(param_1 + 0x90) = pvVar3;
        *(uint *)(param_1 + 0x98) = uVar10;
      }
    }
    else {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar8 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) {
        pvVar3 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(long)(int)(uVar10 * 0x110),8);
        goto joined_r0x03c4a0a4;
      }
    }
    if (param_2 != (uint *)0x0) goto LAB_03c4a088;
    uVar10 = 0x100;
LAB_03c4a124:
    lVar8 = *(long *)puVar2;
    if (lVar8 == 0) {
      pvVar3 = malloc((long)(int)(uVar10 * 0x108));
joined_r0x03c4a188:
      if (pvVar3 != (void *)0x0) {
        uVar7 = uVar10 - 1;
        *(void **)(param_1 + 0xb8) = pvVar3;
        if (1 < uVar10) {
          if (uVar7 == 1) {
            uVar9 = 0;
          }
          else {
            uVar9 = 0;
            plVar5 = (long *)((long)pvVar3 + 0x108);
            do {
              uVar9 = uVar9 + 2;
              plVar5[-0x21] = (long)plVar5;
              *plVar5 = (long)(plVar5 + 0x21);
              plVar5 = plVar5 + 0x42;
            } while (((ulong)uVar7 & 0xfffffffe) != uVar9);
          }
          if ((uVar7 & 1) != 0) {
            plVar5 = (long *)((long)pvVar3 + uVar9 * 0x108);
            *plVar5 = (long)(plVar5 + 0x21);
          }
        }
        *(undefined8 *)((long)pvVar3 + (long)(int)(uVar7 * 0x21) * 8) = 0;
        *(void **)(param_1 + 0xc0) = pvVar3;
        *(uint *)(param_1 + 200) = uVar10;
      }
    }
    else {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar8 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) {
        pvVar3 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(long)(int)(uVar10 * 0x108),8);
        goto joined_r0x03c4a188;
      }
    }
    if (param_2 != (uint *)0x0) goto LAB_03c4a20c;
    uVar10 = 0x200;
LAB_03c4a220:
    lVar8 = *(long *)puVar2;
    uVar11 = (ulong)uVar10;
    uVar9 = uVar11 << 6 | 8;
    if (lVar8 == 0) {
      puVar6 = malloc(uVar9);
      puVar2 = PTR_DAT_04bd20e8;
    }
    else {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar8 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_03c4a2e8;
      puVar6 = (ulong *)(**(code **)(*plVar5 + 0x30))(plVar5,uVar9,8);
      puVar2 = PTR_DAT_04bd20e8;
    }
    PTR_DAT_04bd20e8 = puVar2;
    if (puVar6 != (ulong *)0x0) {
      lVar8 = (long)puVar6 + 0x1c;
      *puVar6 = uVar11;
      lVar4 = uVar11 << 6;
      do {
        *(undefined **)(lVar8 + -0xc) = puVar2 + 0x10;
        lVar4 = lVar4 + -0x40;
        *(undefined8 *)(lVar8 + 0x14) = 0x3f80000000000000;
        *(undefined1 **)(lVar8 + -4) = &DAT_3f8000003f800000;
        *(undefined1 **)(lVar8 + 4) = &DAT_3f8000003f800000;
        *(undefined8 *)(lVar8 + 0xc) = 0x3f800000;
        *(undefined8 *)(lVar8 + 0x1c) = 0;
        *(undefined8 *)(lVar8 + 0x24) = 0;
        lVar8 = lVar8 + 0x40;
      } while (lVar4 != 0);
      *(uint *)(param_1 + 0x48) = uVar10;
      *(ulong **)(param_1 + 0x50) = puVar6 + 1;
      goto joined_r0x03c4a2d4;
    }
  }
  else {
    uVar10 = *param_2;
    if (0 < (int)uVar10) goto LAB_03c4a02c;
LAB_03c4a088:
    uVar10 = param_2[1];
    if (0 < (int)uVar10) goto LAB_03c4a124;
LAB_03c4a20c:
    uVar10 = param_2[2];
    if (0 < (int)uVar10) goto LAB_03c4a220;
  }
LAB_03c4a2e8:
  uVar10 = *(uint *)(param_1 + 0x48);
joined_r0x03c4a2d4:
  if (0 < (int)uVar10) {
    uVar7 = 0;
    do {
      uVar1 = uVar7;
      if (uVar10 <= uVar7) {
        uVar1 = 0;
      }
      plVar5 = (long *)(*(long *)(param_1 + 0x50) + (ulong)uVar1 * 0x40 +
                       (long)*(int *)(param_1 + 0x6c));
      lVar8 = *(long *)(param_1 + 0x58);
      *(long **)(param_1 + 0x58) = plVar5;
      *plVar5 = lVar8;
      plVar5[1] = param_1 + 0x58;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 8) = plVar5;
      }
      uVar7 = uVar7 + 1;
      uVar10 = *(uint *)(param_1 + 0x48);
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    } while ((int)uVar7 < (int)uVar10);
  }
  return;
}

