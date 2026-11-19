
void FUN_03a2dcc0(long param_1,undefined8 param_2,byte param_3,long *param_4)

{
  bool bVar1;
  size_t __size;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  char cVar8;
  bool bVar9;
  float fVar10;
  long lVar11;
  long *plVar12;
  ulong *puVar13;
  void *pvVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  ulong __size_00;
  ulong *puVar19;
  
  bVar1 = (int)param_2 < 2;
  FUN_0393d8a0(param_1,param_2,bVar1 | param_3 & 1);
  uVar16 = *(uint *)(param_1 + 0xc);
  if ((int)uVar16 < 1) {
LAB_03a2df80:
    uVar16 = *(uint *)(param_1 + 0x5c0);
    puVar19 = *(ulong **)(param_1 + 0x5c8);
  }
  else {
    __size = (ulong)uVar16 * 0x808 + 8;
    lVar17 = *(long *)PTR_DAT_04bb2698;
    if (lVar17 == 0) {
      puVar13 = malloc(__size);
    }
    else {
      plVar12 = param_4;
      if (param_4 == (long *)0x0) {
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar12 = (long *)(lVar17 + 8);
        if (lVar11 != 0) {
          plVar12 = (long *)(lVar11 + 0xa8);
        }
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) goto LAB_03a2df80;
      }
      puVar13 = (ulong *)(**(code **)(*plVar12 + 0x30))(plVar12,__size,8);
    }
    if (puVar13 == (ulong *)0x0) goto LAB_03a2df80;
    puVar19 = puVar13 + 1;
    *puVar13 = (ulong)uVar16;
    puVar2 = PTR_DAT_04bd1178 + 0x10;
    puVar3 = PTR_DAT_04bd1198 + 0x10;
    puVar4 = PTR_DAT_04bd12e8 + 0x10;
    puVar13 = puVar19;
    do {
      FUN_0390cee0(puVar13);
      FUN_0390cee0(puVar13 + 0x1c);
      FUN_0390cee0(puVar13 + 0x38);
      FUN_0390cee0(puVar13 + 0x54);
      puVar13[0x72] = 0;
      puVar13[0x71] = (ulong)&DAT_3f8000003f800000;
      puVar13[0x73] = (ulong)&DAT_3f8000003f800000;
      puVar13[0x70] = (ulong)puVar2;
      puVar13[0x74] = 0;
      puVar13[0x75] = 0;
      puVar13[0x76] = 0;
      puVar13[0x77] = 0;
      puVar13[0x78] = 0;
      puVar13[0x79] = 0;
      puVar13[0x7a] = 0;
      puVar13[0x7b] = 0;
      puVar13[0x7c] = 0;
      FUN_0390cee0(puVar13 + 0x82);
      puVar13[0xa8] = 0;
      puVar13[0xa7] = 0;
      puVar13[0xa6] = 0;
      puVar13[0xa5] = 0;
      puVar13[0xa4] = 0;
      puVar13[0xa3] = 0;
      puVar13[0xa2] = 0;
      puVar13[0xa1] = 0;
      puVar13[0xa0] = 0;
      puVar13[0x9f] = 0;
      *(undefined4 *)(puVar13 + 0xa9) = 0xffffffff;
      puVar13[0xaa] = 0;
      puVar13[0xab] = 0;
      puVar13[0xac] = 0;
      puVar13[0xad] = 0;
      puVar13[0xae] = 0;
      puVar13[0xaf] = 0;
      puVar13[0xb0] = 0;
      puVar13[0xb1] = (ulong)"agl::TextureData";
      *(undefined4 *)(puVar13 + 0xb2) = 0x10000;
      *(undefined4 *)(puVar13 + 0xb5) = 0xff;
      *(undefined4 *)((long)puVar13 + 0x5ac) = 0;
      puVar13[0x9e] = (ulong)puVar3;
      puVar13[0xb6] = 0x80000000000;
      puVar13[0xb7] = 0;
      puVar13[0xb8] = 0;
      puVar13[0xb9] = 0;
      puVar13[0x7d] = 0;
      puVar13[0x7e] = 0;
      puVar13[0x7f] = 0;
      puVar13[0x80] = 0;
      puVar13[0x81] = 0;
      FUN_0390cee0(puVar13 + 0xbf);
      puVar13[0xe5] = 0;
      puVar13[0xe4] = 0;
      puVar13[0xe3] = 0;
      puVar13[0xe2] = 0;
      puVar13[0xe1] = 0;
      puVar13[0xe0] = 0;
      puVar13[0xdf] = 0;
      puVar13[0xde] = 0;
      puVar13[0xdd] = 0;
      puVar13[0xdc] = 0;
      *(undefined4 *)(puVar13 + 0xe6) = 0xffffffff;
      puVar13[0xe7] = 0;
      puVar13[0xe8] = 0;
      puVar13[0xe9] = 0;
      puVar13[0xea] = 0;
      puVar13[0xeb] = 0;
      puVar13[0xec] = 0;
      puVar13[0xed] = 0;
      puVar13[0xee] = (ulong)"agl::TextureData";
      *(undefined4 *)(puVar13 + 0xef) = 0x10000;
      *(undefined4 *)(puVar13 + 0xf2) = 0xff;
      *(undefined4 *)((long)puVar13 + 0x794) = 0;
      puVar13[0xdb] = (ulong)puVar3;
      puVar13[0xf3] = 0x80000000000;
      puVar13[0xf4] = 0;
      puVar13[0xf5] = 0;
      puVar13[0xf6] = 0;
      puVar13[0xba] = 0;
      puVar13[0xbb] = 0;
      puVar13[0xbc] = 0;
      puVar13[0xbd] = 0;
      puVar13[0xbe] = 0;
      puVar13[0xfb] = (ulong)puVar4;
      *(undefined1 *)(puVar13 + 0xfc) = 0;
      puVar13[0x100] = 0;
      *(undefined4 *)(puVar13 + 0xff) = 0;
      puVar13[0xfe] = 0;
      puVar13[0xfd] = 0;
      puVar13 = puVar13 + 0x101;
    } while (puVar13 != puVar19 + (ulong)uVar16 * 0x101);
    *(uint *)(param_1 + 0x5c0) = uVar16;
    *(ulong **)(param_1 + 0x5c8) = puVar19;
  }
  if (uVar16 != 0) {
    uVar15 = 0;
    do {
      *(byte *)(puVar19 + (long)(int)uVar15 * 0x101 + 0x53) =
           (byte)puVar19[(long)(int)uVar15 * 0x101 + 0x53] | 2;
      puVar5 = (uint *)((long)puVar19 + (long)(int)uVar15 * 0x808 + 0x294);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar9) {
          *puVar5 = *puVar5 | 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      *(undefined4 *)(puVar19 + (long)(int)uVar15 * 0x101 + 0x52) = 0x1040302;
      *(byte *)(puVar19 + (long)(int)uVar15 * 0x101 + 0x53) =
           (byte)puVar19[(long)(int)uVar15 * 0x101 + 0x53] | 2;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar9) {
          *puVar5 = *puVar5 | 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      *(float *)(puVar19 + (long)(int)uVar15 * 0x101 + 0xfa) = DAT_04c4bac0 * 0.1;
      fVar10 = DAT_04c4bac0;
      puVar19[(long)(int)uVar15 * 0x101 + 0xf8] = 0x3f8000003e800000;
      puVar19[(long)(int)uVar15 * 0x101 + 0xf9] = (ulong)&DAT_3f8000003f800000;
      *(float *)((long)puVar19 + (long)(int)uVar15 * 0x808 + 0x7d4) = fVar10 * 10000.0;
      FUN_039a5f70(puVar19 + (long)(int)uVar15 * 0x101 + 0xfb,0x80,param_4);
      uVar6 = uVar15 + 1;
      puVar19[(long)(int)uVar15 * 0x101 + 0xf7] = 0;
      uVar15 = uVar6;
    } while (uVar16 != uVar6);
  }
  if (!bVar1 && (param_3 & 1) == 0) {
    uVar16 = *(int *)(param_1 + 0x10) - 1;
    uVar18 = (ulong)uVar16;
    if (uVar16 != 0 && 0 < *(int *)(param_1 + 0x10)) {
      __size_00 = uVar18 * 0x590 | 8;
      lVar17 = *(long *)PTR_DAT_04bb2698;
      if (lVar17 == 0) {
        puVar13 = malloc(__size_00);
      }
      else {
        plVar12 = param_4;
        if (param_4 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar12 = (long *)(lVar17 + 8);
          if (lVar11 != 0) {
            plVar12 = (long *)(lVar11 + 0xa8);
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_03a2e120;
        }
        puVar13 = (ulong *)(**(code **)(*plVar12 + 0x30))(plVar12,__size_00,8);
      }
      if (puVar13 != (ulong *)0x0) {
        lVar17 = uVar18 * 0x590;
        *puVar13 = uVar18;
        puVar19 = puVar13 + 1;
        do {
          FUN_03a2b620(puVar19);
          puVar19 = puVar19 + 0xb2;
          lVar17 = lVar17 + -0x590;
        } while (lVar17 != 0);
        *(uint *)(param_1 + 0x5e0) = uVar16;
        *(ulong **)(param_1 + 0x5e8) = puVar13 + 1;
      }
    }
  }
LAB_03a2e120:
  uVar16 = *(uint *)(param_1 + 0x10);
  if ((int)uVar16 < 1) {
    return;
  }
  lVar17 = *(long *)PTR_DAT_04bb2698;
  if (lVar17 == 0) {
    pvVar14 = malloc((ulong)uVar16 << 3);
  }
  else {
    if (param_4 == (long *)0x0) {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar7 = (undefined8 *)(lVar17 + 8);
      if (lVar11 != 0) {
        puVar7 = (undefined8 *)(lVar11 + 0xa8);
      }
      param_4 = (long *)*puVar7;
      if (param_4 == (long *)0x0) goto LAB_03a2e194;
    }
    pvVar14 = (void *)(**(code **)(*param_4 + 0x30))(param_4,(ulong)uVar16 << 3,8);
  }
  if (pvVar14 != (void *)0x0) {
    *(uint *)(param_1 + 0x5d0) = uVar16;
    *(void **)(param_1 + 0x5d8) = pvVar14;
  }
LAB_03a2e194:
  if (0 < *(int *)(param_1 + 0x10)) {
    **(long **)(param_1 + 0x5d8) = param_1 + 0x30;
    FUN_03a2b950(**(undefined8 **)(param_1 + 0x5d8),*(undefined8 *)(param_1 + 0x28));
    if (1 < *(int *)(param_1 + 0x10)) {
      uVar16 = 1;
      do {
        uVar15 = uVar16 - 1;
        if (*(uint *)(param_1 + 0x5e0) <= uVar15) {
          uVar15 = 0;
        }
        uVar6 = uVar16;
        if (*(uint *)(param_1 + 0x5d0) <= uVar16) {
          uVar6 = 0;
        }
        *(long *)(*(long *)(param_1 + 0x5d8) + (ulong)uVar6 * 8) =
             *(long *)(param_1 + 0x5e8) + (long)(int)uVar15 * 0x590;
        uVar15 = uVar16;
        if (*(uint *)(param_1 + 0x20) <= uVar16) {
          uVar15 = 0;
        }
        uVar6 = uVar16;
        if (*(uint *)(param_1 + 0x5d0) <= uVar16) {
          uVar6 = 0;
        }
        FUN_03a2b950(*(undefined8 *)(*(long *)(param_1 + 0x5d8) + (ulong)uVar6 * 8),
                     *(long *)(param_1 + 0x28) + (ulong)uVar15 * 0x30);
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < *(int *)(param_1 + 0x10));
    }
  }
  return;
}

