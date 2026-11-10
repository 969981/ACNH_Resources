
/* WARNING: Removing unreachable block (ram,0x00354658) */

void FUN_00353c00(long param_1,undefined8 param_2,uint *param_3,long param_4,long param_5,
                 undefined8 param_6)

{
  uint *puVar1;
  char *pcVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined *puVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  byte bVar11;
  short sVar12;
  char cVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  undefined8 uVar17;
  ScalableFontEngine *this;
  undefined1 uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined4 *puVar22;
  ulong uVar23;
  ulong uVar24;
  void *pvVar25;
  long lVar26;
  int iVar27;
  ulong uVar28;
  size_t __n;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  undefined8 local_a08;
  undefined4 uStack_a00;
  undefined4 uStack_9fc;
  undefined4 local_9f8;
  undefined4 uStack_9f4;
  undefined4 uStack_9f0;
  undefined4 uStack_9ec;
  undefined4 local_9e8;
  undefined4 uStack_9e4;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined1 local_9c8;
  undefined1 uStack_9c7;
  undefined2 uStack_9c6;
  short sStack_9c4;
  short sStack_9c2;
  undefined4 local_9c0;
  undefined4 uStack_9bc;
  uint local_9b8;
  int iStack_9b4;
  undefined2 uStack_9b0;
  short local_9ae;
  undefined2 local_9ac;
  short sStack_9aa;
  undefined4 uStack_9a8;
  undefined4 uStack_9a4;
  undefined8 uStack_9a0;
  long local_998;
  undefined8 uStack_990;
  ushort local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if (((*param_3 & *param_3 - 1) == 0) && (*(long *)(param_3 + 2) != 0)) {
    puVar1 = param_3 + 0x5a06;
    uVar15 = *puVar1;
    uVar19 = (ulong)uVar15;
    if (0xffffffdf < uVar15 - 0x21) {
      uVar23 = 0;
      lVar21 = 0x1681c;
      do {
        if (*(int *)((long)param_3 + lVar21) - 0x11U < 0xfffffff0) {
          uVar23 = 0;
          goto LAB_00353d58;
        }
        uVar23 = (ulong)(uint)(*(int *)((long)param_3 + lVar21) + (int)uVar23);
        uVar19 = uVar19 - 1;
        lVar21 = lVar21 + 4;
      } while (uVar19 != 0);
      uVar19 = 0;
      iVar27 = 0;
      lVar21 = param_1 + 0x18a8;
      do {
        while (uVar19 < *puVar1) {
          *(char *)(lVar21 + uVar19 + -0x20) = (char)param_3[uVar19 + 0x5a07];
          *(ulong *)(lVar21 + uVar19 * 8) = param_1 + (ulong)(byte)iVar27 + 0x19a8;
          iVar27 = iVar27 + param_3[uVar19 + 0x5a07];
          uVar19 = uVar19 + 1;
          if (uVar19 == 0x20) goto LAB_00353d14;
        }
        *(undefined1 *)(lVar21 + uVar19 + -0x20) = 0;
        *(undefined8 *)(lVar21 + uVar19 * 8) = 0;
        uVar19 = uVar19 + 1;
      } while (uVar19 != 0x20);
LAB_00353d14:
      lVar21 = 0;
      do {
        pcVar2 = (char *)(param_1 + 0x19a9 + lVar21);
        cVar13 = (char)lVar21;
        pcVar2[-1] = cVar13;
        *pcVar2 = cVar13 + '\x01';
        lVar21 = lVar21 + 4;
        pcVar2[1] = cVar13 + '\x02';
        pcVar2[2] = cVar13 + '\x03';
      } while (lVar21 != 0x200);
      uVar15 = *puVar1;
LAB_00353d58:
      *(uint *)(param_1 + 0x1884) = uVar15;
      *(char *)(param_1 + 0x1bd1) = (char)param_3[0x5c2d];
      *(uint *)(param_1 + 0x1bd4) = param_3[0x5c2e];
      puVar5 = PTR_GetCurrentCoreNumber_04bb3500;
      if (*(undefined **)(param_3 + 0x5c30) != (undefined *)0x0) {
        puVar5 = *(undefined **)(param_3 + 0x5c30);
      }
      *(undefined **)(param_1 + 0x1bd8) = puVar5;
      pcVar6 = FUN_003513d0;
      if (*(code **)(param_3 + 0x5c32) != (code *)0x0) {
        pcVar6 = *(code **)(param_3 + 0x5c32);
      }
      *(code **)(param_1 + 0x1be0) = pcVar6;
      pcVar6 = FUN_00351450;
      if (*(code **)(param_3 + 0x5c34) != (code *)0x0) {
        pcVar6 = *(code **)(param_3 + 0x5c34);
      }
      *(code **)(param_1 + 0x1be8) = pcVar6;
      uVar17 = (**(code **)(param_3 + 2))((long)((int)uVar23 * 0x32),4,*(undefined8 *)(param_3 + 4))
      ;
      *(undefined8 *)(param_1 + 0x18) = uVar17;
      uVar28 = -(uVar23 >> 0x1f) & 0xfffffffc00000000 | uVar23 << 2;
      lVar26 = (long)(int)uVar23;
      uVar17 = (**(code **)(param_3 + 2))
                         ((-(uVar23 >> 0x1f) & 0xffffffe000000000 | uVar23 << 5) - uVar28,4,
                          *(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1bf0) = uVar17;
      uVar17 = (**(code **)(param_3 + 2))(uVar28,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1bf8) = uVar17;
      uVar17 = (**(code **)(param_3 + 2))(lVar26,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c00) = uVar17;
      uVar17 = (**(code **)(param_3 + 2))(lVar26,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c08) = uVar17;
      uVar19 = -(uVar23 >> 0x1f) & 0xfffffffe00000000 | uVar23 << 1;
      uVar17 = (**(code **)(param_3 + 2))(uVar19,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c10) = uVar17;
      uVar17 = (**(code **)(param_3 + 2))(lVar26,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c18) = uVar17;
      uVar17 = (**(code **)(param_3 + 2))(uVar19,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c20) = uVar17;
      uVar17 = (**(code **)(param_3 + 2))(uVar28,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c28) = uVar17;
      uVar19 = -(uVar23 >> 0x1f) & 0xffffffc000000000 | uVar23 << 6;
      uVar17 = (**(code **)(param_3 + 2))(uVar19,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c30) = uVar17;
      uVar17 = (**(code **)(param_3 + 2))(uVar19,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c38) = uVar17;
      uVar17 = (**(code **)(param_3 + 2))
                         (-(uVar23 >> 0x1f) & 0xfffffff800000000 | uVar23 << 3,4,
                          *(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x1c40) = uVar17;
      *(uint *)(param_1 + 0x28) = *param_3;
      uVar15 = param_3[1];
      *(undefined4 *)(param_1 + 0x1880) = 0;
      *(undefined4 *)(param_1 + 0x1bcc) = 0;
      *(undefined1 *)(param_1 + 0x1bd0) = 0;
      *(uint *)(param_1 + 0x2c) = uVar15;
      *(undefined4 *)(param_1 + 0x1ba8) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x1bbc) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x1bc4) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x1bac) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x1bb4) = 0xffffffffffffffff;
      *(undefined1 *)(param_1 + 0x1c48) = *(undefined1 *)((long)param_3 + 0x170d9);
      this = (ScalableFontEngine *)(**(code **)(param_3 + 2))(0xb8,4,*(undefined8 *)(param_3 + 4));
      *(ScalableFontEngine **)(param_1 + 8) = this;
      nn::fontll::ScalableFontEngine::ScalableFontEngine(this);
      lVar21 = 0xb8;
      if (*(char *)(param_1 + 0x1bd1) != '\0') {
        lVar21 = (ulong)*(uint *)(param_1 + 0x1bd4) * 0xb8;
      }
      uVar17 = (**(code **)(param_3 + 2))(lVar21,4,*(undefined8 *)(param_3 + 4));
      *(undefined8 *)(param_1 + 0x10) = uVar17;
      if ((*(char *)(param_1 + 0x1bd1) == '\0') || (*(int *)(param_1 + 0x1bd4) != 0)) {
        lVar21 = 0;
        uVar19 = 1;
        do {
          nn::fontll::ScalableFontEngine::ScalableFontEngine
                    ((ScalableFontEngine *)(*(long *)(param_1 + 0x10) + lVar21));
          if (*(char *)(param_1 + 0x1bd1) == '\0') break;
          lVar21 = lVar21 + 0xb8;
          bVar14 = uVar19 < *(uint *)(param_1 + 0x1bd4);
          uVar19 = uVar19 + 1;
        } while (bVar14);
      }
      pvVar25 = *(void **)(param_1 + 8);
      uVar15 = (**(code **)(param_3 + 2))
                         (*(undefined8 *)(param_3 + 0x5a28),4,*(undefined8 *)(param_3 + 4));
      nn::fontll::ScalableFontEngine::Initialize(pvVar25,uVar15);
      nn::fontll::ScalableFontEngine::GetError();
      if ((*(char *)(param_1 + 0x1bd1) == '\0') || (*(int *)(param_1 + 0x1bd4) != 0)) {
        lVar21 = 0;
        uVar19 = 1;
        do {
          lVar20 = *(long *)(param_1 + 0x10);
          uVar15 = (**(code **)(param_3 + 2))
                             (*(long *)(param_3 + 0x5a2a) * lVar26,4,*(undefined8 *)(param_3 + 4));
          nn::fontll::ScalableFontEngine::Initialize((void *)(lVar20 + lVar21),uVar15);
          nn::fontll::ScalableFontEngine::GetError();
          if (*(char *)(param_1 + 0x1bd1) == '\0') break;
          lVar21 = lVar21 + 0xb8;
          bVar14 = uVar19 < *(uint *)(param_1 + 0x1bd4);
          uVar19 = uVar19 + 1;
        } while (bVar14);
      }
      uVar19 = (ulong)*(uint *)(param_1 + 0x1884);
      if (*(uint *)(param_1 + 0x1884) != 0) {
        uVar23 = 0;
        uVar28 = 0;
        do {
          pbVar3 = (byte *)(param_1 + uVar23 + 0x1888);
          if (*pbVar3 != 0) {
            uVar19 = 0;
            uVar28 = (ulong)(int)uVar28;
            do {
              pvVar25 = *(void **)(param_3 + uVar23 * 0x20 + uVar19 * 2 + 6);
              if ((param_3[uVar23 * 0x10 + uVar19 + 0xe86] & 0xfffffffe) == 2) {
                pvVar25 = (void *)nn::fontll::ScalableFontEngineHelper::Decode
                                            (pvVar25,param_3[uVar23 * 0x20 + uVar19 * 2 + 0x406],
                                             (_func_ulong_void_ptr_ulong_void_ptr_ulong_void_ptr_ulong_void_ptr_ulong
                                              *)0x0,(uchar *)0x0);
              }
              iVar27 = (int)uVar28;
              *(int *)(*(long *)(param_1 + 0x1bf8) + uVar28 * 4) =
                   (int)((float)param_3[uVar23 * 0x10 + uVar19 + 0x806] * 65536.0);
              lVar21 = uVar19 + uVar23 * 0x10;
              *(undefined1 *)(*(long *)(param_1 + 0x1c00) + uVar28) =
                   *(undefined1 *)((long)param_3 + lVar21 + 0x2818);
              pcVar2 = (char *)((long)param_3 + lVar21 + 0x4418);
              *(char *)(*(long *)(param_1 + 0x1c08) + uVar28) = *pcVar2;
              lVar26 = uVar19 * 2 + uVar23 * 0x20;
              *(undefined2 *)(*(long *)(param_1 + 0x1c10) + uVar28 * 2) =
                   *(undefined2 *)((long)param_3 + lVar26 + 0x4618);
              pcVar4 = (char *)((long)param_3 + lVar21 + 0x4a18);
              *(char *)(*(long *)(param_1 + 0x1c18) + uVar28) = *pcVar4;
              *(undefined2 *)(*(long *)(param_1 + 0x1c20) + uVar28 * 2) =
                   *(undefined2 *)((long)param_3 + lVar26 + 0x4c18);
              *(uint *)(*(long *)(param_1 + 0x1c28) + uVar28 * 4) =
                   param_3[uVar23 * 0x10 + uVar19 + 0x1806];
              lVar21 = uVar28 * 0x40;
              *(uint *)(*(long *)(param_1 + 0x1c30) + lVar21) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x1a06];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar21) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x3a06];
              *(uint *)(*(long *)(param_1 + 0x1c30) + lVar21 + 4) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x1a07];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar21 + 4) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x3a07];
              *(uint *)(*(long *)(param_1 + 0x1c30) + lVar21 + 8) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x1a08];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar21 + 8) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x3a08];
              *(uint *)(*(long *)(param_1 + 0x1c30) + lVar21 + 0xc) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x1a09];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar21 + 0xc) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x3a09];
              *(uint *)(*(long *)(param_1 + 0x1c30) + lVar21 + 0x10) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x1a0a];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar21 + 0x10) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x3a0a];
              *(uint *)(*(long *)(param_1 + 0x1c30) + lVar21 + 0x14) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x1a0b];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar21 + 0x14) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x3a0b];
              *(uint *)(*(long *)(param_1 + 0x1c30) + lVar21 + 0x18) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x1a0c];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar21 + 0x18) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x3a0c];
              *(uint *)(*(long *)(param_1 + 0x1c30) + lVar21 + 0x1c) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x1a0d];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar21 + 0x1c) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x3a0d];
              *(uint *)(*(long *)(param_1 + 0x1c30) + lVar21 + 0x20) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x1a0e];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar21 + 0x20) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x3a0e];
              *(uint *)(*(long *)(param_1 + 0x1c30) + lVar21 + 0x24) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x1a0f];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar21 + 0x24) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x3a0f];
              *(uint *)(*(long *)(param_1 + 0x1c30) + lVar21 + 0x28) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x1a10];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar21 + 0x28) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x3a10];
              *(uint *)(*(long *)(param_1 + 0x1c30) + lVar21 + 0x2c) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x1a11];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar21 + 0x2c) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x3a11];
              *(uint *)(*(long *)(param_1 + 0x1c30) + lVar21 + 0x30) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x1a12];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar21 + 0x30) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x3a12];
              *(uint *)(*(long *)(param_1 + 0x1c30) + lVar21 + 0x34) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x1a13];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar21 + 0x34) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x3a13];
              *(uint *)(*(long *)(param_1 + 0x1c30) + lVar21 + 0x38) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x1a14];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar21 + 0x38) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x3a14];
              *(uint *)(*(long *)(param_1 + 0x1c30) + lVar21 + 0x3c) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x1a15];
              *(uint *)(*(long *)(param_1 + 0x1c38) + lVar21 + 0x3c) =
                   param_3[uVar23 * 0x100 + uVar19 * 0x10 + 0x3a15];
              nn::fontll::ScalableFontEngine::LoadFont
                        (*(char **)(param_1 + 8),
                         (void *)(*(long *)(param_1 + 0x18) + (ulong)(uint)(iVar27 * 0x32)),
                         (uint)pvVar25,param_3[uVar23 * 0x10 + uVar19 + 0x5a2d]);
              nn::fontll::ScalableFontEngine::GetError();
              if ((*(char *)(param_1 + 0x1bd1) == '\0') || (*(int *)(param_1 + 0x1bd4) != 0)) {
                lVar21 = 0;
                uVar24 = 1;
                do {
                  nn::fontll::ScalableFontEngine::LoadFont
                            ((char *)(*(long *)(param_1 + 0x10) + lVar21),
                             (void *)(*(long *)(param_1 + 0x18) + (ulong)(uint)(iVar27 * 0x32)),
                             (uint)pvVar25,param_3[uVar23 * 0x10 + uVar19 + 0x5a2d]);
                  nn::fontll::ScalableFontEngine::GetError();
                  if (*(char *)(param_1 + 0x1bd1) == '\0') break;
                  lVar21 = lVar21 + 0xb8;
                  bVar14 = uVar24 < *(uint *)(param_1 + 0x1bd4);
                  uVar24 = uVar24 + 1;
                } while (bVar14);
              }
              if (*(int *)(param_1 + 0x1ba8) != iVar27) {
                nn::fontll::ScalableFontEngine::SetFont(*(char **)(param_1 + 8));
                nn::fontll::ScalableFontEngine::GetError();
                nn::fontll::ScalableFontEngine::SetBoldWeight((int)*(undefined8 *)(param_1 + 8));
                nn::fontll::ScalableFontEngine::GetError();
                uVar17 = *(undefined8 *)(param_1 + 8);
                uVar18 = 0;
                if (*(char *)(*(long *)(param_1 + 0x1c00) + (uVar28 & 0xffffffff)) != '\0') {
                  nn::fontll::ScalableFontEngine::SetOutlineWidth((ushort)uVar17);
                  uVar17 = *(undefined8 *)(param_1 + 8);
                  uVar18 = 2;
                }
                nn::fontll::ScalableFontEngine::SetFlags(uVar17,uVar18);
                nn::fontll::ScalableFontEngine::GetError();
                *(int *)(param_1 + 0x1ba8) = iVar27;
              }
              nn::fontll::ScalableFontEngine::GetFontMetrics(*(Metrics **)(param_1 + 8));
              nn::fontll::ScalableFontEngine::GetError();
              sVar12 = *(short *)((long)param_3 + lVar26 + 0x5818);
              if (sVar12 != 0) {
                sStack_9c4 = sVar12;
                sStack_9aa = sVar12;
              }
              sVar12 = *(short *)((long)param_3 + lVar26 + 0x5c18);
              if (sVar12 != 0) {
                local_9ae = -sVar12;
                sStack_9c2 = sVar12;
              }
              lVar21 = uVar28 * 0x1c;
              fVar30 = (float)NEON_ucvtf((uint)local_98);
              *(float *)(*(long *)(param_1 + 0x1bf0) + lVar21 + 8) = (float)(int)sStack_9aa / fVar30
              ;
              fVar30 = (float)NEON_ucvtf((uint)local_98);
              *(float *)(*(long *)(param_1 + 0x1bf0) + lVar21 + 0xc) =
                   (float)((int)sStack_9aa - (int)local_9ae) / fVar30;
              fVar30 = (float)NEON_ucvtf((uint)local_98);
              *(float *)(*(long *)(param_1 + 0x1bf0) + lVar21) = (float)(int)sStack_9c4 / fVar30;
              fVar30 = (float)NEON_ucvtf((uint)local_98);
              *(float *)(*(long *)(param_1 + 0x1bf0) + lVar21 + 4) =
                   (float)((int)sStack_9c2 + (int)sStack_9c4) / fVar30;
              *(uint *)(*(long *)(param_1 + 0x1bf0) + lVar21 + 0x10) =
                   param_3[uVar23 * 0x10 + uVar19 + 0xa86];
              *(uint *)(*(long *)(param_1 + 0x1bf0) + lVar21 + 0x14) =
                   param_3[uVar23 * 0x10 + uVar19 + 0xc86];
              *(uint *)(*(long *)(param_1 + 0x1bf0) + lVar21 + 0x18) =
                   param_3[uVar23 * 0x10 + uVar19 + 0x1406];
              if ((((param_3[uVar23 * 0x10 + uVar19 + 0xe86] | 2) == 3) && (*pcVar2 == '\0')) &&
                 (*pcVar4 == '\0')) {
                uVar17 = nn::fontll::ScalableFontEngine::InitializeOtfKerningTable
                                   (*(_func_void_ptr_ulong_ulong_void_ptr **)(param_1 + 8),
                                    *(void **)(param_3 + 2),SUB81(*(undefined8 *)(param_3 + 4),0));
              }
              else {
                uVar17 = 0;
              }
              uVar19 = uVar19 + 1;
              *(undefined8 *)(*(long *)(param_1 + 0x1c40) + uVar28 * 8) = uVar17;
              uVar28 = uVar28 + 1;
            } while (uVar19 < *pbVar3);
            uVar19 = (ulong)*(uint *)(param_1 + 0x1884);
          }
          uVar23 = uVar23 + 1;
        } while (uVar23 < uVar19);
        if (uVar19 != 0) {
          uVar23 = 0;
          lVar21 = 0;
          do {
            while( true ) {
              pbVar3 = (byte *)(param_1 + uVar23 + 0x1888);
              bVar11 = *pbVar3;
              if (bVar11 != 0) break;
LAB_00354610:
              uVar23 = uVar23 + 1;
              if (uVar19 <= uVar23) goto LAB_00354784;
            }
            lVar26 = *(long *)(param_1 + 0x1bf0);
            if (bVar11 == 1) {
              lVar20 = 0;
              uVar29 = 0;
              uVar32 = 0;
              fVar30 = 0.0;
              uVar31 = 0;
LAB_003546f8:
              fVar34 = *(float *)(lVar26 + (lVar20 + lVar21) * 0x1c + 0xc);
              if (fVar30 < fVar34) {
                puVar22 = (undefined4 *)(lVar26 + (lVar20 + lVar21) * 0x1c);
                uVar32 = *puVar22;
                uVar29 = puVar22[1];
                uVar31 = puVar22[2];
                fVar30 = fVar34;
              }
            }
            else {
              uVar29 = 0;
              uVar32 = 0;
              fVar30 = 0.0;
              uVar31 = 0;
              lVar20 = 0;
              puVar22 = (undefined4 *)(lVar26 + lVar21 * 0x1c + 0x1c);
              do {
                fVar34 = (float)puVar22[-4];
                if (fVar34 <= fVar30) {
                  fVar33 = (float)puVar22[3];
                  if (fVar30 < fVar33) goto LAB_003546dc;
                }
                else {
                  uVar29 = puVar22[-6];
                  uVar31 = puVar22[-5];
                  uVar32 = puVar22[-7];
                  fVar33 = (float)puVar22[3];
                  fVar30 = fVar34;
                  if (fVar34 < fVar33) {
LAB_003546dc:
                    uVar29 = puVar22[1];
                    uVar31 = puVar22[2];
                    uVar32 = *puVar22;
                    fVar30 = fVar33;
                  }
                }
                lVar20 = lVar20 + -2;
                puVar22 = puVar22 + 0xe;
              } while (-lVar20 != ((ulong)bVar11 & 0xfe));
              lVar20 = -lVar20;
              if ((bVar11 & 1) != 0) goto LAB_003546f8;
            }
            if (bVar11 == 0) goto LAB_00354610;
            uVar19 = 0;
            lVar26 = lVar21 * 0x1c;
            do {
              uVar19 = uVar19 + 1;
              *(undefined4 *)(*(long *)(param_1 + 0x1bf0) + lVar26 + 8) = uVar31;
              *(float *)(*(long *)(param_1 + 0x1bf0) + lVar26 + 0xc) = fVar30;
              *(undefined4 *)(*(long *)(param_1 + 0x1bf0) + lVar26) = uVar32;
              lVar20 = *(long *)(param_1 + 0x1bf0) + lVar26;
              lVar26 = lVar26 + 0x1c;
              *(undefined4 *)(lVar20 + 4) = uVar29;
              uVar28 = (ulong)*pbVar3;
            } while (uVar19 < uVar28);
            uVar19 = (ulong)*(uint *)(param_1 + 0x1884);
            uVar23 = uVar23 + 1;
            lVar21 = lVar21 + uVar28;
          } while (uVar23 < uVar19);
        }
      }
