
void FUN_039a5f70(long param_1,uint param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  puVar3 = PTR_DAT_04bb2698;
  if ((int)param_2 < 1) {
    return;
  }
  uVar10 = (ulong)param_2;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  if (lVar12 == 0) {
    pvVar6 = malloc((long)(int)(param_2 << 3));
joined_r0x039a602c:
    if (pvVar6 != (void *)0x0) {
      *(void **)(param_1 + 0x18) = pvVar6;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(uint *)(param_1 + 0x14) = param_2;
    }
    lVar12 = *(long *)puVar3;
    uVar11 = uVar10 * 0xa0 | 8;
    if (lVar12 != 0) {
      if (param_3 == (long *)0x0) {
LAB_039a604c:
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar1 = (undefined8 *)(lVar12 + 8);
        if (lVar4 != 0) {
          puVar1 = (undefined8 *)(lVar4 + 0xa8);
        }
        param_3 = (long *)*puVar1;
        if (param_3 == (long *)0x0) {
          return;
        }
      }
      puVar7 = (ulong *)(**(code **)(*param_3 + 0x30))(param_3,uVar11,8);
      goto joined_r0x039a6090;
    }
  }
  else {
    plVar5 = param_3;
    if (param_3 != (long *)0x0) {
LAB_039a5fe4:
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(long)(int)(param_2 << 3),8);
      goto joined_r0x039a602c;
    }
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar5 = (long *)(lVar12 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_039a5fe4;
    lVar12 = *(long *)puVar3;
    uVar11 = uVar10 * 0xa0 | 8;
    if (lVar12 != 0) goto LAB_039a604c;
  }
  puVar7 = malloc(uVar11);
joined_r0x039a6090:
  if (puVar7 != (ulong *)0x0) {
    uVar11 = uVar10 * 0xa0 - 0xa0;
    puVar8 = puVar7 + 1;
    *puVar7 = uVar10;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar11;
    puVar9 = puVar8;
    if ((SUB164(auVar2 * ZEXT816(0xcccccccccccccccd),8) >> 7 & 1) == 0) {
      puVar7[9] = 0;
      puVar7[10] = 0;
      *(undefined4 *)(puVar7 + 0xb) = 0xffffffff;
      puVar7[0x12] = 0;
      puVar7[0x13] = (ulong)"agl::TextureData";
      *(undefined4 *)(puVar7 + 0x14) = 0x10000;
      puVar9 = puVar7 + 0x15;
      puVar7[7] = 0;
      puVar7[8] = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      *puVar8 = 0;
      puVar7[2] = 0;
      puVar7[0xc] = 0;
      puVar7[0xd] = 0;
      puVar7[0xe] = 0;
      puVar7[0xf] = 0;
      puVar7[0x10] = 0;
      puVar7[0x11] = 0;
    }
    if (0x9f < uVar11) {
      do {
        puVar9[8] = 0;
        puVar9[9] = 0;
        *(undefined4 *)(puVar9 + 10) = 0xffffffff;
        *(undefined4 *)(puVar9 + 0x13) = 0x10000;
        *(undefined4 *)(puVar9 + 0x1e) = 0xffffffff;
        *(undefined4 *)(puVar9 + 0x27) = 0x10000;
        puVar9[6] = 0;
        puVar9[7] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[0xb] = 0;
        puVar9[0xc] = 0;
        puVar9[0xd] = 0;
        puVar9[0xe] = 0;
        puVar9[0xf] = 0;
        puVar9[0x10] = 0;
        puVar9[0x11] = 0;
        puVar9[0x12] = (ulong)"agl::TextureData";
        puVar9[0x1c] = 0;
        puVar9[0x1d] = 0;
        puVar9[0x1a] = 0;
        puVar9[0x1b] = 0;
        puVar9[0x18] = 0;
        puVar9[0x19] = 0;
        puVar9[0x16] = 0;
        puVar9[0x17] = 0;
        puVar9[0x14] = 0;
        puVar9[0x15] = 0;
        puVar9[0x23] = 0;
        puVar9[0x24] = 0;
        puVar9[0x21] = 0;
        puVar9[0x22] = 0;
        puVar9[0x1f] = 0;
        puVar9[0x20] = 0;
        puVar9[0x25] = 0;
        puVar9[0x26] = (ulong)"agl::TextureData";
        puVar9 = puVar9 + 0x28;
      } while (puVar9 != puVar8 + uVar10 * 0x14);
    }
    *(uint *)(param_1 + 0x20) = param_2;
    *(ulong **)(param_1 + 0x28) = puVar8;
  }
  return;
}

