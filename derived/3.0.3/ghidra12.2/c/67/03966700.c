
bool FUN_03966700(undefined8 param_1,ulong *param_2,uint param_3,long param_4,undefined4 *param_5,
                 long *param_6,long *param_7)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined4 uVar19;
  uint uVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  undefined8 local_c8;
  JpegEncoder aJStack_c0 [56];
  undefined *local_88;
  long *plStack_80;
  uint local_78;
  undefined4 uStack_74;
  long local_70;
  long *plStack_68;
  
  lVar23 = DAT_05ae7600;
  uVar4 = *(ushort *)(param_4 + 0x32);
  uVar10 = (uint)*(ushort *)(param_4 + 0x30);
  if (*(ushort *)(param_4 + 0x30) < 2) {
    uVar10 = 1;
  }
  uVar1 = (uint)uVar4;
  if (*(short *)(param_4 + 0x3a) != 3) {
    uVar1 = 1;
  }
  if (uVar1 == uVar4 || uVar1 < uVar4) {
    uVar1 = (uint)uVar4;
  }
  uVar11 = uVar10 * uVar1 * 4;
  uVar20 = *(uint *)(param_4 + 0x40);
  if (*(uint *)(param_4 + 0x40) <= uVar11) {
    uVar20 = uVar11;
  }
  uVar22 = (ulong)uVar20 + 0xfff & 0x1fffff000;
  if (DAT_05ae7600 == 0) {
    plVar9 = malloc(0x38);
  }
  else {
    plVar9 = param_7;
    if (param_7 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar9 = (long *)(lVar23 + 8);
      if (lVar8 != 0) {
        plVar9 = (long *)(lVar8 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)0x0;
        goto LAB_039667e4;
      }
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x38,8);
  }
LAB_039667e4:
  puVar5 = PTR_DAT_04bb2cc8;
  plVar9[1] = 0;
  plVar9[6] = 0;
  *(undefined2 *)((long)plVar9 + 0x2a) = 0;
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  *(undefined1 *)(plVar9 + 5) = 0;
  *plVar9 = (long)(puVar5 + 0x10);
  if (uVar22 == 0) {
    uVar20 = 0;
LAB_0396686c:
    plVar21 = plVar9;
  }
  else {
    uVar22 = FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar9,param_7,uVar22,0x2000,8);
    if ((uVar22 & 1) != 0) {
      lVar23 = plVar9[3];
      *(undefined2 *)((long)plVar9 + 0x2a) = 8;
      if (plVar9[4] == 0) {
        uVar20 = 0;
      }
      else {
        uVar20 = (int)plVar9[1] - *(int *)(plVar9[4] + 0x10);
      }
      if (lVar23 != 0) {
        uVar19 = *(undefined4 *)(lVar23 + 0x104);
        lVar8 = (**(code **)PTR_DAT_04bb2cd8)(lVar23);
        goto LAB_0396689c;
      }
      goto LAB_0396686c;
    }
    uVar20 = 0;
    plVar21 = (long *)0x0;
  }
  (**(code **)(*plVar9 + 8))(plVar9);
  lVar23 = 0;
  uVar19 = 0;
  lVar8 = 0;
  plVar9 = plVar21;