LAB_00354784:
      iVar27 = *(int *)(param_1 + 0x28);
      iVar8 = *(int *)(param_1 + 0x2c);
      FUN_00352d04(param_1 + 0x1ea0,*(undefined8 *)(param_1 + 0x20),8,iVar27,iVar8,1,1);
      uVar29 = *(undefined4 *)(param_1 + 0x28);
      uVar32 = *(undefined4 *)(param_1 + 0x2c);
      local_9d8 = 0;
      uStack_9d0 = 0;
      local_9e8 = 0;
      uStack_9e4 = 0;
      uStack_9e0 = 0;
      local_9f8 = 0;
      uStack_9f4 = 0;
      uStack_9f0 = 0;
      uStack_9ec = 0;
      local_a08 = 0;
      uStack_a00 = 0;
      uStack_9fc = 0;
      FUN_0034fd48(&local_a08);
      uVar17 = local_a08;
      uVar31 = *(undefined4 *)(param_1 + 0x28);
      uVar9 = *(undefined4 *)(param_1 + 0x2c);
      uStack_9ec = 1;
      local_9e8 = 1;
      uStack_9fc = 0x201;
      local_9f8 = 0x20;
      local_a08._4_4_ = SUB84(uVar17,4);
      local_a08._0_4_ = CONCAT22(1,CONCAT11(2,(undefined1)local_a08));
      local_a08 = CONCAT26(1,(undefined6)local_a08);
      local_998 = 0;
      uStack_990 = 0;
      uStack_9a8 = 0;
      uStack_9a4 = 0;
      uStack_9a0 = 0;
      local_9b8 = 0;
      iStack_9b4 = 0;
      uStack_9b0 = 0;
      local_9ae = 0;
      local_9ac = 0;
      sStack_9aa = 0;
      local_9c8 = 0;
      uStack_9c7 = 0;
      uStack_9c6 = 0;
      sStack_9c4 = 0;
      sStack_9c2 = 0;
      local_9c0 = 0;
      uStack_9bc = 0;
      uStack_9f4 = uVar29;
      uStack_9f0 = uVar32;
      FUN_0034fd48(&local_9c8);
      uStack_9b0 = (undefined2)uVar9;
      local_9ae = (short)((uint)uVar9 >> 0x10);
      local_9ac = 1;
      sStack_9aa = 0;
      uStack_9a8 = 1;
      uStack_9c7 = 2;
      uStack_9bc = 0x201;
      local_9b8 = 0x20;
      uStack_9c6 = 1;
      sStack_9c2 = 1;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      iStack_9b4 = uVar31;
      FUN_0034fb74(&local_88);
      local_88 = CONCAT44(local_88._4_4_,0x22);
      uVar19 = FUN_0034f59c(param_2,&local_9c8);
      uVar23 = FUN_003490a4(param_2,&local_88);
      iVar7 = *(int *)(param_1 + 0x28);
      iVar10 = *(int *)(param_1 + 0x2c);
      local_9b8 = 0;
      iStack_9b4 = 0;
      uStack_9b0 = 0;
      local_9ae = 0;
      local_9ac = 0;
      sStack_9aa = 0;
      local_9c8 = 0;
      uStack_9c7 = 0;
      uStack_9c6 = 0;
      sStack_9c4 = 0;
      sStack_9c2 = 0;
      local_9c0 = 0;
      uStack_9bc = 0;
      FUN_0034fb74(&local_9c8);
      local_9c8 = 0x22;
      uStack_9c7 = 0;
      uStack_9c6 = 0;
      iVar16 = FUN_003490ac(param_2,&local_9c8);
      uVar15 = (iVar16 + iVar10 * iVar7) - 1U & -iVar16;
      __n = (size_t)(int)uVar15;
      if (param_4 == 0) {
        if (uVar19 <= uVar23) {
          uVar19 = uVar23;
        }
        pvVar25 = (void *)(**(code **)(param_3 + 2))(__n,uVar19,*(undefined8 *)(param_3 + 4));
        *(void **)(param_1 + 0x20) = pvVar25;
        memset(pvVar25,0,__n);
        local_9b8 = 0;
        iStack_9b4 = 0;
        uStack_9b0 = 0;
        local_9ae = 0;
        local_9ac = 0;
        sStack_9aa = 0;
        local_9c8 = 0;
        uStack_9c7 = 0;
        uStack_9c6 = 0;
        sStack_9c4 = 0;
        sStack_9c2 = 0;
        local_9c0 = 0;
        uStack_9bc = 0;
        FUN_0034fb74(&local_9c8);
        local_9c8 = 0x22;
        uStack_9c7 = 0;
        uStack_9c6 = 0;
        sStack_9c4 = (short)uVar15;
        sStack_9c2 = (short)(uVar15 >> 0x10);
        local_9c0 = (undefined4)*(undefined8 *)(param_1 + 0x20);
        uStack_9bc = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
        iStack_9b4 = (int)uVar15 >> 0x1f;
        param_4 = param_1 + 0x1d70;
        local_9b8 = uVar15;
        FUN_003490c4(param_4,param_2,&local_9c8);
        FUN_0034f6d4(param_1 + 0x1c50,param_2,&local_a08,param_4,0,iVar8 * iVar27);
        param_5 = 0;
      }
      else {
        lVar21 = FUN_00349194(param_4);
        *(void **)(param_1 + 0x20) = (void *)(lVar21 + param_5);
        memset((void *)(lVar21 + param_5),0,__n);
        FUN_003491a8(param_4);
        FUN_0034f6d4(param_1 + 0x1c50,param_2,&local_a08,param_4,param_5,param_6);
      }
      *(long *)(param_1 + 0x1e90) = param_4;
      *(long *)(param_1 + 0x1e98) = param_5;
      local_998 = 0;
      uStack_990 = 0;
      uStack_9a8 = 0;
      uStack_9a4 = 0;
      uStack_9a0 = 0;
      local_9b8 = 0;
      iStack_9b4 = 0;
      uStack_9b0 = 0;
      local_9ae = 0;
      local_9ac = 0;
      sStack_9aa = 0;
      local_9c8 = 0;
      uStack_9c7 = 0;
      uStack_9c6 = 0;
      sStack_9c4 = 0;
      sStack_9c2 = 0;
      local_9c0 = 0;
      uStack_9bc = 0;
      FUN_0034fd78(&local_9c8);
      local_9c8 = 1;
      sStack_9c4 = 0x201;
      sStack_9c2 = 0;
      local_9c0 = 0x2010101;
      local_998 = param_1 + 0x1c50;
      FUN_0034f830(param_1 + 0x1d28,param_2,&local_9c8);
      FUN_00351470(param_1 + 0x30,*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4),
                   param_3[0x5a2c]);
      if ((char)param_3[0x5c36] != '\0') {
        nn::fontll::ScalableFontEngine::SetAutoHint(SUB81(*(undefined8 *)(param_1 + 8),0));
      }
    }
  }
  return;
}