LAB_0396689c:
  local_78 = uVar20;
  uStack_74 = uVar19;
  local_70 = lVar23;
  plStack_68 = plVar9;
  FUN_038fb0a0(*(undefined8 *)PTR_DAT_04bc1010,&local_78,param_4);
  if (1 < uVar1) {
    lVar8 = lVar8 + (ulong)uVar20;
    if ((param_3 & 1) == 0) {
      lVar12 = 0;
      uVar11 = 0;
      lVar14 = (ulong)uVar10 * 4;
      uVar22 = (ulong)(uVar10 * (uVar1 - 1) * 4);
      do {
        lVar16 = 0;
        do {
          uVar18 = uVar22 + lVar16;
          uVar17 = (ulong)(uint)((int)lVar12 + (int)lVar16);
          lVar16 = lVar16 + 4;
          iVar7 = (int)uVar18;
          uVar2 = *(undefined1 *)(lVar8 + (ulong)(iVar7 + 2));
          *(undefined1 *)(lVar8 + (ulong)(iVar7 + 2)) = *(undefined1 *)(lVar8 + uVar17);
          *(undefined1 *)(lVar8 + uVar17) = uVar2;
          uVar2 = *(undefined1 *)(lVar8 + (ulong)(iVar7 + 1));
          *(undefined1 *)(lVar8 + (ulong)(iVar7 + 1)) = *(undefined1 *)(lVar8 + (uVar17 | 1));
          uVar18 = uVar18 & 0xffffffff;
          *(undefined1 *)(lVar8 + (uVar17 | 1)) = uVar2;
          uVar2 = *(undefined1 *)(lVar8 + uVar18);
          *(undefined1 *)(lVar8 + uVar18) = *(undefined1 *)(lVar8 + (uVar17 | 2));
          *(undefined1 *)(lVar8 + (uVar17 | 2)) = uVar2;
          uVar2 = *(undefined1 *)(lVar8 + (ulong)(iVar7 + 3));
          *(undefined1 *)(lVar8 + (ulong)(iVar7 + 3)) = *(undefined1 *)(lVar8 + (uVar17 | 3));
          *(undefined1 *)(lVar8 + (uVar17 | 3)) = uVar2;
        } while (lVar14 != lVar16);
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + lVar14;
        uVar22 = uVar22 + uVar10 * -4;
      } while (uVar11 != uVar1 >> 1);
    }
    else {
      uVar11 = 0;
      uVar13 = 3;
      do {
        uVar22 = (ulong)uVar10;
        uVar15 = uVar13;
        do {
          uVar17 = (ulong)(uVar15 - 3);
          uVar2 = *(undefined1 *)(lVar8 + uVar17);
          uVar22 = uVar22 - 1;
          uVar3 = *(undefined1 *)(lVar8 + (ulong)(uVar15 - 1));
          *(undefined1 *)(lVar8 + (uVar17 | 1)) = *(undefined1 *)(lVar8 + (ulong)(uVar15 - 2));
          *(undefined1 *)(lVar8 + uVar17) = uVar2;
          *(undefined1 *)(lVar8 + (uVar17 | 2)) = uVar3;
          uVar18 = (ulong)uVar15;
          uVar15 = uVar15 + 4;
          *(undefined1 *)(lVar8 + (uVar17 | 3)) = *(undefined1 *)(lVar8 + uVar18);
        } while (uVar22 != 0);
        uVar11 = uVar11 + 1;
        uVar13 = uVar13 + uVar10 * 4;
      } while (uVar11 != uVar1 >> 1);
    }
  }
  iVar7 = (uVar10 * uVar1 & 0x3fffffff) << 1;
  *(int *)(param_2 + 1) = iVar7;
  uVar22 = (**(code **)(*param_6 + 0x30))(param_6,iVar7,8);
  *param_2 = uVar22;
  local_88 = &DAT_04b682e0;
  plStack_80 = param_7;
  nn::image::JpegEncoder::JpegEncoder(aJStack_c0,(MemoryResource *)&local_88);
  local_c8 = CONCAT44(uVar1,uVar10);
  if (lVar23 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = (**(code **)PTR_DAT_04bb2cd8)(lVar23);
  }
  nn::image::JpegEncoder::SetPixelData(aJStack_c0,lVar23 + (ulong)uVar20,0xe,&local_c8,1);
  nn::image::JpegEncoder::SetQuality((int)aJStack_c0);
  nn::image::JpegEncoder::SetSamplingRatio(aJStack_c0,*param_5);
  iVar7 = nn::image::JpegEncoder::Analyze();
  if (iVar7 == 0) {
    local_c8 = 0;
    iVar7 = nn::image::JpegEncoder::Encode
                      ((ulong *)aJStack_c0,&local_c8,*param_2,(ExifBuilder *)(ulong)(uint)param_2[1]
                      );
    bVar6 = iVar7 == 0;
    *(int *)(param_2 + 1) = (int)local_c8;
  }
  else {
    bVar6 = false;
  }
  nn::image::JpegEncoder::~JpegEncoder(aJStack_c0);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))(plVar9);
  }
  return bVar6;
}

